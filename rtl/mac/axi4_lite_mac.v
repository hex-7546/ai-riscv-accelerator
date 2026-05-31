`timescale 1ns / 1ps

module axi4_lite_mac #(
    parameter integer C_S_AXI_DATA_WIDTH = 32,
    parameter integer C_S_AXI_ADDR_WIDTH = 5 
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

    assign S_AXI_AWREADY = axi_awready;
    assign S_AXI_WREADY  = axi_wready;
    assign S_AXI_BRESP   = 2'b00;
    assign S_AXI_BVALID  = axi_bvalid;
    assign S_AXI_ARREADY = axi_arready;
    assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RRESP   = 2'b00;
    assign S_AXI_RVALID  = axi_rvalid;

    //=========================================================
    // 🧠 1KB INTERNAL SRAM CACHE ARCHITECTURE
    //=========================================================
    reg signed [31:0] wgt_sram [0:255]; // Expanded to hold 256 weights
    reg signed [31:0] act_buffer [0:63];
    
    reg [8:0] wgt_wr_ptr;
    reg [5:0] act_wr_ptr;
    
    localparam STATE_IDLE    = 2'b00;
    localparam STATE_COMPUTE = 2'b01;
    localparam STATE_DONE    = 2'b10;
    
    reg [1:0]  state;
    reg [5:0]  compute_ptr;
    reg [31:0] vector_len;
    reg [31:0] wgt_offset; // NEW: Tells hardware where to read in SRAM
    reg signed [31:0] accumulator;
    
    wire slv_reg_wren = axi_wready && S_AXI_WVALID && axi_awready && S_AXI_AWVALID;

    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_awready <= 1'b0; axi_wready  <= 1'b0; axi_bvalid  <= 1'b0;
            state <= STATE_IDLE;
            wgt_wr_ptr <= 9'd0; act_wr_ptr <= 6'd0;
            vector_len <= 32'd64; wgt_offset <= 32'd0; accumulator <= 32'd0;
        end else begin
            if (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID) axi_awready <= 1'b1; else axi_awready <= 1'b0;
            if (~axi_wready && S_AXI_WVALID && S_AXI_AWVALID) axi_wready <= 1'b1; else axi_wready <= 1'b0;
            if (axi_awready && S_AXI_AWVALID && axi_wready && S_AXI_WVALID && ~axi_bvalid) axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;

            if (slv_reg_wren) begin
                case (S_AXI_AWADDR[4:0])
                    5'h00: begin
                        if (S_AXI_WDATA[0]) begin state <= STATE_COMPUTE; compute_ptr <= 6'd0; accumulator <= 32'd0; end
                        if (S_AXI_WDATA[4]) begin wgt_wr_ptr <= 9'd0; act_wr_ptr <= 6'd0; end
                    end
                    5'h04: begin wgt_sram[wgt_wr_ptr] <= S_AXI_WDATA; wgt_wr_ptr <= wgt_wr_ptr + 1; end
                    5'h08: begin act_buffer[act_wr_ptr] <= S_AXI_WDATA; act_wr_ptr <= act_wr_ptr + 1; end
                    5'h10: wgt_offset <= S_AXI_WDATA; // Dynamic SRAM offset
                    5'h14: vector_len <= S_AXI_WDATA;
                endcase
            end
            
            if (state == STATE_COMPUTE) begin
                // Compute using the dynamic wgt_offset mapping!
                accumulator <= accumulator + (wgt_sram[wgt_offset + compute_ptr] * act_buffer[compute_ptr]);
                if (compute_ptr == vector_len - 1) state <= STATE_DONE;
                else compute_ptr <= compute_ptr + 1;
            end
            
            if (state == STATE_DONE && slv_reg_wren && S_AXI_AWADDR[4:0] == 5'h00 && S_AXI_WDATA[1]) state <= STATE_IDLE;
        end
    end

    wire slv_reg_rden = axi_arready & S_AXI_ARVALID & ~axi_rvalid;
    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_arready <= 1'b0; axi_rvalid  <= 1'b0; axi_rdata   <= 32'b0;
        end else begin
            if (~axi_arready && S_AXI_ARVALID) axi_arready <= 1'b1; else axi_arready <= 1'b0;
            if (axi_arready && S_AXI_ARVALID && ~axi_rvalid) begin
                axi_rvalid <= 1'b1;
                case (S_AXI_ARADDR[4:0])
                    5'h00: axi_rdata <= {30'd0, (state == STATE_DONE), (state == STATE_COMPUTE)};
                    5'h0C: axi_rdata <= accumulator;
                    5'h10: axi_rdata <= wgt_offset;
                    5'h14: axi_rdata <= vector_len;
                    default: axi_rdata <= 32'd0;
                endcase
            end else if (axi_rvalid && S_AXI_RREADY) axi_rvalid <= 1'b0;
        end
    end
endmodule
