/*
*    DIO_Register.h
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 12-9-2023
*    Desc: Header file contains registers addresses for ADC driver 
*/

#ifndef ADC_REGISTER_H
#define ADC_REGISTER_H

// Macros to define registers addreses
#define ADMUX     *((volatile u8 *) 0x27)
#define ADCSRA    *((volatile u8 *) 0x26)
#define ADCH      *((volatile u8 *) 0x25)
#define ADCL      *((volatile u1 *) 0x24)
#define SFIOR     *((volatile u8 *) 0x50)
#define ADC_D     *((volatile u16 *) 0x24)    // 16 to read ADCL and ADCH

#endif
