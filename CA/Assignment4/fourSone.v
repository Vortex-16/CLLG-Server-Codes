module mux4to1 (input  [3:0] i,input  [1:0] s,output y);
	assign y = (s == 2'b00) ? i[0] :(s == 2'b01) ? i[1] :(s == 2'b10) ? i[2] :i[3];
endmodule
