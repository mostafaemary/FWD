/*
 * normal.c
 *
 * Created: 10/3/2022 4:27:19 PM
 *  Author: MOSTAFA EMARY
 */ 
#include "normal.h"
char LED;
char NORMAL_MODE()//CAR TRAFFIC LIGHT
{
	LED_ON(LED_A,0);
	LED='G';
	delay1(5);
	LED_OFF(LED_A,0);
	LED='Y';
	LED_BLINK(LED_A,1,5,.5);
	LED_ON(LED_A,2);
	LED='R';
	delay1(5);
	LED_OFF(LED_A,2);
	LED='Y';
	LED_BLINK(LED_A,1,5,.5);
	return LED;
}