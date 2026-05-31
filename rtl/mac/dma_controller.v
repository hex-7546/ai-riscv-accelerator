`timescale 1ns / 1ps

module dma_controller #(
    parameter integer C_M_AXI_DATA_WIDTH = 32,
    parameter integer C_M_AXI_ADDR_WIDTH = 32
) (
    input wire  CLK,
    input wire  RESETN,
    
    // Upgraded to 5-bit slave address to support offset 0x10
    input wire [4:0]  S_ADDR,
    input wire        S_WRITE,
    input wire [31:0] S_WDATA,
    
    // Master Bus Interface
    output reg [C_M_AXI_ADDR_WIDTH-1:0] M_ADDR,
    output reg [C_M_AXI_DATA_WIDTH-1:0] M_WDATA,
    output reg                          M_WRITE,
    input wire                          M_READY,
    
    // External Memory / System Signals
    input wire [31:0] ram_rdata,
    output reg [C_M_AXI_ADDR_WIDTH-1:0] ram_raddr,
    output reg                          dma_busy
);

    reg [31:0] dma_src;
    reg [31:0] dma_dst;
    reg [31:0] dma_len;
    reg [2:0]  dma_start; 
    reg [31:0] dma_stride;

    localparam IDLE = 2'b00, FETCH = 2'b01, UNPACK = 2'b10, STRIDE_LOOP = 2'b11;
    reg [1:0] state;
    
    reg [31:0] count;
    reg [1:0]  byte_sel;
    reg [31:0] latched_word;
    reg [2:0]  batch_count; 
    reg [31:0] base_src;

    always @(posedge CLK) begin
        if (!RESETN) begin
            dma_src <= 0; dma_dst <= 0; dma_len <= 0; dma_start <= 0; dma_stride <= 0;
        end else if (S_WRITE) begin
            case (S_ADDR)
                5'h00: dma_src    <= S_WDATA;
                5'h04: dma_dst    <= S_WDATA;
                5'h08: dma_len    <= S_WDATA;
                5'h0C: dma_start  <= S_WDATA[2:0];
                5'h10: dma_stride <= S_WDATA; 
            endcase
        end else if (state == IDLE) begin
            dma_start <= 0;
        end
    end

    always @(posedge CLK) begin
        if (!RESETN) begin
            state <= IDLE; M_WRITE <= 0; dma_busy <= 0; byte_sel <= 0; batch_count <= 0;
        end else begin
            case (state)
                IDLE: begin
                    M_WRITE <= 0;
                    if (dma_start[0]) begin
                        state       <= FETCH;
                        dma_busy    <= 1;
                        count       <= 0;
                        byte_sel    <= 0;
                        batch_count <= 0;
                        base_src    <= dma_src;
                        ram_raddr   <= dma_src;
                    end else begin
                        dma_busy <= 0;
                    end
                end

                FETCH: begin
                    ram_raddr <= base_src + (count << 2);
                    if (M_READY) begin
                        latched_word <= ram_rdata;
                        if (dma_start[1]) begin
                            state <= UNPACK;
                            byte_sel <= 0;
                        end else begin
                            M_ADDR  <= dma_dst + (batch_count * dma_stride) + (count << 2);
                            M_WDATA <= ram_rdata;
                            M_WRITE <= 1;
                            count   <= count + 1;
                            if ((count + 1) == dma_len) state <= STRIDE_LOOP;
                        end
                    end
                end

                UNPACK: begin
                    if (M_READY) begin
                        M_WRITE <= 1;
                        M_ADDR  <= dma_dst + (batch_count * dma_stride) + (count << 2) + byte_sel;
                        case (byte_sel)
                            2'd0: M_WDATA <= {{24{latched_word[7]}},  latched_word[7:0]};
                            2'd1: M_WDATA <= {{24{latched_word[15]}}, latched_word[15:8]};
                            2'd2: M_WDATA <= {{24{latched_word[23]}}, latched_word[23:16]};
                            2'd3: M_WDATA <= {{24{latched_word[31]}}, latched_word[31:24]};
                        endcase
                        byte_sel <= byte_sel + 1;
                        if (byte_sel == 3) begin
                            count <= count + 1;
                            if ((count + 1) == dma_len) state <= STRIDE_LOOP;
                            else                        state <= FETCH;
                        end
                    end
                end

                STRIDE_LOOP: begin
                    M_WRITE <= 0;
                    if (dma_start[2] && batch_count < 3) begin
                        batch_count <= batch_count + 1;
                        count       <= 0;
                        state       <= FETCH;
                    end else begin
                        state <= IDLE;
                    end
                end
            endcase
        end
    end
endmodule
