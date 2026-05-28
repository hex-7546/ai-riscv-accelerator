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

    // Byte-addressed memory array (8192 individual bytes)
    reg [7:0] mem [0:(MEM_SIZE-1)];

    initial begin
        // Read the hex file. Because the array is now 8-bits wide, 
        // it perfectly matches the GCC byte-output format.
        $readmemh(`FIRMWARE_PATH, mem);
    end

    // AXI Read Path (Concatenate 4 bytes into a 32-bit word, Little-Endian)
    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            S_AXI_ARREADY <= 1'b0;
            S_AXI_RVALID  <= 1'b0;
            S_AXI_RDATA   <= 32'd0;
            S_AXI_RRESP   <= 2'b00;
        end else begin
            S_AXI_ARREADY <= 1'b1;
            
            if (S_AXI_ARVALID && S_AXI_ARREADY) begin
                // RISC-V is Little-Endian. The lowest address holds the least significant byte.
                // We mask the lower 2 bits of the address (ARADDR[31:2]) to align to 32-bit boundaries.
                S_AXI_RDATA <= { 
                    mem[{S_AXI_ARADDR[31:2], 2'b11}], // Byte 3 (MSB)
                    mem[{S_AXI_ARADDR[31:2], 2'b10}], // Byte 2
                    mem[{S_AXI_ARADDR[31:2], 2'b01}], // Byte 1
                    mem[{S_AXI_ARADDR[31:2], 2'b00}]  // Byte 0 (LSB)
                };
                S_AXI_RVALID <= 1'b1;
                S_AXI_RRESP  <= 2'b00;
            end else if (S_AXI_RREADY) begin
                S_AXI_RVALID <= 1'b0;
            end
        end
    end

    // AXI Write Path (Byte-enable strobes)
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
                if (S_AXI_WSTRB[0]) mem[{S_AXI_AWADDR[31:2], 2'b00}] <= S_AXI_WDATA[7:0];
                if (S_AXI_WSTRB[1]) mem[{S_AXI_AWADDR[31:2], 2'b01}] <= S_AXI_WDATA[15:8];
                if (S_AXI_WSTRB[2]) mem[{S_AXI_AWADDR[31:2], 2'b10}] <= S_AXI_WDATA[23:16];
                if (S_AXI_WSTRB[3]) mem[{S_AXI_AWADDR[31:2], 2'b11}] <= S_AXI_WDATA[31:24];
                S_AXI_BVALID <= 1'b1;
                S_AXI_BRESP  <= 2'b00;
            end else if (S_AXI_BREADY) begin
                S_AXI_BVALID <= 1'b0;
            end
        end
    end
endmodule
