	    list	    p=18f452
	    #include	    p18f452.inc
asmy	    CODE
regA	    EQU		    0x20
	    
	    ORG		    0x10	    ;why cant i start it a 0x00 which is the reset vector 
	    goto	    mymain
	    ORG		    0x20
	   
mymain	    movlw	    0x05
	    movwf	    regA
	    END
	 


