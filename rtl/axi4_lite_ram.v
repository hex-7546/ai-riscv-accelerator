`timescale 1ns / 1ps

module axi4_lite_ram #(
    parameter MEM_SIZE = 8192 // 8KB
)(
    input  wire        S_AXI_ACLK,
    input  wire        S_AXI_ARESETN,
    input  wire [31:0] S_AXI_AWADDR,
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
    input  wire [31:0] S_AXI_ARADDR,
    input  wire [2:0]  S_AXI_ARPROT,
    input  wire        S_AXI_ARVALID,
    output reg         S_AXI_ARREADY,
    output reg  [31:0] S_AXI_RDATA,
    output reg  [1:0]  S_AXI_RRESP,
    output reg         S_AXI_RVALID,
    input  wire        S_AXI_RREADY
);

    // 32-bit wide memory array. Vivado will map this perfectly to Block RAM.
    (* ram_style = "block" *) reg [31:0] mem [0:(MEM_SIZE/4)-1];

    // Temporary elaboration array for loading GCC's byte-addressed hex
    reg [7:0] mem_8bit [0:MEM_SIZE-1];

    integer i;
    initial begin
        // 1. Initialize temporary array to zero to prevent X-propagation
        for (i = 0; i < MEM_SIZE; i = i + 1) begin
            mem_8bit[i] = 8'h00;
        end

        // 2. Load the byte-addressed hex file
        $readmemh(`FIRMWARE_PATH, mem_8bit);

        // 3. Pack the bytes into the 32-bit BRAM array (RISC-V is Little-Endian)
        for (i = 0; i < MEM_SIZE/4; i = i + 1) begin
            mem[i] = {mem_8bit[i*4+3], mem_8bit[i*4+2], mem_8bit[i*4+1], mem_8bit[i*4+0]};
        end
    end

    // AXI Read Path 
    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            S_AXI_ARREADY <= 1'b0;
            S_AXI_RVALID  <= 1'b0;
            S_AXI_RDATA   <= 32'd0;
            S_AXI_RRESP   <= 2'b00;
        end else begin
            S_AXI_ARREADY <= 1'b1;
            
            if (S_AXI_ARVALID && S_AXI_ARREADY) begin
                // Read exactly one 32-bit word directly from the word-aligned address
                S_AXI_RDATA  <= mem[S_AXI_ARADDR[31:2]];
                S_AXI_RVALID <= 1'b1;
                S_AXI_RRESP  <= 2'b00;
            end else if (S_AXI_RREADY) begin
                S_AXI_RVALID <= 1'b0;
            end
        end
    end

    // AXI Write Path with standard Block RAM byte-strobes
    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            S_AXI_AWREADY <= 1'b0;
            S_AXI_WREADY  <= 1'b0;
            S_AXI_BVALID  <= 1'b0;
            S_AXI_BRESP   <= 2'b00;
        end else begin
            S_AXI_AWREADY <= 1'b1;
            S_AXI_WREADY  <= 1'b1;
            
            if (S_AXI_AWVALID && S_AXI_WVALID && !S_AXI_BVALID) begin
                if (S_AXI_WSTRB[0]) mem[S_AXI_AWADDR[31:2]][7:0]   <= S_AXI_WDATA[7:0];
                if (S_AXI_WSTRB[1]) mem[S_AXI_AWADDR[31:2]][15:8]  <= S_AXI_WDATA[15:8];
                if (S_AXI_WSTRB[2]) mem[S_AXI_AWADDR[31:2]][23:16] <= S_AXI_WDATA[23:16];
                if (S_AXI_WSTRB[3]) mem[S_AXI_AWADDR[31:2]][31:24] <= S_AXI_WDATA[31:24];
                S_AXI_BVALID <= 1'b1;
                S_AXI_BRESP  <= 2'b00;
            end else if (S_AXI_BREADY) begin
                S_AXI_BVALID <= 1'b0;
            end
        end
    end
endmodule
