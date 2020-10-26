/*
 * GPIO_CFG.h
 *
 * Created: 10/25/2020 12:55:17 PM
 *  Author: Sara Abuzaid
 */ 


#ifndef GPIO_CFG_H_
#define GPIO_CFG_H_

/*============================================================*/
/*==========               includes                 ==========*/
/*============================================================*/
#include <stdint.h>

/*============================================================*/
/*==========              ProtoTypes                ==========*/
/*============================================================*/
void GPIO_WritePinDir(uint8_t PIN_NUM,uint8_t Val);
void GPIO_WritePinVal(uint8_t PIN_NUM,uint8_t Val);
void GPIO_ReadPinVal(uint8_t PIN_NUM,uint8_t *Val);
void GPIO_TogglePinVal(uint8_t PIN_NUM);

/*============================================================*/
/*==========              Definitions               ==========*/
/*============================================================*/






#endif /* GPIO_CFG_H_ */