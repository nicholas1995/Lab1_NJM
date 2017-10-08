#include<p18f452.h>

#pragma config OSC = HS         // Oscillator Selection bits (HS oscillator)
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config LVP = OFF        // Low Voltage ICSP Enable bit (Low Voltage ICSP disabled)


void main(void)
{
       int counter;
       for(counter=1;counter<16;counter++)
      {
         _asm
         nop
         nop
        _endasm
        PORTB=counter;
      } 
}

