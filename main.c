/*
 * main.c
 *
 *  Created on: Jun 24, 2018
 *      Author: Mohamed Osama
 */
#include"interrupt.h"
#include "lcd.h"

int main(void)
{
	INT0_Init();						/* initialize Interrupt0  */
	LED_Init();							/* initialize LED */
	LCD_init();							/* initialize LCD */
	LCD_displayStringRowColumn(0,4,"NOT PRESSED");  /* Initially LCD will display NOT PRESSED in first Row */
	LCD_displayStringRowColumn(1,7,"OFF");          /* Initially LCD will display OFF in Second Row */

    while(1)
    {}
}

