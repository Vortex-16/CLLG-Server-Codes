module magnitude(input [3:0]a, input [3:0]b, output reg gt, output reg et, output reg lt);
	always @(a,b) begin
	if(a>b)
	begin 
		gt=1;
		et=0;
		lt=0;
	end
	else if(a<b)
	begin
		lt=1;
		et=0;
		gt=0;
	end
	else
	begin
		et=1;
		lt=0;
		gt=0;
	end
end
endmodule	
