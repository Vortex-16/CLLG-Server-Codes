module tb_binary_to_bcd;
    reg  [7:0] bin;
    wire [3:0] huns;
    wire [3:0] tens;
    wire[3:0] ones;
    binary_to_bcd uut(.bin(bin),.huns(huns), .tens(tens),.ones(ones));
    initial begin
	$dumpfile("BinaryToBCD.vcd");
	$dumpvars;
        bin = 8'b00101010;   #10;
        bin = 8'b01101001;   #10;
	bin = 8'b00101011; #10;
        bin = 8'b00101010;   #10;
	bin = 8'b00000010; #10;
        bin = 8'b00011000;  #10;
	bin = 8'b01010100; #10;
    end
endmodule
