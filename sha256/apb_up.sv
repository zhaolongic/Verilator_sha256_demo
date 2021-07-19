`define SHA_REG_CTRL    6'b0000_11 // BASEADDR + 0x0C
`define SHA_REG_CMD     6'b0001_00 // BASEADDR + 0x10

`define SHA_REG_STATUS  6'b0001_01 // BASEADDR + 0x14

`define SHA_REG_PADDIR  6'b0010_00 // BASEADDR + 0x20
`define SHA_REG_PADIN   6'b0010_01 // BASEADDR + 0x24
`define SHA_REG_PADOUT  6'b0010_10 // BASEADDR + 0x28

`define SHA_REG_MESSAGE 6'b0011_00 // BASEADDR + 0x30
`define SHA_REG_OUT0    6'b0011_01 // BASEADDR + 0x34
`define SHA_REG_OUT1    6'b0011_10 // BASEADDR + 0x38
`define SHA_REG_OUT2    6'b0011_11 // BASEADDR + 0x3c
`define SHA_REG_OUT3    6'b0100_00 // BASEADDR + 0x40
`define SHA_REG_OUT4    6'b0100_01 // BASEADDR + 0x44
`define SHA_REG_OUT5    6'b0100_10 // BASEADDR + 0x48
`define SHA_REG_OUT6    6'b0100_11 // BASEADDR + 0x4c
`define SHA_REG_OUT7    6'b0101_00 // BASEADDR + 0x50

`define CTRL_INT_EN_BIT  'd0

`define CMD_CLR_INT_BIT  'd0
`define CMD_SET_INT_BIT  'd1


module sha2apb
#(
    parameter APB_ADDR_WIDTH = 12  //APB slaves are 4KB by default
)
(
    input  logic                      HCLK,
    input  logic                      HRESETn,
    input  logic [APB_ADDR_WIDTH-1:0] PADDR,
    input  logic               [31:0] PWDATA,
    input  logic                      PWRITE,
    input  logic                      PSEL,
    input  logic                      PENABLE,
    output logic               [31:0] PRDATA,
    output logic                      PREADY,
    output logic                      PSLVERR,

    input  logic                [7:0] upio_in_i,
    output logic                [7:0] upio_out_o,
    output logic                [7:0] upio_dir_o,

    output logic                      int_o
);  
    ///////////////
    // SHA Logic //
    ///////////////
    
    logic        hash_en;  //high means sha enable
    logic        done;
    logic [23:0] r_message;
    
    wire  [255:0] hashed_data;//hashed_data can't write, it's the data-hashed from sha256
    reg   [255:0] r_hashed_data;//store the hashed_data
    
    logic [31:0] r_out0;//rout0~rout7 can't write, they are used to divide the data-hashed from sha256
    logic [31:0] r_out1;
    logic [31:0] r_out2;
    logic [31:0] r_out3;
    logic [31:0] r_out4;
    logic [31:0] r_out5;
    logic [31:0] r_out6;
    logic [31:0] r_out7;
    
    assign r_out0 = r_hashed_data[255-: 32];
    assign r_out1 = r_hashed_data[223-: 32];
    assign r_out2 = r_hashed_data[191-: 32];
    assign r_out3 = r_hashed_data[159-: 32];
    
    assign r_out4 = r_hashed_data[127-: 32];
    assign r_out5 = r_hashed_data[95-: 32];
    assign r_out6 = r_hashed_data[63-: 32];
    assign r_out7 = r_hashed_data[31-: 32];
    
    ///////////////
    // APB Logic //
    ///////////////
    assign PSLVERR     = 1'b0;    // No slave error

    logic [5:0] s_apb_addr;
    logic       s_apb_write;
    logic       s_apb_read;

    assign s_apb_addr  = PADDR[7:2];

    ////////////////
    // User Logic //
    ////////////////

    // registers
    logic [7:0] r_ctrl;       // ctrl register
    logic [7:0] s_status;     // status register

    logic hash_flag;          // the real hash_flag

    logic s_int_en;           // Interrupt enable
    logic r_int_flag;         // Interrupt pending flag

    assign s_status = {6'b0, r_int_flag}; 
    assign s_int_en = r_ctrl[`CTRL_INT_EN_BIT];

    assign int_o    = s_int_en & r_int_flag;

    ////////////////////
    // UPIO registers //
    ////////////////////

    // A value of 1 means it is configured as an output,
    // while 0 configures it as an input.
    logic [7:0] r_upio_paddir;
    logic [7:0] r_upio_padout;

    assign upio_dir_o = r_upio_paddir;
    assign upio_out_o = r_upio_padout;
    
    /////////////////
    // hashed data //
    /////////////////	    
    always_ff @ (posedge HCLK, negedge HRESETn)
	  begin
 		    if (~HRESETn)
 		      begin
    		      r_hashed_data <= 'h0;
			    end
    		  else if(done)
        		  r_hashed_data <= hashed_data;
	  end
	  
    ////////////////////
    // interrupt flag //
    ////////////////////	  
	  always_ff @ (posedge HCLK, negedge HRESETn)
	  if(!HRESETn)
	      r_int_flag <= 0;
	  else if(done)
	      r_int_flag <= 1;
	  else if(s_apb_write & (s_apb_addr == `SHA_REG_CMD)) begin
	         if (PWDATA[`CMD_CLR_INT_BIT])
                 r_int_flag <= 1'b0;
          else if (PWDATA[`CMD_SET_INT_BIT])
                 r_int_flag <= 1'b1;
    end
              
    ///////////////
    // hash flag //
    ///////////////
    always_ff@(posedge HCLK or negedge HRESETn)
    begin
        if(!HRESETn)
            hash_flag <= 0;
        else if(done)
            hash_flag <= 0;
        else if(s_apb_write & (s_apb_addr == `SHA_REG_MESSAGE))
            hash_flag <= 1;
    end
  
    //////////////////
    // StateMachine //
    //////////////////
    enum logic [1:0] {
              IDLE,
              WAIT_WRITE,
              WAIT_COMPLETE,
              WAIT_READ
             	} r_stm, s_stm_n;

    always_ff @ (posedge HCLK, negedge HRESETn)
	  begin
 		    if (~HRESETn)
 		      begin
    		      r_stm <= IDLE;
			    end
    		  else
        		  r_stm <= s_stm_n;
	  end

    always_comb
    begin
		        PREADY = 1'b0;
		        
		        s_apb_write = 1'b0;
		        s_apb_read = 1'b0;
		        hash_en = 1'b0;
		        //s_apb_write = PSEL & PENABLE & PWRITE & !hash_en;
		        
    	       case (r_stm)
    	           IDLE:
    	           begin
    	               if(PSEL && PENABLE && PWRITE)
	                      s_stm_n = WAIT_WRITE;
	                  else if(hash_flag)
	                      s_stm_n = WAIT_COMPLETE;
	                  else if(PSEL && PENABLE && (!PWRITE))
    	                   s_stm_n = WAIT_READ;
  	                 else s_stm_n = IDLE;
  	             end
  	             
       	        WAIT_WRITE:
        	       begin
       	            PREADY = 1'b1;
     	              s_apb_write = 1'b1;
     	              s_stm_n = IDLE;
        	       end

        	       WAIT_COMPLETE:
        	       begin
                           hash_en = !done;
                           if(done) begin
                               s_stm_n = IDLE;
                           end
                           else    s_stm_n = WAIT_COMPLETE;
        	       end

        	       WAIT_READ:
                    begin
                        PREADY = 1'b1;
                        s_apb_read = 1'b1;
                        s_stm_n = IDLE;
                    end
                    
        	       default:
            		      s_stm_n = IDLE;
    		      endcase
    end
    
    ///////////////
    // REG write //
    ///////////////
    always_ff @ (posedge HCLK, negedge HRESETn)
    begin
        if (~HRESETn)
        begin
            r_ctrl     <= 'h0;
            //r_int_flag <= 'h0;

            r_upio_paddir <= 'h0;
            r_upio_padout <= 'h0;
	    
            r_message   <= 'h0;
        end
        else if (s_apb_write)
             begin
                 case (s_apb_addr)
                     `SHA_REG_CTRL:
                         r_ctrl <= PWDATA[7:0];
                     `SHA_REG_PADDIR:
                         r_upio_paddir <= PWDATA[7:0];
                     `SHA_REG_PADOUT:
                         r_upio_padout <= PWDATA[7:0];
		                 `SHA_REG_MESSAGE:
                         r_message <= PWDATA[23:0];
                 endcase
             end
    end 

    //////////////
    // REG READ //
    //////////////
    always_comb
    if(s_apb_read)
      begin
        case (s_apb_addr)
            `SHA_REG_CTRL:
                PRDATA = {'h0, r_ctrl};
            `SHA_REG_STATUS:
                PRDATA = {'h0, s_status};
            `SHA_REG_PADDIR:
                PRDATA = {'h0, r_upio_paddir};
            `SHA_REG_PADIN:
                PRDATA = {'h0, upio_in_i};
            `SHA_REG_PADOUT:
                PRDATA = {'h0, r_upio_padout};
            `SHA_REG_MESSAGE:
                PRDATA = {'h0,r_message};
            `SHA_REG_OUT0:
                PRDATA = r_out0;
            `SHA_REG_OUT1:
                PRDATA = r_out1;
            `SHA_REG_OUT2:
                PRDATA = r_out2;
            `SHA_REG_OUT3:
                PRDATA = r_out3;
            `SHA_REG_OUT4:
                PRDATA = r_out4;
            `SHA_REG_OUT5:
                PRDATA = r_out5;
            `SHA_REG_OUT6:
                PRDATA = r_out6;
            `SHA_REG_OUT7:
                PRDATA = r_out7;

	           default:
                PRDATA = 'h0;
        endcase
    
      end
    else PRDATA ='h0;


    sha256_24bit_in	sha_top
    (
	      .clk(HCLK),
	      .rst_n(HRESETn),

	      .valid(hash_en),
	      .msg_in(r_message),

	      .msg_out(hashed_data),
	      .ready(done)
    );
endmodule
