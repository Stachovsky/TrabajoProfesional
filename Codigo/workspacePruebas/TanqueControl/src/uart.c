/*
 * uart.c
 *
 *  Created on: 13/09/2011
 *      Author: Alan
 */

#include "lpc17xx_uart.h"
#include <string.h>
#include "oled.h" //para la faunción inttostring
void UART_SendString(char * msg){
	UART_Send(LPC_UART3,msg,strlen(msg),BLOCKING);
}

void UART_SendNumber(int n){
	char buff[10];
	intToString(n,buff,10,10);
	UART_Send(LPC_UART3,buff,strlen(buff),BLOCKING);
}
