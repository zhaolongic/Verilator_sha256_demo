// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================
//include files are in ~/verilators_test/includes/
#include "includes/addr.h"
#include "includes/func.h"
#include <memory>
#include <verilated.h>
#include "../../build/obj_dir/Vtop.h"
//======================================================================
double sc_time_stamp() { return 0; }

int main(int argc, char** argv, char** env) {
    //software logic's variable
    int state = 0; //this is for apb logic,can delete if need
    int break_point = 0; //Simulate stop when break_point == 1

    const int clk_cycle = 10; //real clk cycle is 2*clk_cycle
    int clk_count = 0;

    //Not need to modify below
    if (false && argc && argv && env) {}
    Verilated::mkdir("logs");
    VerilatedContext* contextp = new VerilatedContext;
    CONTEXTP_INIT(contextp, argc, argv);
    Vtop* top = new Vtop{contextp, "top"};
    
    // Set Vtop's input signals
    top->rst_n = 1;
    top->clk = 0;
    
    // Simulate until break_point
    while (!break_point) {
        //clk logic
        contextp->timeInc(1);

        if(clk_count<clk_cycle-1)
            clk_count++;
        else{
            clk_count=0;
            top->clk = !top->clk;
        }

        //reset logic
        RESET_LOGIC(contextp, top, clk_cycle);

        //input_datas logic 
        if (top->clk && clk_count ==0) {
            switch(state){
	        case 0:{//case 0: write ctrl reg
                    if(top->PREADY_o == 1){
                        IDLE_LOGIC(top);
		        state = 1;
		        VL_PRINTF("[%" VL_PRI64 "d] inturrept has been enalbed!\n",contextp->time());
                    }
	 	    else WRITE_LOGIC(top, UP_APB_REG_CTRL, 0x01);//enable_into_bit is bit0; 	 
                    break;
	        }

	        case 1:{//case 1: write message reg
	            if(top->PREADY_o == 1){
                        IDLE_LOGIC(top);
	                state = 2;
		        VL_PRINTF("[%" VL_PRI64 "d] message has been writen! message = %x \n",contextp->time(),top->PWDATA_i);
		    }
		    else WRITE_LOGIC(top, SHA256_REG_MESSAGE, 0x313130); 
	            break;
	        }

	        case 2:{//case 2: wait hash complete
	            if(top->int_o){
		        state = 3;
                        VL_PRINTF("now hash progress has accomplished!\n");
		    }
		    else{
		        IDLE_LOGIC(top);
		        
		        //VL_PRINTF("[%" VL_PRI64 "d] wait hash progress to finish!\n",contextp->time());	       
                    }
	            break;
                }
	        case 3:{//case 3: read data 0;
		    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 4;		        
                        VL_PRINTF("[%" VL_PRI64 "d] out0 = 0x%x \n",contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top, SHA256_REG_OUT0);		    
                    break;
	        }
	        case 4:{//case 4: read data 1;
	       	    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 5;
		        VL_PRINTF("[%" VL_PRI64 "d] out1 = 0x%x \n",contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top,SHA256_REG_OUT1);
	            break;
	        }
	        case 5:{//case 5: read data 2;
		    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 6;
		        VL_PRINTF("[%" VL_PRI64 "d] out2 = 0x%x \n", contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top, SHA256_REG_OUT2);  
		    break;
		}
	        case 6:{//case 6: read data 3;
		    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 7;
		        VL_PRINTF("[%" VL_PRI64 "d] out3 = 0x%x \n", contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top, SHA256_REG_OUT3);  
		    break;
		}
	        case 7:{//case 7: read data 4;
		    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 8;
		        VL_PRINTF("[%" VL_PRI64 "d] out4 = 0x%x \n", contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top, SHA256_REG_OUT4);  
		    break;
		}
	        case 8:{//case 8: read data 5;
		    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 9;
		        VL_PRINTF("[%" VL_PRI64 "d] out5 = 0x%x \n", contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top, SHA256_REG_OUT5);  
		    break;
		}
	        case 9:{//case 9: read data 6;
		    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 10;
		        VL_PRINTF("[%" VL_PRI64 "d] out6 = 0x%x \n", contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top, SHA256_REG_OUT6);  
		    break;
		}
	        case 10:{//case 10: read data 7;
		    if(top->PREADY_o){
                        IDLE_LOGIC(top);
		        state = 11;
		        VL_PRINTF("[%" VL_PRI64 "d] out7 = 0x%x \n", contextp->time(), top->PRDATA_o);	
		    }
	            else READ_LOGIC(top, SHA256_REG_OUT7);  
		    break;
		}
		default: break_point = 1;
	}//switch case end
    }//whiledo end

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
    delete top, contextp;
    return 0;
}
