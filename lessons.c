#include<p18f452.h>

#pragma config OSC = HS         // Oscillator Selection bits (HS oscillator)
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config LVP = OFF        // Low Voltage ICSP Enable bit (Low Voltage ICSP disabled)
//extern void delay(void);
extern unsigned int regA;
int c_var;
void main(void)
{


        int counter;
//    delay();
    regA=5;
     counter=0;
    
}


