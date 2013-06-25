/*
 * xbee.c
 *
 *  Created on: 14/09/2011
 *      Author: Alan
 */

#include "xbee.h"
#include "uart.h"
#include "LPC17xx.h"

void sendCommand(char * cmd, int parameter);

void XBeeConfig(Xbee_CFG_Struct * cfg){
	int i;

	//UART_SendString("+++");
	UART_SendString("+");
	for(i=0;i<10000;i++);
	UART_SendString("+");
	for(i=0;i<10000;i++);
	UART_SendString("+");

	for(i=0;i<10000000;i++);

	sendCommand("ATID",cfg->PanID);
	sendCommand("ATDL",cfg->DestLow);
	sendCommand("ATDH",cfg->DestHi);
	sendCommand("ATMY",cfg->MyAdd);
	sendCommand("ATWR",-1);

	for(i=0;i<1000000;i++);

	sendCommand("ATID",-1);
	sendCommand("ATDL",-1);
	sendCommand("ATDH",-1);
	sendCommand("ATMY",-1);
	for(i=0;i<1000000;i++);

	sendCommand("ATCN",-1);

	for(i=0;i<10000;i++);
}

void Xbee_SendPacket(Xbee_CFG_Struct * cfg, char * msg, int value){
	UART_SendString("ID ");
	UART_SendNumber(cfg->MyAdd);
	UART_SendString(" - ");
	UART_SendString(msg);
	UART_SendString(" - ");
	UART_SendNumber(value);
	UART_SendString("\r\n");
}

void sendCommand(char * cmd, int parameter){
	UART_SendString(cmd);

	int i;

	if (parameter>0){
		UART_SendNumber(parameter);
	}
	UART_SendString("\r");
	for(i=0;i<1000000;i++);
}

