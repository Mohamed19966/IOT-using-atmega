/*
 * timer.h
 *
 *  Created on: Jun 25, 2018
 *      Author: Mohamed Osama
 */

#ifndef TIMER_H_
#define TIMER_H_
#define NUMBER_OF_OVERFLOWS_PER_HALF_SECOND 3
#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"
#include "uart.h"
/*
 * Description :
 * ISR responsible for read analog data from a certain ADC channel
 * and convert it to digital using the ADC driver.
 * then Sends value using UART every 3 seconds
 */
ISR(TIMER1_OVF_vect);

/***********************/

/*
 * Description :
 * Function responsible for initialize Timer 1
 * overflow mode (normal mode)
 */

void timer1_init_normal_mode(void);
#endif /* TIMER_H_ */
