`timescale 1ns / 1ps

module axi4_lite_mac #(
    parameter integer C_S_AXI_DATA_WIDTH = 32,
    parameter integer C_S_AXI_ADDR_WIDTH = 7
) (
    input wire  S_AXI_ACLK, input wire  S_AXI_ARESETN,
    input wire [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_AWADDR, input wire [2:0] S_AXI_AWPROT, input wire S_AXI_AWVALID, output wire S_AXI_AWREADY,
    input wire [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_WDATA, input wire [(C_S_AXI_DATA_WIDTH/8)-1 : 0] S_AXI_WSTRB, input wire S_AXI_WVALID, output wire S_AXI_WREADY,
    output wire [1:0] S_AXI_BRESP, output wire S_AXI_BVALID, input wire S_AXI_BREADY,
    input wire [C_S_AXI_ADDR_WIDTH-1 : 0] S_AXI_ARADDR, input wire [2:0] S_AXI_ARPROT, input wire S_AXI_ARVALID, output wire S_AXI_ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1 : 0] S_AXI_RDATA, output wire [1:0] S_AXI_RRESP, output wire S_AXI_RVALID, input wire S_AXI_RREADY
);

    reg axi_awready, axi_wready, axi_bvalid, axi_arready, axi_rvalid;
    reg [C_S_AXI_DATA_WIDTH-1:0] axi_rdata;

    assign S_AXI_AWREADY = axi_awready; assign S_AXI_WREADY  = axi_wready;
    assign S_AXI_BRESP   = 2'b00;       assign S_AXI_BVALID  = axi_bvalid;
    assign S_AXI_ARREADY = axi_arready; assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RRESP   = 2'b00;       assign S_AXI_RVALID  = axi_rvalid;

    // Ping-Pong Banks and BATCH Activation Buffer
    reg signed [31:0] wgt_sram_0 [0:255]; 
    reg signed [31:0] wgt_sram_1 [0:255]; 
    reg signed [31:0] act_buffer [0:255]; // EXPANDED: Holds 4 sentences
    
    reg active_bank;
    reg [8:0] wgt_wr_ptr; 
    reg [7:0] act_wr_ptr; // EXPANDED: 8 bits to address 256 words
    
    localparam STATE_IDLE = 2'b00, STATE_COMPUTE = 2'b01, STATE_DONE = 2'b10;
    reg [1:0] state;
    reg [7:0] compute_ptr; // EXPANDED: 8 bits to prevent overflow
    reg [31:0] vector_len;
    reg clear_pes;

    wire signed [31:0] act_wire [0:3][0:4]; 
    wire signed [31:0] wgt_wire [0:4][0:3]; 
    wire signed [31:0] acc_wire [0:3][0:3];

    reg signed [31:0] act_d1[1:3], act_d2[2:3], act_d3[3:3];
    reg signed [31:0] wgt_d1[1:3], wgt_d2[2:3], wgt_d3[3:3];
    
    // Matrix Routing: 4 Sentences (Rows) x 4 Output Neurons (Columns)
    wire signed [31:0] cur_a0 = act_buffer[compute_ptr];
    wire signed [31:0] cur_a1 = act_buffer[compute_ptr + 64];
    wire signed [31:0] cur_a2 = act_buffer[compute_ptr + 128];
    wire signed [31:0] cur_a3 = act_buffer[compute_ptr + 192];

    wire signed [31:0] cur_w0 = (active_bank == 0) ? wgt_sram_0[compute_ptr] : wgt_sram_1[compute_ptr];
    wire signed [31:0] cur_w1 = (active_bank == 0) ? wgt_sram_0[compute_ptr+64] : wgt_sram_1[compute_ptr+64];
    wire signed [31:0] cur_w2 = (active_bank == 0) ? wgt_sram_0[compute_ptr+128] : wgt_sram_1[compute_ptr+128];
    wire signed [31:0] cur_w3 = (active_bank == 0) ? wgt_sram_0[compute_ptr+192] : wgt_sram_1[compute_ptr+192];

    always @(posedge S_AXI_ACLK) begin
        // Stagger the 4 independent sentence streams
        act_d1[1] <= cur_a1;
        act_d1[2] <= cur_a2; act_d2[2] <= act_d1[2];
        act_d1[3] <= cur_a3; act_d2[3] <= act_d1[3]; act_d3[3] <= act_d2[3];
        
        // Stagger the 4 independent weight streams
        wgt_d1[1] <= cur_w1;
        wgt_d1[2] <= cur_w2; wgt_d2[2] <= wgt_d1[2];
        wgt_d1[3] <= cur_w3; wgt_d2[3] <= wgt_d1[3]; wgt_d3[3] <= wgt_d2[3];
    end

    assign act_wire[0][0] = cur_a0; assign act_wire[1][0] = act_d1[1]; assign act_wire[2][0] = act_d2[2]; assign act_wire[3][0] = act_d3[3];
    assign wgt_wire[0][0] = cur_w0; assign wgt_wire[0][1] = wgt_d1[1]; assign wgt_wire[0][2] = wgt_d2[2]; assign wgt_wire[0][3] = wgt_d3[3];

    genvar r, c;
    generate
        for (r = 0; r < 4; r = r + 1) begin : ROW
            for (c = 0; c < 4; c = c + 1) begin : COL
                processing_element pe (
                    .clk(S_AXI_ACLK), .rst_n(S_AXI_ARESETN), .clear(clear_pes),
                    .act_in(act_wire[r][c]), .wgt_in(wgt_wire[r][c]),
                    .act_out(act_wire[r][c+1]), .wgt_out(wgt_wire[r+1][c]),
                    .acc_out(acc_wire[r][c])
                );
            end
        end
    endgenerate

    wire slv_reg_wren = axi_wready && S_AXI_WVALID && axi_awready && S_AXI_AWVALID;

    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_awready <= 1'b0; axi_wready <= 1'b0; axi_bvalid <= 1'b0;
            state <= STATE_IDLE; wgt_wr_ptr <= 9'd0; act_wr_ptr <= 8'd0;
            vector_len <= 32'd64; clear_pes <= 1'b1; active_bank <= 1'b0;
        end else begin
            if (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID) axi_awready <= 1'b1; else axi_awready <= 1'b0;
            if (~axi_wready && S_AXI_WVALID && S_AXI_AWVALID) axi_wready <= 1'b1; else axi_wready <= 1'b0;
            if (axi_awready && S_AXI_AWVALID && axi_wready && S_AXI_WVALID && ~axi_bvalid) axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;

            if (slv_reg_wren) begin
                case (S_AXI_AWADDR[6:0])
                    7'h00: begin
                        if (S_AXI_WDATA[0]) begin state <= STATE_COMPUTE; compute_ptr <= 8'd0; clear_pes <= 1'b0; end
                        if (S_AXI_WDATA[4]) begin wgt_wr_ptr <= 9'd0; act_wr_ptr <= 8'd0; end
                        if (S_AXI_WDATA[8]) active_bank <= ~active_bank;
                    end
                    7'h04: begin 
                        if (active_bank == 1'b0) wgt_sram_1[wgt_wr_ptr] <= S_AXI_WDATA; 
                        else                     wgt_sram_0[wgt_wr_ptr] <= S_AXI_WDATA;
                        wgt_wr_ptr <= wgt_wr_ptr + 1; 
                    end
                    7'h08: begin act_buffer[act_wr_ptr] <= S_AXI_WDATA; act_wr_ptr <= act_wr_ptr + 1; end
                    7'h14: vector_len <= S_AXI_WDATA;
                endcase
            end
            
            if (state == STATE_COMPUTE) begin
                if (compute_ptr == vector_len + 6) begin state <= STATE_DONE; clear_pes <= 1'b1; end
                else compute_ptr <= compute_ptr + 1;
            end
            
            if (state == STATE_DONE && slv_reg_wren && S_AXI_AWADDR[6:0] == 7'h00 && S_AXI_WDATA[1]) state <= STATE_IDLE;
        end
    end

    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_arready <= 1'b0; axi_rvalid  <= 1'b0; axi_rdata <= 32'b0;
        end else begin
            if (~axi_arready && S_AXI_ARVALID) axi_arready <= 1'b1; else axi_arready <= 1'b0;
            if (axi_arready && S_AXI_ARVALID && ~axi_rvalid) begin
                axi_rvalid <= 1'b1;
                case (S_AXI_ARADDR[6:0])
                    7'h00: axi_rdata <= {30'd0, (state == STATE_DONE), (state == STATE_COMPUTE)};
                    7'h14: axi_rdata <= vector_len;
                    7'h20: axi_rdata <= acc_wire[0][0]; 7'h24: axi_rdata <= acc_wire[0][1]; 7'h28: axi_rdata <= acc_wire[0][2]; 7'h2C: axi_rdata <= acc_wire[0][3];
                    7'h30: axi_rdata <= acc_wire[1][0]; 7'h34: axi_rdata <= acc_wire[1][1]; 7'h38: axi_rdata <= acc_wire[1][2]; 7'h3C: axi_rdata <= acc_wire[1][3];
                    7'h40: axi_rdata <= acc_wire[2][0]; 7'h44: axi_rdata <= acc_wire[2][1]; 7'h48: axi_rdata <= acc_wire[2][2]; 7'h4C: axi_rdata <= acc_wire[2][3];
                    7'h50: axi_rdata <= acc_wire[3][0]; 7'h54: axi_rdata <= acc_wire[3][1]; 7'h58: axi_rdata <= acc_wire[3][2]; 7'h5C: axi_rdata <= acc_wire[3][3];
                    default: axi_rdata <= 32'd0;
                endcase
            end else if (axi_rvalid && S_AXI_RREADY) axi_rvalid <= 1'b0;
        end
    end
endmodule
