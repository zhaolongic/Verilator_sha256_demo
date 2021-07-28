RTL_DIR = ../sha256/rtl
SW_DIR = ../sha256/cpp
RTL_V = $(wildcard $(RTL_DIR)/*.v)
RTL_SV = $(wildcard $(RTL_DIR)/*.sv)
SW_CPP = $(wildcard $(SW_DIR)/*.cpp)

#LOGS_COMPILE = $(wildcard obj_dir/*.o)
#LOGS_WAVE = $(wildcard logs/*.vcd)

.PHONY : all
all: sim
	@echo "[Make]: Makefile running..."

.PHONY: compile
compile: $(RTL_SV) $(RTL_V) $(SW_CPP)
	@echo "[Make]: compiling rtl & cpp..."
	verilator -Wall --trace --cc --exe --build +librescan +libext+.v+.sv+.vh+.svh -y ../sha256/rtl ../sha256/rtl/top.v ../sha256/cpp/top_tb.cpp ../sha256/cpp/func.cpp

.PHONY:sim
sim: compile 
	@echo "[Make]: creating wave logs..."
	obj_dir/Vtop +trace

#.PHONY: clean
#clean: 
#	@echo "[Make]: cleanning compile_logs"
#	-rm all 

