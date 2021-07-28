// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("trace")))) {
        __Vtemp1[0U] = 0x2e766364U;
        __Vtemp1[1U] = 0x64756d70U;
        __Vtemp1[2U] = 0x766c745fU;
        __Vtemp1[3U] = 0x6f67732fU;
        __Vtemp1[4U] = 0x6cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp1));
        vlSymsp->_traceDumpOpen();
        VL_WRITEF("[%0t] Tracing to verilator_test/build/logs/vlt_dump.vcd...\n\n",
                  64,VL_TIME_UNITED_Q(1),-12);
    }
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
    vlSelf->PSLVERR_o = 0U;
    vlSelf->top__DOT__counters = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_3d4c3f92_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_006cca02_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_0f712d64_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_41b18044_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_bdecd1df_0;

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w8 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w7 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w6 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w5 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w4 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w1 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w2 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w3 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w9 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w10 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w11 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w12 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w13 = 0U;
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14 = 0U;
    vlSelf->upio_dir_o = vlSelf->top__DOT__sha__DOT__r_upio_paddir;
    vlSelf->upio_out_o = vlSelf->top__DOT__sha__DOT__r_upio_padout;
    vlSelf->int_o = ((IData)(vlSelf->top__DOT__sha__DOT__r_ctrl) 
                     & (IData)(vlSelf->top__DOT__sha__DOT__r_int_flag));
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__next_cycle 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)));
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x428a2f98U : ((1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0x71374491U : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0xb5c0fbcfU
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0xe9b5dba5U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0x3956c25bU
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0x59f111f1U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0x923f82a4U
                                                        : 0xab1c5ed5U)))))));
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0xd807aa98U : ((9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0x12835b01U : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0x243185beU
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0x550c7dc3U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0x72be5d74U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0x80deb1feU
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0x9bdc06a7U
                                                        : 0xc19bf174U)))))));
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0xe49b69c1U : ((0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0xefbe4786U : (
                                                   (0x12U 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0xfc19dc6U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0x240ca1ccU
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0x2de92c6fU
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0x4a7484aaU
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0x5cb0a9dcU
                                                        : 0x76f988daU)))))));
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x983e5152U : ((0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0xa831c66dU : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0xb00327c8U
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0xbf597fc7U
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0xc6e00bf3U
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0xd5a79147U
                                                       : 
                                                      ((0x1eU 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0x6ca6351U
                                                        : 0x14292967U)))))));
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x27b70a85U : ((0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0x2e1b2138U : (
                                                   (0x22U 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0x4d2c6dfcU
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0x53380d13U
                                                     : 
                                                    ((0x24U 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0x650a7354U
                                                      : 
                                                     ((0x25U 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0x766a0abbU
                                                       : 
                                                      ((0x26U 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0x81c2c92eU
                                                        : 0x92722c85U)))))));
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0xa2bfe8a1U : ((0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0xa81a664bU : (
                                                   (0x2aU 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0xc24b8b70U
                                                    : 
                                                   ((0x2bU 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0xc76c51a3U
                                                     : 
                                                    ((0x2cU 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0xd192e819U
                                                      : 
                                                     ((0x2dU 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0xd6990624U
                                                       : 
                                                      ((0x2eU 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0xf40e3585U
                                                        : 0x106aa070U)))))));
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x19a4c116U : ((0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0x1e376c08U : (
                                                   (0x32U 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0x2748774cU
                                                    : 
                                                   ((0x33U 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0x34b0bcb5U
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0x391c0cb3U
                                                      : 
                                                     ((0x35U 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0x4ed8aa4aU
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0x5b9cca4fU
                                                        : 0x682e6ff3U)))))));
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__k 
            = ((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x748f82eeU : ((0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                  ? 0x78a5636fU : (
                                                   (0x3aU 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                    ? 0x84c87814U
                                                    : 
                                                   ((0x3bU 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                     ? 0x8cc70208U
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                      ? 0x90befffaU
                                                      : 
                                                     ((0x3dU 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                       ? 0xa4506cebU
                                                       : 
                                                      ((0x3eU 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                                        ? 0xbef9a3f7U
                                                        : 0xc67178f2U)))))));
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x6a09e667U : vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0xbb67ae85U : vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x3c6ef372U : vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0xa54ff53aU : vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x5be0cd19U : vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x9b05688cU : vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x1f83d9abU : vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? 0x510e527fU : vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out);
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out;
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out;
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out;
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out;
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out;
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out;
    }
    vlSelf->top__DOT__sha__DOT__done = ((~ ((((((((0U 
                                                   == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                 | (2U 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                | (3U 
                                                   == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                               | (4U 
                                                  == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                              | (5U 
                                                 == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                             | (6U 
                                                == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                            | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        & ((~ (((((
                                                   (((8U 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                     | (9U 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                   | (0xbU 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                  | (0xcU 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                 | (0xdU 
                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                | (0xeU 
                                                   == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                               | (0xfU 
                                                  == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                           & ((~ ((
                                                   ((((((0x10U 
                                                         == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                        | (0x11U 
                                                           == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                       | (0x12U 
                                                          == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                      | (0x13U 
                                                         == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                     | (0x14U 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                    | (0x15U 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                   | (0x16U 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                  | (0x17U 
                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                              & ((~ 
                                                  ((((((((0x18U 
                                                          == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                         | (0x19U 
                                                            == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                        | (0x1aU 
                                                           == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                       | (0x1bU 
                                                          == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                      | (0x1cU 
                                                         == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                     | (0x1dU 
                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                    | (0x1eU 
                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                   | (0x1fU 
                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                                 & ((~ 
                                                     ((((((((0x20U 
                                                             == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                            | (0x21U 
                                                               == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                           | (0x22U 
                                                              == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                          | (0x23U 
                                                             == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                         | (0x24U 
                                                            == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                        | (0x25U 
                                                           == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                       | (0x26U 
                                                          == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                      | (0x27U 
                                                         == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                                    & ((~ 
                                                        ((((((((0x28U 
                                                                == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                               | (0x29U 
                                                                  == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                              | (0x2aU 
                                                                 == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                             | (0x2bU 
                                                                == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                            | (0x2cU 
                                                               == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                           | (0x2dU 
                                                              == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                          | (0x2eU 
                                                             == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                         | (0x2fU 
                                                            == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                                       & ((~ 
                                                           ((((((((0x30U 
                                                                   == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                                  | (0x31U 
                                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                                 | (0x32U 
                                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                                | (0x33U 
                                                                   == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                               | (0x34U 
                                                                  == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                              | (0x35U 
                                                                 == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                             | (0x36U 
                                                                == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                            | (0x37U 
                                                               == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                                          & ((~ 
                                                              ((((((((0x38U 
                                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                                                                     | (0x39U 
                                                                        == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                                    | (0x3aU 
                                                                       == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                                   | (0x3bU 
                                                                      == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                                  | (0x3cU 
                                                                     == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                                 | (0x3dU 
                                                                    == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                                | (0x3eU 
                                                                   == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                                                               | (0x3fU 
                                                                  == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                                             & (0x40U 
                                                                == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))))))));
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__s1 
        = ((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
              << 0x1aU) | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
                           >> 6U)) ^ ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
                                       << 0x15U) | 
                                      (vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
                                       >> 0xbU))) ^ 
           ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
             << 7U) | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
                       >> 0x19U)));
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__ch 
        = ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in 
            & vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in) 
           ^ ((~ vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in) 
              & vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__sha__DOT__hash_flag) 
                     << 6U) | (((IData)(vlSelf->PWRITE_i) 
                                << 5U) | (((IData)(vlSelf->PENABLE_i) 
                                           << 4U) | 
                                          (((IData)(vlSelf->PSEL_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__sha__DOT__done) 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__sha__DOT__r_stm))))));
    vlSelf->PREADY_o = Vtop__ConstPool__TABLE_3d4c3f92_0
        [__Vtableidx1];
    vlSelf->top__DOT__sha__DOT__s_apb_write = Vtop__ConstPool__TABLE_006cca02_0
        [__Vtableidx1];
    vlSelf->top__DOT__sha__DOT__s_apb_read = Vtop__ConstPool__TABLE_0f712d64_0
        [__Vtableidx1];
    vlSelf->top__DOT__sha__DOT__hash_en = Vtop__ConstPool__TABLE_41b18044_0
        [__Vtableidx1];
    vlSelf->top__DOT__sha__DOT__s_stm_n = Vtop__ConstPool__TABLE_bdecd1df_0
        [__Vtableidx1];
    vlSelf->PRDATA_o = ((IData)(vlSelf->top__DOT__sha__DOT__s_apb_read)
                         ? ((0x80U & (IData)(vlSelf->PADDR_i))
                             ? (IData)(vlSelf->PADDR_i)
                             : ((0x40U & (IData)(vlSelf->PADDR_i))
                                 ? ((0x20U & (IData)(vlSelf->PADDR_i))
                                     ? (IData)(vlSelf->PADDR_i)
                                     : ((0x10U & (IData)(vlSelf->PADDR_i))
                                         ? ((8U & (IData)(vlSelf->PADDR_i))
                                             ? (IData)(vlSelf->PADDR_i)
                                             : ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? (IData)(vlSelf->PADDR_i)
                                                 : 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[0U]))
                                         : ((8U & (IData)(vlSelf->PADDR_i))
                                             ? ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[1U]
                                                 : 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[2U])
                                             : ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[3U]
                                                 : 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[4U]))))
                                 : ((0x20U & (IData)(vlSelf->PADDR_i))
                                     ? ((0x10U & (IData)(vlSelf->PADDR_i))
                                         ? ((8U & (IData)(vlSelf->PADDR_i))
                                             ? ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[5U]
                                                 : 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[6U])
                                             : ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? 
                                                vlSelf->top__DOT__sha__DOT__r_hashed_data[7U]
                                                 : vlSelf->top__DOT__sha__DOT__r_message))
                                         : ((8U & (IData)(vlSelf->PADDR_i))
                                             ? ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? (IData)(vlSelf->PADDR_i)
                                                 : (IData)(vlSelf->top__DOT__sha__DOT__r_upio_padout))
                                             : ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? (IData)(vlSelf->upio_in_i)
                                                 : (IData)(vlSelf->top__DOT__sha__DOT__r_upio_paddir))))
                                     : ((0x10U & (IData)(vlSelf->PADDR_i))
                                         ? ((8U & (IData)(vlSelf->PADDR_i))
                                             ? (IData)(vlSelf->PADDR_i)
                                             : ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? (IData)(vlSelf->top__DOT__sha__DOT__r_int_flag)
                                                 : (IData)(vlSelf->PADDR_i)))
                                         : ((8U & (IData)(vlSelf->PADDR_i))
                                             ? ((4U 
                                                 & (IData)(vlSelf->PADDR_i))
                                                 ? (IData)(vlSelf->top__DOT__sha__DOT__r_ctrl)
                                                 : (IData)(vlSelf->PADDR_i))
                                             : (IData)(vlSelf->PADDR_i))))))
                         : 0U);
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en))))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w0 = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15 = 0U;
    } else {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w0 
            = (0x80U | (vlSelf->top__DOT__sha__DOT__r_message 
                        << 8U));
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15 = 0x18U;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14
                : ((1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15
                    : ((2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16
                        : ((3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17
                            : ((4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18
                                : ((5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19
                                    : ((6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21)))))));
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
            = ((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22
                : ((9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23
                    : ((0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24
                        : ((0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25
                            : ((0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26
                                : ((0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27
                                    : ((0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29)))))));
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
            = ((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30
                : ((0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31
                    : ((0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32
                        : ((0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33
                            : ((0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34
                                : ((0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35
                                    : ((0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37)))))));
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
            = ((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38
                : ((0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39
                    : ((0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40
                        : ((0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41
                            : ((0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42
                                : ((0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43
                                    : ((0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45)))))));
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
            = ((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46
                : ((0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47
                    : ((0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w48
                        : ((0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w49
                            : ((0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w50
                                : ((0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w51
                                    : ((0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w52
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w53)))))));
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
            = ((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w54
                : ((0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w55
                    : ((0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w56
                        : ((0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w57
                            : ((0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w58
                                : ((0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w59
                                    : ((0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w60
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w61)))))));
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 = 0U;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 = 0U;
    } else if ((0x40U != (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 = 0U;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w0
                : ((1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w1
                    : ((2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w2
                        : ((3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w3
                            : ((4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w4
                                : ((5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w5
                                    : ((6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w6
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w7)))))));
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 
            = ((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w8
                : ((9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w9
                    : ((0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w10
                        : ((0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w11
                            : ((0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w12
                                : ((0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w13
                                    : ((0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15)))))));
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 
            = ((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16
                : ((0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17
                    : ((0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18
                        : ((0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19
                            : ((0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20
                                : ((0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21
                                    : ((0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23)))))));
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 
            = ((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24
                : ((0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25
                    : ((0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26
                        : ((0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27
                            : ((0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28
                                : ((0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29
                                    : ((0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31)))))));
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 
            = ((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32
                : ((0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33
                    : ((0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34
                        : ((0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35
                            : ((0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36
                                : ((0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37
                                    : ((0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39)))))));
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 
            = ((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40
                : ((0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41
                    : ((0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42
                        : ((0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43
                            : ((0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44
                                : ((0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45
                                    : ((0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47)))))));
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 = 0U;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 = 0U;
    } else if ((0x40U != (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 = 0U;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w1
                : ((1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w2
                    : ((2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w3
                        : ((3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w4
                            : ((4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w5
                                : ((5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w6
                                    : ((6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w7
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w8)))))));
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
            = ((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w9
                : ((9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w10
                    : ((0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w11
                        : ((0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w12
                            : ((0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w13
                                : ((0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14
                                    : ((0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16)))))));
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
            = ((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17
                : ((0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18
                    : ((0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19
                        : ((0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20
                            : ((0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21
                                : ((0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22
                                    : ((0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24)))))));
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
            = ((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25
                : ((0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26
                    : ((0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27
                        : ((0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28
                            : ((0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29
                                : ((0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30
                                    : ((0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32)))))));
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
            = ((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33
                : ((0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34
                    : ((0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35
                        : ((0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36
                            : ((0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37
                                : ((0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38
                                    : ((0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40)))))));
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
            = ((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41
                : ((0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42
                    : ((0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43
                        : ((0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44
                            : ((0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45
                                : ((0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46
                                    : ((0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w48)))))));
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 = 0U;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 = 0U;
    } else if ((0x40U != (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 = 0U;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w9
                : ((1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w10
                    : ((2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w11
                        : ((3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w12
                            : ((4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w13
                                : ((5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14
                                    : ((6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16)))))));
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 
            = ((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17
                : ((9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18
                    : ((0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19
                        : ((0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20
                            : ((0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21
                                : ((0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22
                                    : ((0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24)))))));
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 
            = ((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25
                : ((0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26
                    : ((0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27
                        : ((0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28
                            : ((0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29
                                : ((0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30
                                    : ((0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32)))))));
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 
            = ((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33
                : ((0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34
                    : ((0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35
                        : ((0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36
                            : ((0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37
                                : ((0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38
                                    : ((0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40)))))));
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 
            = ((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41
                : ((0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42
                    : ((0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43
                        : ((0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44
                            : ((0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45
                                : ((0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46
                                    : ((0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w48)))))));
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 
            = ((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w49
                : ((0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w50
                    : ((0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w51
                        : ((0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w52
                            : ((0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w53
                                : ((0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w54
                                    : ((0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w55
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w56)))))));
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 = 0U;
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 = 0U;
    } else if ((0x40U != (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 = 0U;
    }
    if (((((((((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
               | (1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
              | (2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
             | (3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
            | (4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
           | (5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
          | (6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
         | (7U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((0U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w0
                : ((1U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w1
                    : ((2U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w2
                        : ((3U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w3
                            : ((4U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w4
                                : ((5U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w5
                                    : ((6U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w6
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w7)))))));
    } else if (((((((((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0xfU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((8U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w8
                : ((9U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w9
                    : ((0xaU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w10
                        : ((0xbU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w11
                            : ((0xcU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w12
                                : ((0xdU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w13
                                    : ((0xeU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15)))))));
    } else if (((((((((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x17U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((0x10U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16
                : ((0x11U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17
                    : ((0x12U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18
                        : ((0x13U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19
                            : ((0x14U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20
                                : ((0x15U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21
                                    : ((0x16U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23)))))));
    } else if (((((((((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x1fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((0x18U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24
                : ((0x19U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25
                    : ((0x1aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26
                        : ((0x1bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27
                            : ((0x1cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28
                                : ((0x1dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29
                                    : ((0x1eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31)))))));
    } else if (((((((((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x27U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((0x20U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32
                : ((0x21U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33
                    : ((0x22U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34
                        : ((0x23U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35
                            : ((0x24U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36
                                : ((0x25U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37
                                    : ((0x26U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39)))))));
    } else if (((((((((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x2fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((0x28U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40
                : ((0x29U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41
                    : ((0x2aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42
                        : ((0x2bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43
                            : ((0x2cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44
                                : ((0x2dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45
                                    : ((0x2eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47)))))));
    } else if (((((((((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x37U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((0x30U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w48
                : ((0x31U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w49
                    : ((0x32U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w50
                        : ((0x33U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w51
                            : ((0x34U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w52
                                : ((0x35U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w53
                                    : ((0x36U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w54
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w55)))))));
    } else if (((((((((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)) 
                      | (0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                     | (0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                    | (0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                   | (0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                  | (0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                 | (0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))) 
                | (0x3fU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in 
            = ((0x38U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w56
                : ((0x39U == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w57
                    : ((0x3aU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w58
                        : ((0x3bU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                            ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w59
                            : ((0x3cU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w60
                                : ((0x3dU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                    ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w61
                                    : ((0x3eU == (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))
                                        ? vlSelf->top__DOT__sha__DOT__sha_top__DOT__w62
                                        : vlSelf->top__DOT__sha__DOT__sha_top__DOT__w63)))))));
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->PADDR_i = VL_RAND_RESET_I(12);
    vlSelf->PWDATA_i = VL_RAND_RESET_I(32);
    vlSelf->PWRITE_i = VL_RAND_RESET_I(1);
    vlSelf->PSEL_i = VL_RAND_RESET_I(1);
    vlSelf->PENABLE_i = VL_RAND_RESET_I(1);
    vlSelf->PRDATA_o = VL_RAND_RESET_I(32);
    vlSelf->PREADY_o = VL_RAND_RESET_I(1);
    vlSelf->PSLVERR_o = VL_RAND_RESET_I(1);
    vlSelf->upio_in_i = VL_RAND_RESET_I(8);
    vlSelf->upio_out_o = VL_RAND_RESET_I(8);
    vlSelf->upio_dir_o = VL_RAND_RESET_I(8);
    vlSelf->int_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counters = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sha__DOT__hash_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sha__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sha__DOT__r_message = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__sha__DOT__r_hashed_data);
    vlSelf->top__DOT__sha__DOT__s_apb_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sha__DOT__s_apb_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sha__DOT__unused_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__r_ctrl = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sha__DOT__hash_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sha__DOT__r_int_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sha__DOT__r_upio_paddir = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sha__DOT__r_upio_padout = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sha__DOT__r_stm = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__sha__DOT__s_stm_n = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__next_cycle = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w48 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w49 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w50 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w51 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w52 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w53 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w54 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w55 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w56 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w57 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w58 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w59 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w60 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w61 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w62 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w63 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__ch = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
