// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================
#include <sha.h>
#include <memory>
#include <verilated.h>
#include "Vtop.h"
/*void WRITE_LOGIC(){

    top->PWRITE_i = 1;
    top->PSEL_i = 1;	
    top->PENABLE_i = 1;

}

void READ_LOGIC(){
    top->PWRITE_i = 0;
    top->PSEL_i = 1;	
    top->PENABLE_i = 1;

}

void IDLE_LOGIC(){
    top->PWRITE_i = 0;
    top->PSEL_i = 0;	
    top->PENABLE_i = 0;

}*/
double sc_time_stamp() { return 0; }

int main(int argc, char** argv, char** env) {

    if (false && argc && argv && env) {}
    Verilated::mkdir("logs");
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "top"}};

    // Set Vtop's input signals
    top->rst_n = 1;
    top->clk = 0;


    int state = 0;

    int break_point = 0;
    // Simulate until $finish
    while (!break_point) {

        contextp->timeInc(5);  //clk period = 10;

        top->clk = !top->clk;

        if (!top->clk) {
            if (contextp->time() > 1 && contextp->time() < 15) {
                top->rst_n = 0;  // Assert reset
            } else {
                top->rst_n = 1;  // Deassert reset
            }


            // Assign some other inputs
        switch(state){
		case 0:{//case 0: write ctrl reg
			     if(top->PREADY_o == 1){

				     state = 1;

				     VL_PRINTF(  "[%" VL_PRI64 "d] inturrept enalbed!\n",
					          contextp->time()
					      );

			     }
			     else{
				     top->PADDR_i = UP_APB_REG_CTRL;
                                     top->PWDATA_i = 0x01;//enable_into_bit is bit0; 

				     //WRITE_LOGIC();
				     top->PWRITE_i = 1;
                                     top->PSEL_i = 1;	
                                     top->PENABLE_i = 1;

			     }
			     break;
		       }

		case 1:{//case 1: write message reg
			    if(top->PREADY_o == 1){

			            state = 2;
				    
				    VL_PRINTF(  
						    "[%" VL_PRI64 "d] message writen!\n",
						    contextp->time()
						    );

			    }
		            else{
				    top->PADDR_i =  SHA256_REG_MESSAGE;
		                    top->PWDATA_i = 0x303030;

				    //WRITE_LOGIC();
				    top->PWRITE_i = 1;
                                    top->PSEL_i = 1;	
                                    top->PENABLE_i = 1;
			    }
			    break;
	             }

		case 2:{//case 2: wait hash complete
			       if(top->int_o){
				       state = 3;

			       }
			       else{
				       //IDLE_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 0;	
                                       top->PENABLE_i = 0;

				       VL_PRINTF(
						       "[%" VL_PRI64 "d] wait hash finish!\n",
						       contextp->time()
						       );				       
			       }
			       break;
		       }
		case 3:{//case 3: read data 0;
			       if(top->PREADY_o){
				       state = 4;

				       VL_PRINTF(
						       "[%" VL_PRI64 "d] out0 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT0;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }
			       break;
		       }
		case 4:{
			       	if(top->PREADY_o){
				       state = 5;
				       VL_PRINTF(      "[%" VL_PRI64 "d] out1 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT1;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }

			       break;
		       }
		case 5:{
			       	if(top->PREADY_o){
				       state = 6;
				       VL_PRINTF(      "[%" VL_PRI64 "d] out2 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT2;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }
			       break;
		       }
		case 6:{
			       	if(top->PREADY_o){
				       state = 7;
				       VL_PRINTF(      "[%" VL_PRI64 "d] out3 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT3;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }
			       break;
		       }
		case 7:{
			       	if(top->PREADY_o){
				       state = 8;
				       VL_PRINTF(      "[%" VL_PRI64 "d] out4 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT4;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }			       
			       break;
		       }
                case 8:{
			       	if(top->PREADY_o){
				       state = 9;
				       VL_PRINTF(      "[%" VL_PRI64 "d] out5 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT5;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }
			       break;
		       }
		case 9:{
			       	if(top->PREADY_o){
				       state = 10;
				       VL_PRINTF(      "[%" VL_PRI64 "d] out6 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT6;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }			       
			       break;
		       }
		case 10:{
			       	if(top->PREADY_o){
				       break_point = 1;
				       VL_PRINTF(      "[%" VL_PRI64 "d] out7 = 0x%x \n",
						       contextp->time(), top->PRDATA_o
						       );	
			       }
			       else{
				       top->PADDR_i = SHA256_REG_OUT7;
				       
				       //READ_LOGIC();
				       top->PWRITE_i = 0;
                                       top->PSEL_i = 1;	
                                       top->PENABLE_i = 1;
			       }				
				break;
			}
		       

		default:{    
		    //IDLE_LOGIC();
		    top->PWRITE_i = 0;
                    top->PSEL_i = 0;	
                    top->PENABLE_i = 0;
	        }
	}


    }

        // Evaluate model
        // (If you have multiple models being simulated in the same
        // timestep then instead of eval(), call eval_step() on each, then
        // eval_end_step() on each. See the manual.)
        top->eval();

        // Read outputs
        /*VL_PRINTF("[%" VL_PRI64 "d] clk=%x rstl=%x iquad=%" VL_PRI64 "x"
                  " -> oquad=%" VL_PRI64 "x owide=%x_%08x_%08x\n",
                  contextp->time(), top->clk, top->reset_l, top->in_quad, top->out_quad,
                  top->out_wide[2], top->out_wide[1], top->out_wide[0]);*/
    }

    top->final();

    #if VM_COVERAGE
        Verilated::mkdir("logs");
        contextp->coveragep()->write("logs/coverage.dat");
    #endif

    return 0;
}
