module fourSoneTest();
    reg  [3:0] i;
    reg  [1:0] s;
    wire y;
    mux4to1 uut (.i(i),.s(s),.y(y));
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;
        i = 4'b1010;
        s = 2'b00; #10;
        s = 2'b01; #10;
        s = 2'b10; #10;
        s = 2'b11; #10;
    end
endmodule
