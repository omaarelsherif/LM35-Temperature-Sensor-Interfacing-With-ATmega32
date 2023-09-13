/*
*    DIO_Interface.h
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 8-9-2023
*    Desc: Header file contains functions prototypes for DIO driver 
*/

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "STD_TYPES.h"

// Function prototypes
void DIO_VoidSetPinDirection(u8 Port, u8 Pin, u8 Dir);
void DIO_VoidSetPinValue(u8 Port, u8 Pin, u8 Value);
u8 DIO_U8GetPinValue(u8 Port, u8 Pin);
void DIO_VoidTogglePin(u8 Port, u8 Pin);
void DIO_VoidSetPortValue(u8 Port, u8 Value);
void DIO_VoidSetPortDirection(u8 Port, u8 Direction);

#endif
