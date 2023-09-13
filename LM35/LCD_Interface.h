/*
*    LCD_Interface.h
*    Name : Omar Elsherif
*    Version: 1.0
*    Date: 10-9-2023
*    Desc: Header file contains functions prototypes for LCD driver
*/

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

#include "STD_TYPES.h"

// Functions prototypes
void LCD_VoidInit(void);
void LCD_VoidWriteCommand(u8 command);
void LCD_VoidWriteChar(u8 Char);
void LCD_VoidWriteString(const u8* String);
void LCD_VoidWriteNumber(u16 Number);
void LCD_VoidSetPosition(u8 Row, u8 Column);

#endif
