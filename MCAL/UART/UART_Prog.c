/*
 * UART_Prog.c
 *
 * Created: 10/25/2020 4:20:05 PM
 *  Author: Sara Abuzaid
 */ 


#include "Platform_types.h"
#include "utilites.h"
#include "UART_interface.h"
#include "UART_private.h"


/**************************************************************/

void vid_UART_vid_Initialize(void)
{
	// Set BaudRate -> 9600/8MhZ
	UBRR0L = 51;
	UBRR0H = 0;
	// Set Frame Format -> 8 data, 1 stop, No Parity
	UCSR0C = 0b10000110;
	// Enable RX and TX
	UCSR0B = 0b00011000;
}

/**************************************************************/

void vid_UART_vid_SendChar(uint8 data)
{
	// Wait until transmission Register Empty
	while(!(UCSR0A&0b00100000));

	UDR0 = data;

	// wait for transmit complete
	while(!(UCSR0A&0b01000000));
}

/**************************************************************/

uint8 u8_UART_u8_GetChar(void)
{
	// Wait until Reception Complete
	while(!(UCSR0A&0b10000000));

	return UDR0;
}
