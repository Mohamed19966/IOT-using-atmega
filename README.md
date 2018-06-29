## Description
Using  atmega16 micro controller

using interrupt0 to toggle a LED and displaying state of LED PRESSED and (ON , OFF) on LCD while sending temprature value from lm35 using  UART to another microcontroller and displaying it in LCD every 3 seconds using timer 1 
## Video to Demonstrate 
Link :https://youtu.be/ivJ70tunlVw

### Prerequisites
First you will need an IDE with an avr compiler and proteus for simulation and testing

## Getting Started
What things you need to install the software and how to install them

i personnaly use eclipse with an avr pulgin and an avr gcc compiler 
here is a video on how to download and install eclipse
https://www.youtube.com/watch?v=TXbuATMlVNY

and u can download proteus from here 

http://www.mediafire.com/file/61w6sou25v3scxo/msys-1.0.rar

### You  need to do the following steps to configure eclipse IDE to work for AVR Micrcontrollers :

```
1. Download and Install AVR-GCC compiler from here:
http://sourceforge.net/projects/winavr/?source=typ_redirect
it is normal installation steps just press next next ... finish 

2. Download AVR Eclipse Plugin from here:
http://sourceforge.net/…/avr-eclipse%20stable%20rele…/2.4.2/
installation steps :
1. open eclipse
2. choose help -> install new software
3. choose Add -> Archive -> browse to the .zip file 
4. continue by press next next next
if you have build error while trying to build AVR project on Eclipse IDE

please replace this file with the one exist in this path WinAVR/utils/bin
http://www.mediafire.com/file/61w6sou25v3scxo/msys-1.0.rar
```

## Pins and connections

```
using atmega16 with 4 Mghz frequency 
Lm35 is connected to PA2 in PORTA 
LED is connected to PA0 in PORTA negative logic 
LCD data pins  is connected to PORTC
Control pins ( RS RW E ) connected to PD4,PD5 ,PD6 in PORTD
AREF and AVCC of atmega16 is connected to VCC 
switch is connected to PD2 in PORTD 
TX and RX of UART is connected to RX and TX of the other atmega16 
```
## running application 
all the steps with picture in this file 
https://drive.google.com/open?id=1cABLYhiJuW3OzuqlYMvzFkRZzEPFEowT

## issue 
in Proteus ISR of interrupt 0 is executed at the beginning of program without triggring the switch 
