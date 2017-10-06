	   
	    LIST	    p=18f452
	    INCLUDE	    <P18F452.INC>
	     filter  code
regA	    EQU		    0x20
	    
	    ORG		    0x00
	    goto	    mymain
	    ORG		    0x20
	   
mymain	    movlw	    0x05
	    movwf	    regA
	    END
	 


