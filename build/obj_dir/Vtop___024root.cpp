// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__counters = (0xffU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__counters)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__s_apb_write) {
            if ((0x80U & (IData)(vlSelf->PADDR_i))) {
                vlSelf->top__DOT__sha__DOT__unused_data 
                    = vlSelf->PWDATA_i;
            } else if ((0x40U & (IData)(vlSelf->PADDR_i))) {
                vlSelf->top__DOT__sha__DOT__unused_data 
                    = vlSelf->PWDATA_i;
            } else if ((0x20U & (IData)(vlSelf->PADDR_i))) {
                if ((0x10U & (IData)(vlSelf->PADDR_i))) {
                    if ((8U & (IData)(vlSelf->PADDR_i))) {
                        vlSelf->top__DOT__sha__DOT__unused_data 
                            = vlSelf->PWDATA_i;
                    } else if ((4U & (IData)(vlSelf->PADDR_i))) {
                        vlSelf->top__DOT__sha__DOT__unused_data 
                            = vlSelf->PWDATA_i;
                    }
                } else if ((8U & (IData)(vlSelf->PADDR_i))) {
                    if ((4U & (IData)(vlSelf->PADDR_i))) {
                        vlSelf->top__DOT__sha__DOT__unused_data 
                            = vlSelf->PWDATA_i;
                    }
                } else if ((4U & (IData)(vlSelf->PADDR_i))) {
                    vlSelf->top__DOT__sha__DOT__unused_data 
                        = vlSelf->PWDATA_i;
                }
            } else if ((0x10U & (IData)(vlSelf->PADDR_i))) {
                vlSelf->top__DOT__sha__DOT__unused_data 
                    = vlSelf->PWDATA_i;
            } else if ((8U & (IData)(vlSelf->PADDR_i))) {
                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                              >> 2U)))) {
                    vlSelf->top__DOT__sha__DOT__unused_data 
                        = vlSelf->PWDATA_i;
                }
            } else {
                vlSelf->top__DOT__sha__DOT__unused_data 
                    = vlSelf->PWDATA_i;
            }
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__s_apb_write) {
            if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->PADDR_i))) {
                        if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->PADDR_i))) {
                                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                              >> 2U)))) {
                                    vlSelf->top__DOT__sha__DOT__r_upio_padout 
                                        = (0xffU & vlSelf->PWDATA_i);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__sha__DOT__r_upio_padout = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__s_apb_write) {
            if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->PADDR_i))) {
                        if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                              >> 2U)))) {
                                    vlSelf->top__DOT__sha__DOT__r_upio_paddir 
                                        = (0xffU & vlSelf->PWDATA_i);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__sha__DOT__r_upio_paddir = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__s_apb_write) {
            if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->PADDR_i))) {
                                if ((4U & (IData)(vlSelf->PADDR_i))) {
                                    vlSelf->top__DOT__sha__DOT__r_ctrl 
                                        = (0xffU & vlSelf->PWDATA_i);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__sha__DOT__r_ctrl = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__s_apb_write) {
            if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->PADDR_i))) {
                        if ((0x10U & (IData)(vlSelf->PADDR_i))) {
                            if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->PADDR_i) 
                                              >> 2U)))) {
                                    vlSelf->top__DOT__sha__DOT__r_message 
                                        = (0xffffffU 
                                           & vlSelf->PWDATA_i);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__sha__DOT__r_message = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__done) {
            vlSelf->top__DOT__sha__DOT__r_hashed_data[0U] 
                = ((IData)(0x5be0cd19U) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out);
            vlSelf->top__DOT__sha__DOT__r_hashed_data[1U] 
                = ((IData)(0x1f83d9abU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out);
            vlSelf->top__DOT__sha__DOT__r_hashed_data[2U] 
                = ((IData)(0x9b05688cU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out);
            vlSelf->top__DOT__sha__DOT__r_hashed_data[3U] 
                = ((IData)(0x510e527fU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out);
            vlSelf->top__DOT__sha__DOT__r_hashed_data[4U] 
                = ((IData)(0xa54ff53aU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out);
            vlSelf->top__DOT__sha__DOT__r_hashed_data[5U] 
                = ((IData)(0x3c6ef372U) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out);
            vlSelf->top__DOT__sha__DOT__r_hashed_data[6U] 
                = (IData)((((QData)((IData)(((IData)(0x6a09e667U) 
                                             + vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((IData)(0xbb67ae85U) 
                                                         + vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out)))));
            vlSelf->top__DOT__sha__DOT__r_hashed_data[7U] 
                = (IData)(((((QData)((IData)(((IData)(0x6a09e667U) 
                                              + vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out))) 
                             << 0x20U) | (QData)((IData)(
                                                         ((IData)(0xbb67ae85U) 
                                                          + vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out)))) 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__sha__DOT__r_hashed_data[0U] = 0U;
        vlSelf->top__DOT__sha__DOT__r_hashed_data[1U] = 0U;
        vlSelf->top__DOT__sha__DOT__r_hashed_data[2U] = 0U;
        vlSelf->top__DOT__sha__DOT__r_hashed_data[3U] = 0U;
        vlSelf->top__DOT__sha__DOT__r_hashed_data[4U] = 0U;
        vlSelf->top__DOT__sha__DOT__r_hashed_data[5U] = 0U;
        vlSelf->top__DOT__sha__DOT__r_hashed_data[6U] = 0U;
        vlSelf->top__DOT__sha__DOT__r_hashed_data[7U] = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__done) {
            vlSelf->top__DOT__sha__DOT__r_int_flag = 1U;
        } else if (((IData)(vlSelf->top__DOT__sha__DOT__s_apb_write) 
                    & (4U == (0x3fU & ((IData)(vlSelf->PADDR_i) 
                                       >> 2U))))) {
            if ((1U & vlSelf->PWDATA_i)) {
                vlSelf->top__DOT__sha__DOT__r_int_flag = 0U;
            } else if ((2U & vlSelf->PWDATA_i)) {
                vlSelf->top__DOT__sha__DOT__r_int_flag = 1U;
            }
        }
    } else {
        vlSelf->top__DOT__sha__DOT__r_int_flag = 0U;
    }
    vlSelf->top__DOT__sha__DOT__r_stm = ((IData)(vlSelf->rst_n)
                                          ? (IData)(vlSelf->top__DOT__sha__DOT__s_stm_n)
                                          : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__sha__DOT__done) {
            vlSelf->top__DOT__sha__DOT__hash_flag = 0U;
        } else if (((IData)(vlSelf->top__DOT__sha__DOT__s_apb_write) 
                    & (0xcU == (0x3fU & ((IData)(vlSelf->PADDR_i) 
                                         >> 2U))))) {
            vlSelf->top__DOT__sha__DOT__hash_flag = 1U;
        }
    } else {
        vlSelf->top__DOT__sha__DOT__hash_flag = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x2bU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x2cU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x2dU 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x2eU 
                                                     != 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    if (
                                                        (0x2fU 
                                                         != 
                                                         (0x7fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                        if (
                                                            (0x30U 
                                                             != 
                                                             (0x7fU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w63 
                                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x2bU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x2cU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x2dU 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x2eU 
                                                     != 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    if (
                                                        (0x2fU 
                                                         != 
                                                         (0x7fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                        if (
                                                            (0x30U 
                                                             == 
                                                             (0x7fU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w62 
                                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x2bU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x2cU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x2dU 
                                                 == 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w59 
                                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x2bU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w57 
                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x2bU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x2cU 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w58 
                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x2bU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x2cU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x2dU 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x2eU 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w60 
                                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x2bU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x2cU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x2dU 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x2eU 
                                                     != 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    if (
                                                        (0x2fU 
                                                         == 
                                                         (0x7fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w61 
                                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x23U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x24U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x25U 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x26U 
                                                 == 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w52 
                                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x23U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x24U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w51 
                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x23U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w49 
                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x23U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x24U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x25U 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x26U 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x27U 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w53 
                                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x23U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x24U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w50 
                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x23U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x24U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x25U 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x26U 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x27U 
                                                     != 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    if (
                                                        (0x28U 
                                                         == 
                                                         (0x7fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w54 
                                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if ((1U & (~ ((((((((0x22U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                           | (0x24U 
                                              == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                          | (0x25U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                         | (0x26U == 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                        | (0x27U == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x28U == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x29U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                            if (((((((((0x2aU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                       | (0x2bU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x2cU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x2dU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x2eU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x2fU == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x30U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x31U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                                if ((0x2aU == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w56 
                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x23U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x24U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x25U 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x26U 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x27U 
                                                     != 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    if (
                                                        (0x28U 
                                                         != 
                                                         (0x7fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w55 
                                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if ((1U & (~ ((((((((0x1aU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                        | (0x1bU == 
                                           (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                       | (0x1cU == 
                                          (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                      | (0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                     | (0x1eU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                    | (0x1fU == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x20U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x21U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                        if (((((((((0x22U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                   | (0x23U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x24U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x25U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x26U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x27U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x28U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x29U == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                            if ((0x22U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w48 
                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U != (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0x13U != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x14U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x15U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x16U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37 
                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U != (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0x13U != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x14U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x15U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x16U == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36 
                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U != (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0x13U != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x14U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35 
                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U != (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0x13U != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x14U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34 
                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U != (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0x13U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33 
                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32 
                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU != (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((0xbU != (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0xcU != (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0xdU != (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0xeU != (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0xfU != (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x10U 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30 
                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU != (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((0xbU != (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0xcU != (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0xdU != (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0xeU != (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0xfU == (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29 
                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU != (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((0xbU != (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0xcU != (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0xdU != (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0xeU == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28 
                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU != (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((0xbU != (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0xcU == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26 
                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU != (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((0xbU != (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0xcU != (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0xdU != (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0xeU != (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0xfU != (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x10U 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31 
                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                if ((3U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((4U != (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19 
                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x1bU != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x1cU == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42 
                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                if ((3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17 
                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                if ((3U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((4U != (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((5U != (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((6U != (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((7U != (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((8U != (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23 
                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x1bU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41 
                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x1bU != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x1cU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x1dU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x1eU 
                                             == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44 
                                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                if ((3U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((4U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18 
                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU != (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((0xbU != (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0xcU != (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27 
                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                if ((3U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((4U != (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((5U != (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((6U != (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((7U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21 
                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x1bU != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x1cU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x1dU == (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43 
                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16 
                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40 
                                = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                if ((3U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((4U != (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((5U != (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((6U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20 
                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Body
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x1bU != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x1cU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x1dU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x1eU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x1fU 
                                                 == 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45 
                                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x1bU != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x1cU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x1dU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x1eU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x1fU 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46 
                                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if (((((((((2U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                   | (3U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (4U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (5U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                | (6U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
               | (7U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
              | (8U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
             | (9U == (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
            if ((2U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                if ((3U != (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((4U != (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((5U != (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((6U != (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((7U != (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((8U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22 
                                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24 
                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if (((((((((0xaU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                       | (0xbU == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0xcU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0xdU == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                    | (0xeU == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                   | (0xfU == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                  | (0x10U == (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                 | (0x11U == (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                if ((0xaU != (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                    if ((0xbU == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25 
                            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U != (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0x13U != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x14U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x15U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x16U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x17U 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x18U 
                                                 == 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38 
                                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if (((((((((0x12U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                           | (0x13U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x14U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x15U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (0x16U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (0x17U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (0x18U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                     | (0x19U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                    if ((0x12U != (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                        if ((0x13U != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x14U != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x15U != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x16U != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x17U 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x18U 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39 
                                                    = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en)))))) {
        if ((1U & (~ ((((((((2U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                            | (3U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (4U == (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (5U == (0x7fU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (6U == (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                        | (7U == (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                       | (8U == (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                      | (9U == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
            if ((1U & (~ ((((((((0xaU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                | (0xbU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0xcU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0xdU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0xeU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0xfU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x10U == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x11U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                if ((1U & (~ ((((((((0x12U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                                    | (0x13U == (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                   | (0x14U == (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                  | (0x15U == (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                 | (0x16U == (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                                | (0x17U == (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                               | (0x18U == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x19U == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))))) {
                    if (((((((((0x1aU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))) 
                               | (0x1bU == (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                              | (0x1cU == (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                             | (0x1dU == (0x7fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                            | (0x1eU == (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                           | (0x1fU == (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                          | (0x20U == (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) 
                         | (0x21U == (0x7fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))))) {
                        if ((0x1aU != (0x7fU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                            if ((0x1bU != (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                if ((0x1cU != (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                    if ((0x1dU != (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                        if ((0x1eU 
                                             != (0x7fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                            if ((0x1fU 
                                                 != 
                                                 (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                if (
                                                    (0x20U 
                                                     != 
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle))))) {
                                                    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47 
                                                        = vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->upio_out_o = vlSelf->top__DOT__sha__DOT__r_upio_padout;
    vlSelf->upio_dir_o = vlSelf->top__DOT__sha__DOT__r_upio_paddir;
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out 
            = vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out 
            = ((((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in 
                    + vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__s1) 
                   + vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__ch) 
                  + vlSelf->top__DOT__sha__DOT__sha_top__DOT__k) 
                 + vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in) 
                + ((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                      << 0x1eU) | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                   >> 2U)) ^ ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                               << 0x13U) 
                                              | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                                 >> 0xdU))) 
                   ^ ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                       << 0xaU) | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                   >> 0x16U)))) + (
                                                   ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                                     & vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in) 
                                                    ^ 
                                                    (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                                     & vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in)) 
                                                   ^ 
                                                   (vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
                                                    & vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in)));
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out 
            = (((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in 
                   + vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in) 
                  + vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__s1) 
                 + vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__ch) 
                + vlSelf->top__DOT__sha__DOT__sha_top__DOT__k) 
               + vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in);
    } else {
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out = 0U;
        vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out = 0U;
    }
    vlSelf->int_o = ((IData)(vlSelf->top__DOT__sha__DOT__r_ctrl) 
                     & (IData)(vlSelf->top__DOT__sha__DOT__r_int_flag));
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex 
        = ((IData)(vlSelf->rst_n) ? (((vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16 
                                       + vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7) 
                                      + ((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
                                            << 0x19U) 
                                           | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
                                              >> 7U)) 
                                          ^ ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
                                              << 0xeU) 
                                             | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
                                                >> 0x12U))) 
                                         ^ (vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15 
                                            >> 3U))) 
                                     + ((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
                                           << 0xfU) 
                                          | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
                                             >> 0x11U)) 
                                         ^ ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
                                             << 0xdU) 
                                            | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
                                               >> 0x13U))) 
                                        ^ (vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2 
                                           >> 0xaU)))
            : 0U);
    vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle 
        = ((1U & ((~ (IData)(vlSelf->rst_n)) | (~ (IData)(vlSelf->top__DOT__sha__DOT__hash_en))))
            ? 0U : (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__next_cycle));
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
}
