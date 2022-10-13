/*
 * normal.h
 *
 * Created: 10/3/2022 4:27:07 PM
 *  Author: MOSTAFA EMARY
 */ 


#ifndef NORMAL_H_
#define NORMAL_H_
#include "../ECUAL/LED DEIVER/LED.h"
typedef enum NORMAL_ERRORS
{
	NORMAL_OK,NORMAL_ERROR
}NORMAL_ERRORS;
//this function to implement the normal traffic mode
char NORMAL_MODE();
#endif /* NORMAL_H_ */