`include "cnn_defines.v"
`include "graylinebuffer.v"
module conv1(
    clk                 ,
    rst_n               ,

    cnn_data_in         ,
    cnn_data_in_valid   /*,

    cnn_data_out        ,
    cnn_data_out_valid*/
);

    input                           clk                 ;
    input                           rst_n               ;
    input   [`CNN_DATA_IN_W-1:0]    cnn_data_in         ;
    input                           cnn_data_in_valid   ;
    /*output  [`CNN_CONV1_OUT_W-1:0]  cnn_data_out        ;
    output reg                      cnn_data_out_valid  ;*/

    /*wire [31:0] data_out_array [5:0];/* 输出6通道 */

    /*======================= addr ============================*/
    reg [4:0]   wr_addr;
    reg [4:0]   rd_addr;
    wire [4:0] rd_addr_pre2 = wr_addr +2;
    always@(posedge clk, negedge rst_n)begin
        if(~rst_n)begin
            wr_addr <= 0;
            rd_addr <= 0;
        end
        else if(cnn_data_in_valid == 1'b1)begin
            //========== A ============
            if(wr_addr == 'd27)
                wr_addr <= 5'd0;
            else
                wr_addr <= wr_addr + 1'd1;
            //========== B ============
            if(rd_addr_pre2 > 'd27)
                rd_addr <= rd_addr_pre2 - 5'd28;
            else
                rd_addr <= rd_addr_pre2;
        end
    end
//======================= data ===============================
    wire    [7:0]   window_in[0:5-1];
    wire    [7:0]   window_out[0:5-1];
    assign  window_in[0]    = cnn_data_in;
    genvar k;
    generate
    for(k=1;k<5;k=k+1)begin
       assign    window_in[k]=window_out[k-1];
    end
    endgenerate
    
    
    //======================= Instance ===============================
    
    generate
    for (k=0;k<5;k=k+1)begin
    graylinebuffer graylinebuffer_U (
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
    reg signed [7:0] window[5-1:0][5-1:0];
    integer i,j;
    always@(posedge clk ,negedge rst_n)begin
        if(~rst_n)begin
            for(i=0;i<5;i=i+1)begin
                for(j=0;j<5;j=j+1)begin
                    window[i][j]<=0;
                end
            end
        end
        else if(cnn_data_in_valid == 1'b1 )begin
            for(i=0;i<5;i=i+1)begin
                window[i][0] <= window_in[i];
                for(j=1;j<5;j=j+1)begin
                    window[i][j]<=window[i][j-1];
                end
            end
        end
    end
endmodule

