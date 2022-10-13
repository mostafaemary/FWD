/*
 * APPLICATION.c
 *
 * Created: 9/30/2022 2:28:50 PM
 *  Author: MOSTAFA EMARY
 */ 
#include "APPLICATION.h"
//#include "util/delay.h"
int mode=0;
APP_ERRORS APP_INIT()//application intialization
{
	//interrupt 0 configuration
	SREG|=(1<<7);//enable global interrupt
	MCUCR|=(1<<1)|(1<<0);//enable rising edge
	GICR|=(1<<6);//enable interrupt 0
	BUTTON_init(B_D,2);
while(1)//super loop to make application continously on
{
	NORMAL_MODE();
}
	return APP_OK;
}
ISR(EXT_INT(1))//INTERRUPT SERVICE ROUTINE CALL PEDESTRAIN MODE WHEN INT0 IS OCCURE(PRESS THE PUSH BUTTON)
{
	PREDESTRAIN_MODE(NORMAL_MODE());
}