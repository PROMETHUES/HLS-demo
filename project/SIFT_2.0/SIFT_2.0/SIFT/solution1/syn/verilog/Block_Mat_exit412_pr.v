// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module Block_Mat_exit412_pr (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        rows0,
        cols0,
        rows1,
        cols1,
        thresh,
        p_src0_rows_V_out_din,
        p_src0_rows_V_out_full_n,
        p_src0_rows_V_out_write,
        p_src0_cols_V_out_din,
        p_src0_cols_V_out_full_n,
        p_src0_cols_V_out_write,
        p_src1_rows_V_out_din,
        p_src1_rows_V_out_full_n,
        p_src1_rows_V_out_write,
        p_src1_cols_V_out_din,
        p_src1_cols_V_out_full_n,
        p_src1_cols_V_out_write,
        src1_rows_out_din,
        src1_rows_out_full_n,
        src1_rows_out_write,
        src1_cols_out_din,
        src1_cols_out_full_n,
        src1_cols_out_write,
        descriptors0_length_out_din,
        descriptors0_length_out_full_n,
        descriptors0_length_out_write,
        descriptors1_length_out_din,
        descriptors1_length_out_full_n,
        descriptors1_length_out_write,
        matches_length_out_din,
        matches_length_out_full_n,
        matches_length_out_write,
        thresh_out_din,
        thresh_out_full_n,
        thresh_out_write
);

parameter    ap_ST_fsm_state1 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [31:0] rows0;
input  [31:0] cols0;
input  [31:0] rows1;
input  [31:0] cols1;
input  [31:0] thresh;
output  [31:0] p_src0_rows_V_out_din;
input   p_src0_rows_V_out_full_n;
output   p_src0_rows_V_out_write;
output  [31:0] p_src0_cols_V_out_din;
input   p_src0_cols_V_out_full_n;
output   p_src0_cols_V_out_write;
output  [31:0] p_src1_rows_V_out_din;
input   p_src1_rows_V_out_full_n;
output   p_src1_rows_V_out_write;
output  [31:0] p_src1_cols_V_out_din;
input   p_src1_cols_V_out_full_n;
output   p_src1_cols_V_out_write;
output  [31:0] src1_rows_out_din;
input   src1_rows_out_full_n;
output   src1_rows_out_write;
output  [31:0] src1_cols_out_din;
input   src1_cols_out_full_n;
output   src1_cols_out_write;
output  [0:0] descriptors0_length_out_din;
input   descriptors0_length_out_full_n;
output   descriptors0_length_out_write;
output  [0:0] descriptors1_length_out_din;
input   descriptors1_length_out_full_n;
output   descriptors1_length_out_write;
output  [0:0] matches_length_out_din;
input   matches_length_out_full_n;
output   matches_length_out_write;
output  [31:0] thresh_out_din;
input   thresh_out_full_n;
output   thresh_out_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg p_src0_rows_V_out_write;
reg p_src0_cols_V_out_write;
reg p_src1_rows_V_out_write;
reg p_src1_cols_V_out_write;
reg src1_rows_out_write;
reg src1_cols_out_write;
reg descriptors0_length_out_write;
reg descriptors1_length_out_write;
reg matches_length_out_write;
reg thresh_out_write;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    p_src0_rows_V_out_blk_n;
reg    p_src0_cols_V_out_blk_n;
reg    p_src1_rows_V_out_blk_n;
reg    p_src1_cols_V_out_blk_n;
reg    src1_rows_out_blk_n;
reg    src1_cols_out_blk_n;
reg    descriptors0_length_out_blk_n;
reg    descriptors1_length_out_blk_n;
reg    matches_length_out_blk_n;
reg    thresh_out_blk_n;
reg    ap_block_state1;
reg   [0:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 1'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        descriptors0_length_out_blk_n = descriptors0_length_out_full_n;
    end else begin
        descriptors0_length_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        descriptors0_length_out_write = 1'b1;
    end else begin
        descriptors0_length_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        descriptors1_length_out_blk_n = descriptors1_length_out_full_n;
    end else begin
        descriptors1_length_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        descriptors1_length_out_write = 1'b1;
    end else begin
        descriptors1_length_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        matches_length_out_blk_n = matches_length_out_full_n;
    end else begin
        matches_length_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        matches_length_out_write = 1'b1;
    end else begin
        matches_length_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        p_src0_cols_V_out_blk_n = p_src0_cols_V_out_full_n;
    end else begin
        p_src0_cols_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src0_cols_V_out_write = 1'b1;
    end else begin
        p_src0_cols_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        p_src0_rows_V_out_blk_n = p_src0_rows_V_out_full_n;
    end else begin
        p_src0_rows_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src0_rows_V_out_write = 1'b1;
    end else begin
        p_src0_rows_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        p_src1_cols_V_out_blk_n = p_src1_cols_V_out_full_n;
    end else begin
        p_src1_cols_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src1_cols_V_out_write = 1'b1;
    end else begin
        p_src1_cols_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        p_src1_rows_V_out_blk_n = p_src1_rows_V_out_full_n;
    end else begin
        p_src1_rows_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        p_src1_rows_V_out_write = 1'b1;
    end else begin
        p_src1_rows_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        src1_cols_out_blk_n = src1_cols_out_full_n;
    end else begin
        src1_cols_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        src1_cols_out_write = 1'b1;
    end else begin
        src1_cols_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        src1_rows_out_blk_n = src1_rows_out_full_n;
    end else begin
        src1_rows_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        src1_rows_out_write = 1'b1;
    end else begin
        src1_rows_out_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        thresh_out_blk_n = thresh_out_full_n;
    end else begin
        thresh_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        thresh_out_write = 1'b1;
    end else begin
        thresh_out_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

always @ (*) begin
    ap_block_state1 = ((thresh_out_full_n == 1'b0) | (matches_length_out_full_n == 1'b0) | (ap_start == 1'b0) | (descriptors1_length_out_full_n == 1'b0) | (descriptors0_length_out_full_n == 1'b0) | (src1_cols_out_full_n == 1'b0) | (src1_rows_out_full_n == 1'b0) | (p_src1_cols_V_out_full_n == 1'b0) | (p_src1_rows_V_out_full_n == 1'b0) | (p_src0_cols_V_out_full_n == 1'b0) | (p_src0_rows_V_out_full_n == 1'b0) | (ap_done_reg == 1'b1));
end

assign descriptors0_length_out_din = 1'd0;

assign descriptors1_length_out_din = 1'd0;

assign matches_length_out_din = 1'd0;

assign p_src0_cols_V_out_din = cols0;

assign p_src0_rows_V_out_din = rows0;

assign p_src1_cols_V_out_din = cols1;

assign p_src1_rows_V_out_din = rows1;

assign src1_cols_out_din = cols1;

assign src1_rows_out_din = rows1;

assign thresh_out_din = thresh;

endmodule //Block_Mat_exit412_pr