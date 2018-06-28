/*
 * UART.h
 *
 * Created on: Jun 27, 2018
 * Author: Mohamed Osama
 */  

#ifndef UART_H_
#define UART_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

/* UART Driver Baud Rate */
#define USART_BAUDRATE 9600

/*
 * Description :
 * Function responsible for initialize UART
 * 8 bit data mode
 * No parity
 * Prescale 8
 */
void UART_init(void);
 	 	 	 	 	 /***************/
/*
 * Description :
 * Function responsible for Sending a byte of data
 */
void UART_sendByte(const uint8 data);

/*
 * Description :
 * Function responsible for Receiving a byte of data
 */
uint8 UART_recieveByte(void);

/*
 * Description :
 * Function responsible for Sending a string of data
 * Sting must be terminated by '#'
 */
void UART_sendString(const uint8 *Str);

/*
 * Description :
 * Function responsible for Receiving a string of data
 * '#' at end will be neglected
 */
void UART_receiveString(uint8 *Str); // Receive until #

#endif /* UART_H_ */
