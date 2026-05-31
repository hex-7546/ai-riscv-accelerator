`timescale 1ns / 1ps

module axi4_lite_mac #(
    parameter integer C_S_AXI_DATA_WIDTH = 32,
    parameter integer C_S_AXI_ADDR_WIDTH = 6
) (
    input wire  S_AXI_ACLK,
    input wire  S_AXI_ARESETN,
    input wire [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_AWADDR,
    input wire [2 : 0] S_AXI_AWPROT,
    input wire  S_AXI_AWVALID,
    output wire  S_AXI_AWREADY,
    input wire [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_WDATA,
    input wire [(C_S_AXI_DATA_WIDTH/8)-1 : 0] S_AXI_WSTRB,
    input wire  S_AXI_WVALID,
    output wire  S_AXI_WREADY,
    output wire [1 : 0] S_AXI_BRESP,
    output wire  S_AXI_BVALID,
    input wire  S_AXI_BREADY,
    input wire [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_ARADDR,
    input wire [2 : 0] S_AXI_ARPROT,
    input wire  S_AXI_ARVALID,
    output wire  S_AXI_ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_RDATA,
    output wire [1 : 0] S_AXI_RRESP,
    output wire  S_AXI_RVALID,
    input wire  S_AXI_RREADY
);

    reg axi_awready, axi_wready, axi_bvalid, axi_arready, axi_rvalid;
    reg [C_S_AXI_DATA_WIDTH-1:0] axi_rdata;

    assign S_AXI_AWREADY = axi_awready; assign S_AXI_WREADY  = axi_wready;
    assign S_AXI_BRESP   = 2'b00;       assign S_AXI_BVALID  = axi_bvalid;
    assign S_AXI_ARREADY = axi_arready; assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RRESP   = 2'b00;       assign S_AXI_RVALID  = axi_rvalid;

    // =========================================================
    // 🧠 PING-PONG MEMORY ARCHITECTURE (2 x 1KB Banks)
    // =========================================================
    reg signed [31:0] wgt_sram_0 [0:255]; 
    reg signed [31:0] wgt_sram_1 [0:255]; 
    reg signed [31:0] act_buffer [0:63];
    
    reg active_bank; // 0 = Bank 0 Active, 1 = Bank 1 Active
    
    reg [8:0] wgt_wr_ptr;
    reg [5:0] act_wr_ptr;
    
    localparam STATE_IDLE = 2'b00, STATE_COMPUTE = 2'b01, STATE_DONE = 2'b10;
    reg [1:0] state;
    reg [5:0] compute_ptr;
    reg [31:0] vector_len;
    reg clear_pes;

    wire signed [31:0] acc_out_0, acc_out_1, acc_out_2, acc_out_3;

    // Hardware Multiplexers: Read from the ACTIVE bank
    wire signed [31:0] current_wgt_0 = (active_bank == 1'b0) ? wgt_sram_0[compute_ptr] : wgt_sram_1[compute_ptr];
    wire signed [31:0] current_wgt_1 = (active_bank == 1'b0) ? wgt_sram_0[compute_ptr + 64] : wgt_sram_1[compute_ptr + 64];
    wire signed [31:0] current_wgt_2 = (active_bank == 1'b0) ? wgt_sram_0[compute_ptr + 128] : wgt_sram_1[compute_ptr + 128];
    wire signed [31:0] current_wgt_3 = (active_bank == 1'b0) ? wgt_sram_0[compute_ptr + 192] : wgt_sram_1[compute_ptr + 192];

    processing_element pe0 (.clk(S_AXI_ACLK), .rst_n(S_AXI_ARESETN), .clear(clear_pes), .act_in(act_buffer[compute_ptr]), .wgt_in(current_wgt_0), .acc_out(acc_out_0));
    processing_element pe1 (.clk(S_AXI_ACLK), .rst_n(S_AXI_ARESETN), .clear(clear_pes), .act_in(act_buffer[compute_ptr]), .wgt_in(current_wgt_1), .acc_out(acc_out_1));
    processing_element pe2 (.clk(S_AXI_ACLK), .rst_n(S_AXI_ARESETN), .clear(clear_pes), .act_in(act_buffer[compute_ptr]), .wgt_in(current_wgt_2), .acc_out(acc_out_2));
    processing_element pe3 (.clk(S_AXI_ACLK), .rst_n(S_AXI_ARESETN), .clear(clear_pes), .act_in(act_buffer[compute_ptr]), .wgt_in(current_wgt_3), .acc_out(acc_out_3));

    wire slv_reg_wren = axi_wready && S_AXI_WVALID && axi_awready && S_AXI_AWVALID;

    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_awready <= 1'b0; axi_wready <= 1'b0; axi_bvalid <= 1'b0;
            state <= STATE_IDLE; wgt_wr_ptr <= 9'd0; act_wr_ptr <= 6'd0;
            vector_len <= 32'd64; clear_pes <= 1'b1; active_bank <= 1'b0;
        end else begin
            if (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID) axi_awready <= 1'b1; else axi_awready <= 1'b0;
            if (~axi_wready && S_AXI_WVALID && S_AXI_AWVALID) axi_wready <= 1'b1; else axi_wready <= 1'b0;
            if (axi_awready && S_AXI_AWVALID && axi_wready && S_AXI_WVALID && ~axi_bvalid) axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;

            if (slv_reg_wren) begin
                case (S_AXI_AWADDR[5:0])
                    6'h00: begin
                        if (S_AXI_WDATA[0]) begin state <= STATE_COMPUTE; compute_ptr <= 6'd0; clear_pes <= 1'b0; end
                        if (S_AXI_WDATA[4]) begin wgt_wr_ptr <= 9'd0; act_wr_ptr <= 6'd0; end
                        if (S_AXI_WDATA[8]) active_bank <= ~active_bank; // Bit 8 toggles Ping-Pong Bank
                    end
                    6'h04: begin 
                        // Hardware Routing: Always write DMA data to the INACTIVE bank
                        if (active_bank == 1'b0) wgt_sram_1[wgt_wr_ptr] <= S_AXI_WDATA; 
                        else                     wgt_sram_0[wgt_wr_ptr] <= S_AXI_WDATA;
                        wgt_wr_ptr <= wgt_wr_ptr + 1; 
                    end
                    6'h08: begin act_buffer[act_wr_ptr] <= S_AXI_WDATA; act_wr_ptr <= act_wr_ptr + 1; end
                    6'h14: vector_len <= S_AXI_WDATA;
                endcase
            end
            
            if (state == STATE_COMPUTE) begin
                if (compute_ptr == vector_len - 1) begin state <= STATE_DONE; clear_pes <= 1'b1; end
                else compute_ptr <= compute_ptr + 1;
            end
            
            if (state == STATE_DONE && slv_reg_wren && S_AXI_AWADDR[5:0] == 6'h00 && S_AXI_WDATA[1]) state <= STATE_IDLE;
        end
    end

    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_arready <= 1'b0; axi_rvalid  <= 1'b0; axi_rdata <= 32'b0;
        end else begin
            if (~axi_arready && S_AXI_ARVALID) axi_arready <= 1'b1; else axi_arready <= 1'b0;
            if (axi_arready && S_AXI_ARVALID && ~axi_rvalid) begin
                axi_rvalid <= 1'b1;
                case (S_AXI_ARADDR[5:0])
                    6'h00: axi_rdata <= {30'd0, (state == STATE_DONE), (state == STATE_COMPUTE)};
                    6'h14: axi_rdata <= vector_len;
                    6'h20: axi_rdata <= acc_out_0;
                    6'h24: axi_rdata <= acc_out_1;
                    6'h28: axi_rdata <= acc_out_2;
                    6'h2C: axi_rdata <= acc_out_3;
                    default: axi_rdata <= 32'd0;
                endcase
            end else if (axi_rvalid && S_AXI_RREADY) axi_rvalid <= 1'b0;
        end
    end
endmodule
