module inC(input[3:0] a,output[3:0] y);
	assign y= {a<4} ? a+1 : a-1;
endmodule
