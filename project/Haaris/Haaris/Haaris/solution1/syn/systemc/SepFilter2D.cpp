// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "SepFilter2D.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic SepFilter2D::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<35> SepFilter2D::ap_const_lv35_0 = "00000000000000000000000000000000000";
const sc_logic SepFilter2D::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<2> SepFilter2D::ap_const_lv2_0 = "00";
const sc_lv<2> SepFilter2D::ap_const_lv2_1 = "1";
const bool SepFilter2D::ap_const_boolean_1 = true;

SepFilter2D::SepFilter2D(sc_module_name name) : sc_module(name), mVcdFile(0) {
    SepFilter2D_entry236_U0 = new SepFilter2D_entry236("SepFilter2D_entry236_U0");
    SepFilter2D_entry236_U0->ap_clk(ap_clk);
    SepFilter2D_entry236_U0->ap_rst(ap_rst);
    SepFilter2D_entry236_U0->ap_start(SepFilter2D_entry236_U0_ap_start);
    SepFilter2D_entry236_U0->start_full_n(SepFilter2D_entry236_U0_start_full_n);
    SepFilter2D_entry236_U0->ap_done(SepFilter2D_entry236_U0_ap_done);
    SepFilter2D_entry236_U0->ap_continue(SepFilter2D_entry236_U0_ap_continue);
    SepFilter2D_entry236_U0->ap_idle(SepFilter2D_entry236_U0_ap_idle);
    SepFilter2D_entry236_U0->ap_ready(SepFilter2D_entry236_U0_ap_ready);
    SepFilter2D_entry236_U0->start_out(SepFilter2D_entry236_U0_start_out);
    SepFilter2D_entry236_U0->start_write(SepFilter2D_entry236_U0_start_write);
    SepFilter2D_entry236_U0->p_src_rows_V_read(p_src_rows_V_read);
    SepFilter2D_entry236_U0->p_src_cols_V_read(p_src_cols_V_read);
    SepFilter2D_entry236_U0->p_src_rows_V_read_out_din(SepFilter2D_entry236_U0_p_src_rows_V_read_out_din);
    SepFilter2D_entry236_U0->p_src_rows_V_read_out_full_n(p_src_rows_V_read_c_full_n);
    SepFilter2D_entry236_U0->p_src_rows_V_read_out_write(SepFilter2D_entry236_U0_p_src_rows_V_read_out_write);
    SepFilter2D_entry236_U0->p_src_cols_V_read_out_din(SepFilter2D_entry236_U0_p_src_cols_V_read_out_din);
    SepFilter2D_entry236_U0->p_src_cols_V_read_out_full_n(p_src_cols_V_read_c_full_n);
    SepFilter2D_entry236_U0->p_src_cols_V_read_out_write(SepFilter2D_entry236_U0_p_src_cols_V_read_out_write);
    SepFilter2D_entry236_U0->p_read2_out_din(SepFilter2D_entry236_U0_p_read2_out_din);
    SepFilter2D_entry236_U0->p_read2_out_full_n(p_read2_c_full_n);
    SepFilter2D_entry236_U0->p_read2_out_write(SepFilter2D_entry236_U0_p_read2_out_write);
    SepFilter2D_entry236_U0->p_read3_out_din(SepFilter2D_entry236_U0_p_read3_out_din);
    SepFilter2D_entry236_U0->p_read3_out_full_n(p_read3_c_full_n);
    SepFilter2D_entry236_U0->p_read3_out_write(SepFilter2D_entry236_U0_p_read3_out_write);
    SepFilter2D_Block_p_1_U0 = new SepFilter2D_Block_p_1("SepFilter2D_Block_p_1_U0");
    SepFilter2D_Block_p_1_U0->ap_clk(ap_clk);
    SepFilter2D_Block_p_1_U0->ap_rst(ap_rst);
    SepFilter2D_Block_p_1_U0->ap_start(SepFilter2D_Block_p_1_U0_ap_start);
    SepFilter2D_Block_p_1_U0->ap_done(SepFilter2D_Block_p_1_U0_ap_done);
    SepFilter2D_Block_p_1_U0->ap_continue(SepFilter2D_Block_p_1_U0_ap_continue);
    SepFilter2D_Block_p_1_U0->ap_idle(SepFilter2D_Block_p_1_U0_ap_idle);
    SepFilter2D_Block_p_1_U0->ap_ready(SepFilter2D_Block_p_1_U0_ap_ready);
    SepFilter2D_Block_p_1_U0->p_read3_dout(p_read3_c_dout);
    SepFilter2D_Block_p_1_U0->p_read3_empty_n(p_read3_c_empty_n);
    SepFilter2D_Block_p_1_U0->p_read3_read(SepFilter2D_Block_p_1_U0_p_read3_read);
    SepFilter2D_Block_p_1_U0->ap_return(SepFilter2D_Block_p_1_U0_ap_return);
    column_filter_U0 = new column_filter("column_filter_U0");
    column_filter_U0->ap_clk(ap_clk);
    column_filter_U0->ap_rst(ap_rst);
    column_filter_U0->ap_start(column_filter_U0_ap_start);
    column_filter_U0->start_full_n(start_for_row_filter_U0_full_n);
    column_filter_U0->ap_done(column_filter_U0_ap_done);
    column_filter_U0->ap_continue(column_filter_U0_ap_continue);
    column_filter_U0->ap_idle(column_filter_U0_ap_idle);
    column_filter_U0->ap_ready(column_filter_U0_ap_ready);
    column_filter_U0->start_out(column_filter_U0_start_out);
    column_filter_U0->start_write(column_filter_U0_start_write);
    column_filter_U0->p_src_data_stream_V_V_dout(p_src_data_stream_V_V_dout);
    column_filter_U0->p_src_data_stream_V_V_empty_n(p_src_data_stream_V_V_empty_n);
    column_filter_U0->p_src_data_stream_V_V_read(column_filter_U0_p_src_data_stream_V_V_read);
    column_filter_U0->p_dst_V_V_din(column_filter_U0_p_dst_V_V_din);
    column_filter_U0->p_dst_V_V_full_n(tempY_stream_0_V_V_full_n);
    column_filter_U0->p_dst_V_V_write(column_filter_U0_p_dst_V_V_write);
    column_filter_U0->p_read(this_assign_1_channe_dout);
    column_filter_U0->rows_dout(p_src_rows_V_read_c_dout);
    column_filter_U0->rows_empty_n(p_src_rows_V_read_c_empty_n);
    column_filter_U0->rows_read(column_filter_U0_rows_read);
    column_filter_U0->cols_dout(p_src_cols_V_read_c_dout);
    column_filter_U0->cols_empty_n(p_src_cols_V_read_c_empty_n);
    column_filter_U0->cols_read(column_filter_U0_cols_read);
    column_filter_U0->rows_out_din(column_filter_U0_rows_out_din);
    column_filter_U0->rows_out_full_n(p_src_rows_V_read_c4_full_n);
    column_filter_U0->rows_out_write(column_filter_U0_rows_out_write);
    column_filter_U0->cols_out_din(column_filter_U0_cols_out_din);
    column_filter_U0->cols_out_full_n(p_src_cols_V_read_c5_full_n);
    column_filter_U0->cols_out_write(column_filter_U0_cols_out_write);
    SepFilter2D_Block_p_U0 = new SepFilter2D_Block_p("SepFilter2D_Block_p_U0");
    SepFilter2D_Block_p_U0->ap_clk(ap_clk);
    SepFilter2D_Block_p_U0->ap_rst(ap_rst);
    SepFilter2D_Block_p_U0->ap_start(SepFilter2D_Block_p_U0_ap_start);
    SepFilter2D_Block_p_U0->ap_done(SepFilter2D_Block_p_U0_ap_done);
    SepFilter2D_Block_p_U0->ap_continue(SepFilter2D_Block_p_U0_ap_continue);
    SepFilter2D_Block_p_U0->ap_idle(SepFilter2D_Block_p_U0_ap_idle);
    SepFilter2D_Block_p_U0->ap_ready(SepFilter2D_Block_p_U0_ap_ready);
    SepFilter2D_Block_p_U0->p_read2_dout(p_read2_c_dout);
    SepFilter2D_Block_p_U0->p_read2_empty_n(p_read2_c_empty_n);
    SepFilter2D_Block_p_U0->p_read2_read(SepFilter2D_Block_p_U0_p_read2_read);
    SepFilter2D_Block_p_U0->this_assign_24_0_out_din(SepFilter2D_Block_p_U0_this_assign_24_0_out_din);
    SepFilter2D_Block_p_U0->this_assign_24_0_out_full_n(this_assign_24_0_c_full_n);
    SepFilter2D_Block_p_U0->this_assign_24_0_out_write(SepFilter2D_Block_p_U0_this_assign_24_0_out_write);
    row_filter_U0 = new row_filter("row_filter_U0");
    row_filter_U0->ap_clk(ap_clk);
    row_filter_U0->ap_rst(ap_rst);
    row_filter_U0->ap_start(row_filter_U0_ap_start);
    row_filter_U0->ap_done(row_filter_U0_ap_done);
    row_filter_U0->ap_continue(row_filter_U0_ap_continue);
    row_filter_U0->ap_idle(row_filter_U0_ap_idle);
    row_filter_U0->ap_ready(row_filter_U0_ap_ready);
    row_filter_U0->p_src_V_V_dout(tempY_stream_0_V_V_dout);
    row_filter_U0->p_src_V_V_empty_n(tempY_stream_0_V_V_empty_n);
    row_filter_U0->p_src_V_V_read(row_filter_U0_p_src_V_V_read);
    row_filter_U0->p_dst_data_stream_V_V_din(row_filter_U0_p_dst_data_stream_V_V_din);
    row_filter_U0->p_dst_data_stream_V_V_full_n(p_dst_data_stream_V_V_full_n);
    row_filter_U0->p_dst_data_stream_V_V_write(row_filter_U0_p_dst_data_stream_V_V_write);
    row_filter_U0->p_anchor_x_dout(this_assign_24_0_c_dout);
    row_filter_U0->p_anchor_x_empty_n(this_assign_24_0_c_empty_n);
    row_filter_U0->p_anchor_x_read(row_filter_U0_p_anchor_x_read);
    row_filter_U0->rows_dout(p_src_rows_V_read_c4_dout);
    row_filter_U0->rows_empty_n(p_src_rows_V_read_c4_empty_n);
    row_filter_U0->rows_read(row_filter_U0_rows_read);
    row_filter_U0->cols_dout(p_src_cols_V_read_c5_dout);
    row_filter_U0->cols_empty_n(p_src_cols_V_read_c5_empty_n);
    row_filter_U0->cols_read(row_filter_U0_cols_read);
    p_src_rows_V_read_c_U = new fifo_w32_d3_A("p_src_rows_V_read_c_U");
    p_src_rows_V_read_c_U->clk(ap_clk);
    p_src_rows_V_read_c_U->reset(ap_rst);
    p_src_rows_V_read_c_U->if_read_ce(ap_var_for_const0);
    p_src_rows_V_read_c_U->if_write_ce(ap_var_for_const0);
    p_src_rows_V_read_c_U->if_din(SepFilter2D_entry236_U0_p_src_rows_V_read_out_din);
    p_src_rows_V_read_c_U->if_full_n(p_src_rows_V_read_c_full_n);
    p_src_rows_V_read_c_U->if_write(SepFilter2D_entry236_U0_p_src_rows_V_read_out_write);
    p_src_rows_V_read_c_U->if_dout(p_src_rows_V_read_c_dout);
    p_src_rows_V_read_c_U->if_empty_n(p_src_rows_V_read_c_empty_n);
    p_src_rows_V_read_c_U->if_read(column_filter_U0_rows_read);
    p_src_cols_V_read_c_U = new fifo_w32_d3_A("p_src_cols_V_read_c_U");
    p_src_cols_V_read_c_U->clk(ap_clk);
    p_src_cols_V_read_c_U->reset(ap_rst);
    p_src_cols_V_read_c_U->if_read_ce(ap_var_for_const0);
    p_src_cols_V_read_c_U->if_write_ce(ap_var_for_const0);
    p_src_cols_V_read_c_U->if_din(SepFilter2D_entry236_U0_p_src_cols_V_read_out_din);
    p_src_cols_V_read_c_U->if_full_n(p_src_cols_V_read_c_full_n);
    p_src_cols_V_read_c_U->if_write(SepFilter2D_entry236_U0_p_src_cols_V_read_out_write);
    p_src_cols_V_read_c_U->if_dout(p_src_cols_V_read_c_dout);
    p_src_cols_V_read_c_U->if_empty_n(p_src_cols_V_read_c_empty_n);
    p_src_cols_V_read_c_U->if_read(column_filter_U0_cols_read);
    p_read2_c_U = new fifo_w1_d2_A("p_read2_c_U");
    p_read2_c_U->clk(ap_clk);
    p_read2_c_U->reset(ap_rst);
    p_read2_c_U->if_read_ce(ap_var_for_const0);
    p_read2_c_U->if_write_ce(ap_var_for_const0);
    p_read2_c_U->if_din(SepFilter2D_entry236_U0_p_read2_out_din);
    p_read2_c_U->if_full_n(p_read2_c_full_n);
    p_read2_c_U->if_write(SepFilter2D_entry236_U0_p_read2_out_write);
    p_read2_c_U->if_dout(p_read2_c_dout);
    p_read2_c_U->if_empty_n(p_read2_c_empty_n);
    p_read2_c_U->if_read(SepFilter2D_Block_p_U0_p_read2_read);
    p_read3_c_U = new fifo_w1_d2_A("p_read3_c_U");
    p_read3_c_U->clk(ap_clk);
    p_read3_c_U->reset(ap_rst);
    p_read3_c_U->if_read_ce(ap_var_for_const0);
    p_read3_c_U->if_write_ce(ap_var_for_const0);
    p_read3_c_U->if_din(SepFilter2D_entry236_U0_p_read3_out_din);
    p_read3_c_U->if_full_n(p_read3_c_full_n);
    p_read3_c_U->if_write(SepFilter2D_entry236_U0_p_read3_out_write);
    p_read3_c_U->if_dout(p_read3_c_dout);
    p_read3_c_U->if_empty_n(p_read3_c_empty_n);
    p_read3_c_U->if_read(SepFilter2D_Block_p_1_U0_p_read3_read);
    this_assign_1_channe_U = new fifo_w1_d2_A("this_assign_1_channe_U");
    this_assign_1_channe_U->clk(ap_clk);
    this_assign_1_channe_U->reset(ap_rst);
    this_assign_1_channe_U->if_read_ce(ap_var_for_const0);
    this_assign_1_channe_U->if_write_ce(ap_var_for_const0);
    this_assign_1_channe_U->if_din(SepFilter2D_Block_p_1_U0_ap_return);
    this_assign_1_channe_U->if_full_n(this_assign_1_channe_full_n);
    this_assign_1_channe_U->if_write(SepFilter2D_Block_p_1_U0_ap_done);
    this_assign_1_channe_U->if_dout(this_assign_1_channe_dout);
    this_assign_1_channe_U->if_empty_n(this_assign_1_channe_empty_n);
    this_assign_1_channe_U->if_read(column_filter_U0_ap_ready);
    tempY_stream_0_V_V_U = new fifo_w40_d2_A("tempY_stream_0_V_V_U");
    tempY_stream_0_V_V_U->clk(ap_clk);
    tempY_stream_0_V_V_U->reset(ap_rst);
    tempY_stream_0_V_V_U->if_read_ce(ap_var_for_const0);
    tempY_stream_0_V_V_U->if_write_ce(ap_var_for_const0);
    tempY_stream_0_V_V_U->if_din(column_filter_U0_p_dst_V_V_din);
    tempY_stream_0_V_V_U->if_full_n(tempY_stream_0_V_V_full_n);
    tempY_stream_0_V_V_U->if_write(column_filter_U0_p_dst_V_V_write);
    tempY_stream_0_V_V_U->if_dout(tempY_stream_0_V_V_dout);
    tempY_stream_0_V_V_U->if_empty_n(tempY_stream_0_V_V_empty_n);
    tempY_stream_0_V_V_U->if_read(row_filter_U0_p_src_V_V_read);
    p_src_rows_V_read_c4_U = new fifo_w32_d2_A("p_src_rows_V_read_c4_U");
    p_src_rows_V_read_c4_U->clk(ap_clk);
    p_src_rows_V_read_c4_U->reset(ap_rst);
    p_src_rows_V_read_c4_U->if_read_ce(ap_var_for_const0);
    p_src_rows_V_read_c4_U->if_write_ce(ap_var_for_const0);
    p_src_rows_V_read_c4_U->if_din(column_filter_U0_rows_out_din);
    p_src_rows_V_read_c4_U->if_full_n(p_src_rows_V_read_c4_full_n);
    p_src_rows_V_read_c4_U->if_write(column_filter_U0_rows_out_write);
    p_src_rows_V_read_c4_U->if_dout(p_src_rows_V_read_c4_dout);
    p_src_rows_V_read_c4_U->if_empty_n(p_src_rows_V_read_c4_empty_n);
    p_src_rows_V_read_c4_U->if_read(row_filter_U0_rows_read);
    p_src_cols_V_read_c5_U = new fifo_w32_d2_A("p_src_cols_V_read_c5_U");
    p_src_cols_V_read_c5_U->clk(ap_clk);
    p_src_cols_V_read_c5_U->reset(ap_rst);
    p_src_cols_V_read_c5_U->if_read_ce(ap_var_for_const0);
    p_src_cols_V_read_c5_U->if_write_ce(ap_var_for_const0);
    p_src_cols_V_read_c5_U->if_din(column_filter_U0_cols_out_din);
    p_src_cols_V_read_c5_U->if_full_n(p_src_cols_V_read_c5_full_n);
    p_src_cols_V_read_c5_U->if_write(column_filter_U0_cols_out_write);
    p_src_cols_V_read_c5_U->if_dout(p_src_cols_V_read_c5_dout);
    p_src_cols_V_read_c5_U->if_empty_n(p_src_cols_V_read_c5_empty_n);
    p_src_cols_V_read_c5_U->if_read(row_filter_U0_cols_read);
    this_assign_24_0_c_U = new fifo_w1_d3_A("this_assign_24_0_c_U");
    this_assign_24_0_c_U->clk(ap_clk);
    this_assign_24_0_c_U->reset(ap_rst);
    this_assign_24_0_c_U->if_read_ce(ap_var_for_const0);
    this_assign_24_0_c_U->if_write_ce(ap_var_for_const0);
    this_assign_24_0_c_U->if_din(SepFilter2D_Block_p_U0_this_assign_24_0_out_din);
    this_assign_24_0_c_U->if_full_n(this_assign_24_0_c_full_n);
    this_assign_24_0_c_U->if_write(SepFilter2D_Block_p_U0_this_assign_24_0_out_write);
    this_assign_24_0_c_U->if_dout(this_assign_24_0_c_dout);
    this_assign_24_0_c_U->if_empty_n(this_assign_24_0_c_empty_n);
    this_assign_24_0_c_U->if_read(row_filter_U0_p_anchor_x_read);
    start_for_SepFiltIfE_U = new start_for_SepFiltIfE("start_for_SepFiltIfE_U");
    start_for_SepFiltIfE_U->clk(ap_clk);
    start_for_SepFiltIfE_U->reset(ap_rst);
    start_for_SepFiltIfE_U->if_read_ce(ap_var_for_const0);
    start_for_SepFiltIfE_U->if_write_ce(ap_var_for_const0);
    start_for_SepFiltIfE_U->if_din(start_for_SepFilter2D_Block_p_1_U0_din);
    start_for_SepFiltIfE_U->if_full_n(start_for_SepFilter2D_Block_p_1_U0_full_n);
    start_for_SepFiltIfE_U->if_write(SepFilter2D_entry236_U0_start_write);
    start_for_SepFiltIfE_U->if_dout(start_for_SepFilter2D_Block_p_1_U0_dout);
    start_for_SepFiltIfE_U->if_empty_n(start_for_SepFilter2D_Block_p_1_U0_empty_n);
    start_for_SepFiltIfE_U->if_read(SepFilter2D_Block_p_1_U0_ap_ready);
    start_for_SepFiltJfO_U = new start_for_SepFiltJfO("start_for_SepFiltJfO_U");
    start_for_SepFiltJfO_U->clk(ap_clk);
    start_for_SepFiltJfO_U->reset(ap_rst);
    start_for_SepFiltJfO_U->if_read_ce(ap_var_for_const0);
    start_for_SepFiltJfO_U->if_write_ce(ap_var_for_const0);
    start_for_SepFiltJfO_U->if_din(start_for_SepFilter2D_Block_p_U0_din);
    start_for_SepFiltJfO_U->if_full_n(start_for_SepFilter2D_Block_p_U0_full_n);
    start_for_SepFiltJfO_U->if_write(SepFilter2D_entry236_U0_start_write);
    start_for_SepFiltJfO_U->if_dout(start_for_SepFilter2D_Block_p_U0_dout);
    start_for_SepFiltJfO_U->if_empty_n(start_for_SepFilter2D_Block_p_U0_empty_n);
    start_for_SepFiltJfO_U->if_read(SepFilter2D_Block_p_U0_ap_ready);
    start_for_row_filKfY_U = new start_for_row_filKfY("start_for_row_filKfY_U");
    start_for_row_filKfY_U->clk(ap_clk);
    start_for_row_filKfY_U->reset(ap_rst);
    start_for_row_filKfY_U->if_read_ce(ap_var_for_const0);
    start_for_row_filKfY_U->if_write_ce(ap_var_for_const0);
    start_for_row_filKfY_U->if_din(start_for_row_filter_U0_din);
    start_for_row_filKfY_U->if_full_n(start_for_row_filter_U0_full_n);
    start_for_row_filKfY_U->if_write(column_filter_U0_start_write);
    start_for_row_filKfY_U->if_dout(start_for_row_filter_U0_dout);
    start_for_row_filKfY_U->if_empty_n(start_for_row_filter_U0_empty_n);
    start_for_row_filKfY_U->if_read(row_filter_U0_ap_ready);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_SepFilter2D_Block_p_1_U0_ap_continue);
    sensitive << ( this_assign_1_channe_full_n );

    SC_METHOD(thread_SepFilter2D_Block_p_1_U0_ap_start);
    sensitive << ( start_for_SepFilter2D_Block_p_1_U0_empty_n );

    SC_METHOD(thread_SepFilter2D_Block_p_1_U0_start_full_n);

    SC_METHOD(thread_SepFilter2D_Block_p_1_U0_start_write);

    SC_METHOD(thread_SepFilter2D_Block_p_U0_ap_continue);

    SC_METHOD(thread_SepFilter2D_Block_p_U0_ap_start);
    sensitive << ( start_for_SepFilter2D_Block_p_U0_empty_n );

    SC_METHOD(thread_SepFilter2D_Block_p_U0_start_full_n);

    SC_METHOD(thread_SepFilter2D_Block_p_U0_start_write);

    SC_METHOD(thread_SepFilter2D_entry236_U0_ap_continue);

    SC_METHOD(thread_SepFilter2D_entry236_U0_ap_start);
    sensitive << ( ap_start );
    sensitive << ( ap_sync_reg_SepFilter2D_entry236_U0_ap_ready );

    SC_METHOD(thread_SepFilter2D_entry236_U0_start_full_n);
    sensitive << ( start_for_SepFilter2D_Block_p_1_U0_full_n );
    sensitive << ( start_for_SepFilter2D_Block_p_U0_full_n );

    SC_METHOD(thread_ap_channel_done_this_assign_1_channe);
    sensitive << ( SepFilter2D_Block_p_1_U0_ap_done );

    SC_METHOD(thread_ap_done);
    sensitive << ( row_filter_U0_ap_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( SepFilter2D_entry236_U0_ap_idle );
    sensitive << ( SepFilter2D_Block_p_1_U0_ap_idle );
    sensitive << ( column_filter_U0_ap_idle );
    sensitive << ( SepFilter2D_Block_p_U0_ap_idle );
    sensitive << ( row_filter_U0_ap_idle );
    sensitive << ( this_assign_1_channe_empty_n );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sync_ready );

    SC_METHOD(thread_ap_sync_SepFilter2D_entry236_U0_ap_ready);
    sensitive << ( SepFilter2D_entry236_U0_ap_ready );
    sensitive << ( ap_sync_reg_SepFilter2D_entry236_U0_ap_ready );

    SC_METHOD(thread_ap_sync_column_filter_U0_ap_ready);
    sensitive << ( column_filter_U0_ap_ready );
    sensitive << ( ap_sync_reg_column_filter_U0_ap_ready );

    SC_METHOD(thread_ap_sync_continue);
    sensitive << ( ap_continue );

    SC_METHOD(thread_ap_sync_done);
    sensitive << ( row_filter_U0_ap_done );

    SC_METHOD(thread_ap_sync_ready);
    sensitive << ( ap_sync_SepFilter2D_entry236_U0_ap_ready );
    sensitive << ( ap_sync_column_filter_U0_ap_ready );

    SC_METHOD(thread_column_filter_U0_ap_continue);

    SC_METHOD(thread_column_filter_U0_ap_start);
    sensitive << ( this_assign_1_channe_empty_n );
    sensitive << ( ap_start );
    sensitive << ( ap_sync_reg_column_filter_U0_ap_ready );

    SC_METHOD(thread_p_dst_data_stream_V_V_din);
    sensitive << ( row_filter_U0_p_dst_data_stream_V_V_din );

    SC_METHOD(thread_p_dst_data_stream_V_V_write);
    sensitive << ( row_filter_U0_p_dst_data_stream_V_V_write );

    SC_METHOD(thread_p_src_data_stream_V_V_read);
    sensitive << ( column_filter_U0_p_src_data_stream_V_V_read );

    SC_METHOD(thread_row_filter_U0_ap_continue);
    sensitive << ( ap_continue );

    SC_METHOD(thread_row_filter_U0_ap_start);
    sensitive << ( start_for_row_filter_U0_empty_n );

    SC_METHOD(thread_row_filter_U0_start_full_n);

    SC_METHOD(thread_row_filter_U0_start_write);

    SC_METHOD(thread_start_for_SepFilter2D_Block_p_1_U0_din);

    SC_METHOD(thread_start_for_SepFilter2D_Block_p_U0_din);

    SC_METHOD(thread_start_for_row_filter_U0_din);

    SC_THREAD(thread_ap_var_for_const0);

    ap_sync_reg_SepFilter2D_entry236_U0_ap_ready = SC_LOGIC_0;
    SepFilter2D_entry236_U0_ap_ready_count = "00";
    ap_sync_reg_column_filter_U0_ap_ready = SC_LOGIC_0;
    column_filter_U0_ap_ready_count = "00";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "SepFilter2D_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, p_src_rows_V_read, "(port)p_src_rows_V_read");
    sc_trace(mVcdFile, p_src_cols_V_read, "(port)p_src_cols_V_read");
    sc_trace(mVcdFile, p_src_data_stream_V_V_dout, "(port)p_src_data_stream_V_V_dout");
    sc_trace(mVcdFile, p_src_data_stream_V_V_empty_n, "(port)p_src_data_stream_V_V_empty_n");
    sc_trace(mVcdFile, p_src_data_stream_V_V_read, "(port)p_src_data_stream_V_V_read");
    sc_trace(mVcdFile, p_dst_data_stream_V_V_din, "(port)p_dst_data_stream_V_V_din");
    sc_trace(mVcdFile, p_dst_data_stream_V_V_full_n, "(port)p_dst_data_stream_V_V_full_n");
    sc_trace(mVcdFile, p_dst_data_stream_V_V_write, "(port)p_dst_data_stream_V_V_write");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, p_src_rows_V_read_ap_vld, "(port)p_src_rows_V_read_ap_vld");
    sc_trace(mVcdFile, p_src_cols_V_read_ap_vld, "(port)p_src_cols_V_read_ap_vld");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_ap_start, "SepFilter2D_entry236_U0_ap_start");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_start_full_n, "SepFilter2D_entry236_U0_start_full_n");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_ap_done, "SepFilter2D_entry236_U0_ap_done");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_ap_continue, "SepFilter2D_entry236_U0_ap_continue");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_ap_idle, "SepFilter2D_entry236_U0_ap_idle");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_ap_ready, "SepFilter2D_entry236_U0_ap_ready");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_start_out, "SepFilter2D_entry236_U0_start_out");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_start_write, "SepFilter2D_entry236_U0_start_write");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_src_rows_V_read_out_din, "SepFilter2D_entry236_U0_p_src_rows_V_read_out_din");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_src_rows_V_read_out_write, "SepFilter2D_entry236_U0_p_src_rows_V_read_out_write");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_src_cols_V_read_out_din, "SepFilter2D_entry236_U0_p_src_cols_V_read_out_din");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_src_cols_V_read_out_write, "SepFilter2D_entry236_U0_p_src_cols_V_read_out_write");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_read2_out_din, "SepFilter2D_entry236_U0_p_read2_out_din");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_read2_out_write, "SepFilter2D_entry236_U0_p_read2_out_write");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_read3_out_din, "SepFilter2D_entry236_U0_p_read3_out_din");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_p_read3_out_write, "SepFilter2D_entry236_U0_p_read3_out_write");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_ap_start, "SepFilter2D_Block_p_1_U0_ap_start");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_ap_done, "SepFilter2D_Block_p_1_U0_ap_done");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_ap_continue, "SepFilter2D_Block_p_1_U0_ap_continue");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_ap_idle, "SepFilter2D_Block_p_1_U0_ap_idle");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_ap_ready, "SepFilter2D_Block_p_1_U0_ap_ready");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_p_read3_read, "SepFilter2D_Block_p_1_U0_p_read3_read");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_ap_return, "SepFilter2D_Block_p_1_U0_ap_return");
    sc_trace(mVcdFile, ap_channel_done_this_assign_1_channe, "ap_channel_done_this_assign_1_channe");
    sc_trace(mVcdFile, this_assign_1_channe_full_n, "this_assign_1_channe_full_n");
    sc_trace(mVcdFile, column_filter_U0_ap_start, "column_filter_U0_ap_start");
    sc_trace(mVcdFile, column_filter_U0_ap_done, "column_filter_U0_ap_done");
    sc_trace(mVcdFile, column_filter_U0_ap_continue, "column_filter_U0_ap_continue");
    sc_trace(mVcdFile, column_filter_U0_ap_idle, "column_filter_U0_ap_idle");
    sc_trace(mVcdFile, column_filter_U0_ap_ready, "column_filter_U0_ap_ready");
    sc_trace(mVcdFile, column_filter_U0_start_out, "column_filter_U0_start_out");
    sc_trace(mVcdFile, column_filter_U0_start_write, "column_filter_U0_start_write");
    sc_trace(mVcdFile, column_filter_U0_p_src_data_stream_V_V_read, "column_filter_U0_p_src_data_stream_V_V_read");
    sc_trace(mVcdFile, column_filter_U0_p_dst_V_V_din, "column_filter_U0_p_dst_V_V_din");
    sc_trace(mVcdFile, column_filter_U0_p_dst_V_V_write, "column_filter_U0_p_dst_V_V_write");
    sc_trace(mVcdFile, column_filter_U0_rows_read, "column_filter_U0_rows_read");
    sc_trace(mVcdFile, column_filter_U0_cols_read, "column_filter_U0_cols_read");
    sc_trace(mVcdFile, column_filter_U0_rows_out_din, "column_filter_U0_rows_out_din");
    sc_trace(mVcdFile, column_filter_U0_rows_out_write, "column_filter_U0_rows_out_write");
    sc_trace(mVcdFile, column_filter_U0_cols_out_din, "column_filter_U0_cols_out_din");
    sc_trace(mVcdFile, column_filter_U0_cols_out_write, "column_filter_U0_cols_out_write");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_ap_start, "SepFilter2D_Block_p_U0_ap_start");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_ap_done, "SepFilter2D_Block_p_U0_ap_done");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_ap_continue, "SepFilter2D_Block_p_U0_ap_continue");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_ap_idle, "SepFilter2D_Block_p_U0_ap_idle");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_ap_ready, "SepFilter2D_Block_p_U0_ap_ready");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_p_read2_read, "SepFilter2D_Block_p_U0_p_read2_read");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_this_assign_24_0_out_din, "SepFilter2D_Block_p_U0_this_assign_24_0_out_din");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_this_assign_24_0_out_write, "SepFilter2D_Block_p_U0_this_assign_24_0_out_write");
    sc_trace(mVcdFile, row_filter_U0_ap_start, "row_filter_U0_ap_start");
    sc_trace(mVcdFile, row_filter_U0_ap_done, "row_filter_U0_ap_done");
    sc_trace(mVcdFile, row_filter_U0_ap_continue, "row_filter_U0_ap_continue");
    sc_trace(mVcdFile, row_filter_U0_ap_idle, "row_filter_U0_ap_idle");
    sc_trace(mVcdFile, row_filter_U0_ap_ready, "row_filter_U0_ap_ready");
    sc_trace(mVcdFile, row_filter_U0_p_src_V_V_read, "row_filter_U0_p_src_V_V_read");
    sc_trace(mVcdFile, row_filter_U0_p_dst_data_stream_V_V_din, "row_filter_U0_p_dst_data_stream_V_V_din");
    sc_trace(mVcdFile, row_filter_U0_p_dst_data_stream_V_V_write, "row_filter_U0_p_dst_data_stream_V_V_write");
    sc_trace(mVcdFile, row_filter_U0_p_anchor_x_read, "row_filter_U0_p_anchor_x_read");
    sc_trace(mVcdFile, row_filter_U0_rows_read, "row_filter_U0_rows_read");
    sc_trace(mVcdFile, row_filter_U0_cols_read, "row_filter_U0_cols_read");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, p_src_rows_V_read_c_full_n, "p_src_rows_V_read_c_full_n");
    sc_trace(mVcdFile, p_src_rows_V_read_c_dout, "p_src_rows_V_read_c_dout");
    sc_trace(mVcdFile, p_src_rows_V_read_c_empty_n, "p_src_rows_V_read_c_empty_n");
    sc_trace(mVcdFile, p_src_cols_V_read_c_full_n, "p_src_cols_V_read_c_full_n");
    sc_trace(mVcdFile, p_src_cols_V_read_c_dout, "p_src_cols_V_read_c_dout");
    sc_trace(mVcdFile, p_src_cols_V_read_c_empty_n, "p_src_cols_V_read_c_empty_n");
    sc_trace(mVcdFile, p_read2_c_full_n, "p_read2_c_full_n");
    sc_trace(mVcdFile, p_read2_c_dout, "p_read2_c_dout");
    sc_trace(mVcdFile, p_read2_c_empty_n, "p_read2_c_empty_n");
    sc_trace(mVcdFile, p_read3_c_full_n, "p_read3_c_full_n");
    sc_trace(mVcdFile, p_read3_c_dout, "p_read3_c_dout");
    sc_trace(mVcdFile, p_read3_c_empty_n, "p_read3_c_empty_n");
    sc_trace(mVcdFile, this_assign_1_channe_dout, "this_assign_1_channe_dout");
    sc_trace(mVcdFile, this_assign_1_channe_empty_n, "this_assign_1_channe_empty_n");
    sc_trace(mVcdFile, tempY_stream_0_V_V_full_n, "tempY_stream_0_V_V_full_n");
    sc_trace(mVcdFile, tempY_stream_0_V_V_dout, "tempY_stream_0_V_V_dout");
    sc_trace(mVcdFile, tempY_stream_0_V_V_empty_n, "tempY_stream_0_V_V_empty_n");
    sc_trace(mVcdFile, p_src_rows_V_read_c4_full_n, "p_src_rows_V_read_c4_full_n");
    sc_trace(mVcdFile, p_src_rows_V_read_c4_dout, "p_src_rows_V_read_c4_dout");
    sc_trace(mVcdFile, p_src_rows_V_read_c4_empty_n, "p_src_rows_V_read_c4_empty_n");
    sc_trace(mVcdFile, p_src_cols_V_read_c5_full_n, "p_src_cols_V_read_c5_full_n");
    sc_trace(mVcdFile, p_src_cols_V_read_c5_dout, "p_src_cols_V_read_c5_dout");
    sc_trace(mVcdFile, p_src_cols_V_read_c5_empty_n, "p_src_cols_V_read_c5_empty_n");
    sc_trace(mVcdFile, this_assign_24_0_c_full_n, "this_assign_24_0_c_full_n");
    sc_trace(mVcdFile, this_assign_24_0_c_dout, "this_assign_24_0_c_dout");
    sc_trace(mVcdFile, this_assign_24_0_c_empty_n, "this_assign_24_0_c_empty_n");
    sc_trace(mVcdFile, ap_sync_done, "ap_sync_done");
    sc_trace(mVcdFile, ap_sync_ready, "ap_sync_ready");
    sc_trace(mVcdFile, ap_sync_reg_SepFilter2D_entry236_U0_ap_ready, "ap_sync_reg_SepFilter2D_entry236_U0_ap_ready");
    sc_trace(mVcdFile, ap_sync_SepFilter2D_entry236_U0_ap_ready, "ap_sync_SepFilter2D_entry236_U0_ap_ready");
    sc_trace(mVcdFile, SepFilter2D_entry236_U0_ap_ready_count, "SepFilter2D_entry236_U0_ap_ready_count");
    sc_trace(mVcdFile, ap_sync_reg_column_filter_U0_ap_ready, "ap_sync_reg_column_filter_U0_ap_ready");
    sc_trace(mVcdFile, ap_sync_column_filter_U0_ap_ready, "ap_sync_column_filter_U0_ap_ready");
    sc_trace(mVcdFile, column_filter_U0_ap_ready_count, "column_filter_U0_ap_ready_count");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_1_U0_din, "start_for_SepFilter2D_Block_p_1_U0_din");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_1_U0_full_n, "start_for_SepFilter2D_Block_p_1_U0_full_n");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_1_U0_dout, "start_for_SepFilter2D_Block_p_1_U0_dout");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_1_U0_empty_n, "start_for_SepFilter2D_Block_p_1_U0_empty_n");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_U0_din, "start_for_SepFilter2D_Block_p_U0_din");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_U0_full_n, "start_for_SepFilter2D_Block_p_U0_full_n");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_U0_dout, "start_for_SepFilter2D_Block_p_U0_dout");
    sc_trace(mVcdFile, start_for_SepFilter2D_Block_p_U0_empty_n, "start_for_SepFilter2D_Block_p_U0_empty_n");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_start_full_n, "SepFilter2D_Block_p_1_U0_start_full_n");
    sc_trace(mVcdFile, SepFilter2D_Block_p_1_U0_start_write, "SepFilter2D_Block_p_1_U0_start_write");
    sc_trace(mVcdFile, start_for_row_filter_U0_din, "start_for_row_filter_U0_din");
    sc_trace(mVcdFile, start_for_row_filter_U0_full_n, "start_for_row_filter_U0_full_n");
    sc_trace(mVcdFile, start_for_row_filter_U0_dout, "start_for_row_filter_U0_dout");
    sc_trace(mVcdFile, start_for_row_filter_U0_empty_n, "start_for_row_filter_U0_empty_n");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_start_full_n, "SepFilter2D_Block_p_U0_start_full_n");
    sc_trace(mVcdFile, SepFilter2D_Block_p_U0_start_write, "SepFilter2D_Block_p_U0_start_write");
    sc_trace(mVcdFile, row_filter_U0_start_full_n, "row_filter_U0_start_full_n");
    sc_trace(mVcdFile, row_filter_U0_start_write, "row_filter_U0_start_write");
#endif

    }
}

SepFilter2D::~SepFilter2D() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete SepFilter2D_entry236_U0;
    delete SepFilter2D_Block_p_1_U0;
    delete column_filter_U0;
    delete SepFilter2D_Block_p_U0;
    delete row_filter_U0;
    delete p_src_rows_V_read_c_U;
    delete p_src_cols_V_read_c_U;
    delete p_read2_c_U;
    delete p_read3_c_U;
    delete this_assign_1_channe_U;
    delete tempY_stream_0_V_V_U;
    delete p_src_rows_V_read_c4_U;
    delete p_src_cols_V_read_c5_U;
    delete this_assign_24_0_c_U;
    delete start_for_SepFiltIfE_U;
    delete start_for_SepFiltJfO_U;
    delete start_for_row_filKfY_U;
}

void SepFilter2D::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void SepFilter2D::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, SepFilter2D_entry236_U0_ap_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        SepFilter2D_entry236_U0_ap_ready_count = (!SepFilter2D_entry236_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(SepFilter2D_entry236_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(SepFilter2D_entry236_U0_ap_ready.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        SepFilter2D_entry236_U0_ap_ready_count = (!SepFilter2D_entry236_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(SepFilter2D_entry236_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_SepFilter2D_entry236_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_SepFilter2D_entry236_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_SepFilter2D_entry236_U0_ap_ready = ap_sync_SepFilter2D_entry236_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_column_filter_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_column_filter_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_column_filter_U0_ap_ready = ap_sync_column_filter_U0_ap_ready.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, column_filter_U0_ap_ready.read()))) {
        column_filter_U0_ap_ready_count = (!column_filter_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(column_filter_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, column_filter_U0_ap_ready.read()))) {
        column_filter_U0_ap_ready_count = (!column_filter_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(column_filter_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
}

void SepFilter2D::thread_SepFilter2D_Block_p_1_U0_ap_continue() {
    SepFilter2D_Block_p_1_U0_ap_continue = this_assign_1_channe_full_n.read();
}

void SepFilter2D::thread_SepFilter2D_Block_p_1_U0_ap_start() {
    SepFilter2D_Block_p_1_U0_ap_start = start_for_SepFilter2D_Block_p_1_U0_empty_n.read();
}

void SepFilter2D::thread_SepFilter2D_Block_p_1_U0_start_full_n() {
    SepFilter2D_Block_p_1_U0_start_full_n = ap_const_logic_1;
}

void SepFilter2D::thread_SepFilter2D_Block_p_1_U0_start_write() {
    SepFilter2D_Block_p_1_U0_start_write = ap_const_logic_0;
}

void SepFilter2D::thread_SepFilter2D_Block_p_U0_ap_continue() {
    SepFilter2D_Block_p_U0_ap_continue = ap_const_logic_1;
}

void SepFilter2D::thread_SepFilter2D_Block_p_U0_ap_start() {
    SepFilter2D_Block_p_U0_ap_start = start_for_SepFilter2D_Block_p_U0_empty_n.read();
}

void SepFilter2D::thread_SepFilter2D_Block_p_U0_start_full_n() {
    SepFilter2D_Block_p_U0_start_full_n = ap_const_logic_1;
}

void SepFilter2D::thread_SepFilter2D_Block_p_U0_start_write() {
    SepFilter2D_Block_p_U0_start_write = ap_const_logic_0;
}

void SepFilter2D::thread_SepFilter2D_entry236_U0_ap_continue() {
    SepFilter2D_entry236_U0_ap_continue = ap_const_logic_1;
}

void SepFilter2D::thread_SepFilter2D_entry236_U0_ap_start() {
    SepFilter2D_entry236_U0_ap_start = (ap_start.read() & (ap_sync_reg_SepFilter2D_entry236_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void SepFilter2D::thread_SepFilter2D_entry236_U0_start_full_n() {
    SepFilter2D_entry236_U0_start_full_n = (start_for_SepFilter2D_Block_p_1_U0_full_n.read() & start_for_SepFilter2D_Block_p_U0_full_n.read());
}

void SepFilter2D::thread_ap_channel_done_this_assign_1_channe() {
    ap_channel_done_this_assign_1_channe = SepFilter2D_Block_p_1_U0_ap_done.read();
}

void SepFilter2D::thread_ap_done() {
    ap_done = row_filter_U0_ap_done.read();
}

void SepFilter2D::thread_ap_idle() {
    ap_idle = (SepFilter2D_entry236_U0_ap_idle.read() & SepFilter2D_Block_p_1_U0_ap_idle.read() & column_filter_U0_ap_idle.read() & SepFilter2D_Block_p_U0_ap_idle.read() & row_filter_U0_ap_idle.read() & (this_assign_1_channe_empty_n.read() ^ 
  ap_const_logic_1));
}

void SepFilter2D::thread_ap_ready() {
    ap_ready = ap_sync_ready.read();
}

void SepFilter2D::thread_ap_sync_SepFilter2D_entry236_U0_ap_ready() {
    ap_sync_SepFilter2D_entry236_U0_ap_ready = (SepFilter2D_entry236_U0_ap_ready.read() | ap_sync_reg_SepFilter2D_entry236_U0_ap_ready.read());
}

void SepFilter2D::thread_ap_sync_column_filter_U0_ap_ready() {
    ap_sync_column_filter_U0_ap_ready = (column_filter_U0_ap_ready.read() | ap_sync_reg_column_filter_U0_ap_ready.read());
}

void SepFilter2D::thread_ap_sync_continue() {
    ap_sync_continue = ap_continue.read();
}

void SepFilter2D::thread_ap_sync_done() {
    ap_sync_done = row_filter_U0_ap_done.read();
}

void SepFilter2D::thread_ap_sync_ready() {
    ap_sync_ready = (ap_sync_SepFilter2D_entry236_U0_ap_ready.read() & ap_sync_column_filter_U0_ap_ready.read());
}

void SepFilter2D::thread_column_filter_U0_ap_continue() {
    column_filter_U0_ap_continue = ap_const_logic_1;
}

void SepFilter2D::thread_column_filter_U0_ap_start() {
    column_filter_U0_ap_start = (this_assign_1_channe_empty_n.read() & ap_start.read() & (ap_sync_reg_column_filter_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void SepFilter2D::thread_p_dst_data_stream_V_V_din() {
    p_dst_data_stream_V_V_din = row_filter_U0_p_dst_data_stream_V_V_din.read();
}

void SepFilter2D::thread_p_dst_data_stream_V_V_write() {
    p_dst_data_stream_V_V_write = row_filter_U0_p_dst_data_stream_V_V_write.read();
}

void SepFilter2D::thread_p_src_data_stream_V_V_read() {
    p_src_data_stream_V_V_read = column_filter_U0_p_src_data_stream_V_V_read.read();
}

void SepFilter2D::thread_row_filter_U0_ap_continue() {
    row_filter_U0_ap_continue = ap_continue.read();
}

void SepFilter2D::thread_row_filter_U0_ap_start() {
    row_filter_U0_ap_start = start_for_row_filter_U0_empty_n.read();
}

void SepFilter2D::thread_row_filter_U0_start_full_n() {
    row_filter_U0_start_full_n = ap_const_logic_1;
}

void SepFilter2D::thread_row_filter_U0_start_write() {
    row_filter_U0_start_write = ap_const_logic_0;
}

void SepFilter2D::thread_start_for_SepFilter2D_Block_p_1_U0_din() {
    start_for_SepFilter2D_Block_p_1_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void SepFilter2D::thread_start_for_SepFilter2D_Block_p_U0_din() {
    start_for_SepFilter2D_Block_p_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void SepFilter2D::thread_start_for_row_filter_U0_din() {
    start_for_row_filter_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

}
