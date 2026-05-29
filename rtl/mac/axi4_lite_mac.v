`timescale 1ns / 1ps

module axi4_lite_mac #(
    parameter integer C_S_AXI_DATA_WIDTH = 32,
    parameter integer C_S_AXI_ADDR_WIDTH = 5 // Expanded to 5 bits (0x00 to 0x14)
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

    // AXI4-Lite Handshake Registers
    reg axi_awready;
    reg axi_wready;
    reg axi_bvalid;
    reg axi_arready;
    reg axi_rvalid;
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
    // 🧠 VECTOR COMPUTE ENGINE LOGIC
    //=========================================================
    
    // Internal Scratchpads (64 elements deep)
    reg signed [31:0] wgt_buffer [0:63];
    reg signed [31:0] act_buffer [0:63];
    
    // Internal Write Pointers for DMA streams
    reg [5:0] wgt_wr_ptr;
    reg [5:0] act_wr_ptr;
    
    // State Machine & Compute Logic
    localparam STATE_IDLE    = 2'b00;
    localparam STATE_COMPUTE = 2'b01;
    localparam STATE_DONE    = 2'b10;
    
    reg [1:0]  state;
    reg [5:0]  compute_ptr;
    reg [31:0] vector_len;
    reg signed [31:0] accumulator;
    
    //---------------------------------------------------------
    // AXI Write Channel & Register Map
    //---------------------------------------------------------
    wire slv_reg_wren = axi_wready && S_AXI_WVALID && axi_awready && S_AXI_AWVALID;

    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_awready <= 1'b0;
            axi_wready  <= 1'b0;
            axi_bvalid  <= 1'b0;
            
            state       <= STATE_IDLE;
            wgt_wr_ptr  <= 6'd0;
            act_wr_ptr  <= 6'd0;
            vector_len  <= 32'd64; // Default to 64
            accumulator <= 32'd0;
        end else begin
            // Handshakes
            if (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID) axi_awready <= 1'b1;
            else axi_awready <= 1'b0;

            if (~axi_wready && S_AXI_WVALID && S_AXI_AWVALID) axi_wready <= 1'b1;
            else axi_wready <= 1'b0;

            if (axi_awready && S_AXI_AWVALID && axi_wready && S_AXI_WVALID && ~axi_bvalid) axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;

            // Memory Mapped Registers
            if (slv_reg_wren) begin
                case (S_AXI_AWADDR[4:0])
                    // 0x00: CTRL Register
                    5'h00: begin
                        if (S_AXI_WDATA[0]) begin 
                            state <= STATE_COMPUTE; 
                            compute_ptr <= 6'd0; 
                            accumulator <= 32'd0; 
                        end
                        if (S_AXI_WDATA[4]) begin 
                            wgt_wr_ptr <= 6'd0; // Reset Weight Pointer
                            act_wr_ptr <= 6'd0; // Reset Activation Pointer
                        end
                    end
                    // 0x04: WGT_FIFO (DMA pushes weights here)
                    5'h04: begin
                        wgt_buffer[wgt_wr_ptr] <= S_AXI_WDATA;
                        wgt_wr_ptr <= wgt_wr_ptr + 1;
                    end
                    // 0x08: ACT_FIFO (DMA pushes activations here)
                    5'h08: begin
                        act_buffer[act_wr_ptr] <= S_AXI_WDATA;
                        act_wr_ptr <= act_wr_ptr + 1;
                    end
                    // 0x14: VECTOR_LENGTH
                    5'h14: vector_len <= S_AXI_WDATA;
                endcase
            end
            
            // Auto-clear start and reset flags
            if (state == STATE_COMPUTE) begin
                accumulator <= accumulator + (wgt_buffer[compute_ptr] * act_buffer[compute_ptr]);
                if (compute_ptr == vector_len - 1) begin
                    state <= STATE_DONE;
                end else begin
                    compute_ptr <= compute_ptr + 1;
                end
            end
            
            // Software can clear DONE state by writing to CTRL or starting a new job
            if (state == STATE_DONE && slv_reg_wren && S_AXI_AWADDR[4:0] == 5'h00 && S_AXI_WDATA[1]) begin
                state <= STATE_IDLE;
            end
        end
    end

    //---------------------------------------------------------
    // AXI Read Channel
    //---------------------------------------------------------
    wire slv_reg_rden = axi_arready & S_AXI_ARVALID & ~axi_rvalid;

    always @(posedge S_AXI_ACLK) begin
        if (S_AXI_ARESETN == 1'b0) begin
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
            axi_rdata   <= 32'b0;
        end else begin
            if (~axi_arready && S_AXI_ARVALID) axi_arready <= 1'b1;
            else axi_arready <= 1'b0;

            if (axi_arready && S_AXI_ARVALID && ~axi_rvalid) begin
                axi_rvalid <= 1'b1;
                case (S_AXI_ARADDR[4:0])
                    5'h00: axi_rdata <= {30'd0, (state == STATE_DONE), (state == STATE_COMPUTE)};
                    5'h0C: axi_rdata <= accumulator; // Read the final computed dot product
                    5'h14: axi_rdata <= vector_len;
                    default: axi_rdata <= 32'd0;
                endcase
            end else if (axi_rvalid && S_AXI_RREADY) begin
                axi_rvalid <= 1'b0;
            end
        end
    end
endmodule
