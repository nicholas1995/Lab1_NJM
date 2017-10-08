	    list	    p=18f452
	    #include	    p18f452.inc
;Calling a variable defined in asm in C
;1)Need to go in the linker and create a section for the data
;2)Use the name of the section created to define in the asm code which part to save the data (this is done by using <name of section>	UDATA.
;3)Next i have to name the variariable in asm (I do not have to put the EQU directive to state where it is being saved becasue i placed it in a section 
;4)Then i just need to put GLOBAL   <name of the variable >
;5)Now in C, before the main function i need to use extern unsigned int <name of variable>
	   
;Calling a variable defined in C in ASM
;1)Need to declare the variable as global in the C code. Jus initialise it outside of main
;2)Just need to put extern <variable name> in the asm code and then u can use the variable as normal
	    

	    
MYDATA	   UDATA
regA	   RES	1
	    
	    GLOBAL	    regA
	    
	    ORG		0x10
	    goto	my_main
	    ORG		0x20
	    extern	c_var

	    
my_main	    
	    movlw	0x20
	    movwf	c_var
	    END
	    
;	   
;delay
;	    movlw	    0x05
;	    movwf	    regA
;	    nop
;	    nop
;	    nop
;	    nop
;	    RETURN
;			    GLOBAL delay
;	    END
	 


