/* verilator lint_off UNOPTFLAT */
`include "adder.v"

module adder_n #(parameter n = 8)(a, b, cin, sum, cout);
    input [n-1:0] a;
    input [n-1:0] b;
    input cin;
    output [n-1:0] sum;
    output cout;

    wire [n:0] cout_wire;

    assign cout_wire[0] = cin;
    assign cout = cout_wire[n];

    genvar i;
    generate
        for(i=0; i<n; i++) begin
            adder full_adder(
                    .a(a[i]),
                    .b(b[i]),
                    .cin(cout_wire[i]),
                    .sum(sum[i]),
                    .cout(cout_wire[i+1])
                );
        end
    endgenerate
endmodule