// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(PWRITE_i,0,0);
        VL_IN8(PSEL_i,0,0);
        VL_IN8(PENABLE_i,0,0);
        VL_OUT8(PREADY_o,0,0);
        VL_OUT8(PSLVERR_o,0,0);
        VL_IN8(upio_in_i,7,0);
        VL_OUT8(upio_out_o,7,0);
        VL_OUT8(upio_dir_o,7,0);
        VL_OUT8(int_o,0,0);
        CData/*7:0*/ top__DOT__counters;
        CData/*0:0*/ top__DOT__sha__DOT__hash_en;
        CData/*0:0*/ top__DOT__sha__DOT__done;
        CData/*0:0*/ top__DOT__sha__DOT__s_apb_write;
        CData/*0:0*/ top__DOT__sha__DOT__s_apb_read;
        CData/*7:0*/ top__DOT__sha__DOT__r_ctrl;
        CData/*0:0*/ top__DOT__sha__DOT__hash_flag;
        CData/*0:0*/ top__DOT__sha__DOT__r_int_flag;
        CData/*7:0*/ top__DOT__sha__DOT__r_upio_paddir;
        CData/*7:0*/ top__DOT__sha__DOT__r_upio_padout;
        CData/*1:0*/ top__DOT__sha__DOT__r_stm;
        CData/*1:0*/ top__DOT__sha__DOT__s_stm_n;
        CData/*6:0*/ top__DOT__sha__DOT__sha_top__DOT__cycle;
        CData/*6:0*/ top__DOT__sha__DOT__sha_top__DOT__next_cycle;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst_n;
        VL_IN16(PADDR_i,11,0);
        VL_IN(PWDATA_i,31,0);
        VL_OUT(PRDATA_o,31,0);
        IData/*23:0*/ top__DOT__sha__DOT__r_message;
        VlWide<8>/*255:0*/ top__DOT__sha__DOT__r_hashed_data;
        IData/*31:0*/ top__DOT__sha__DOT__unused_data;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w_ex;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__a_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__b_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__c_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__d_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__e_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__f_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__g_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__h_out;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w_16;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w_15;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w_7;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w_2;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w0;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w1;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w2;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w3;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w4;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w5;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w6;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w7;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w8;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w9;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w10;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w11;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w12;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w13;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w14;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w15;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w16;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w17;
    };
    struct {
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w18;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w19;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w20;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w21;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w22;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w23;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w24;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w25;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w26;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w27;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w28;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w29;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w30;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w31;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w32;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w33;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w34;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w35;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w36;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w37;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w38;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w39;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w40;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w41;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w42;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w43;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w44;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w45;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w46;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w47;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w48;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w49;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w50;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w51;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w52;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w53;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w54;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w55;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w56;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w57;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w58;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w59;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w60;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w61;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w62;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w63;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__k;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__w_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__a_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__b_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__c_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__d_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__e_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__f_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__g_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__h_in;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__M__DOT__s1;
        IData/*31:0*/ top__DOT__sha__DOT__sha_top__DOT__M__DOT__ch;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
