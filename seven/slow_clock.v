module slow_clock(CLK, Clk_Slow);
    input CLK;
    output Clk_Slow;

    reg [31:0] counter_out;
    reg Clk_Slow; 

initial begin 
   assign counter_out = 32'h00000000; 
   assign Clk_Slow = 0; 
end 

//this always block runs on the fast 100MHz clock

    always @(posedge CLK) begin 
   counter_out <= counter_out + 32'h00000001; 
   if (counter_out > 32'h00F5E100) begin 
       counter_out <= 32'h00000000; 
       Clk_Slow <= !Clk_Slow; 
   end 
end
endmodule
