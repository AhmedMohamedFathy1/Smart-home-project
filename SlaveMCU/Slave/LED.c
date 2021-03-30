/*
 * LED.c
 *
 * Created: 24/10/2020 05:46:03 م
 *  Author: Ali
 */ 


#include "LED.h"


void LED0_Init(void)
{
	DIO_SetPinDir(DIO_PORTA , DIO_PIN0, DIO_PIN_OUTPUT);
}

void LED0_ON(void)
{
	DIO_SetPinVal(DIO_PORTC , DIO_PIN2 , DIO_PIN_HIGH);
}

void LED0_OFF(void)
{
	DIO_SetPinVal(DIO_PORTC , DIO_PIN2 , DIO_PIN_LOW);
}

void LED0_Toggle(void)
{
	DIO_TogglePin(DIO_PORTA , DIO_PIN0);
	_delay_ms(2000);
	DIO_TogglePin(DIO_PORTA , DIO_PIN0);
	
}

void LED1_Init(void)
{
	DIO_SetPinDir(DIO_PORTD , DIO_PIN3, DIO_PIN_OUTPUT);
}

void LED1_ON(void)
{
	DIO_SetPinVal(DIO_PORTD , DIO_PIN3 , DIO_PIN_HIGH);
}

void LED1_OFF(void)
{
	DIO_SetPinVal(DIO_PORTD , DIO_PIN3 , DIO_PIN_LOW);
}

void LED1_Toggle(void)
{
	DIO_TogglePin(DIO_PORTD , DIO_PIN3);
	_delay_ms(2000);
	DIO_TogglePin(DIO_PORTD , DIO_PIN3);
}