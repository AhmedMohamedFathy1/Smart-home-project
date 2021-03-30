/*
 * LED.h
 *
 * Created: 24/10/2020 05:46:22 م
 *  Author: Ali
 */ 


#ifndef LED_H_
#define LED_H_

#include "DIO.h"

#define  F_CPU  8000000
#include <util/delay.h>

void LED0_Init(void);

void LED0_ON(void);

void LED0_OFF(void);

void LED0_Toggle(void);

void LED1_Init(void);

void LED1_ON(void);

void LED1_OFF(void);

void LED1_Toggle(void);



#endif /* LED_H_ */