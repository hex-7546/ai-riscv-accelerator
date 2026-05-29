`timescale 1ns / 1ps

module dma_controller (
    input  wire        clk,
    input  wire        rst_n,
    
    input  wire [31:0] cpu_src_addr,
    input  wire [31:0] cpu_dst_addr,
    input  wire [15:0] cpu_transfer_len,
    input  wire        cpu_mode,
    input  wire        cpu_start,
    output reg         dma_busy,
    output reg         dma_done,
    
    output reg  [31:0] bus_addr,
    output reg         bus_read,
    output reg         bus_write,
    input  wire [31:0] bus_rdata,
    output reg  [31:0] bus_wdata,
    input  wire        bus_ready
);

    localparam IDLE      = 3'b000,
               READ_REQ  = 3'b001,
               READ_WAIT = 3'b010,
               WRITE_REQ = 3'b011,
               WRITE_WAIT= 3'b100;

    reg [2:0]  state;
    reg [31:0] src_ptr;
    reg [31:0] dst_ptr;
    reg [15:0] count;       
    
    reg [31:0] holding_reg; 
    reg [1:0]  unpack_cnt;  
    reg        unpack_mode; 

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state       <= IDLE;
            dma_busy    <= 1'b0;
            dma_done    <= 1'b0;
            bus_read    <= 1'b0;
            bus_write   <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    dma_done <= 1'b0;
                    if (cpu_start && cpu_transfer_len > 0) begin
                        src_ptr     <= cpu_src_addr;
                        dst_ptr     <= cpu_dst_addr;
                        count       <= cpu_transfer_len;
                        unpack_mode <= cpu_mode;
                        unpack_cnt  <= 2'd0;
                        dma_busy    <= 1'b1;
                        state       <= READ_REQ;
                    end
                end

                READ_REQ: begin
                    bus_addr <= src_ptr;
                    bus_read <= 1'b1;
                    state    <= READ_WAIT;
                end

                READ_WAIT: begin
                    if (bus_ready) begin
                        holding_reg <= bus_rdata;
                        bus_read    <= 1'b0;
                        state       <= WRITE_REQ;
                    end
                end

                WRITE_REQ: begin
                    bus_addr <= dst_ptr;
                    bus_write <= 1'b1;
                    state <= WRITE_WAIT;
                    
                    if (unpack_mode) begin
                        // Zero-Extend to match RISC-V unsigned char logic
                        case (unpack_cnt)
                            2'd0: bus_wdata <= {24'd0, holding_reg[7:0]};
                            2'd1: bus_wdata <= {24'd0, holding_reg[15:8]};
                            2'd2: bus_wdata <= {24'd0, holding_reg[23:16]};
                            2'd3: bus_wdata <= {24'd0, holding_reg[31:24]};
                        endcase
                    end else begin
                        bus_wdata <= holding_reg; 
                    end
                end

                WRITE_WAIT: begin
                    if (bus_ready) begin
                        bus_write <= 1'b0;
                        
                        if (unpack_mode) begin
                            if (unpack_cnt == 2'd3) begin
                                src_ptr <= src_ptr + 4; 
                                unpack_cnt <= 2'd0;
                            end else begin
                                unpack_cnt <= unpack_cnt + 1;
                            end
                        end else begin
                            src_ptr <= src_ptr + 4;
                        end
                        
                        if (dst_ptr != 32'h30000004 && dst_ptr != 32'h30000008) dst_ptr <= dst_ptr + 4;
                        
                        if (count == 1) begin
                            dma_busy <= 1'b0;
                            dma_done <= 1'b1;
                            state    <= IDLE;
                        end else begin
                            count <= count - 1;
                            if (unpack_mode && unpack_cnt != 2'd3) begin
                                state <= WRITE_REQ; 
                            end else begin
                                state <= READ_REQ;
                            end
                        end
                    end
                end
            endcase
        end
    end
endmodule
