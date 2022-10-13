/*
 * predestrain.c
 *
 * Created: 10/5/2022 8:23:19 AM
 *  Author: MOSTAFA EMARY
 */ 
#include "predestrain.h"
PREDESTRAIN_ERROR PREDESTRAIN_MODE(char x)//PEDESTRAIN TRAFFIC LIGHT
{
	if(x=='R')
	{
		LED_OFF(LED_A,2);
		mode1();
		LED_ON(LED_A,2);
	}
	else if(x=='G')
	{
		
		LED_OFF(LED_A,0);
		mode2();
		LED_ON(LED_A,0);
	}
	else
	{
		LED_OFF(LED_A,1);
		mode2();
		LED_ON(LED_A,1);
	}
	return PREDESTRAIN_OK;
}

MODE_ID mode1() //IF BUTTON PRESSED while RED LED IS ON
{
	LED_ON(LED_A,2);
	LED_ON(LED_B,0);
	delay1(5);
	LED_OFF(LED_A,2);
	LED_OFF(LED_B,0);
	return MODE1;
}
MODE_ID mode2() //IF BUTTON PRESSED while YELLO OR GREEN LEDS IS ON
{
	LED_ON(LED_B,2);
	int i=5;
	while (i)
	{
		LED_ON(LED_B,1);
		LED_ON(LED_A,1);
		delay1(.5);
		LED_OFF(LED_B,1);
		LED_OFF(LED_A,1);
		delay1(.5);
		i--;
	}
	LED_ON(LED_B,0);
	LED_ON(LED_A,2);
	delay1(5);
	LED_OFF(LED_B,2);
	LED_OFF(LED_B,0);
	LED_OFF(LED_A,2);
	return MODE2;
}