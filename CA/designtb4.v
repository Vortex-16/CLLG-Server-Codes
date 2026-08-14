module tsbuffer(input en,input [3:0] a,output [3:0] y);
	assign y=en?a:4'bzzzz;
endmodule
