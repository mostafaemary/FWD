/*
 * LED.c
 *
 * Created: 9/30/2022 2:22:24 PM
 * Author: MOSTAFA EMARY
 */ 
#include "LED.h"
LED_ERRORS LED_init(vuint8_t portnumber,vuint8_t pinnumber)
{
	DIO_init(portnumber, pinnumber , OUTPUT);
	return LED_OK;
}
LED_MODE PIN_MODE(vuint8_t portnumber,vuint8_t pinnumber,LED_MODE mode)
{
		LED_init(portnumber,pinnumber);
		if(mode==led_ON)
		{
		DIO_write(portnumber, pinnumber, HIGH);
		return led_ON;
		}
		else if(mode==led_OFF)
		{
		DIO_write(portnumber, pinnumber, LOW);
		return led_OFF;
		}
		else
		{
		DIO_toggle(portnumber,pinnumber);
		return led_TOGGLE;
		}
}
LED_MODE LED_ON(vuint8_t portnumber,vuint8_t pinnumber)
{
	LED_init(portnumber,pinnumber);
	PIN_MODE(portnumber, pinnumber, led_ON);
	return led_ON;
}
LED_MODE LED_TOGGLE(vuint8_t portnumber,vuint8_t pinnumber,float t)
{
	LED_init(portnumber,pinnumber);
	PIN_MODE(portnumber, pinnumber, led_ON);
	delay1(t);
	PIN_MODE(portnumber, pinnumber, led_OFF);
	delay1(t);
	return led_TOGGLE;
}
LED_MODE LED_OFF(vuint8_t portnumber,vuint8_t pinnumber)
{
	LED_init(portnumber,pinnumber);
	PIN_MODE(portnumber, pinnumber, led_OFF);
	return led_OFF;
}
LED_MODE LED_BLINK(vuint8_t portnumber,vuint8_t pinnumber,int blink,float t)
{
	while(blink--)
	{
		LED_TOGGLE(portnumber,pinnumber,t);
	}
	return led_BLINK;
}
/*vuint8_t* LED_STATE(vuint8_t portnumber,vuint8_t pinnumber,vuint8_t*value)
{
	
}*/