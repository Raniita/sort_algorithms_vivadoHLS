// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _heap_sort_HH_
#define _heap_sort_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "heap_sort_swap_hw.h"
#include "heap_sort_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 10,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct heap_sort : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    heap_sort(sc_module_name name);
    SC_HAS_PROCESS(heap_sort);

    ~heap_sort();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    heap_sort_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* heap_sort_AXILiteS_s_axi_U;
    heap_sort_swap_hw* grp_heap_sort_swap_hw_fu_990;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<58> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_75;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<6> > array_r_address0;
    sc_signal< sc_logic > array_r_ce0;
    sc_signal< sc_lv<32> > array_r_q0;
    sc_signal< sc_lv<6> > array_out_address0;
    sc_signal< sc_logic > array_out_ce0;
    sc_signal< sc_logic > array_out_we0;
    sc_signal< sc_lv<32> > array_out_d0;
    sc_signal< sc_lv<32> > array_out_q0;
    sc_signal< sc_lv<32> > reg_1006;
    sc_signal< sc_logic > ap_sig_cseq_ST_st43_fsm_42;
    sc_signal< bool > ap_sig_136;
    sc_signal< sc_logic > ap_sig_cseq_ST_st50_fsm_49;
    sc_signal< bool > ap_sig_143;
    sc_signal< sc_logic > ap_sig_cseq_ST_st54_fsm_53;
    sc_signal< bool > ap_sig_151;
    sc_signal< sc_logic > ap_sig_cseq_ST_st56_fsm_55;
    sc_signal< bool > ap_sig_159;
    sc_signal< sc_lv<32> > reg_1011;
    sc_signal< sc_logic > ap_sig_cseq_ST_st47_fsm_46;
    sc_signal< bool > ap_sig_169;
    sc_signal< sc_lv<1> > tmp_11_i_reg_1452;
    sc_signal< sc_lv<1> > tmp_15_i_fu_1136_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st51_fsm_50;
    sc_signal< bool > ap_sig_185;
    sc_signal< sc_logic > ap_sig_cseq_ST_st57_fsm_56;
    sc_signal< bool > ap_sig_193;
    sc_signal< sc_lv<1> > or_cond_fu_1224_p2;
    sc_signal< sc_lv<6> > array_out_addr_reg_1234;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_212;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_223;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_232;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_241;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_250;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_6;
    sc_signal< bool > ap_sig_259;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_268;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_277;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_286;
    sc_signal< sc_logic > ap_sig_cseq_ST_st11_fsm_10;
    sc_signal< bool > ap_sig_295;
    sc_signal< sc_logic > ap_sig_cseq_ST_st12_fsm_11;
    sc_signal< bool > ap_sig_304;
    sc_signal< sc_logic > ap_sig_cseq_ST_st13_fsm_12;
    sc_signal< bool > ap_sig_313;
    sc_signal< sc_logic > ap_sig_cseq_ST_st14_fsm_13;
    sc_signal< bool > ap_sig_322;
    sc_signal< sc_logic > ap_sig_cseq_ST_st15_fsm_14;
    sc_signal< bool > ap_sig_331;
    sc_signal< sc_logic > ap_sig_cseq_ST_st16_fsm_15;
    sc_signal< bool > ap_sig_340;
    sc_signal< sc_logic > ap_sig_cseq_ST_st17_fsm_16;
    sc_signal< bool > ap_sig_349;
    sc_signal< sc_logic > ap_sig_cseq_ST_st18_fsm_17;
    sc_signal< bool > ap_sig_358;
    sc_signal< sc_logic > ap_sig_cseq_ST_st19_fsm_18;
    sc_signal< bool > ap_sig_367;
    sc_signal< sc_logic > ap_sig_cseq_ST_st20_fsm_19;
    sc_signal< bool > ap_sig_376;
    sc_signal< sc_logic > ap_sig_cseq_ST_st21_fsm_20;
    sc_signal< bool > ap_sig_385;
    sc_signal< sc_logic > ap_sig_cseq_ST_st22_fsm_21;
    sc_signal< bool > ap_sig_394;
    sc_signal< sc_logic > ap_sig_cseq_ST_st23_fsm_22;
    sc_signal< bool > ap_sig_403;
    sc_signal< sc_logic > ap_sig_cseq_ST_st24_fsm_23;
    sc_signal< bool > ap_sig_412;
    sc_signal< sc_logic > ap_sig_cseq_ST_st25_fsm_24;
    sc_signal< bool > ap_sig_421;
    sc_signal< sc_logic > ap_sig_cseq_ST_st26_fsm_25;
    sc_signal< bool > ap_sig_430;
    sc_signal< sc_logic > ap_sig_cseq_ST_st27_fsm_26;
    sc_signal< bool > ap_sig_439;
    sc_signal< sc_logic > ap_sig_cseq_ST_st28_fsm_27;
    sc_signal< bool > ap_sig_448;
    sc_signal< sc_logic > ap_sig_cseq_ST_st29_fsm_28;
    sc_signal< bool > ap_sig_457;
    sc_signal< sc_logic > ap_sig_cseq_ST_st30_fsm_29;
    sc_signal< bool > ap_sig_466;
    sc_signal< sc_logic > ap_sig_cseq_ST_st31_fsm_30;
    sc_signal< bool > ap_sig_475;
    sc_signal< sc_logic > ap_sig_cseq_ST_st32_fsm_31;
    sc_signal< bool > ap_sig_484;
    sc_signal< sc_logic > ap_sig_cseq_ST_st33_fsm_32;
    sc_signal< bool > ap_sig_493;
    sc_signal< sc_logic > ap_sig_cseq_ST_st34_fsm_33;
    sc_signal< bool > ap_sig_502;
    sc_signal< sc_logic > ap_sig_cseq_ST_st35_fsm_34;
    sc_signal< bool > ap_sig_511;
    sc_signal< sc_logic > ap_sig_cseq_ST_st36_fsm_35;
    sc_signal< bool > ap_sig_520;
    sc_signal< sc_logic > ap_sig_cseq_ST_st37_fsm_36;
    sc_signal< bool > ap_sig_529;
    sc_signal< sc_logic > ap_sig_cseq_ST_st38_fsm_37;
    sc_signal< bool > ap_sig_538;
    sc_signal< sc_logic > ap_sig_cseq_ST_st39_fsm_38;
    sc_signal< bool > ap_sig_547;
    sc_signal< sc_logic > ap_sig_cseq_ST_st40_fsm_39;
    sc_signal< bool > ap_sig_556;
    sc_signal< sc_lv<32> > j_i_cast1_fu_1022_p1;
    sc_signal< sc_lv<32> > j_i_cast1_reg_1434;
    sc_signal< sc_logic > ap_sig_cseq_ST_st42_fsm_41;
    sc_signal< bool > ap_sig_565;
    sc_signal< sc_lv<1> > exitcond_i_fu_1026_p2;
    sc_signal< sc_lv<1> > tmp_11_i_fu_1058_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st44_fsm_43;
    sc_signal< bool > ap_sig_580;
    sc_signal< sc_lv<6> > array_out_addr_47_reg_1456;
    sc_signal< sc_logic > ap_sig_cseq_ST_st45_fsm_44;
    sc_signal< bool > ap_sig_589;
    sc_signal< sc_lv<32> > j_3_fu_1123_p3;
    sc_signal< sc_lv<32> > j_3_reg_1461;
    sc_signal< sc_lv<6> > array_out_addr_48_reg_1466;
    sc_signal< sc_lv<32> > array_out_load_8_reg_1471;
    sc_signal< sc_logic > ap_sig_cseq_ST_st46_fsm_45;
    sc_signal< bool > ap_sig_601;
    sc_signal< sc_lv<6> > i_2_fu_1141_p2;
    sc_signal< sc_lv<32> > i_cast_fu_1147_p1;
    sc_signal< sc_lv<32> > i_cast_reg_1485;
    sc_signal< sc_logic > ap_sig_cseq_ST_st49_fsm_48;
    sc_signal< bool > ap_sig_614;
    sc_signal< sc_lv<6> > array_out_addr_16_reg_1493;
    sc_signal< sc_lv<6> > i_1_fu_1162_p2;
    sc_signal< sc_lv<6> > i_1_reg_1498;
    sc_signal< sc_logic > ap_sig_cseq_ST_st52_fsm_51;
    sc_signal< bool > ap_sig_625;
    sc_signal< sc_lv<32> > i_1_cast_fu_1168_p1;
    sc_signal< sc_lv<32> > i_1_cast_reg_1503;
    sc_signal< sc_lv<32> > index_fu_1178_p2;
    sc_signal< sc_lv<32> > index_reg_1508;
    sc_signal< sc_logic > ap_sig_cseq_ST_st53_fsm_52;
    sc_signal< bool > ap_sig_636;
    sc_signal< sc_lv<32> > index_1_fu_1189_p2;
    sc_signal< sc_lv<32> > index_1_reg_1521;
    sc_signal< sc_lv<32> > p_s_fu_1203_p3;
    sc_signal< sc_logic > ap_sig_cseq_ST_st55_fsm_54;
    sc_signal< bool > ap_sig_651;
    sc_signal< sc_lv<1> > grp_fu_1016_p2;
    sc_signal< sc_lv<6> > array_out_addr_43_reg_1539;
    sc_signal< sc_lv<6> > array_out_addr_44_reg_1544;
    sc_signal< sc_lv<1> > tmp_10_fu_1219_p2;
    sc_signal< sc_lv<1> > tmp_10_reg_1549;
    sc_signal< sc_lv<1> > or_cond_reg_1554;
    sc_signal< sc_lv<32> > grp_heap_sort_swap_hw_fu_990_x_read;
    sc_signal< sc_lv<32> > grp_heap_sort_swap_hw_fu_990_ap_return_0;
    sc_signal< sc_lv<32> > grp_heap_sort_swap_hw_fu_990_ap_return_1;
    sc_signal< sc_lv<6> > j_2_reg_934;
    sc_signal< sc_logic > ap_sig_cseq_ST_st41_fsm_40;
    sc_signal< bool > ap_sig_678;
    sc_signal< sc_lv<32> > j2_i_reg_946;
    sc_signal< sc_logic > ap_sig_cseq_ST_st48_fsm_47;
    sc_signal< bool > ap_sig_687;
    sc_signal< sc_lv<6> > i_reg_955;
    sc_signal< sc_logic > ap_sig_cseq_ST_st58_fsm_57;
    sc_signal< bool > ap_sig_702;
    sc_signal< sc_lv<32> > j_reg_967;
    sc_signal< sc_lv<32> > j_1_reg_979;
    sc_signal< sc_lv<64> > tmp_i_fu_1032_p1;
    sc_signal< sc_lv<64> > tmp_i_8_fu_1053_p1;
    sc_signal< sc_lv<64> > tmp_12_i_fu_1064_p1;
    sc_signal< sc_lv<64> > tmp_14_i_fu_1131_p1;
    sc_signal< sc_lv<64> > tmp_3_fu_1157_p1;
    sc_signal< sc_lv<64> > tmp_7_fu_1184_p1;
    sc_signal< sc_lv<64> > tmp_9_fu_1194_p1;
    sc_signal< sc_lv<64> > tmp_4_fu_1209_p1;
    sc_signal< sc_lv<64> > tmp_6_fu_1214_p1;
    sc_signal< sc_lv<6> > tmp_tr_i_fu_1037_p2;
    sc_signal< sc_lv<5> > p_lshr_f_i_cast_fu_1043_p4;
    sc_signal< sc_lv<32> > tmp_13_i_fu_1069_p2;
    sc_signal< sc_lv<32> > p_neg1_i_fu_1083_p2;
    sc_signal< sc_lv<31> > p_lshr1_i_fu_1089_p4;
    sc_signal< sc_lv<32> > tmp_fu_1099_p1;
    sc_signal< sc_lv<31> > p_lshr_f1_i_fu_1109_p4;
    sc_signal< sc_lv<1> > tmp_5_fu_1075_p3;
    sc_signal< sc_lv<32> > p_neg_t1_i_fu_1103_p2;
    sc_signal< sc_lv<32> > tmp_11_fu_1119_p1;
    sc_signal< sc_lv<32> > tmp_12_fu_1172_p2;
    sc_signal< sc_lv<1> > tmp_1_fu_1199_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_1151_p2;
    sc_signal< sc_lv<58> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<58> ap_ST_st1_fsm_0;
    static const sc_lv<58> ap_ST_st2_fsm_1;
    static const sc_lv<58> ap_ST_st3_fsm_2;
    static const sc_lv<58> ap_ST_st4_fsm_3;
    static const sc_lv<58> ap_ST_st5_fsm_4;
    static const sc_lv<58> ap_ST_st6_fsm_5;
    static const sc_lv<58> ap_ST_st7_fsm_6;
    static const sc_lv<58> ap_ST_st8_fsm_7;
    static const sc_lv<58> ap_ST_st9_fsm_8;
    static const sc_lv<58> ap_ST_st10_fsm_9;
    static const sc_lv<58> ap_ST_st11_fsm_10;
    static const sc_lv<58> ap_ST_st12_fsm_11;
    static const sc_lv<58> ap_ST_st13_fsm_12;
    static const sc_lv<58> ap_ST_st14_fsm_13;
    static const sc_lv<58> ap_ST_st15_fsm_14;
    static const sc_lv<58> ap_ST_st16_fsm_15;
    static const sc_lv<58> ap_ST_st17_fsm_16;
    static const sc_lv<58> ap_ST_st18_fsm_17;
    static const sc_lv<58> ap_ST_st19_fsm_18;
    static const sc_lv<58> ap_ST_st20_fsm_19;
    static const sc_lv<58> ap_ST_st21_fsm_20;
    static const sc_lv<58> ap_ST_st22_fsm_21;
    static const sc_lv<58> ap_ST_st23_fsm_22;
    static const sc_lv<58> ap_ST_st24_fsm_23;
    static const sc_lv<58> ap_ST_st25_fsm_24;
    static const sc_lv<58> ap_ST_st26_fsm_25;
    static const sc_lv<58> ap_ST_st27_fsm_26;
    static const sc_lv<58> ap_ST_st28_fsm_27;
    static const sc_lv<58> ap_ST_st29_fsm_28;
    static const sc_lv<58> ap_ST_st30_fsm_29;
    static const sc_lv<58> ap_ST_st31_fsm_30;
    static const sc_lv<58> ap_ST_st32_fsm_31;
    static const sc_lv<58> ap_ST_st33_fsm_32;
    static const sc_lv<58> ap_ST_st34_fsm_33;
    static const sc_lv<58> ap_ST_st35_fsm_34;
    static const sc_lv<58> ap_ST_st36_fsm_35;
    static const sc_lv<58> ap_ST_st37_fsm_36;
    static const sc_lv<58> ap_ST_st38_fsm_37;
    static const sc_lv<58> ap_ST_st39_fsm_38;
    static const sc_lv<58> ap_ST_st40_fsm_39;
    static const sc_lv<58> ap_ST_st41_fsm_40;
    static const sc_lv<58> ap_ST_st42_fsm_41;
    static const sc_lv<58> ap_ST_st43_fsm_42;
    static const sc_lv<58> ap_ST_st44_fsm_43;
    static const sc_lv<58> ap_ST_st45_fsm_44;
    static const sc_lv<58> ap_ST_st46_fsm_45;
    static const sc_lv<58> ap_ST_st47_fsm_46;
    static const sc_lv<58> ap_ST_st48_fsm_47;
    static const sc_lv<58> ap_ST_st49_fsm_48;
    static const sc_lv<58> ap_ST_st50_fsm_49;
    static const sc_lv<58> ap_ST_st51_fsm_50;
    static const sc_lv<58> ap_ST_st52_fsm_51;
    static const sc_lv<58> ap_ST_st53_fsm_52;
    static const sc_lv<58> ap_ST_st54_fsm_53;
    static const sc_lv<58> ap_ST_st55_fsm_54;
    static const sc_lv<58> ap_ST_st56_fsm_55;
    static const sc_lv<58> ap_ST_st57_fsm_56;
    static const sc_lv<58> ap_ST_st58_fsm_57;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<6> ap_const_lv6_27;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<64> ap_const_lv64_1E;
    static const sc_lv<64> ap_const_lv64_1F;
    static const sc_lv<64> ap_const_lv64_20;
    static const sc_lv<64> ap_const_lv64_21;
    static const sc_lv<64> ap_const_lv64_22;
    static const sc_lv<64> ap_const_lv64_23;
    static const sc_lv<64> ap_const_lv64_24;
    static const sc_lv<64> ap_const_lv64_25;
    static const sc_lv<64> ap_const_lv64_26;
    static const sc_lv<64> ap_const_lv64_27;
    static const sc_lv<6> ap_const_lv6_28;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<6> ap_const_lv6_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_136();
    void thread_ap_sig_143();
    void thread_ap_sig_151();
    void thread_ap_sig_159();
    void thread_ap_sig_169();
    void thread_ap_sig_185();
    void thread_ap_sig_193();
    void thread_ap_sig_212();
    void thread_ap_sig_223();
    void thread_ap_sig_232();
    void thread_ap_sig_241();
    void thread_ap_sig_250();
    void thread_ap_sig_259();
    void thread_ap_sig_268();
    void thread_ap_sig_277();
    void thread_ap_sig_286();
    void thread_ap_sig_295();
    void thread_ap_sig_304();
    void thread_ap_sig_313();
    void thread_ap_sig_322();
    void thread_ap_sig_331();
    void thread_ap_sig_340();
    void thread_ap_sig_349();
    void thread_ap_sig_358();
    void thread_ap_sig_367();
    void thread_ap_sig_376();
    void thread_ap_sig_385();
    void thread_ap_sig_394();
    void thread_ap_sig_403();
    void thread_ap_sig_412();
    void thread_ap_sig_421();
    void thread_ap_sig_430();
    void thread_ap_sig_439();
    void thread_ap_sig_448();
    void thread_ap_sig_457();
    void thread_ap_sig_466();
    void thread_ap_sig_475();
    void thread_ap_sig_484();
    void thread_ap_sig_493();
    void thread_ap_sig_502();
    void thread_ap_sig_511();
    void thread_ap_sig_520();
    void thread_ap_sig_529();
    void thread_ap_sig_538();
    void thread_ap_sig_547();
    void thread_ap_sig_556();
    void thread_ap_sig_565();
    void thread_ap_sig_580();
    void thread_ap_sig_589();
    void thread_ap_sig_601();
    void thread_ap_sig_614();
    void thread_ap_sig_625();
    void thread_ap_sig_636();
    void thread_ap_sig_651();
    void thread_ap_sig_678();
    void thread_ap_sig_687();
    void thread_ap_sig_702();
    void thread_ap_sig_75();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st11_fsm_10();
    void thread_ap_sig_cseq_ST_st12_fsm_11();
    void thread_ap_sig_cseq_ST_st13_fsm_12();
    void thread_ap_sig_cseq_ST_st14_fsm_13();
    void thread_ap_sig_cseq_ST_st15_fsm_14();
    void thread_ap_sig_cseq_ST_st16_fsm_15();
    void thread_ap_sig_cseq_ST_st17_fsm_16();
    void thread_ap_sig_cseq_ST_st18_fsm_17();
    void thread_ap_sig_cseq_ST_st19_fsm_18();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st20_fsm_19();
    void thread_ap_sig_cseq_ST_st21_fsm_20();
    void thread_ap_sig_cseq_ST_st22_fsm_21();
    void thread_ap_sig_cseq_ST_st23_fsm_22();
    void thread_ap_sig_cseq_ST_st24_fsm_23();
    void thread_ap_sig_cseq_ST_st25_fsm_24();
    void thread_ap_sig_cseq_ST_st26_fsm_25();
    void thread_ap_sig_cseq_ST_st27_fsm_26();
    void thread_ap_sig_cseq_ST_st28_fsm_27();
    void thread_ap_sig_cseq_ST_st29_fsm_28();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st30_fsm_29();
    void thread_ap_sig_cseq_ST_st31_fsm_30();
    void thread_ap_sig_cseq_ST_st32_fsm_31();
    void thread_ap_sig_cseq_ST_st33_fsm_32();
    void thread_ap_sig_cseq_ST_st34_fsm_33();
    void thread_ap_sig_cseq_ST_st35_fsm_34();
    void thread_ap_sig_cseq_ST_st36_fsm_35();
    void thread_ap_sig_cseq_ST_st37_fsm_36();
    void thread_ap_sig_cseq_ST_st38_fsm_37();
    void thread_ap_sig_cseq_ST_st39_fsm_38();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st40_fsm_39();
    void thread_ap_sig_cseq_ST_st41_fsm_40();
    void thread_ap_sig_cseq_ST_st42_fsm_41();
    void thread_ap_sig_cseq_ST_st43_fsm_42();
    void thread_ap_sig_cseq_ST_st44_fsm_43();
    void thread_ap_sig_cseq_ST_st45_fsm_44();
    void thread_ap_sig_cseq_ST_st46_fsm_45();
    void thread_ap_sig_cseq_ST_st47_fsm_46();
    void thread_ap_sig_cseq_ST_st48_fsm_47();
    void thread_ap_sig_cseq_ST_st49_fsm_48();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st50_fsm_49();
    void thread_ap_sig_cseq_ST_st51_fsm_50();
    void thread_ap_sig_cseq_ST_st52_fsm_51();
    void thread_ap_sig_cseq_ST_st53_fsm_52();
    void thread_ap_sig_cseq_ST_st54_fsm_53();
    void thread_ap_sig_cseq_ST_st55_fsm_54();
    void thread_ap_sig_cseq_ST_st56_fsm_55();
    void thread_ap_sig_cseq_ST_st57_fsm_56();
    void thread_ap_sig_cseq_ST_st58_fsm_57();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st7_fsm_6();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_array_out_addr_reg_1234();
    void thread_array_out_address0();
    void thread_array_out_ce0();
    void thread_array_out_d0();
    void thread_array_out_we0();
    void thread_array_r_address0();
    void thread_array_r_ce0();
    void thread_exitcond_i_fu_1026_p2();
    void thread_grp_fu_1016_p2();
    void thread_grp_heap_sort_swap_hw_fu_990_x_read();
    void thread_i_1_cast_fu_1168_p1();
    void thread_i_1_fu_1162_p2();
    void thread_i_2_fu_1141_p2();
    void thread_i_cast_fu_1147_p1();
    void thread_index_1_fu_1189_p2();
    void thread_index_fu_1178_p2();
    void thread_j_3_fu_1123_p3();
    void thread_j_i_cast1_fu_1022_p1();
    void thread_or_cond_fu_1224_p2();
    void thread_p_lshr1_i_fu_1089_p4();
    void thread_p_lshr_f1_i_fu_1109_p4();
    void thread_p_lshr_f_i_cast_fu_1043_p4();
    void thread_p_neg1_i_fu_1083_p2();
    void thread_p_neg_t1_i_fu_1103_p2();
    void thread_p_s_fu_1203_p3();
    void thread_tmp_10_fu_1219_p2();
    void thread_tmp_11_fu_1119_p1();
    void thread_tmp_11_i_fu_1058_p2();
    void thread_tmp_12_fu_1172_p2();
    void thread_tmp_12_i_fu_1064_p1();
    void thread_tmp_13_i_fu_1069_p2();
    void thread_tmp_14_i_fu_1131_p1();
    void thread_tmp_15_i_fu_1136_p2();
    void thread_tmp_1_fu_1199_p2();
    void thread_tmp_2_fu_1151_p2();
    void thread_tmp_3_fu_1157_p1();
    void thread_tmp_4_fu_1209_p1();
    void thread_tmp_5_fu_1075_p3();
    void thread_tmp_6_fu_1214_p1();
    void thread_tmp_7_fu_1184_p1();
    void thread_tmp_9_fu_1194_p1();
    void thread_tmp_fu_1099_p1();
    void thread_tmp_i_8_fu_1053_p1();
    void thread_tmp_i_fu_1032_p1();
    void thread_tmp_tr_i_fu_1037_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif