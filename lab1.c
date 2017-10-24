#include<p18f452.h>

#pragma config OSC = HS        
#pragma config WDT = OFF        
#pragma config LVP = OFF     


void main(void)
{     
       int counter=0;
       TRISB=0x00;
       PORTB=0x00;
       
       for(counter=1;counter<16;counter++)
      {
        PORTB=counter;
      } 
       _asm
               sleep
        _endasm
}

