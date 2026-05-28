`timescale 1ns / 1ps

/*
 * Module: soc_top
 * Description: Top-level SoC integrating a PicoRV32 CPU, an 8KB AXI4-Lite RAM, 
 *              and an INT8 MAC Accelerator.
 *
 * Address Map:
 *  - 0x0000_0000 to 0x2FFF_FFFF : Slave 0 (8KB RAM)
 *  - 0x3000_0000 to 0xFFFF_FFFF : Slave 1 (INT8 MAC Accelerator)
 */

module soc_top (
    input  wire clk,
    input  wire resetn,
    output wire trap
);

    //==================================================================
    // 1. CPU AXI Master Wires
    //==================================================================
    wire        mem_axi_awvalid;
    wire        mem_axi_awready;
    wire [31:0] mem_axi_awaddr;
    wire [ 2:0] mem_axi_awprot;
    
    wire        mem_axi_wvalid;
    wire        mem_axi_wready;
    wire [31:0] mem_axi_wdata;
    wire [ 3:0] mem_axi_wstrb;
    
    wire        mem_axi_bvalid;
    wire        mem_axi_bready;
    wire [ 1:0] mem_axi_bresp;
    
    wire        mem_axi_arvalid;
    wire        mem_axi_arready;
    wire [31:0] mem_axi_araddr;
    wire [ 2:0] mem_axi_arprot;
    
    wire        mem_axi_rvalid;
    wire        mem_axi_rready;
    wire [31:0] mem_axi_rdata;
    wire [ 1:0] mem_axi_rresp;

    //==================================================================
    // 2. Slave 0 Wires (AXI4-Lite RAM)
    //==================================================================
    wire        s0_axi_awvalid;
    wire        s0_axi_awready;
    wire        s0_axi_wvalid;
    wire        s0_axi_wready;
    wire        s0_axi_bvalid;
    wire        s0_axi_bready;
    wire [ 1:0] s0_axi_bresp;
    
    wire        s0_axi_arvalid;
    wire        s0_axi_arready;
    wire        s0_axi_rvalid;
    wire        s0_axi_rready;
    wire [31:0] s0_axi_rdata;
    wire [ 1:0] s0_axi_rresp;

    //==================================================================
    // 3. Slave 1 Wires (INT8 MAC Accelerator)
    //==================================================================
    wire        s1_axi_awvalid;
    wire        s1_axi_awready;
    wire        s1_axi_wvalid;
    wire        s1_axi_wready;
    wire        s1_axi_bvalid;
    wire        s1_axi_bready;
    wire [ 1:0] s1_axi_bresp;
    
    wire        s1_axi_arvalid;
    wire        s1_axi_arready;
    wire        s1_axi_rvalid;
    wire        s1_axi_rready;
    wire [31:0] s1_axi_rdata;
    wire [ 1:0] s1_axi_rresp;

    //==================================================================
    // 3.5 PicoRV32 Reset Stretcher
    //==================================================================
    reg [7:0] reset_counter = 8'd0;
    reg       cpu_resetn    = 1'b0;

    always @(posedge clk) begin
        if (!resetn) begin
            reset_counter <= 8'd0;
            cpu_resetn    <= 1'b0;
        end else begin
            // Wait for 255 clock cycles before letting the CPU boot
            if (reset_counter < 8'hFF) begin
                reset_counter <= reset_counter + 8'd1;
                cpu_resetn    <= 1'b0;
            end else begin
                cpu_resetn    <= 1'b1; // Wake up the CPU
            end
        end
    end

    //==================================================================
    // 4. AXI 1-to-2 Interconnect & Address Decoder
    //==================================================================
    
    //---------------------------------------------------------
    // Write Channel Routing Logic
    //---------------------------------------------------------
    // We must latch the write destination when the AW handshake occurs 
    // so the W and B channels route to the correct slave even if AWADDR is dropped.
    reg w_route_s1;
    always @(posedge clk) begin
        if (!resetn)
            w_route_s1 <= 1'b0;
        else if (mem_axi_awvalid && mem_axi_awready)
            w_route_s1 <= (mem_axi_awaddr >= 32'h3000_0000);
    end

    // If AWVALID is active, use the real-time address to route W (in case AW and W arrive together).
    // Otherwise, rely on the latched route for lagging W or B channels.
    wire current_w_route = mem_axi_awvalid ? (mem_axi_awaddr >= 32'h3000_0000) : w_route_s1;

    // Demultiplexing Master -> Slaves
    assign s0_axi_awvalid = mem_axi_awvalid && !current_w_route;
    assign s1_axi_awvalid = mem_axi_awvalid &&  current_w_route;
    
    assign s0_axi_wvalid  = mem_axi_wvalid  && !current_w_route;
    assign s1_axi_wvalid  = mem_axi_wvalid  &&  current_w_route;
    
    assign s0_axi_bready  = mem_axi_bready  && !current_w_route;
    assign s1_axi_bready  = mem_axi_bready  &&  current_w_route;

    // Multiplexing Slaves -> Master
    assign mem_axi_awready = current_w_route ? s1_axi_awready : s0_axi_awready;
    assign mem_axi_wready  = current_w_route ? s1_axi_wready  : s0_axi_wready;
    assign mem_axi_bvalid  = current_w_route ? s1_axi_bvalid  : s0_axi_bvalid;
    assign mem_axi_bresp   = current_w_route ? s1_axi_bresp   : s0_axi_bresp;

    //---------------------------------------------------------
    // Read Channel Routing Logic
    //---------------------------------------------------------
    reg r_route_s1;
    always @(posedge clk) begin
        if (!resetn)
            r_route_s1 <= 1'b0;
        else if (mem_axi_arvalid && mem_axi_arready)
            r_route_s1 <= (mem_axi_araddr >= 32'h3000_0000);
    end

    wire current_r_route = mem_axi_arvalid ? (mem_axi_araddr >= 32'h3000_0000) : r_route_s1;

    // Demultiplexing Master -> Slaves
    assign s0_axi_arvalid = mem_axi_arvalid && !current_r_route;
    assign s1_axi_arvalid = mem_axi_arvalid &&  current_r_route;
    
    assign s0_axi_rready  = mem_axi_rready  && !current_r_route;
    assign s1_axi_rready  = mem_axi_rready  &&  current_r_route;

    // Multiplexing Slaves -> Master
    assign mem_axi_arready = current_r_route ? s1_axi_arready : s0_axi_arready;
    assign mem_axi_rvalid  = current_r_route ? s1_axi_rvalid  : s0_axi_rvalid;
    assign mem_axi_rdata   = current_r_route ? s1_axi_rdata   : s0_axi_rdata;
    assign mem_axi_rresp   = current_r_route ? s1_axi_rresp   : s0_axi_rresp;

    //==================================================================
    // 5. Module Instantiations
    //==================================================================

    // PicoRV32 AXI CPU Master
    picorv32_axi cpu (
        .clk            (clk),
        .resetn         (cpu_resetn),
        .trap           (trap),
        
        // AXI4-Lite Master Interface
        .mem_axi_awvalid(mem_axi_awvalid),
        .mem_axi_awready(mem_axi_awready),
        .mem_axi_awaddr (mem_axi_awaddr),
        .mem_axi_awprot (mem_axi_awprot),
        
        .mem_axi_wvalid (mem_axi_wvalid),
        .mem_axi_wready (mem_axi_wready),
        .mem_axi_wdata  (mem_axi_wdata),
        .mem_axi_wstrb  (mem_axi_wstrb),
        
        .mem_axi_bvalid (mem_axi_bvalid),
        .mem_axi_bready (mem_axi_bready),
        
        .mem_axi_arvalid(mem_axi_arvalid),
        .mem_axi_arready(mem_axi_arready),
        .mem_axi_araddr (mem_axi_araddr),
        .mem_axi_arprot (mem_axi_arprot),
        
        .mem_axi_rvalid (mem_axi_rvalid),
        .mem_axi_rready (mem_axi_rready),
        .mem_axi_rdata  (mem_axi_rdata)
    );

    // Slave 0: AXI4-Lite RAM (Base: 0x0000_0000)
    axi4_lite_ram #(
        .MEM_SIZE(8192) // 8KB Memory
    ) s0_ram (
        .S_AXI_ACLK   (clk),
        .S_AXI_ARESETN(resetn),
        
        .S_AXI_AWADDR (mem_axi_awaddr),
        .S_AXI_AWPROT (mem_axi_awprot),
        .S_AXI_AWVALID(s0_axi_awvalid),
        .S_AXI_AWREADY(s0_axi_awready),
        
        .S_AXI_WDATA  (mem_axi_wdata),
        .S_AXI_WSTRB  (mem_axi_wstrb),
        .S_AXI_WVALID (s0_axi_wvalid),
        .S_AXI_WREADY (s0_axi_wready),
        
        .S_AXI_BRESP  (s0_axi_bresp),
        .S_AXI_BVALID (s0_axi_bvalid),
        .S_AXI_BREADY (s0_axi_bready),
        
        .S_AXI_ARADDR (mem_axi_araddr),
        .S_AXI_ARPROT (mem_axi_arprot),
        .S_AXI_ARVALID(s0_axi_arvalid),
        .S_AXI_ARREADY(s0_axi_arready),
        
        .S_AXI_RDATA  (s0_axi_rdata),
        .S_AXI_RRESP  (s0_axi_rresp),
        .S_AXI_RVALID (s0_axi_rvalid),
        .S_AXI_RREADY (s0_axi_rready)
    );

    // Slave 1: INT8 MAC Accelerator (Base: 0x3000_0000)
    axi4_lite_mac #(
        .C_S_AXI_DATA_WIDTH(32),
        .C_S_AXI_ADDR_WIDTH(4)
    ) s1_mac (
        .S_AXI_ACLK   (clk),
        .S_AXI_ARESETN(resetn),
        
        // Pass lower 4 bits for internal register decode (0x00, 0x04, 0x08, 0x0C)
        .S_AXI_AWADDR (mem_axi_awaddr[3:0]),
        .S_AXI_AWPROT (mem_axi_awprot),
        .S_AXI_AWVALID(s1_axi_awvalid),
        .S_AXI_AWREADY(s1_axi_awready),
        
        .S_AXI_WDATA  (mem_axi_wdata),
        .S_AXI_WSTRB  (mem_axi_wstrb),
        .S_AXI_WVALID (s1_axi_wvalid),
        .S_AXI_WREADY (s1_axi_wready),
        
        .S_AXI_BRESP  (s1_axi_bresp),
        .S_AXI_BVALID (s1_axi_bvalid),
        .S_AXI_BREADY (s1_axi_bready),
        
        .S_AXI_ARADDR (mem_axi_araddr[3:0]),
        .S_AXI_ARPROT (mem_axi_arprot),
        .S_AXI_ARVALID(s1_axi_arvalid),
        .S_AXI_ARREADY(s1_axi_arready),
        
        .S_AXI_RDATA  (s1_axi_rdata),
        .S_AXI_RRESP  (s1_axi_rresp),
        .S_AXI_RVALID (s1_axi_rvalid),
        .S_AXI_RREADY (s1_axi_rready)
    );

endmodule
