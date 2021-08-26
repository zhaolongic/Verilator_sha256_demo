RTL_DIR = ../project/rtl
RTL_V = $(wildcard $(RTL_DIR)/*.v)
RTL_SV = $(wildcard $(RTL_DIR)/*.sv)
TOP_V = $(RTL_DIR)/top.v

STIM_DIR = ../project/cpp
STIM_CPP = $(wildcard $(STIM_DIR)/*.cpp)

VTOP = obj_dir/Vtop


.PHONY: all
all: sim
	@echo "[Make]: Makefile running..."

.PHONY: compile
compile: $(VTOP)

$(VTOP):$(RTL_V) $(RTL_SV) $(STIM_CPP)
	@echo "[Make]: compiling rtl & cpp..."
	verilator -Wall --trace --cc --exe --build +librescan +libext+.v+.sv+.vh+.svh -y $(RTL_DIR) $(TOP_V) $(STIM_CPP)


.PHONY: sim
sim: compile 
	@echo "[Make]: running simulation..."
	obj_dir/Vtop +trace

.PHONY: wave
wave:
	gtkwave -o logs/vlt_dump.vcd &

.PHONY: clean
clean: 
	@echo "[Make]: cleanning compile_logs"
	-rm -r obj_dir/

