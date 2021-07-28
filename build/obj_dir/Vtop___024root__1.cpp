// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_3d4c3f92_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_006cca02_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_0f712d64_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_41b18044_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_bdecd1df_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__6\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
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

void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__5(vlSelf);
    }
    Vtop___024root___combo__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->PADDR_i & 0xf000U))) {
        Verilated::overWidthError("PADDR_i");}
    if (VL_UNLIKELY((vlSelf->PWRITE_i & 0xfeU))) {
        Verilated::overWidthError("PWRITE_i");}
    if (VL_UNLIKELY((vlSelf->PSEL_i & 0xfeU))) {
        Verilated::overWidthError("PSEL_i");}
    if (VL_UNLIKELY((vlSelf->PENABLE_i & 0xfeU))) {
        Verilated::overWidthError("PENABLE_i");}
}
#endif  // VL_DEBUG
