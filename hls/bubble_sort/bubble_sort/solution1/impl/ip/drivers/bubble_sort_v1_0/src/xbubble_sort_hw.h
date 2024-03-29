// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// AXILiteS
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x100 ~
// 0x1ff : Memory 'array_r' (40 * 32b)
//         Word n : bit [31:0] - array_r[n]
// 0x200 ~
// 0x2ff : Memory 'array_out' (40 * 32b)
//         Word n : bit [31:0] - array_out[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBUBBLE_SORT_AXILITES_ADDR_AP_CTRL        0x000
#define XBUBBLE_SORT_AXILITES_ADDR_GIE            0x004
#define XBUBBLE_SORT_AXILITES_ADDR_IER            0x008
#define XBUBBLE_SORT_AXILITES_ADDR_ISR            0x00c
#define XBUBBLE_SORT_AXILITES_ADDR_ARRAY_R_BASE   0x100
#define XBUBBLE_SORT_AXILITES_ADDR_ARRAY_R_HIGH   0x1ff
#define XBUBBLE_SORT_AXILITES_WIDTH_ARRAY_R       32
#define XBUBBLE_SORT_AXILITES_DEPTH_ARRAY_R       40
#define XBUBBLE_SORT_AXILITES_ADDR_ARRAY_OUT_BASE 0x200
#define XBUBBLE_SORT_AXILITES_ADDR_ARRAY_OUT_HIGH 0x2ff
#define XBUBBLE_SORT_AXILITES_WIDTH_ARRAY_OUT     32
#define XBUBBLE_SORT_AXILITES_DEPTH_ARRAY_OUT     40

