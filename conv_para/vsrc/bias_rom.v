/* 偏置rom，可以暂时不管 */
`include "cnn_defines.v"

module bias_rom
#(
    FILE_NAME = "file.txt"
)
(
    clk         ,
    rom_r_en    ,
    rom_raddr   ,
    rom_dout

);
    input                               clk         ;
    input                               rom_r_en    ;
    input       [4:0]                   rom_raddr   ;
    output reg  [`CNN_PARA_WIDTH-1:0]   rom_dout    ;

    reg [`CNN_PARA_WIDTH-1:0] para_rom [`CNN_BIAS_SIZE-1:0];

    /* 初始化 */
    initial begin
        $readmemh(FILE_NAME, para_rom);
    end

    /* 读rom */
    always@(posedge clk ) begin
        if(rom_r_en)
            rom_dout <= para_rom[rom_raddr];
        else
            rom_dout <= `CNN_PARA_WIDTH'd0;
    end
endmodule
