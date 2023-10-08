/*
*    ADC_Interface.h
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 12-9-2023
*    Desc: Header file contains functions prototypes for ADC driver 
*/

#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

// Function prototypes
void ADC_VoidInit(void);
u16 ADC_u16ReadValue(u8 CH_NUM);
u16 ADC_u16ToTemp(u16 adcValue);

#endif
