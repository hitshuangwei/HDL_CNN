/* 灰度流缓存 双口ram*/
`include "cnn_defines.v"
module graylinebuffer
#(
    parameter IMG_IN_WIDTH = 25
)
(
    clkw    ,
    w_en    ,
    waddr   ,
    din     ,

    clkr    ,
    r_en    ,
    raddr   ,
    dout
);
    input                                   clkw    ;
    input                                   clkr    ;
    input                                   w_en    ;
    input                                   r_en    ;
    input  [$clog2(IMG_IN_WIDTH)-1:0]    waddr   ;
    input  [$clog2(IMG_IN_WIDTH)-1:0]    raddr   ;
    input  [`CNN_DATA_IN_W-1:0]             din     ;

    output reg [`CNN_DATA_IN_W-1:0] dout;

    reg [`CNN_DATA_IN_W-1:0] buffer [IMG_IN_WIDTH-1:0];

    always@(posedge clkw) begin
        if(w_en)
            buffer[waddr] <= din;
        else
            ;
    end

    always@(posedge clkr) begin
        if(r_en)
            dout <= buffer[raddr];
        else
            ;
    end


endmodule
