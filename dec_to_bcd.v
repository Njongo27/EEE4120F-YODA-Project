module dec_to_bcd(input [7:0] decimal,output [11:0] BinCD);
  reg [11:0] BinCD; 
  reg [3:0] i;   
  always @(decimal) begin BinCD=0;
    for (i=0;i<=7;i++) begin BinCD={BinCD[10:0],decimal[7-i]};
        if(BinCD[3:0]>4&i<7) BinCD[3:0]=BinCD[3:0]+3;
        if(BinCD[7:4]>4&i<7) BinCD[7:4]=BinCD[7:4]+3;
        if(BinCD[11:8]>4&i<7) BinCD[11:8]=BinCD[11:8]+3;  
      end
    end                  
endmodule
