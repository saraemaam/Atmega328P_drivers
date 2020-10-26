/*
 * GPIO_Private.h
 *
 * Created: 10/25/2020 12:55:04 PM
 *  Author: Sara Abuzaid
 */ 


#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_


/*============================================================*/
/*==========               includes                 ==========*/
/*============================================================*/
#include <stdint.h>
/*============================================================*/
/*==========        Registers Definitions           ==========*/
/*============================================================*/
/* Group A Registers */

#define PORTA_Register (0x3B)
#define DDRA_Register  (0x3A)
#define PINA_Register  (0x39)

/* Group B Registers */
#define PORTB_Register (0x25)
#define DDRB_Register  (0x24)
#define PINB_Register  (0x23)

/* Group C Registers */
#define PORTC_Register (0x28)
#define DDRC_Register  (0x27)
#define PINC_Register  (0x26)

/* Group D Registers */
#define PORTD_Register (0x2B)
#define DDRD_Register  (0x2A)
#define PIND_Register  (0x29)








#endif /* GPIO_PRIVATE_H_ */