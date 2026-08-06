module inCTest();
	reg [3:0]a;
	wire [3:0]y;
	inC uut(.a(a),.y(y));
	integer i;
	initial begin
		$dumpfile("test.vcd");
		$dumpvars;
		a=4'b0001; #10;
		a=4'b0010; #10;
		a=4'b0100; #10;	
		a=4'b1000; #10;
		a=4'b1111; #10;
	end
endmodule
