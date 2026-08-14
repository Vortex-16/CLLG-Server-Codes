module testbench();
	reg en;
	reg [3:0] a;
	wire [3:0] y;
	tsbuffer uut(.en(en),.a(a),.y(y));
	initial begin
		$dumpfile("dump.vcd");
		$dumpvars(0,testbench);
		en=0;a=4'b0000;#10;
		en=1;a=4'b0000;#10;
		en=0;a=4'b1111;#10;
		en=1;a=4'b1111;#10;
	end
endmodule
