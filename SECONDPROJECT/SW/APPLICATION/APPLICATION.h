/*
 * APPLICATION.h
 *
 * Created: 9/30/2022 2:29:08 PM
 * Author: MOSTAFA EMARY
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../MCAL/DIO.h"
#include "../NORMAL MODE/normal.h"
#include "../PEDESTRAIN MODE/predestrain.h"
#include "../ECUAL/BUTTON DRIVER/BUTTON.h"
typedef enum APP_ERRORS
{
	APP_OK,APP_ERROR
}APP_ERRORS;

//interrupt (0) handling
#define EXT_INT(X) __vector_##X
#define ISR(EXT_IN) void EXT_IN(void) __attribute__ ((signal,used));\
void EXT_IN(void)

//APP APIS
//application module init
APP_ERRORS APP_INIT();

#endif /* APPLICATION_H_ */