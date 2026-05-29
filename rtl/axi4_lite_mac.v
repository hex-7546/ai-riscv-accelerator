`timescale 1ns / 1ps

module axi4_lite_mac #(
    parameter C_S_AXI_DATA_WIDTH = 32,
    parameter C_S_AXI_ADDR_WIDTH = 4
)(
    input  wire        S_AXI_ACLK,
    input  wire        S_AXI_ARESETN,
    input  wire [3:0]  S_AXI_AWADDR,
    input  wire [2:0]  S_AXI_AWPROT,
    input  wire        S_AXI_AWVALID,
    output reg         S_AXI_AWREADY,
    input  wire [31:0] S_AXI_WDATA,
    input  wire [3:0]  S_AXI_WSTRB,
    input  wire        S_AXI_WVALID,
    output reg         S_AXI_WREADY,
    output reg  [1:0]  S_AXI_BRESP,
    output reg         S_AXI_BVALID,
    input  wire        S_AXI_BREADY,
    input  wire [3:0]  S_AXI_ARADDR,
    input  wire [2:0]  S_AXI_ARPROT,
    input  wire        S_AXI_ARVALID,
    output reg         S_AXI_ARREADY,
    output reg  [31:0] S_AXI_RDATA,
    output reg  [1:0]  S_AXI_RRESP,
    output reg         S_AXI_RVALID,
    input  wire        S_AXI_RREADY
);

    // Internal Memory Mapped Registers
    reg [31:0] ctrl_reg; // Offset 0x00
    reg [31:0] wgt_reg;  // Offset 0x04
    reg [31:0] act_reg;  // Offset 0x08
    reg [31:0] res_reg;  // Offset 0x0C

    // Multiplier Wire Connections
    wire signed [7:0]  w_val    = wgt_reg[7:0];
    wire signed [7:0]  a_val    = act_reg[7:0];
    wire signed [15:0] prod_val = w_val * a_val; // Safeguard bit growth
    // Basic write register handling
    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            ctrl_reg      <= 32'd0;
            wgt_reg       <= 32'd0;
            act_reg       <= 32'd0;
            res_reg       <= 32'd0;
            S_AXI_AWREADY <= 1'b0;
            S_AXI_WREADY  <= 1'b0;
            S_AXI_BVALID  <= 1'b0;
        end else begin
            S_AXI_AWREADY <= 1'b1;
            S_AXI_WREADY  <= 1'b1;

            // --- UPDATED: Handle execution state changes ---
            if (ctrl_reg[2] == 1'b1) begin
                res_reg <= 32'd0;
		ctrl_reg <= 32'd0;
            end else if (ctrl_reg[0] == 1'b1) begin
                // Compute the MAC operation instantly in one clock cycle
                res_reg  <= res_reg + {{16{prod_val[15]}}, prod_val}; // Sign-extend to 32-bits
                ctrl_reg <= 32'h0000_0002; // Clear Start bit, set Done bit (Bit 1)
            end
            // -----------------------------------------------

            if (S_AXI_AWVALID && S_AXI_WVALID && !S_AXI_BVALID) begin
                S_AXI_BVALID <= 1'b1;
                S_AXI_BRESP  <= 2'b00;
                case (S_AXI_AWADDR)
                    4'h0: ctrl_reg <= S_AXI_WDATA;
                    4'h4: wgt_reg  <= S_AXI_WDATA;
                    4'h8: act_reg  <= S_AXI_WDATA;
                    default: ;
                endcase
            end else if (S_AXI_BREADY) begin
                S_AXI_BVALID <= 1'b0;
            end
        end
    end

    // Basic register read path handling
    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            S_AXI_ARREADY <= 1'b0;
            S_AXI_RVALID  <= 1'b0;
            S_AXI_RDATA   <= 32'd0;
        end else begin
            S_AXI_ARREADY <= 1'b1;
            if (S_AXI_ARVALID && S_AXI_ARREADY) begin
                S_AXI_RVALID <= 1'b1;
                S_AXI_RRESP  <= 2'b00;
                case (S_AXI_ARADDR)
                    4'h0: S_AXI_RDATA <= ctrl_reg;
                    4'h4: S_AXI_RDATA <= wgt_reg;
                    4'h8: S_AXI_RDATA <= act_reg;
                    4'hC: S_AXI_RDATA <= res_reg;
                    default: S_AXI_RDATA <= 32'd0;
                endcase
            end else if (S_AXI_RREADY) begin
                S_AXI_RVALID <= 1'b0;
            end
        end
    end
endmodule
