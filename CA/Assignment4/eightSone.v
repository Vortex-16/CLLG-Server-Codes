module mux8to1 ( input  [7:0] i,input  [2:0] s,output y);
    wire y0, y1;
    mux4to1 m1 (.i(i[3:0]),.s(s[1:0]),.y(y0));
    mux4to1 m2 (.i(i[7:4]),.s(s[1:0]),.y(y1));
    mux2to1 m3 (.i0(y0),.i1(y1),.s(s[2]),.y(y));

endmodule

module mux4to1 (input  [3:0] i,input  [1:0] s,output y);
    assign y = (s == 2'b00) ? i[0] : (s == 2'b01) ? i[1] : (s == 2'b10) ? i[2] : i[3];
endmodule

module mux2to1 (input  i0,input  i1,input  s,output y);
    assign y = (s == 1'b0) ? i0 : i1;
endmodule