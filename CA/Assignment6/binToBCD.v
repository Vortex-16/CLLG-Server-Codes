module binary_to_bcd(input [7:0]bin,output [3:0]huns, output [3:0]tens,output reg [3:0] ones);
    integer value;
    always @(*) begin
        value = bin;
        ones = value % 10;
	tens = (value%100) / 10;  
	huns = value / 100;
    end
endmodule
