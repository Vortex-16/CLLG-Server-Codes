module testbench();
	reg[3:0] a;
	wire[3:0] y;
	complementer uut(.a(a),.y(y));
	initial begin
		$dumpfile("2sComplemenet.vcd");
		$dumpvars(0,testbench);
		begin
		for(a=0; a<16;a++)
			#10;
		end 
	end
endmodule
