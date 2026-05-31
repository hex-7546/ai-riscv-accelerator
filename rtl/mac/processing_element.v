`timescale 1ns / 1ps

module processing_element #(
    parameter D_WIDTH = 8,   // 8-bit inputs
    parameter ACC_WIDTH = 32 // 32-bit accumulation
)(
    input  wire                 clk,
    input  wire                 rst_n,
    input  wire                 clear,    // Signal to wipe the accumulator for a new matrix
    
    // Incoming Data (The Catch)
    input  wire signed [D_WIDTH-1:0] act_in,   // From West
    input  wire signed [D_WIDTH-1:0] wgt_in,   // From North
    
    // Outgoing Data (The Pass)
    output reg  signed [D_WIDTH-1:0] act_out,  // To East
    output reg  signed [D_WIDTH-1:0] wgt_out,  // To South
    
    // Internal State (The Compute)
    output reg  signed [ACC_WIDTH-1:0] acc_out
);

    always @(posedge clk) begin
        if (!rst_n) begin
            act_out <= {D_WIDTH{1'b0}};
            wgt_out <= {D_WIDTH{1'b0}};
            acc_out <= {ACC_WIDTH{1'b0}};
        end else if (clear) begin
            acc_out <= {ACC_WIDTH{1'b0}};
            act_out <= {D_WIDTH{1'b0}};
            wgt_out <= {D_WIDTH{1'b0}};
        end else begin
            // 1. Pass data to the neighbors
            act_out <= act_in;
            wgt_out <= wgt_in;
            
            // 2. Multiply and Accumulate
            acc_out <= acc_out + (act_in * wgt_in);
        end
    end
endmodule
