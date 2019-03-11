// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of rows0
//        bit 31~0 - rows0[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of cols0
//        bit 31~0 - cols0[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of rows1
//        bit 31~0 - rows1[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of cols1
//        bit 31~0 - cols1[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of thresh
//        bit 31~0 - thresh[31:0] (Read/Write)
// 0x34 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XSIFT2_CORE_AXILITES_ADDR_AP_CTRL     0x00
#define XSIFT2_CORE_AXILITES_ADDR_GIE         0x04
#define XSIFT2_CORE_AXILITES_ADDR_IER         0x08
#define XSIFT2_CORE_AXILITES_ADDR_ISR         0x0c
#define XSIFT2_CORE_AXILITES_ADDR_ROWS0_DATA  0x10
#define XSIFT2_CORE_AXILITES_BITS_ROWS0_DATA  32
#define XSIFT2_CORE_AXILITES_ADDR_COLS0_DATA  0x18
#define XSIFT2_CORE_AXILITES_BITS_COLS0_DATA  32
#define XSIFT2_CORE_AXILITES_ADDR_ROWS1_DATA  0x20
#define XSIFT2_CORE_AXILITES_BITS_ROWS1_DATA  32
#define XSIFT2_CORE_AXILITES_ADDR_COLS1_DATA  0x28
#define XSIFT2_CORE_AXILITES_BITS_COLS1_DATA  32
#define XSIFT2_CORE_AXILITES_ADDR_THRESH_DATA 0x30
#define XSIFT2_CORE_AXILITES_BITS_THRESH_DATA 32
