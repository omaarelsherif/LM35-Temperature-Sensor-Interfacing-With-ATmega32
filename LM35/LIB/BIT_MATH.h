/*
*    BIT_MATH.h
*    Name : Omar Elsherif
*    Desc: Header file contains macros to manipulate bits in a register 
*/

#ifndef BIT_MATH_H
#define BIT_MATH_H

// Macros to manipulate over specific bit in a register 
#define  SET_BIT(REG, BIT)		 ((REG) |= (1 << BIT))         
#define  CLR_BIT(REG, BIT)       ((REG) &= (~(1 << BIT)))
#define  GET_BIT(REG, BIT)       (((REG) >> BIT) & 0x01)
#define  TOG_BIT(REG, BIT)       ((REG) ^= (1 << BIT))
#define  SET_HIGH_NIBB(REG) 	 REG |= 240
#define  SET_LOW_NIBB(REG) 		 REG |= 15
#define  CLR_HIGH_NIBB(REG)		 REG &= 15
#define  CLR_LOW_NIBB(REG) 		 REG &= 240
#define  ASS_HIGH_NIBB(REG,Val)  (Val==0)? CLR_HIGH_NIBB(REG):(SET_HIGH_NIBB(REG))
#define  ASS_LOW_NIBB(REG,Val)   (Val==0)? CLR_LOW_NIBB(REG):(SET_LOW_NIBB(REG))

#endif
