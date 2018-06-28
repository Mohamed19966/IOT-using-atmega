/*
 * main2.c
 *
 *  Created on: Jun 25, 2018
 *      Author: Mohamed Osama
 */

#include "lcd.h"
#include "uart.h"


int main()
{
	uint8 Str[20];
	UART_init();
	LCD_init(); /* initialize LCD */
	while(1)
	{

	UART_receiveString(Str);
	LCD_clearScreen();
	LCD_displayString(Str);
	}
}

