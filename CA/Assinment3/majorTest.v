module testbench();
	reg a,b,c;
	wire z;
	majority uut(.a(a),.b(b),.c(c),.z(z));
	initial begin
		$dumpfile("dump.vcd");
		$dumpvars(0,testbench);
		a=0;b=0;c=0;#10;
		a=0;b=0;c=1;#10;
		a=0;b=1;c=0;#10;
		a=0;b=1;c=1;#10;
		a=1;b=0;c=0;#10;
		a=1;b=0;c=1;#10;
		a=1;b=1;c=0;#10;
		a=1;b=1;c=1;#10; 
	end
endmodule
