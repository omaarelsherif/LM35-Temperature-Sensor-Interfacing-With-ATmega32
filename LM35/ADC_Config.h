/*
*    ADC_Config.h
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 12-9-2023
*    Desc: Header file contains configurations for ADC driver 
*/

#ifndef ADC_CONFIG_H
#define ADC_CONFIG_H

// Macros to define ADMUX register pins
#define ADLAR   5
#define REFS0   6
#define REFS1   7

// Macros to define ADCSRA register pins
#define ADPS0   0
#define ADPS1   1
#define ADPS2   2
#define ADIE    3
#define ADIF    4
#define ADATE   5
#define ADSC    6
#define ADEN    7

#endif
