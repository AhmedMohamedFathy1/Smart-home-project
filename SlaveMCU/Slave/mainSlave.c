// In this code slave recieve from master using SPI communaction protocol the send the data recieved to lcd and actuate 2 leds

#include "LED.h"
#include "SPI.h"
#include "LCD.h"

#define  F_CPU  8000000
#include <util/delay.h>   // delay function

int main(void)
{
	uint8 ReceivedData;    // data received from the register(from master MCU)
	
	SPI_Slave_Init();
	
	LED0_Init();  // led 0 initialize
	LED1_Init();  // led 1 initialize
	
	LCD_Init();   // lcd initialize
	LCD_GoTo(1,6); // cursor go to the specific place

	while (1)
	{
		
		ReceivedData=SPI_RecieveData(SPI->SPDR);   // receiving data from the register using spi  spi->spdr is data register
		            
		if(ReceivedData==Password)      // password is 1 (if loop for checking)
		{
			LCD_WriteChar(ReceivedData);   // lcd write
			
			LED0_Toggle();   // led toggle function function to turn on and off the led after 2 seconds 
			_delay_ms(500);
			LED1_Toggle();  // led toggle function function to turn on and off the led after 2 seconds
		}
	}
	
}

