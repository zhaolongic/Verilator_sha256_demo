// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2003 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
// ======================================================================

// This is intended to be a complex example of several features, please also
// see the simpler examples/make_hello_c.

module top
  (
   // Declare some signals so we can see how I/O works
    input              clk,
    input              rst_n,

    input       [11:0] PADDR_i,
    input       [31:0] PWDATA_i,
    input              PWRITE_i,
    input              PSEL_i,
    input              PENABLE_i,
    output      [31:0] PRDATA_o,
    output             PREADY_o,
    output             PSLVERR_o,

    input        [7:0] upio_in_i,
    output       [7:0] upio_out_o,
    output       [7:0] upio_dir_o,

    output             int_o
   );

   // And an example sub module. The submodule will print stuff.
    sha2apb  sha_top(
        .HCLK      (clk),
        .HRESETn   (rst_n),
        .PADDR     (PADDR_i),
        .PWDATA    (PWDATA_i),
        .PWRITE    (PWRITE_i),
        .PSEL      (PSEL_i),
        .PENABLE   (PENABLE_i),
        .PRDATA    (PRDATA_o),
        .PREADY    (PREADY_o),
        .PSLVERR   (PSLVERR_o),
    
        .upio_in_i  (upio_in_i),
        .upio_out_o (upio_out_o),
        .upio_dir_o (upio_dir_o),
    
        .int_o     (int_o));

   // Print some stuff as an example
   initial begin
      if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("logs/vlt_dump.vcd");
         $dumpvars();
      end
      $display("[%0t] Model running...\n", $time);
   end

endmodule
