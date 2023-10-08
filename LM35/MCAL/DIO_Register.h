/*
*    DIO_Register.h
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 8-9-2023
*    Desc: Header file contains registers addresses for DIO driver 
*/

#ifndef DIO_REGISTER_H
#define DIO_REGISTER_H

// DDR registers addresses
#define DDRA *((u8*) 0x3A)
#define DDRB *((u8*) 0x37)
#define DDRC *((u8*) 0x34)
#define DDRD *((u8*) 0x31)

// PORT registers addresses
#define PORTA *((u8*) 0x3B)
#define PORTB *((u8*) 0x38)
#define PORTC *((u8*) 0x35)
#define PORTD *((u8*) 0x32)

// PIN registers addresses
#define PINA *((u8*) 0x39)
#define PINB *((u8*) 0x36)
#define PINC *((u8*) 0x33)
#define PIND *((u8*) 0x30)

#endif
