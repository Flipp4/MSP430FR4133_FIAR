#include "msp430fr4133.h"

int UCMp_Init(void);


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	


	return 0;
}

int UCMp_Init(void){

}
