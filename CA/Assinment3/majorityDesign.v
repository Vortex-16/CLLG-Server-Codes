module majority(input a,input b,input c,output z);
	assign z=(a&b)|(b&c)|(c&a);
endmodule
