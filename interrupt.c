/*
 * interrupt.c
 *
 *  Created on: Jun 24, 2018
 *      Author: Mohamed Osama
 */
#include "interrupt.h"
#include "lcd.h"

ISR(INT0_vect)
{
	static int Led_ON_Flag = 0 ;
	TOGGLE_BIT(PORTA,PA0);                     /* Toggle led state */
	LCD_clearScreen(); 						   /* clear the LCD display */
	LCD_displayStringRowColumn(0,5,"PRESSED"); /* Print PRESSED ON LCD */
	if(Led_ON_Flag == 1)
	{
		LCD_displayStringRowColumn(1,7,"ON");
	}
	else if (Led_ON_Flag == 0)
	{
		LCD_displayStringRowColumn(1,7,"OFF");
	}
	Led_ON_Flag ^=1;						  /* toggle Flag */

}

							/****************/


void LED_Init()
{
	SET_BIT(DDRA,0);  	  /* Configure pin PA0 in PORTA as output pin */
	SET_BIT(PORTA,0);	  /* Initialization Led is off at the beginning(Negative Logic) */

}

    						/*****************/


void INT0_Init()
{
	CLEAR_BIT(SREG,7);			  		/* Disable Interrupts */
	CLEAR_BIT(DDRD,2);			  		/* Configure pin PD2 in PORTD as input pin */
	SET_BIT(GICR,6);
	MCUCR |= (1<<ISC00) | (1<<ISC01);   /* Trigger INT0 with the rising edge */
	SET_BIT(SREG,7);					/* Enable Interrupts */
}

