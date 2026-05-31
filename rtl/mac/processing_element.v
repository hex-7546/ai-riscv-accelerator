`timescale 1ns / 1ps

module processing_element #(
    parameter D_WIDTH = 32
)(
    input  wire                 clk,
    input  wire                 rst_n,
    input  wire                 clear,
    
    // Catch from North/West
    input  wire signed [D_WIDTH-1:0] act_in,
    input  wire signed [D_WIDTH-1:0] wgt_in,
    
    // Pass to South/East
    output reg  signed [D_WIDTH-1:0] act_out,
    output reg  signed [D_WIDTH-1:0] wgt_out,
    
    // Internal Compute
    output reg  signed [D_WIDTH-1:0] acc_out
);

    always @(posedge clk) begin
        if (!rst_n) begin
            act_out <= 0; wgt_out <= 0; acc_out <= 0;
        end else if (clear) begin
            acc_out <= 0; act_out <= 0; wgt_out <= 0;
        end else begin
            // 1. Pass data down the mesh
            act_out <= act_in;
            wgt_out <= wgt_in;
            
            // 2. Multiply and Accumulate
            acc_out <= acc_out + (act_in * wgt_in);
        end
    end
endmodule
