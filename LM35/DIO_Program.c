/*
*    DIO_Program.c
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 8-9-2023
*    Desc: Code file contains the code for DIO driver 
*/

// Include header files
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Register.h"

// Function to set pin direction
void DIO_VoidSetPinDirection(u8 Port, u8 Pin, u8 Dir)
{
     // Check for direction
     if(Dir == 1)
     {
        switch (Port)
        {
            case 0: SET_BIT(DDRA, Pin); break;
            case 1: SET_BIT(DDRB, Pin); break;
            case 2: SET_BIT(DDRC, Pin); break;
            case 3: SET_BIT(DDRD, Pin); break;
        }   
     }
     else if (Dir == 0)
     {
        switch (Port)
        {
            case 0: CLR_BIT(DDRA, Pin); break;
            case 1: CLR_BIT(DDRB, Pin); break;
            case 2: CLR_BIT(DDRC, Pin); break;
            case 3: CLR_BIT(DDRD, Pin); break;
        }   
     }
}

// Function to set pin value
void DIO_VoidSetPinValue(u8 Port, u8 Pin, u8 Value)
{
    // Check for value and write on a pin
    if(Value == 1)
    {
        switch (Port)
        {
            case 0: SET_BIT(PORTA, Pin); break;
            case 1: SET_BIT(PORTB, Pin); break;
            case 2: SET_BIT(PORTC, Pin); break;
            case 3: SET_BIT(PORTD, Pin); break;
        }   
     }
     else if (Value == 0)
     {
        switch (Port)
        {
            case 0: CLR_BIT(PORTA, Pin); break;
            case 1: CLR_BIT(PORTB, Pin); break;
            case 2: CLR_BIT(PORTC, Pin); break;
            case 3: CLR_BIT(PORTD, Pin); break;
        }   
     }
}

// Function to get pin value
u8 DIO_U8GetPinValue(u8 Port, u8 Pin)
{
    // Check fot port and get pin value
    switch (Port)
    {
        case 0: (PINA & (1 << Pin)) >> Pin; break;
        case 1: (PINB & (1 << Pin)) >> Pin; break;
        case 2: (PINC & (1 << Pin)) >> Pin; break;
        case 3: (PIND & (1 << Pin)) >> Pin; break;
    }  
}

// Function to toggle pin value
void DIO_VoidTogglePin(u8 Port, u8 Pin)
{
    // Check fot port and toggle pin value
    switch (Port)
    {
        case 0: PINA ^ (1 << Pin); break;
        case 1: PINB ^ (1 << Pin); break;
        case 2: PINC ^ (1 << Pin); break;
        case 3: PIND ^ (1 << Pin); break;
    } 
}

// Function to set port value
void DIO_VoidSetPortValue(u8 Port, u8 Value)
{
    // Switch over port and set value
    switch (Port)
    {
        case 0: PORTA = Value; break;
        case 1: PORTB = Value; break;
        case 2: PORTC = Value; break;
        case 3: PORTD = Value; break;
    } 
}

// Function to set port direction
void DIO_VoidSetPortDirection(u8 Port, u8 Direction)
{
    // Switch over port and set dierction
    switch (Port)
    {
        case 0: DDRA = Direction; break;
        case 1: DDRB = Direction; break;
        case 2: DDRC = Direction; break;
        case 3: DDRD = Direction; break;
    }   
}
