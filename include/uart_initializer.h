#ifndef UART_INITIALIZER_H_
#define UART_INITIALIZER_H_

#include "MKL25Z4.h"

#define UART_PORT(_N)		((PORT_Type *)(PORTA_BASE + (PORTB_BASE-PORTA_BASE)*(_N)))
#define UART_GPIO(_N)		((GPIO_Type *)(PTA_BASE + (PTB_BASE-PTA_BASE)*(_N)))

// A=0, B=1, C=3 ...
#define PORT 0
#define TX 1
#define RX 0

