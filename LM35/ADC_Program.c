/*
*    ADC_Program.c
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 12-9-2023
*    Desc: Code file contains the code for ADC driver 
*/

// Include header files
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_Config.h"
#include "ADC_Register.h"

// Function to initialize the ADC
void ADC_VoidInit(void)
{
    // Select Vref = AVCC = 5v
    SET_BIT(ADMUX, REFS0);
    CLR_BIT(ADMUX, REFS1);

    // Select right adjust result
    CLR_BIT(ADMUX, ADLAR);

    // Enable ADC
    SET_BIT(ADCSRA, ADEN);

    // Select single-ended conversion
    SET_BIT(ADCSRA, ADATE);

    // ADC interrupt disable
    CLR_BIT(ADCSRA, ADIE);

    // Prescaler select bits (16-bits)
    CLR_BIT(ADCSRA, ADPS0);
    CLR_BIT(ADCSRA, ADPS1);
    SET_BIT(ADCSRA, ADPS2);
}

// Function to read ADC value
u16 ADC_u16ReadValue(u8 CH_NUM)
{
    // Select channel
    ADMUX = ADMUX & 0b11100000;    // Clear channel selection to select new channel
    ADMUX = ADMUX | CH_NUM;

    // Strat conversion
    SET_BIT(ADCSRA, ADSC);

    // Wait until conversion end
    while(GET_BIT(ADCSRA, ADIF) == 0);

    // Clear ADIF
    SET_BIT(ADCSRA, ADIF);

    // Return ADC value from data register
    return ADC_D;
}

// Function to convert ADC reading to voltage
u16 ADC_u16ToVoltage(u16 adcValue)
{
    // Calculate and return voltage
    return (adcValue * 5000UL) / 1023;
}
