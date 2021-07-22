verilator -Wall --trace --cc --exe --build +librescan +libext+.v+.sv+.vh+.svh -y ../../rtl/sha256 ../../rtl/sha256/top.v ../apps/sha256/top_tb.cpp ../apps/sha256/includes/func.cpp

verilator -Wno-fatal ../../rtl/sha256/top.v ../../rtl/sha256/sha2apb.sv ../../rtl/sha256/sha256_24bit_in.sv ../../rtl/sha256/sha_mainloop.sv ../../rtl/sha256/sha_extension.sv -xml-only --bbox-sys && xml2stems ./Vtop.xml top.stems

obj_dir/Vtop +trace

touch top.sav

gtkwave -o -t top.stems wave_logs/vlt_dump.vcd top.sav
