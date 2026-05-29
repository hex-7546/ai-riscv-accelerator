`timescale 1ns / 1ps

/*
 * Module: soc_top
 * Description: Top-level SoC integrating a PicoRV32 CPU, 8KB RAM, MAC Accelerator, and DMA.
 *
 * Address Map:
 * - 0x0000_0000 to 0x2FFF_FFFF : Slave 0 (8KB RAM)
 * - 0x3000_0000 to 0x3FFF_FFFF : Slave 1 (INT8 MAC Accelerator)
 * - 0x4000_0000 to 0xFFFF_FFFF : Slave 2 (DMA Config Registers)
 */

module soc_top (
    input  wire clk,
    input  wire resetn,
    output wire trap
);
    //==================================================================
    // 1. CPU AXI Master Wires
    //==================================================================
    wire        cpu_axi_awvalid, cpu_axi_awready;
    wire [31:0] cpu_axi_awaddr;
    wire [ 2:0] cpu_axi_awprot;
    wire        cpu_axi_wvalid, cpu_axi_wready;
    wire [31:0] cpu_axi_wdata;
    wire [ 3:0] cpu_axi_wstrb;
    wire        cpu_axi_bvalid, cpu_axi_bready;
    wire [ 1:0] cpu_axi_bresp;
    wire        cpu_axi_arvalid, cpu_axi_arready;
    wire [31:0] cpu_axi_araddr;
    wire [ 2:0] cpu_axi_arprot;
    wire        cpu_axi_rvalid, cpu_axi_rready;
    wire [31:0] cpu_axi_rdata;
    wire [ 1:0] cpu_axi_rresp;

    //==================================================================
    // 2. Main Bus (Post-Arbiter) Wires
    //==================================================================
    wire        mem_axi_awvalid, mem_axi_awready;
    wire [31:0] mem_axi_awaddr;
    wire [ 2:0] mem_axi_awprot;
    wire        mem_axi_wvalid, mem_axi_wready;
    wire [31:0] mem_axi_wdata;
    wire [ 3:0] mem_axi_wstrb;
    wire        mem_axi_bvalid, mem_axi_bready;
    wire [ 1:0] mem_axi_bresp;
    wire        mem_axi_arvalid, mem_axi_arready;
    wire [31:0] mem_axi_araddr;
    wire [ 2:0] mem_axi_arprot;
    wire        mem_axi_rvalid, mem_axi_rready;
    wire [31:0] mem_axi_rdata;
    wire [ 1:0] mem_axi_rresp;

    //==================================================================
    // 3. Slave Wires (RAM, MAC, DMA CFG)
    //==================================================================
    wire s0_axi_awvalid, s0_axi_awready, s0_axi_wvalid, s0_axi_wready;
    wire s0_axi_bvalid, s0_axi_bready, s0_axi_arvalid, s0_axi_arready;
    wire s0_axi_rvalid, s0_axi_rready;
    wire [31:0] s0_axi_rdata; wire [1:0] s0_axi_bresp, s0_axi_rresp;

    wire s1_axi_awvalid, s1_axi_awready, s1_axi_wvalid, s1_axi_wready;
    wire s1_axi_bvalid, s1_axi_bready, s1_axi_arvalid, s1_axi_arready;
    wire s1_axi_rvalid, s1_axi_rready;
    wire [31:0] s1_axi_rdata; wire [1:0] s1_axi_bresp, s1_axi_rresp;

    wire s2_axi_awvalid, s2_axi_awready, s2_axi_wvalid, s2_axi_wready;
    wire s2_axi_bvalid, s2_axi_bready, s2_axi_arvalid, s2_axi_arready;
    wire s2_axi_rvalid, s2_axi_rready;
    wire [31:0] s2_axi_rdata; wire [1:0] s2_axi_bresp, s2_axi_rresp;

    // PicoRV32 Reset Stretcher
    reg [7:0] reset_counter = 8'd0;
    reg       cpu_resetn    = 1'b0;
    always @(posedge clk) begin
        if (!resetn) begin
            reset_counter <= 8'd0;
            cpu_resetn    <= 1'b0;
        end else begin
            if (reset_counter < 8'hFF) begin
                reset_counter <= reset_counter + 8'd1;
                cpu_resetn    <= 1'b0;
            end else begin
                cpu_resetn    <= 1'b1;
            end
        end
    end

    //==================================================================
    // 4. DMA Controller & Hardware Bus Arbiter
    //==================================================================
    wire [31:0] dma_bus_addr, dma_bus_wdata;
    wire        dma_bus_read, dma_bus_write;
    wire        dma_busy, dma_done;
    
    reg [31:0]  dma_src_addr, dma_dst_addr;
    reg [15:0]  dma_len;
    reg         dma_start, dma_mode;

    dma_controller u_dma (
        .clk             (clk),
        .rst_n           (resetn),
        .cpu_src_addr    (dma_src_addr),
        .cpu_dst_addr    (dma_dst_addr),
        .cpu_transfer_len(dma_len),
        .cpu_mode       (dma_mode),
        .cpu_start       (dma_start),
        .dma_busy        (dma_busy),
        .dma_done        (dma_done),
        .bus_addr        (dma_bus_addr),
        .bus_read        (dma_bus_read),
        .bus_write       (dma_bus_write),
        .bus_rdata       (mem_axi_rdata),
        .bus_wdata       (dma_bus_wdata),
        .bus_ready       ((dma_bus_read && mem_axi_rvalid) || (dma_bus_write && mem_axi_bvalid))
    );

    // THE ARBITER: MUX the Bus Master. DMA takes priority if busy.
    assign mem_axi_awvalid = dma_busy ? dma_bus_write : cpu_axi_awvalid;
    assign mem_axi_awaddr  = dma_busy ? dma_bus_addr  : cpu_axi_awaddr;
    assign mem_axi_awprot  = dma_busy ? 3'b000        : cpu_axi_awprot;
    assign mem_axi_wvalid  = dma_busy ? dma_bus_write : cpu_axi_wvalid;
    assign mem_axi_wdata   = dma_busy ? dma_bus_wdata : cpu_axi_wdata;
    assign mem_axi_wstrb   = dma_busy ? 4'hF          : cpu_axi_wstrb;
    assign mem_axi_bready  = dma_busy ? 1'b1          : cpu_axi_bready;
    
    assign mem_axi_arvalid = dma_busy ? dma_bus_read  : cpu_axi_arvalid;
    assign mem_axi_araddr  = dma_busy ? dma_bus_addr  : cpu_axi_araddr;
    assign mem_axi_arprot  = dma_busy ? 3'b000        : cpu_axi_arprot;
    assign mem_axi_rready  = dma_busy ? 1'b1          : cpu_axi_rready;

    // STALL THE CPU: If DMA is busy, force the CPU's ready signals low.
    assign cpu_axi_awready = dma_busy ? 1'b0 : mem_axi_awready;
    assign cpu_axi_wready  = dma_busy ? 1'b0 : mem_axi_wready;
    assign cpu_axi_bvalid  = dma_busy ? 1'b0 : mem_axi_bvalid;
    assign cpu_axi_bresp   = mem_axi_bresp;
    assign cpu_axi_arready = dma_busy ? 1'b0 : mem_axi_arready;
    assign cpu_axi_rvalid  = dma_busy ? 1'b0 : mem_axi_rvalid;
    assign cpu_axi_rdata   = mem_axi_rdata;
    assign cpu_axi_rresp   = mem_axi_rresp;

    //==================================================================
    // 5. AXI 1-to-3 Interconnect & Address Decoder
    //==================================================================
    reg [1:0] w_route;
    always @(posedge clk) begin
        if (!resetn) w_route <= 2'd0;
        else if (mem_axi_awvalid && mem_axi_awready) begin
            if (mem_axi_awaddr[31:28] == 4'h4) w_route <= 2'd2; // DMA
            else if (mem_axi_awaddr[31:28] >= 4'h3) w_route <= 2'd1; // MAC
            else w_route <= 2'd0; // RAM
        end
    end
    wire [1:0] cur_w_route = mem_axi_awvalid ? ((mem_axi_awaddr[31:28] == 4'h4) ? 2'd2 : (mem_axi_awaddr[31:28] >= 4'h3) ? 2'd1 : 2'd0) : w_route;

    reg [1:0] r_route;
    always @(posedge clk) begin
        if (!resetn) r_route <= 2'd0;
        else if (mem_axi_arvalid && mem_axi_arready) begin
            if (mem_axi_araddr[31:28] == 4'h4) r_route <= 2'd2;
            else if (mem_axi_araddr[31:28] >= 4'h3) r_route <= 2'd1;
            else r_route <= 2'd0;
        end
    end
    wire [1:0] cur_r_route = mem_axi_arvalid ? ((mem_axi_araddr[31:28] == 4'h4) ? 2'd2 : (mem_axi_araddr[31:28] >= 4'h3) ? 2'd1 : 2'd0) : r_route;

    // Demultiplexing
    assign s0_axi_awvalid = mem_axi_awvalid && (cur_w_route == 2'd0);
    assign s1_axi_awvalid = mem_axi_awvalid && (cur_w_route == 2'd1);
    assign s2_axi_awvalid = mem_axi_awvalid && (cur_w_route == 2'd2);
    
    assign s0_axi_wvalid  = mem_axi_wvalid  && (cur_w_route == 2'd0);
    assign s1_axi_wvalid  = mem_axi_wvalid  && (cur_w_route == 2'd1);
    assign s2_axi_wvalid  = mem_axi_wvalid  && (cur_w_route == 2'd2);
    
    assign s0_axi_bready  = mem_axi_bready  && (cur_w_route == 2'd0);
    assign s1_axi_bready  = mem_axi_bready  && (cur_w_route == 2'd1);
    assign s2_axi_bready  = mem_axi_bready  && (cur_w_route == 2'd2);
    
    assign s0_axi_arvalid = mem_axi_arvalid && (cur_r_route == 2'd0);
    assign s1_axi_arvalid = mem_axi_arvalid && (cur_r_route == 2'd1);
    assign s2_axi_arvalid = mem_axi_arvalid && (cur_r_route == 2'd2);
    
    assign s0_axi_rready  = mem_axi_rready  && (cur_r_route == 2'd0);
    assign s1_axi_rready  = mem_axi_rready  && (cur_r_route == 2'd1);
    assign s2_axi_rready  = mem_axi_rready  && (cur_r_route == 2'd2);

    // Multiplexing
    assign mem_axi_awready = (cur_w_route == 2'd2) ? s2_axi_awready : (cur_w_route == 2'd1) ? s1_axi_awready : s0_axi_awready;
    assign mem_axi_wready  = (cur_w_route == 2'd2) ? s2_axi_wready  : (cur_w_route == 2'd1) ? s1_axi_wready  : s0_axi_wready;
    assign mem_axi_bvalid  = (cur_w_route == 2'd2) ? s2_axi_bvalid  : (cur_w_route == 2'd1) ? s1_axi_bvalid  : s0_axi_bvalid;
    assign mem_axi_bresp   = (cur_w_route == 2'd2) ? s2_axi_bresp   : (cur_w_route == 2'd1) ? s1_axi_bresp   : s0_axi_bresp;
    assign mem_axi_arready = (cur_r_route == 2'd2) ? s2_axi_arready : (cur_r_route == 2'd1) ? s1_axi_arready : s0_axi_arready;
    assign mem_axi_rvalid  = (cur_r_route == 2'd2) ? s2_axi_rvalid  : (cur_r_route == 2'd1) ? s1_axi_rvalid  : s0_axi_rvalid;
    assign mem_axi_rdata   = (cur_r_route == 2'd2) ? s2_axi_rdata   : (cur_r_route == 2'd1) ? s1_axi_rdata   : s0_axi_rdata;
    assign mem_axi_rresp   = (cur_r_route == 2'd2) ? s2_axi_rresp   : (cur_r_route == 2'd1) ? s1_axi_rresp   : s0_axi_rresp;

    //==================================================================
    // 6. SLAVE 2: DMA Configuration Registers (Internal)
    //==================================================================
    assign s2_axi_awready = 1'b1;
    assign s2_axi_wready  = 1'b1;
    assign s2_axi_arready = 1'b1;

    reg s2_bvalid_reg, s2_rvalid_reg;
    reg [31:0] s2_rdata_reg;
    
    assign s2_axi_bvalid = s2_bvalid_reg;
    assign s2_axi_bresp  = 2'b00;
    assign s2_axi_rvalid = s2_rvalid_reg;
    assign s2_axi_rdata  = s2_rdata_reg;
    assign s2_axi_rresp  = 2'b00;

    always @(posedge clk) begin
        if (!resetn) begin
            s2_bvalid_reg <= 1'b0;
            s2_rvalid_reg <= 1'b0;
            dma_start <= 1'b0;
        end else begin
            if (s2_axi_awvalid && s2_axi_wvalid && !s2_bvalid_reg) begin
                s2_bvalid_reg <= 1'b1;
                if (mem_axi_awaddr[7:0] == 8'h00) dma_src_addr <= mem_axi_wdata;
                if (mem_axi_awaddr[7:0] == 8'h04) dma_dst_addr <= mem_axi_wdata;
                if (mem_axi_awaddr[7:0] == 8'h08) dma_len      <= mem_axi_wdata[15:0];
                if (mem_axi_awaddr[7:0] == 8'h0C) {dma_mode, dma_start} <= mem_axi_wdata[1:0];
            end else if (s2_bvalid_reg && s2_axi_bready) begin
                s2_bvalid_reg <= 1'b0;
            end
            
            if (dma_start && dma_busy) dma_start <= 1'b0; // Auto-clear

            if (s2_axi_arvalid && !s2_rvalid_reg) begin
                s2_rvalid_reg <= 1'b1;
                if (mem_axi_araddr[7:0] == 8'h00) s2_rdata_reg <= dma_src_addr;
                else if (mem_axi_araddr[7:0] == 8'h04) s2_rdata_reg <= dma_dst_addr;
                else if (mem_axi_araddr[7:0] == 8'h08) s2_rdata_reg <= {16'd0, dma_len};
                else s2_rdata_reg <= 32'd0;
            end else if (s2_rvalid_reg && s2_axi_rready) begin
                s2_rvalid_reg <= 1'b0;
            end
        end
    end

    //==================================================================
    // 7. Core Module Instantiations
    //==================================================================
    picorv32_axi cpu (
        .clk            (clk),
        .resetn         (cpu_resetn),
        .trap           (trap),
        .mem_axi_awvalid(cpu_axi_awvalid),
        .mem_axi_awready(cpu_axi_awready),
        .mem_axi_awaddr (cpu_axi_awaddr),
        .mem_axi_awprot (cpu_axi_awprot),
        .mem_axi_wvalid (cpu_axi_wvalid),
        .mem_axi_wready (cpu_axi_wready),
        .mem_axi_wdata  (cpu_axi_wdata),
        .mem_axi_wstrb  (cpu_axi_wstrb),
        .mem_axi_bvalid (cpu_axi_bvalid),
        .mem_axi_bready (cpu_axi_bready),
        .mem_axi_arvalid(cpu_axi_arvalid),
        .mem_axi_arready(cpu_axi_arready),
        .mem_axi_araddr (cpu_axi_araddr),
        .mem_axi_arprot (cpu_axi_arprot),
        .mem_axi_rvalid (cpu_axi_rvalid),
        .mem_axi_rready (cpu_axi_rready),
        .mem_axi_rdata  (cpu_axi_rdata)
    );

    axi4_lite_ram #(.MEM_SIZE(32768)) s0_ram (
        .S_AXI_ACLK   (clk), .S_AXI_ARESETN(resetn),
        .S_AXI_AWADDR (mem_axi_awaddr), .S_AXI_AWPROT (mem_axi_awprot),
        .S_AXI_AWVALID(s0_axi_awvalid), .S_AXI_AWREADY(s0_axi_awready),
        .S_AXI_WDATA  (mem_axi_wdata),  .S_AXI_WSTRB  (mem_axi_wstrb),
        .S_AXI_WVALID (s0_axi_wvalid),  .S_AXI_WREADY (s0_axi_wready),
        .S_AXI_BRESP  (s0_axi_bresp),   .S_AXI_BVALID (s0_axi_bvalid), .S_AXI_BREADY (s0_axi_bready),
        .S_AXI_ARADDR (mem_axi_araddr), .S_AXI_ARPROT (mem_axi_arprot),
        .S_AXI_ARVALID(s0_axi_arvalid), .S_AXI_ARREADY(s0_axi_arready),
        .S_AXI_RDATA  (s0_axi_rdata),   .S_AXI_RRESP  (s0_axi_rresp),
        .S_AXI_RVALID (s0_axi_rvalid),  .S_AXI_RREADY (s0_axi_rready)
    );

    axi4_lite_mac #(.C_S_AXI_DATA_WIDTH(32), .C_S_AXI_ADDR_WIDTH(4)) s1_mac (
        .S_AXI_ACLK   (clk), .S_AXI_ARESETN(resetn),
        .S_AXI_AWADDR (mem_axi_awaddr[3:0]), .S_AXI_AWPROT (mem_axi_awprot),
        .S_AXI_AWVALID(s1_axi_awvalid), .S_AXI_AWREADY(s1_axi_awready),
        .S_AXI_WDATA  (mem_axi_wdata),  .S_AXI_WSTRB  (mem_axi_wstrb),
        .S_AXI_WVALID (s1_axi_wvalid),  .S_AXI_WREADY (s1_axi_wready),
        .S_AXI_BRESP  (s1_axi_bresp),   .S_AXI_BVALID (s1_axi_bvalid), .S_AXI_BREADY (s1_axi_bready),
        .S_AXI_ARADDR (mem_axi_araddr[3:0]), .S_AXI_ARPROT (mem_axi_arprot),
        .S_AXI_ARVALID(s1_axi_arvalid), .S_AXI_ARREADY(s1_axi_arready),
        .S_AXI_RDATA  (s1_axi_rdata),   .S_AXI_RRESP  (s1_axi_rresp),
        .S_AXI_RVALID (s1_axi_rvalid),  .S_AXI_RREADY (s1_axi_rready)
    );
endmodule
