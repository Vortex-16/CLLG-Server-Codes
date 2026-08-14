module testbench();
	reg en,a;
	wire y;
	tsbuffer uut(.en(en),.a(a),.y(y));
	initial begin
		$dumpfile("dump.vcd");
		$dumpvars(0,testbench);
		en=0;a=0;#10;
		en=0;a=1;#10;
		en=1;a=0;#10;
		en=1;a=1;#10;
	end
endmodule

