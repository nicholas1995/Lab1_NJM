#include<timers.h>
#include<delays.h>  
#include<p18f452.h>
#include<stdio.h>
void isr();
#pragma code    intrup_vector=0x08     //interrupt vetor
void    intrup(void)
{   
    _asm
        goto    isr
    _endasm
}
#pragma code
void    isr(void)
{
    PORTAbits.RA3=!PORTAbits.RA3;   //toggle the state of RA3
    INTCONbits.TMR0IF=0;            //clear TMR0 interrupt flag
    WriteTimer0(25500);            //write value into TMR0
    INTCONbits.GIE=1;               //enable interrups
}
void main(void)
{
    INTCON=0;                 //Disables all interrupts
    //------------------Configure PortA 
    ADCON1=0x07;                //Set all inputs in PortA as digital inputs
    TRISA=0x00;                 //Set PortA as outputs
    PORTAbits.RA3=0;              //Set RA3 as a low initially 
    //------------------Configure TMR0
    TMR0L=0x00;                 
    TMR0H=0x00;
    OpenTimer0( TIMER_INT_ON &
            T0_16BIT &            //configure to operate in 16 bit more
            T0_SOURCE_INT &
            T0_EDGE_RISE &
            T0_PS_1_1 );
     INTCONbits.PEIE=1;
     INTCONbits.GIE=1;
     RCONbits.IPEN=0;            //disable priority interrupts
     INTCONbits.TMR0IE=1;
    //Main code
    WriteTimer0(25500);         //Set TMR0 to overflow at 10ms               
    while(1){}                  //loop  
}