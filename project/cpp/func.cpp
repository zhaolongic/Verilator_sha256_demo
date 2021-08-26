#include <memory>
#include <verilated.h>
#include "Vtop.h"

void CONTEXTP_INIT(VerilatedContext* contextp, int argc, char** argv){
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
}


void RESET_LOGIC(VerilatedContext* contextp, Vtop* top, int clk_cycle){
    if(contextp->time()>0 && contextp->time()<clk_cycle)
        top->rst_n = 1;
    else if(contextp->time()<2*clk_cycle)
        top->rst_n = 0;
    else top->rst_n = 1;
}

void WRITE_LOGIC(Vtop* top, int addr, int data){
    top->PWDATA_i = data;
    top->PADDR_i = addr;

    top->PWRITE_i = 1;
    top->PSEL_i = 1;	
    top->PENABLE_i = 1;
}

void READ_LOGIC(Vtop* top, int addr){
    top->PADDR_i = addr;
    top->PWRITE_i = 0;
    top->PSEL_i = 1;	
    top->PENABLE_i = 1;
}

void IDLE_LOGIC(Vtop* top){
    top->PSEL_i = 0;	
    top->PENABLE_i = 0;
}
