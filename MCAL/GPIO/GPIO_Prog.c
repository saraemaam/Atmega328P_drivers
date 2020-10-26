/*
 * GPIO_Prog.c
 *
 * Created: 10/25/2020 12:55:33 PM
 *  Author: Sara Abuzaid
 */ 

/*============================================================*/
/*==========               includes                 ==========*/
/*============================================================*/
#include "GPIO_CFG.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include <stdint.h>
#include "Platform_types.h"
#include "utilites.h"
/*============================================================*/
/*==========             Functions Bodies           ==========*/
/*============================================================*/
void GPIO_WritePinDir(uint8 PIN_NUM,uint8 Val){
	//calculate pin port and its offset
	uint8 Pin_Location=PIN_NUM/8;
	uint8 Pin_Index=PIN_NUM%8;

switch(Pin_Location){
	case 1:
	if(Val==1)
	{
		SET_BIT(DDRB_Register,Pin_Index);
	}
	else
	{
		CLR_BIT(DDRB_Register,Pin_Index);
	}
	break;
	case 2:
	if(Val==1)
	{
		SET_BIT(DDRC_Register,Pin_Index);
	}
	else
	{
		CLR_BIT(DDRC_Register,Pin_Index);
	}
	break;

	case 3:
	if(Val==1)
	{
		SET_BIT(DDRD_Register,Pin_Index);
	}
	else
	{
		CLR_BIT(DDRD_Register,Pin_Index);
	}
	break;
}
	
}


void GPIO_WritePinVal(uint8 PIN_NUM,uint8 Val){
	//calculate pin port and its offset
	
	uint8 Pin_Location=PIN_NUM/8;
	uint8 Pin_Index=PIN_NUM%8;
	switch(Pin_Location){
		
		case 1:
		if(Val==1)
		{
			SET_BIT(PORTB_Register,Pin_Index);
		}
		else
		{
			CLR_BIT(PORTB_Register,Pin_Index);
		}
		break;
		case 2:
		if(Val==1)
		{
			SET_BIT(PORTC_Register,Pin_Index);
		}
		else
		{
			CLR_BIT(PORTC_Register,Pin_Index);
		}
		break;

		case 3:
		if(Val==1)
		{
			SET_BIT(PORTD_Register,Pin_Index);
		}
		else
		{
			CLR_BIT(PORTD_Register,Pin_Index);
		}
		break;
	}
	
}


void GPIO_ReadPinVal(uint8 PIN_NUM,uint8 *Val){
	//calculate pin port and its offset
	uint8 Pin_Location=PIN_NUM/8;
	uint8 Pin_Index=PIN_NUM%8;

	
switch (Pin_Location)
{
	
	case 1:

	return GET_BIT(PINB_Register,Pin_Index);


	break;

	case 2:


	return GET_BIT(PINC_Register,Pin_Index);


	break;

	case 3:

	return GET_BIT(PIND_Register,Pin_Index);

	break;

}
}


void GPIO_TogglePinVal(uint8 PIN_NUM){
	//calculate pin port and its offset
	uint8 Pin_Location=PIN_NUM/8;
	//uint8 Pin_Index=PIN_NUM%8;
	
	switch (Pin_Location)
	{
		case 1:
	TOGGLE_BIT( PORTB_Register , PIN_NUM);
		break;
		case 2:
	TOGGLE_BIT( PORTC_Register , PIN_NUM);
		break;
		case 3:
	TOGGLE_BIT( PORTD_Register , PIN_NUM);
		break;

	}
}
