#include "msp430fr4133.h"

int UCMp_Init(void);
int collect(int counter);


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	


	return 0;
}

int UCMp_Init(void){

    /* using VLO-based DCO <1Mhz */

}

int collect(int counter){

}
