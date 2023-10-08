/*
*    DIO_Program.c
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 8-9-2023
*    Desc: Code file contains the code for DIO driver 
*/

// Include header files
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include "DIO_Register.h"
#include "DIO_Config.h"

// Function to set pin direction
void DIO_VoidSetPinDirection(u8 Port, u8 Pin, u8 Dir)
{
     // Check for direction
     if(Dir == OUTPUT)
     {
        switch (Port)
        {
            case PORT_A: SET_BIT(DDRA, Pin); break;
            case PORT_B: SET_BIT(DDRB, Pin); break;
            case PORT_C: SET_BIT(DDRC, Pin); break;
            case PORT_D: SET_BIT(DDRD, Pin); break;
        }   
     }
     else if (Dir == INPUT)
     {
        switch (Port)
        {
            case PORT_A: CLR_BIT(DDRA, Pin); break;
            case PORT_B: CLR_BIT(DDRB, Pin); break;
            case PORT_C: CLR_BIT(DDRC, Pin); break;
            case PORT_D: CLR_BIT(DDRD, Pin); break;
        }   
     }
}

// Function to set pin value
void DIO_VoidSetPinValue(u8 Port, u8 Pin, u8 Value)
{
    // Check for value and write on a pin
    if(Value == HIGH)
    {
        switch (Port)
        {
            case PORT_A: SET_BIT(PORTA, Pin); break;
            case PORT_B: SET_BIT(PORTB, Pin); break;
            case PORT_C: SET_BIT(PORTC, Pin); break;
            case PORT_D: SET_BIT(PORTD, Pin); break;
        }   
     }
     else if (Value == LOW)
     {
        switch (Port)
        {
            case PORT_A: CLR_BIT(PORTA, Pin); break;
            case PORT_B: CLR_BIT(PORTB, Pin); break;
            case PORT_C: CLR_BIT(PORTC, Pin); break;
            case PORT_D: CLR_BIT(PORTD, Pin); break;
        }   
     }
}

// Function to get pin value
u8 DIO_U8GetPinValue(u8 Port, u8 Pin)
{
	// Initialize return value
	u8 value;

    // Check fot port and get pin value
    switch (Port)
    {
        case PORT_A: value = GET_BIT(PINA, Pin); break;
        case PORT_B: value = GET_BIT(PINB, Pin); break;
        case PORT_C: value = GET_BIT(PINC, Pin); break;
        case PORT_D: value = GET_BIT(PIND, Pin); break;
    }  

    // Return pin value
    return value;
}

// Function to toggle pin value
void DIO_VoidTogglePin(u8 Port, u8 Pin)
{
    // Check fot port and toggle pin value
    switch (Port)
    {
        case PORT_A: TOG_BIT(PORTA, Pin); break;
        case PORT_B: TOG_BIT(PORTB, Pin); break;
        case PORT_C: TOG_BIT(PORTC, Pin); break;
        case PORT_D: TOG_BIT(PORTD, Pin); break;
    } 
}

// Function to set port value
void DIO_VoidSetPortValue(u8 Port, u8 Value)
{
    // Switch over port and set value
    switch (Port)
    {
        case PORT_A: PORTA = Value; break;
        case PORT_B: PORTB = Value; break;
        case PORT_C: PORTC = Value; break;
        case PORT_D: PORTD = Value; break;
    } 
}

// Function to set port direction
void DIO_VoidSetPortDirection(u8 Port, u8 Direction)
{
    // Switch over port and set dierction
    switch (Port)
    {
        case PORT_A: DDRA = Direction; break;
        case PORT_B: DDRB = Direction; break;
        case PORT_C: DDRC = Direction; break;
        case PORT_D: DDRD = Direction; break;
    }   
}

// Function to set port high nibble direction
void DIO_VoidSetPortHighNibbleDirection(u8 Port , u8 Direction)
{
    switch (Port)
    {
        case PORT_A:
            if (Direction == INPUT)
            {
                CLR_HIGH_NIBB(DDRA);
            }
            else
            {
                SET_HIGH_NIBB(DDRA);
            }
            break;
        case PORT_B:
            if (Direction == INPUT)
            {
                CLR_HIGH_NIBB(DDRB);
            }
            else
            {
                SET_HIGH_NIBB(DDRB);
            }
            break;
        case PORT_C:
            if (Direction == INPUT)
            {
                CLR_HIGH_NIBB(DDRC);
            }
            else
            {
                SET_HIGH_NIBB(DDRC);
            }
            break;
        case PORT_D:
            if (Direction == INPUT)
            {
                CLR_HIGH_NIBB(DDRD);
            }
            else
            {
                SET_HIGH_NIBB(DDRD);
            }
            break;
    }
}

// Function to set port low nibble direction
void DIO_VoidSetPortLowNibbleDirection(u8 Port , u8 Direction)
{
    switch (Port)
    {
        case PORT_A:
            if (Direction == INPUT)
            {
                CLR_LOW_NIBB(DDRA);
            }
            else
            {
                SET_LOW_NIBB(DDRA);
            }
            break;
        case PORT_B:
            if (Direction == INPUT)
            {
                CLR_LOW_NIBB(DDRB);
            }
            else
            {
                SET_LOW_NIBB(DDRB);
            }
            break;
        case PORT_C:
            if (Direction == INPUT)
            {
                CLR_LOW_NIBB(DDRC);
            }
            else
            {
                SET_LOW_NIBB(DDRC);
            }
            break;
        case PORT_D:
            if (Direction == INPUT)
            {
                CLR_LOW_NIBB(DDRD);
            }
            else
            {
                SET_LOW_NIBB(DDRD);
            }
            break;
    }
}

// Function to set port low nibble value
void DIO_VoidSetPortHighNibbleValue(u8 Port , u8 Value)
{
    // Switch port 
    switch (Port)
    {
        case PORT_A: ASS_HIGH_NIBB(PORTA, Value); break;
        case PORT_B: ASS_HIGH_NIBB(PORTB, Value); break;
        case PORT_C: ASS_HIGH_NIBB(PORTC, Value); break;
        case PORT_D: ASS_HIGH_NIBB(PORTD, Value); break;
    }
}

void DIO_VoidSetPortLowNibbleValue(u8 Port , u8 Value)
{
    // Switch port 
    switch (Port)
    {
        case PORT_A: ASS_LOW_NIBB(PORTA, Value); break;
        case PORT_B: ASS_LOW_NIBB(PORTB, Value); break;
        case PORT_C: ASS_LOW_NIBB(PORTC, Value); break;
        case PORT_D: ASS_LOW_NIBB(PORTD, Value); break;
    }
}
