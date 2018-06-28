/*
 * interrupt.h
 *
 *  Created on: Jun 24, 2018
 *      Author: Mohamed Osama
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#include "std_types.h"
#include "micro_config.h"
#include "common_macros.h"

/*
 * Description :
 * Function responsible for initialization LED in PA0 in PORTA
 */
void LED_Init();
	/*******************/
/*
 * Description :
 * Function responsible for initialization interrupt 0
 * Trigger INT0 with the rising edge
 * Enable global Interrupt bit
 */
void INT0_Init();
	/*******************/
/*
 * Description :
 * Function responsible for ISR of interrupt 0
 * when interrupt is triggered LED will toggle
 *  and will print on LCD PRESSED ( ON or OFF )
 */
ISR(INT0_vect);





#endif /* INTERRUPT_H_ */
