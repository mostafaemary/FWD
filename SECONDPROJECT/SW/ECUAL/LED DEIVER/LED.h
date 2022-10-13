/*
 * LED.h
 *
 * Created: 9/30/2022 2:22:41 PM
 *  Author: MOSTAFA EMARY */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO.h"
#define LED_A PORT_A
#define LED_B PORT_B
#define LED_C PORT_C
#define LED_D PORT_D

typedef enum LED_MODE
{
	led_OFF, led_ON,led_TOGGLE, led_BLINK
}LED_MODE;
typedef enum LED_ERRORS
{
	LED_ERROR,LED_OK
}LED_ERRORS;
LED_ERRORS LED_init(vuint8_t portnumber,vuint8_t pinnumber);//INTIALIZE THE LED AS OUTPUT DEVICE
LED_MODE PIN_MODE(vuint8_t portnumber,vuint8_t pinnumber,LED_MODE mode);//ON | OFF | TOGGLE THE LED
LED_MODE LED_ON(vuint8_t portnumber,vuint8_t pinnumber);//LED ON
LED_MODE LED_OFF(vuint8_t portnumber,vuint8_t pinnumber);//LED OFF
LED_MODE LED_TOGGLE(vuint8_t portnumber,vuint8_t pinnumber,float t);//LED TOGGLE FOR TIME t
LED_MODE LED_BLINK(vuint8_t portnumber,vuint8_t pinnumber,int blink,float t);// LED BLINKS NUMBER OF BLINKS WITH TIME t
vuint8_t* LED_STATE(vuint8_t portnumber,vuint8_t pinnumber,vuint8_t*value);//READ LED STATE
#endif /* LED_H_ */