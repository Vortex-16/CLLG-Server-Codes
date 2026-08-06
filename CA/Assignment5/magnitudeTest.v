module magnitude_tb;
    reg  [3:0] a, b;      
    wire gt, et, lt;     
    magnitude uut (.a(a),.b(b),.gt(gt),.et(et),.lt(lt));
    initial begin
        $dumpfile("magnitude.vcd");   
        $dumpvars(0, magnitude_tb);
        a = 4'b1010; b = 4'b0110; #10; 
        a = 4'b0011; b = 4'b1111; #10; 
        a = 4'b1001; b = 4'b1001; #10; 
        a = 4'b0000; b = 4'b0001; #10; 
        a = 4'b1111; b = 4'b0000; #10; 

        $finish;
    end
endmodule
