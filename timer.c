/*
 * timer.c
 *
 *  Created on: Jun 25, 2018
 *      Author: Mohamed Osama
 */
#include "timer.h"
#include "adc.h"
#include "lcd.h"
#include "uart.h"
unsigned char g_tick = 0;
ISR(TIMER1_OVF_vect)
{
	unsigned long temp;
	g_tick++;
	if(g_tick == NUMBER_OF_OVERFLOWS_PER_HALF_SECOND)
	{
		PORTC = PORTC ^ (1<<PC0);						/* toggle led every 3 second */
		temp = ADC_readChannel(2); 						/* read channel two where the temp sensor is connected */
		temp = (temp*150*5)/(1023*1.5); 				/* calculate the temperature from the ADC value */
		g_tick = 0; 									/* clear the tick counter again to count a new 3 seconds */
		char  buff[8]; 									/* String to hold the ascii result */
		sprintf(buff,"Temp is :%d C#",(int)temp);
		/* using sprintf to put temperature value in string buff */
		UART_sendString(buff);							/* sending string  */
	}
}


			/***********************/

void timer1_init_normal_mode(void)
{
	TCNT1 = 0; //timer initial value
	TIMSK |= (1<<TOIE1); //enable overflow interrupt
	/* Configure the timer control register
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR1B = (1<<FOC0) | (1<<CS01) | (1<<CS00);
}

