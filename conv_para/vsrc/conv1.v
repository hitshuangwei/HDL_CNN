`include "cnn_defines.v"
`include "graylinebuffer.v"
`include "weights_rom.v"
module conv1
#(
    parameter IMG_IN_WIDTH = 25,
    parameter KERNEL_WIDTH = 5
)
(
    clk                 ,
    rst_n               ,

    cnn_data_in         ,
    cnn_data_in_valid   ,
    img_in_en           ,

    cnn_data_out        ,
    cnn_data_out_valid  /*,
    img_out_en*/
);

    input                           clk                 ; /* 输入时钟 */
    input                           rst_n               ; /* 复位 */
    input   [`CNN_DATA_IN_W-1:0]    cnn_data_in         ; /* 输入数据 */
    input                           cnn_data_in_valid   ; /* 输入数据有效 */
    input                           img_in_en           ; /* 图片输入有效信号 */
    output  [`CNN_CONV1_OUT_W-1:0]  cnn_data_out        ; /* 输出数据 */
    output  reg                     cnn_data_out_valid  ; /* 输出数据有效 */
    /*output  reg                     img_out_en          ; /* 图片输出有效信号 */

    /*======================= addr ============================*/
    /* 生成linebuffer的读写地址，由于读使能输入到数据输出需要两个周期，使用rd_addr_pre2比rd_addr提前两个位置 */
    reg [4:0] wr_addr;
    reg [4:0] rd_addr;
    wire [4:0] rd_addr_pre2 = wr_addr + 5'd2;
    always@(posedge clk, negedge rst_n)begin
        if(~rst_n)begin
            wr_addr <= 0;
            rd_addr <= 0;
        end
        else if((cnn_data_in_valid == 1'b1) && (img_in_en == 1'b1))begin
            //========== A ============
            if(wr_addr == (IMG_IN_WIDTH-1))
                wr_addr <= 5'd0;
            else
                wr_addr <= wr_addr + 1'd1;
            //========== B ============
            if(rd_addr_pre2 > (IMG_IN_WIDTH-1))
                rd_addr <= rd_addr_pre2 - IMG_IN_WIDTH;
            else
                rd_addr <= rd_addr_pre2;
        end
    end
//======================= data ===============================
/* window_in0位接输入数据，4～1位接window_out3～0位 */
    wire    [7:0]   window_in[0:5-1];
    wire    [7:0]   window_out[0:5-1];
    assign  window_in[0] = cnn_data_in;
    genvar k;
    generate
    for(k = 1; k < KERNEL_WIDTH; k = k + 1)begin
        assign window_in[k] = window_out[k-1];
    end
    endgenerate

    //======================= Instance ===============================
    /* window_in和window_out的每一行都写入/读出buffer的对应行 */
    generate
    for (k = 0; k < KERNEL_WIDTH; k = k + 1)begin
    graylinebuffer #(IMG_IN_WIDTH)graylinebuffer_U (
        .clkw (clk              ),
        .w_en (cnn_data_in_valid),
        .waddr(wr_addr          ),
        .din  (window_in[k]     ),
        .clkr (clk              ),
        .r_en (1'b1             ),
        .raddr(rd_addr          ),
        .dout (window_out[k]    )
    );
    end
    endgenerate
    //======================= window ===============================
    /* window是5*5卷积窗口，列移位寄存 */
    /* 假设i是行j是列，第0列输入window_in */
    reg signed [7:0] window[KERNEL_WIDTH-1:0][KERNEL_WIDTH-1:0];
    integer i,j;
    always@(posedge clk, negedge rst_n)begin
        if(~rst_n)begin
            for(i = 0; i < KERNEL_WIDTH; i = i + 1)begin
                for(j = 0; j < KERNEL_WIDTH; j = j + 1)begin
                    window[i][j] <= 0;
                end
            end
        end
        else if((cnn_data_in_valid == 1'b1) && (img_in_en == 1'b1) )begin
            for(i = 0; i < KERNEL_WIDTH; i = i + 1)begin
                window[i][0] <= window_in[i];
                for(j = 1; j < KERNEL_WIDTH; j = j + 1)begin
                    window[i][j] <= window[i][j-1];
                end
            end
        end
    end
//======================= x_cnt y_cnt ====================
/* 指示当前数据在图片中的位置，x是行数，y是列数 */
    reg [4:0] x_cnt;
    reg [4:0] y_cnt;

    always@(posedge clk, negedge rst_n)begin
        if(~rst_n)
            x_cnt <= 0;
        else if(x_cnt == (IMG_IN_WIDTH-1) && cnn_data_in_valid == 1'b1 && img_in_en == 1'b1)
            x_cnt <=0 ;
        else if(cnn_data_in_valid == 1'b1)
            x_cnt <= x_cnt + 1'b1;
    end

    always@(posedge clk, negedge rst_n)begin
        if(~rst_n)
            y_cnt <= 0;
        else if(y_cnt == (IMG_IN_WIDTH-1) &&x_cnt == (IMG_IN_WIDTH-1) && cnn_data_in_valid == 1'b1 && img_in_en == 1'b1)
            y_cnt <= 0;
        else if(cnn_data_in_valid == 1'b1 && x_cnt == (IMG_IN_WIDTH-1))
            y_cnt <= y_cnt + 1'b1;
    end
    //======================= weights =======================
    wire c1_w_rd_en;
    assign c1_w_rd_en = 1'b1;

    wire    [15:0] rd_c1_w_1_data;
    reg   signed  [15:0]  c1_w_1[KERNEL_WIDTH-1:0][KERNEL_WIDTH-1:0];

    weights_rom#("/home/ws/CNN_Verilog/conv_para/kernel.txt") weights_rom_u1(
    .rom_r_en (c1_w_rd_en       ),
    .rom_raddr(rom_cnt          ),
    .rom_dout (rd_c1_w_1_data   )
    );


    /* 对卷积核权重寄存器赋值，保持卷积核权重寄存器永远等于正确的权重值 */
    reg [4:0] rom_cnt;

    always@(posedge clk, negedge rst_n)begin
        if(~rst_n)
            rom_cnt <= 0;
        else if(rom_cnt == (KERNEL_WIDTH*KERNEL_WIDTH-1) && cnn_data_in_valid == 1'b1)
            rom_cnt <=0 ;
        else if(cnn_data_in_valid == 1'b1)
            rom_cnt <= rom_cnt + 1'b1;
    end
    always@(*)begin
            c1_w_1[(rom_cnt)/KERNEL_WIDTH][(rom_cnt)%KERNEL_WIDTH] = rd_c1_w_1_data;
    end
    //======================= mul  =======================
    reg signed[31:0]  window_mul_result_1[KERNEL_WIDTH-1:0][KERNEL_WIDTH-1:0];


    always@(posedge clk,negedge rst_n)begin
        if(~rst_n)begin
            for(i=0;i<KERNEL_WIDTH;i=i+1)begin
                for(j=0;j<KERNEL_WIDTH;j=j+1)begin
                    window_mul_result_1[i][j] <= 0;
                end
            end
        end
        else begin
            for(i=0;i<KERNEL_WIDTH;i=i+1)begin
                for(j=0;j<KERNEL_WIDTH;j=j+1)begin
                    window_mul_result_1[i][j] <={ { 24{1'b0} }, window[i][j] } * { {16{c1_w_1[i][j][15]}},  c1_w_1[i][j] };
                end
            end
        end
    end

    wire [31:0] window_sum_1;

    //========================== add ========================================
    assign window_sum_1 =   window_mul_result_1[0][0]+window_mul_result_1[0][1]+window_mul_result_1[0][2]+window_mul_result_1[0][3]+window_mul_result_1[0][4]+
                            window_mul_result_1[1][0]+window_mul_result_1[1][1]+window_mul_result_1[1][2]+window_mul_result_1[1][3]+window_mul_result_1[1][4]+
                            window_mul_result_1[2][0]+window_mul_result_1[2][1]+window_mul_result_1[2][2]+window_mul_result_1[2][3]+window_mul_result_1[2][4]+
                            window_mul_result_1[3][0]+window_mul_result_1[3][1]+window_mul_result_1[3][2]+window_mul_result_1[3][3]+window_mul_result_1[3][4]+
                            window_mul_result_1[4][0]+window_mul_result_1[4][1]+window_mul_result_1[4][2]+window_mul_result_1[4][3]+window_mul_result_1[4][4];


    assign cnn_data_out = {
        (window_sum_1[31]==0)?window_sum_1:0 /* 高位检查溢出 */
    };

    wire data_out_valid_o = (x_cnt>=4&&y_cnt>=4)?1'b1:1'b0; /* 由于移位运算导致行边缘几个数据不可用 */
    reg delay_data_out_valid_o; /* 调整相位使valid信号与输出有效数据同步 */
    always@(posedge clk)begin
        delay_data_out_valid_o <=data_out_valid_o;
        cnn_data_out_valid <= delay_data_out_valid_o;
    end
endmodule

