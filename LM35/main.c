/*
 * LM35
 * Author: OmarElsherif
 */

// Include drivers
#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "ADC_Interface.h"
#include <avr/delay.h>

// Main function
void main(void)
{
	// Initialize the LCD
	LCD_VoidInit();

	// Initialize ADC
	ADC_VoidInit();

	// Initialize ADC reading value
	u16 digital_value, analog_value;

	// Program loop
	while(1)
	{
		// Get ADC reading
		digital_value = ADC_u16ReadValue(0);

		// Get analog
		analog_value = ADC_u16ToVoltage(digital_value);

		// Clear LCD screen
		LCD_VoidWriteCommand(1);

		// Reposition LCD writing position
		LCD_VoidSetPosition(0,0);

		// Display value in LCD then delay for 500ms
		LCD_VoidWriteNumber(analog_value);
		_delay_ms(500);
	}
}
