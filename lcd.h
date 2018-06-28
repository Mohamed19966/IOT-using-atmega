/*
 * lcd.h
 *
 *  Created on: Jun 24, 2018
 *      Author: Mohamed Osama
 */

#ifndef LCD_H_
#define LCD_H_
#include "common_macros.h"
#include "micro_config.h"
#include "std_types.h"

/*
 *
 *
 */

#define RS PD4
#define RW PD5
#define E  PD6
#define LCD_CTRL_PORT PORTD
#define LCD_CTRL_PORT_DIR DDRD
#define LCD_DATA_PORT PORTC
#define LCD_DATA_PORT_DIR DDRC

#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80

		/********************/
/*
 * Description :
 * Function responsible for sending a command
 */
void LCD_sendCommand(uint8 command);
/*
 * Description :
 * Function responsible for displaying a character
 */
void LCD_displayCharacter(uint8 data);
/*
 * Description :
 * Function responsible for  displaying a string
 */
void LCD_displayString(const char *Str);
/*
 * Description :
 * Function responsible for initialize the LCD
 */
void LCD_init(void);
/*
 * Description :
 * Function responsible for clearing LCD screen
 */
void LCD_clearScreen(void);
/*
 * Description :
 * Function responsible for displaying a string in a specific coordinate.
 */
void LCD_displayStringRowColumn(uint8 row,uint8 col,const char *Str);
/*
 * Description :
 * Function responsible for pointing cursor of LCD in a specific coordinate
 */
void LCD_goToRowColumn(uint8 row,uint8 col);
/*
 * Description :
 * Function responsible for displacing an integer value
 */
void LCD_intgerToString(int data);


#endif /* LCD_H_ */
