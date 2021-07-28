// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp20;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w1),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w2),32);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w3),32);
        tracep->chgIData(oldp+3,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w4),32);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w5),32);
        tracep->chgIData(oldp+5,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w6),32);
        tracep->chgIData(oldp+6,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w7),32);
        tracep->chgIData(oldp+7,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w8),32);
        tracep->chgIData(oldp+8,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w9),32);
        tracep->chgIData(oldp+9,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w10),32);
        tracep->chgIData(oldp+10,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w11),32);
        tracep->chgIData(oldp+11,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w12),32);
        tracep->chgIData(oldp+12,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w13),32);
        tracep->chgIData(oldp+13,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w14),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+14,(vlSelf->top__DOT__sha__DOT__done));
        tracep->chgIData(oldp+15,(vlSelf->top__DOT__sha__DOT__r_message),24);
        __Vtemp20[0U] = ((IData)(0x5be0cd19U) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out);
        __Vtemp20[1U] = ((IData)(0x1f83d9abU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out);
        __Vtemp20[2U] = ((IData)(0x9b05688cU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out);
        __Vtemp20[3U] = ((IData)(0x510e527fU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out);
        __Vtemp20[4U] = ((IData)(0xa54ff53aU) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out);
        __Vtemp20[5U] = ((IData)(0x3c6ef372U) + vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out);
        __Vtemp20[6U] = (IData)((((QData)((IData)(((IData)(0x6a09e667U) 
                                                   + vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((IData)(0xbb67ae85U) 
                                                               + vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out)))));
        __Vtemp20[7U] = (IData)(((((QData)((IData)(
                                                   ((IData)(0x6a09e667U) 
                                                    + vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(0xbb67ae85U) 
                                                                + vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out)))) 
                                 >> 0x20U));
        tracep->chgWData(oldp+16,(__Vtemp20),256);
        tracep->chgWData(oldp+24,(vlSelf->top__DOT__sha__DOT__r_hashed_data),256);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__sha__DOT__r_hashed_data[7U]),32);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__sha__DOT__r_hashed_data[6U]),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__sha__DOT__r_hashed_data[5U]),32);
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__sha__DOT__r_hashed_data[4U]),32);
        tracep->chgIData(oldp+36,(vlSelf->top__DOT__sha__DOT__r_hashed_data[3U]),32);
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__sha__DOT__r_hashed_data[2U]),32);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__sha__DOT__r_hashed_data[1U]),32);
        tracep->chgIData(oldp+39,(vlSelf->top__DOT__sha__DOT__r_hashed_data[0U]),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__sha__DOT__unused_data),32);
        tracep->chgCData(oldp+41,(vlSelf->top__DOT__sha__DOT__r_ctrl),8);
        tracep->chgCData(oldp+42,(vlSelf->top__DOT__sha__DOT__r_int_flag),8);
        tracep->chgBit(oldp+43,(vlSelf->top__DOT__sha__DOT__hash_flag));
        tracep->chgBit(oldp+44,((1U & (IData)(vlSelf->top__DOT__sha__DOT__r_ctrl))));
        tracep->chgBit(oldp+45,(vlSelf->top__DOT__sha__DOT__r_int_flag));
        tracep->chgCData(oldp+46,(vlSelf->top__DOT__sha__DOT__r_upio_paddir),8);
        tracep->chgCData(oldp+47,(vlSelf->top__DOT__sha__DOT__r_upio_padout),8);
        tracep->chgCData(oldp+48,(vlSelf->top__DOT__sha__DOT__r_stm),2);
        tracep->chgCData(oldp+49,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle),7);
        tracep->chgCData(oldp+50,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sha__DOT__sha_top__DOT__cycle)))),7);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_ex),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_out),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_out),32);
        tracep->chgIData(oldp+54,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_out),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_out),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_out),32);
        tracep->chgIData(oldp+57,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_out),32);
        tracep->chgIData(oldp+58,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_out),32);
        tracep->chgIData(oldp+59,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_out),32);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w16),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w17),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w18),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w19),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w20),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w21),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w22),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w23),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w24),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w25),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w26),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w27),32);
        tracep->chgIData(oldp+72,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w28),32);
        tracep->chgIData(oldp+73,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w29),32);
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w30),32);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w31),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w32),32);
        tracep->chgIData(oldp+77,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w33),32);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w34),32);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w35),32);
        tracep->chgIData(oldp+80,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w36),32);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w37),32);
        tracep->chgIData(oldp+82,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w38),32);
        tracep->chgIData(oldp+83,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w39),32);
        tracep->chgIData(oldp+84,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w40),32);
        tracep->chgIData(oldp+85,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w41),32);
        tracep->chgIData(oldp+86,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w42),32);
        tracep->chgIData(oldp+87,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w43),32);
        tracep->chgIData(oldp+88,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w44),32);
        tracep->chgIData(oldp+89,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w45),32);
        tracep->chgIData(oldp+90,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w46),32);
        tracep->chgIData(oldp+91,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w47),32);
        tracep->chgIData(oldp+92,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w48),32);
        tracep->chgIData(oldp+93,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w49),32);
        tracep->chgIData(oldp+94,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w50),32);
        tracep->chgIData(oldp+95,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w51),32);
        tracep->chgIData(oldp+96,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w52),32);
        tracep->chgIData(oldp+97,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w53),32);
        tracep->chgIData(oldp+98,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w54),32);
        tracep->chgIData(oldp+99,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w55),32);
        tracep->chgIData(oldp+100,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w56),32);
        tracep->chgIData(oldp+101,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w57),32);
        tracep->chgIData(oldp+102,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w58),32);
        tracep->chgIData(oldp+103,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w59),32);
        tracep->chgIData(oldp+104,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w60),32);
        tracep->chgIData(oldp+105,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w61),32);
        tracep->chgIData(oldp+106,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w62),32);
        tracep->chgIData(oldp+107,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w63),32);
        tracep->chgIData(oldp+108,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__k),32);
        tracep->chgIData(oldp+109,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in),32);
        tracep->chgIData(oldp+110,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in),32);
        tracep->chgIData(oldp+111,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in),32);
        tracep->chgIData(oldp+112,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__d_in),32);
        tracep->chgIData(oldp+113,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__e_in),32);
        tracep->chgIData(oldp+114,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__f_in),32);
        tracep->chgIData(oldp+115,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__g_in),32);
        tracep->chgIData(oldp+116,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__h_in),32);
        tracep->chgIData(oldp+117,(((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                       << 0x1eU) | 
                                      (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                       >> 2U)) ^ ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                                   << 0x13U) 
                                                  | (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                                     >> 0xdU))) 
                                    ^ ((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                        << 0xaU) | 
                                       (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                        >> 0x16U)))),32);
        tracep->chgIData(oldp+118,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__s1),32);
        tracep->chgIData(oldp+119,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__M__DOT__ch),32);
        tracep->chgIData(oldp+120,((((vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                      & vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in) 
                                     ^ (vlSelf->top__DOT__sha__DOT__sha_top__DOT__a_in 
                                        & vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in)) 
                                    ^ (vlSelf->top__DOT__sha__DOT__sha_top__DOT__b_in 
                                       & vlSelf->top__DOT__sha__DOT__sha_top__DOT__c_in))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+121,(vlSelf->top__DOT__sha__DOT__hash_en));
        tracep->chgBit(oldp+122,(vlSelf->top__DOT__sha__DOT__s_apb_write));
        tracep->chgBit(oldp+123,(vlSelf->top__DOT__sha__DOT__s_apb_read));
        tracep->chgCData(oldp+124,(vlSelf->top__DOT__sha__DOT__s_stm_n),2);
        tracep->chgIData(oldp+125,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_16),32);
        tracep->chgIData(oldp+126,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_15),32);
        tracep->chgIData(oldp+127,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_7),32);
        tracep->chgIData(oldp+128,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_2),32);
        tracep->chgIData(oldp+129,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w0),32);
        tracep->chgIData(oldp+130,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w15),32);
        tracep->chgIData(oldp+131,(vlSelf->top__DOT__sha__DOT__sha_top__DOT__w_in),32);
    }
    tracep->chgBit(oldp+132,(vlSelf->clk));
    tracep->chgBit(oldp+133,(vlSelf->rst_n));
    tracep->chgSData(oldp+134,(vlSelf->PADDR_i),12);
    tracep->chgIData(oldp+135,(vlSelf->PWDATA_i),32);
    tracep->chgBit(oldp+136,(vlSelf->PWRITE_i));
    tracep->chgBit(oldp+137,(vlSelf->PSEL_i));
    tracep->chgBit(oldp+138,(vlSelf->PENABLE_i));
    tracep->chgIData(oldp+139,(vlSelf->PRDATA_o),32);
    tracep->chgBit(oldp+140,(vlSelf->PREADY_o));
    tracep->chgBit(oldp+141,(vlSelf->PSLVERR_o));
    tracep->chgCData(oldp+142,(vlSelf->upio_in_i),8);
    tracep->chgCData(oldp+143,(vlSelf->upio_out_o),8);
    tracep->chgCData(oldp+144,(vlSelf->upio_dir_o),8);
    tracep->chgBit(oldp+145,(vlSelf->int_o));
    tracep->chgCData(oldp+146,(vlSelf->top__DOT__counters),8);
    tracep->chgCData(oldp+147,((0x3fU & ((IData)(vlSelf->PADDR_i) 
                                         >> 2U))),6);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
