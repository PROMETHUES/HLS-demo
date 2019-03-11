// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

`define TV_OUT_dst_axis_TDATA "./impl_rtl.HoughLines_Core.autotvout_dst_axis_V_data_V.dat"
`define EGRESS_STATUS_dst_axis_TDATA "./stream_egress_status_dst_axis_V_data_V.dat"
`define TV_OUT_dst_axis_TKEEP "./impl_rtl.HoughLines_Core.autotvout_dst_axis_V_keep_V.dat"
`define EGRESS_STATUS_dst_axis_TKEEP "./stream_egress_status_dst_axis_V_keep_V.dat"
`define TV_OUT_dst_axis_TSTRB "./impl_rtl.HoughLines_Core.autotvout_dst_axis_V_strb_V.dat"
`define EGRESS_STATUS_dst_axis_TSTRB "./stream_egress_status_dst_axis_V_strb_V.dat"
`define TV_OUT_dst_axis_TUSER "./impl_rtl.HoughLines_Core.autotvout_dst_axis_V_user_V.dat"
`define EGRESS_STATUS_dst_axis_TUSER "./stream_egress_status_dst_axis_V_user_V.dat"
`define TV_OUT_dst_axis_TLAST "./impl_rtl.HoughLines_Core.autotvout_dst_axis_V_last_V.dat"
`define EGRESS_STATUS_dst_axis_TLAST "./stream_egress_status_dst_axis_V_last_V.dat"
`define TV_OUT_dst_axis_TID "./impl_rtl.HoughLines_Core.autotvout_dst_axis_V_id_V.dat"
`define EGRESS_STATUS_dst_axis_TID "./stream_egress_status_dst_axis_V_id_V.dat"
`define TV_OUT_dst_axis_TDEST "./impl_rtl.HoughLines_Core.autotvout_dst_axis_V_dest_V.dat"
`define EGRESS_STATUS_dst_axis_TDEST "./stream_egress_status_dst_axis_V_dest_V.dat"

`define AUTOTB_TRANSACTION_NUM 1

module AESL_axi_s_dst_axis (
    input clk,
    input reset,
    input [32 - 1:0] TRAN_dst_axis_TDATA,
    input [4 - 1:0] TRAN_dst_axis_TKEEP,
    input [4 - 1:0] TRAN_dst_axis_TSTRB,
    input TRAN_dst_axis_TUSER,
    input TRAN_dst_axis_TLAST,
    input TRAN_dst_axis_TID,
    input TRAN_dst_axis_TDEST,
    input TRAN_dst_axis_TVALID,
    output TRAN_dst_axis_TREADY,
    input ready,
    input done,
    output [31:0] transaction);

    wire TRAN_dst_axis_TVALID_temp;
    wire dst_axis_TDATA_full;
    wire dst_axis_TDATA_empty;
    reg dst_axis_TDATA_write_en;
    reg [32 - 1:0] dst_axis_TDATA_write_data;
    reg dst_axis_TDATA_read_en;
    wire [32 - 1:0] dst_axis_TDATA_read_data;
    
    fifo #(100, 32) fifo_dst_axis_TDATA (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(dst_axis_TDATA_write_en),
        .write_data(dst_axis_TDATA_write_data),
        .read_clock(clk),
        .read_en(dst_axis_TDATA_read_en),
        .read_data(dst_axis_TDATA_read_data),
        .full(dst_axis_TDATA_full),
        .empty(dst_axis_TDATA_empty));
    
    always @ (*) begin
        dst_axis_TDATA_write_en <= TRAN_dst_axis_TVALID;
        dst_axis_TDATA_write_data <= TRAN_dst_axis_TDATA;
        dst_axis_TDATA_read_en <= 0;
    end
    wire dst_axis_TKEEP_full;
    wire dst_axis_TKEEP_empty;
    reg dst_axis_TKEEP_write_en;
    reg [4 - 1:0] dst_axis_TKEEP_write_data;
    reg dst_axis_TKEEP_read_en;
    wire [4 - 1:0] dst_axis_TKEEP_read_data;
    
    fifo #(100, 4) fifo_dst_axis_TKEEP (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(dst_axis_TKEEP_write_en),
        .write_data(dst_axis_TKEEP_write_data),
        .read_clock(clk),
        .read_en(dst_axis_TKEEP_read_en),
        .read_data(dst_axis_TKEEP_read_data),
        .full(dst_axis_TKEEP_full),
        .empty(dst_axis_TKEEP_empty));
    
    always @ (*) begin
        dst_axis_TKEEP_write_en <= TRAN_dst_axis_TVALID;
        dst_axis_TKEEP_write_data <= TRAN_dst_axis_TKEEP;
        dst_axis_TKEEP_read_en <= 0;
    end
    wire dst_axis_TSTRB_full;
    wire dst_axis_TSTRB_empty;
    reg dst_axis_TSTRB_write_en;
    reg [4 - 1:0] dst_axis_TSTRB_write_data;
    reg dst_axis_TSTRB_read_en;
    wire [4 - 1:0] dst_axis_TSTRB_read_data;
    
    fifo #(100, 4) fifo_dst_axis_TSTRB (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(dst_axis_TSTRB_write_en),
        .write_data(dst_axis_TSTRB_write_data),
        .read_clock(clk),
        .read_en(dst_axis_TSTRB_read_en),
        .read_data(dst_axis_TSTRB_read_data),
        .full(dst_axis_TSTRB_full),
        .empty(dst_axis_TSTRB_empty));
    
    always @ (*) begin
        dst_axis_TSTRB_write_en <= TRAN_dst_axis_TVALID;
        dst_axis_TSTRB_write_data <= TRAN_dst_axis_TSTRB;
        dst_axis_TSTRB_read_en <= 0;
    end
    wire dst_axis_TUSER_full;
    wire dst_axis_TUSER_empty;
    reg dst_axis_TUSER_write_en;
    reg [1 - 1:0] dst_axis_TUSER_write_data;
    reg dst_axis_TUSER_read_en;
    wire [1 - 1:0] dst_axis_TUSER_read_data;
    
    fifo #(100, 1) fifo_dst_axis_TUSER (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(dst_axis_TUSER_write_en),
        .write_data(dst_axis_TUSER_write_data),
        .read_clock(clk),
        .read_en(dst_axis_TUSER_read_en),
        .read_data(dst_axis_TUSER_read_data),
        .full(dst_axis_TUSER_full),
        .empty(dst_axis_TUSER_empty));
    
    always @ (*) begin
        dst_axis_TUSER_write_en <= TRAN_dst_axis_TVALID;
        dst_axis_TUSER_write_data <= TRAN_dst_axis_TUSER;
        dst_axis_TUSER_read_en <= 0;
    end
    wire dst_axis_TLAST_full;
    wire dst_axis_TLAST_empty;
    reg dst_axis_TLAST_write_en;
    reg [1 - 1:0] dst_axis_TLAST_write_data;
    reg dst_axis_TLAST_read_en;
    wire [1 - 1:0] dst_axis_TLAST_read_data;
    
    fifo #(100, 1) fifo_dst_axis_TLAST (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(dst_axis_TLAST_write_en),
        .write_data(dst_axis_TLAST_write_data),
        .read_clock(clk),
        .read_en(dst_axis_TLAST_read_en),
        .read_data(dst_axis_TLAST_read_data),
        .full(dst_axis_TLAST_full),
        .empty(dst_axis_TLAST_empty));
    
    always @ (*) begin
        dst_axis_TLAST_write_en <= TRAN_dst_axis_TVALID;
        dst_axis_TLAST_write_data <= TRAN_dst_axis_TLAST;
        dst_axis_TLAST_read_en <= 0;
    end
    wire dst_axis_TID_full;
    wire dst_axis_TID_empty;
    reg dst_axis_TID_write_en;
    reg [1 - 1:0] dst_axis_TID_write_data;
    reg dst_axis_TID_read_en;
    wire [1 - 1:0] dst_axis_TID_read_data;
    
    fifo #(100, 1) fifo_dst_axis_TID (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(dst_axis_TID_write_en),
        .write_data(dst_axis_TID_write_data),
        .read_clock(clk),
        .read_en(dst_axis_TID_read_en),
        .read_data(dst_axis_TID_read_data),
        .full(dst_axis_TID_full),
        .empty(dst_axis_TID_empty));
    
    always @ (*) begin
        dst_axis_TID_write_en <= TRAN_dst_axis_TVALID;
        dst_axis_TID_write_data <= TRAN_dst_axis_TID;
        dst_axis_TID_read_en <= 0;
    end
    wire dst_axis_TDEST_full;
    wire dst_axis_TDEST_empty;
    reg dst_axis_TDEST_write_en;
    reg [1 - 1:0] dst_axis_TDEST_write_data;
    reg dst_axis_TDEST_read_en;
    wire [1 - 1:0] dst_axis_TDEST_read_data;
    
    fifo #(100, 1) fifo_dst_axis_TDEST (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(dst_axis_TDEST_write_en),
        .write_data(dst_axis_TDEST_write_data),
        .read_clock(clk),
        .read_en(dst_axis_TDEST_read_en),
        .read_data(dst_axis_TDEST_read_data),
        .full(dst_axis_TDEST_full),
        .empty(dst_axis_TDEST_empty));
    
    always @ (*) begin
        dst_axis_TDEST_write_en <= TRAN_dst_axis_TVALID;
        dst_axis_TDEST_write_data <= TRAN_dst_axis_TDEST;
        dst_axis_TDEST_read_en <= 0;
    end
    assign TRAN_dst_axis_TVALID = TRAN_dst_axis_TVALID_temp;

    
    assign TRAN_dst_axis_TREADY = ~(dst_axis_TDATA_full || dst_axis_TKEEP_full || dst_axis_TSTRB_full || dst_axis_TUSER_full || dst_axis_TLAST_full || dst_axis_TID_full || dst_axis_TDEST_full);
    
    function is_blank_char(input [7:0] in_char);
        if (in_char == " " || in_char == "\011" || in_char == "\012" || in_char == "\015") begin
            is_blank_char = 1;
        end else begin
            is_blank_char = 0;
        end
    endfunction
    
    function [167:0] read_token(input integer fp);
        integer ret;
        begin
            read_token = "";
                    ret = 0;
                    ret = $fscanf(fp,"%s",read_token);
        end
    endfunction
    
    function [167:0] rm_0x(input [167:0] token);
        reg [167:0] token_tmp;
        integer i;
        begin
            token_tmp = "";
            for (i = 0; token[15:0] != "0x"; token = token >> 8) begin
                token_tmp = (token[7:0] << (8 * i)) | token_tmp;
                i = i + 1;
            end
            rm_0x = token_tmp;
        end
    endfunction
    
    reg done_1;
    
    always @ (posedge clk or reset) begin
        if (~reset) begin
            done_1 <= 0;
        end else begin
            done_1 <= done;
        end
    end
    
    reg [31:0] transaction_save_dst_axis_TDATA;
    
    assign transaction = transaction_save_dst_axis_TDATA;
    
    initial begin : AXI_stream_receiver_dst_axis_TDATA
        integer fp;
        reg [32 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_dst_axis_TDATA = 0;
        fifo_dst_axis_TDATA.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_dst_axis_TDATA, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_dst_axis_TDATA);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_dst_axis_TDATA);
                while (~fifo_dst_axis_TDATA.empty) begin
                    fifo_dst_axis_TDATA.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_dst_axis_TDATA = transaction_save_dst_axis_TDATA + 1;
                fifo_dst_axis_TDATA.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_dst_axis_TKEEP;
    
    initial begin : AXI_stream_receiver_dst_axis_TKEEP
        integer fp;
        reg [4 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_dst_axis_TKEEP = 0;
        fifo_dst_axis_TKEEP.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_dst_axis_TKEEP, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_dst_axis_TKEEP);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_dst_axis_TKEEP);
                while (~fifo_dst_axis_TKEEP.empty) begin
                    fifo_dst_axis_TKEEP.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_dst_axis_TKEEP = transaction_save_dst_axis_TKEEP + 1;
                fifo_dst_axis_TKEEP.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_dst_axis_TSTRB;
    
    initial begin : AXI_stream_receiver_dst_axis_TSTRB
        integer fp;
        reg [4 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_dst_axis_TSTRB = 0;
        fifo_dst_axis_TSTRB.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_dst_axis_TSTRB, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_dst_axis_TSTRB);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_dst_axis_TSTRB);
                while (~fifo_dst_axis_TSTRB.empty) begin
                    fifo_dst_axis_TSTRB.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_dst_axis_TSTRB = transaction_save_dst_axis_TSTRB + 1;
                fifo_dst_axis_TSTRB.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_dst_axis_TUSER;
    
    initial begin : AXI_stream_receiver_dst_axis_TUSER
        integer fp;
        reg [1 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_dst_axis_TUSER = 0;
        fifo_dst_axis_TUSER.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_dst_axis_TUSER, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_dst_axis_TUSER);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_dst_axis_TUSER);
                while (~fifo_dst_axis_TUSER.empty) begin
                    fifo_dst_axis_TUSER.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_dst_axis_TUSER = transaction_save_dst_axis_TUSER + 1;
                fifo_dst_axis_TUSER.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_dst_axis_TLAST;
    
    initial begin : AXI_stream_receiver_dst_axis_TLAST
        integer fp;
        reg [1 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_dst_axis_TLAST = 0;
        fifo_dst_axis_TLAST.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_dst_axis_TLAST, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_dst_axis_TLAST);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_dst_axis_TLAST);
                while (~fifo_dst_axis_TLAST.empty) begin
                    fifo_dst_axis_TLAST.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_dst_axis_TLAST = transaction_save_dst_axis_TLAST + 1;
                fifo_dst_axis_TLAST.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_dst_axis_TID;
    
    initial begin : AXI_stream_receiver_dst_axis_TID
        integer fp;
        reg [1 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_dst_axis_TID = 0;
        fifo_dst_axis_TID.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_dst_axis_TID, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_dst_axis_TID);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_dst_axis_TID);
                while (~fifo_dst_axis_TID.empty) begin
                    fifo_dst_axis_TID.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_dst_axis_TID = transaction_save_dst_axis_TID + 1;
                fifo_dst_axis_TID.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_dst_axis_TDEST;
    
    initial begin : AXI_stream_receiver_dst_axis_TDEST
        integer fp;
        reg [1 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_dst_axis_TDEST = 0;
        fifo_dst_axis_TDEST.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_dst_axis_TDEST, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_dst_axis_TDEST);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_dst_axis_TDEST);
                while (~fifo_dst_axis_TDEST.empty) begin
                    fifo_dst_axis_TDEST.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_dst_axis_TDEST = transaction_save_dst_axis_TDEST + 1;
                fifo_dst_axis_TDEST.clear();
                $fclose(fp);
            end
        end
    end

endmodule