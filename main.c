/*
 * main.c
 *
 *  Created on: Jun 24, 2018
 *      Author: Mohamed Osama
 */
#include"interrupt.h"
#include "lcd.h"
#include "adc.h"
#include "timer.h"
#include "uart.h"
int main(void)
{
	timer1_init_normal_mode();			/* initialize Timer 1 overflow mode */
	INT0_Init();						/* initialize Interrupt0  */
	LED_Init();							/* initialize LED */
	LCD_init();							/* initialize LCD */
	LCD_displayStringRowColumn(0,4,"NOT PRESSED");  /* Initially LCD will display NOT PRESSED in first Row */
	LCD_displayStringRowColumn(1,7,"OFF");          /* Initially LCD will display OFF in Second Row */
	ADC_init();							/* initialize ADC */
	UART_init();			   			/* initialize UART */


    while(1)
    {}
}

