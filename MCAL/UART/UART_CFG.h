/*
 * UART_CFG.h
 *
 * Created: 10/25/2020 4:20:26 PM
 *  Author: Sara Abuzaid
 */ 

#ifndef UART_CFG_H_
#define UART_CFG_H_



/*============================================================*/
/*==========              ProtoTypes                ==========*/
/*============================================================*/

void vid_UART_vid_Initialize(void);

void vid_UART_vid_SendChar(uint8_t data);

uint8_t u8_UART_u8_GetChar(void);

















#endif /* UART_CFG_H_ */