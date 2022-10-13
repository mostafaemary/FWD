/*
 * predestrain.h
 *
 * Created: 10/5/2022 8:23:37 AM
 *  Author: MOSTAFA EMARY
 */ 
#ifndef PREDESTRAIN_H_
#define PREDESTRAIN_H_
#include "../ECUAL/LED DEIVER/LED.h"
typedef enum PREDESTRAIN_ERROR
{
	PREDESTRAIN_OK,PRED_ERROR
}PREDESTRAIN_ERROR;
typedef enum MODE_ID
{
	MODE1,MODE2
}MODE_ID;
//this function to select the pedestrian mode
PREDESTRAIN_ERROR PREDESTRAIN_MODE(char x);
//modes functions
MODE_ID mode1();
MODE_ID mode2();
#endif /* PREDESTRAIN_H_ */