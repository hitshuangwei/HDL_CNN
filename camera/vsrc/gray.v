module grey (
	//system signals
	input						clk, 
	input						rst_n,
	
	//user
	input						pre_frame_vsync,
	input						pre_frame_hsync,
	input						pre_frame_de,
	input			[15:0]   	pre_rgb,
 
	//user 
	output	 					post_frame_vsync,
	output	 					post_frame_hsync,
	output	 					post_frame_de,
	output	 reg		[15:0]  post_rgb
 
 
);    
 
 
//=============================================================================
//****************************     Main Code    *******************************
//=============================================================================
 
 
//****************************    同步其他 信号    *******************************
 
//打三拍
reg   [ 2:0]  pre_frame_hsync_d;
reg   [ 2:0]  pre_frame_vsync_d;
reg   [ 2:0]  pre_frame_de_d;
 
assign post_frame_hsync = pre_frame_hsync_d[2];
assign post_frame_vsync = pre_frame_vsync_d[2];
assign post_frame_de = pre_frame_de_d[2];
 
always @ (posedge clk or negedge rst_n) begin
    if(rst_n == 1'b0) begin
        pre_frame_hsync_d <= 1'b0;
        pre_frame_vsync_d <= 1'b0;
        pre_frame_de_d <= 1'b0;
    end 
    else begin
        pre_frame_hsync_d <= {pre_frame_hsync_d[1:0],pre_frame_hsync};
        pre_frame_vsync_d <= {pre_frame_vsync_d[1:0],pre_frame_vsync};
        pre_frame_de_d <= {pre_frame_de_d[1:0],pre_frame_de};
    end    
end
 
 
 
 
// Grey = R*0.299 + G*0.587 + B*0.114
 
reg			[ 15:0]   	img_red_grey_d0;
reg			[ 15:0]   	img_green_grey_d0;
reg			[ 15:0]   	img_blue_grey_d0;
 
 
reg			[ 7:0]   	img_red_grey_d1;
reg			[ 7:0]   	img_green_grey_d1;
reg			[ 7:0]   	img_blue_grey_d1;
reg   		        [ 7:0]  	img_y;
 
always @ (posedge clk or negedge rst_n) begin
	if(rst_n == 1'b0) begin
		img_blue_grey_d0 <= 1'b0;
		img_green_grey_d0 <= 1'b0;
		img_red_grey_d0 <= 1'b0;
 
	end	
	else begin
		img_red_grey_d0 <= pre_rgb[15:11] * 8'd77;
		img_green_grey_d0 <= pre_rgb[10:5] * 8'd150;
		img_blue_grey_d0 <= pre_rgb[4:0] * 8'd29;
		img_red_grey_d1 <= img_red_grey_d0[15:8];
		img_green_grey_d1 <= img_green_grey_d0[15:8];
		img_blue_grey_d1 <= img_blue_grey_d0[15:8];
		img_y <= img_red_grey_d1+img_green_grey_d1+img_blue_grey_d1;
        
		post_rgb <= {img_y[7:3],img_y[7:2],img_y[7:3]};
    end  
end
endmodule
