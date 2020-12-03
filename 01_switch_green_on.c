#include <msp430.h>				


/**
 * 01_switch_green_on.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;
	P1DIR |= 0x74;

	volatile unsigned int i;

	while(1)
	{
		P1OUT ^= 0x74;		
		for(i=10000; i>0; i--);
	}
}
