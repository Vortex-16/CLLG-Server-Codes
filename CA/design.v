module tsbuffer(input en,input a,output y);
	assign y=en?a:1'bz;
endmodule
