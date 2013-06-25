/*
 * API_Uart.h
 *
 *  Created on: 30/04/2012
 *      Author: Facundo Nahuel Uriel Silva
 */

#ifndef API_UART_H_
#define API_UART_H_

#include "lpc17xx_pinsel.h"
#include "lpc17xx_uart.h"

void API_Uart_Config(void);
void API_UartSendString(char* str);
void API_UartSendByte(uint8_t byte);


#endif /* API_UART_H_ */
