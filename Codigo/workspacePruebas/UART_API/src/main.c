/*
===============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Copyright (C) 
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include <cr_section_macros.h>
#include <NXP/crp.h>

#include "lpc17xx_pinsel.h"
#include "led7seg.h"
//#include "lpc17xx_uart.h"

#include <string.h>

// Variable to store CRP value in. Will be placed automatically
// by the linker when "Enable Code Read Protect" selected.
// See crp.h header for more information
__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;



//------------------------------------------------------------------------------
// Interrupcion del systick
//------------------------------------------------------------------------------

int estado = 0;
int contador = 0;
int color = 0;
uint8_t number = 0;

void SysTick_Handler(){

	if(contador == 500){ // cada 500ms cambia el estado
		contador = 0;
		if(estado){
			LPC_GPIO0->FIOCLR = (1<<22);
		}else{
			LPC_GPIO0->FIOSET = (1<<22);
		}
		estado++;
		estado = estado % 2;


		switch(color){
			case 0:
				LPC_GPIO2->FIOSET = (1<<0); //red on
				break;
			case 1:
				LPC_GPIO2->FIOSET = (1<<1); //red on
				break;
			case 2:
				LPC_GPIO0->FIOSET = (1<<26); //red on
				break;
			case 3:
				LPC_GPIO2->FIOCLR = (1<<0); //red on
				break;
			case 4:
				LPC_GPIO2->FIOCLR = (1<<1); //red on
				break;
			case 5:
				LPC_GPIO0->FIOCLR = (1<<26); //red on
				break;

		}

		color++;
		color  = color % 6;

	}else
		contador++;


	led7seg_setChar(number, TRUE);

	number++;

	number = number %10;
}

//------------------------------------------------------------------------------
// Interrupcion del UART3
//------------------------------------------------------------------------------

void UART3_IRQHandler(void){

//	char c = UART_ReceiveByte(LPC_UART3);

//	switch(c){
//	case 'R':
//		LPC_GPIO2->FIOSET = (1<<0); //red on
//		break;
//	case 'r':
//		LPC_GPIO2->FIOCLR = (1<<0); //red off
//		break;
//	case 'B':
//		LPC_GPIO0->FIOSET = (1<<26); //blue on
//		break;
//	case 'b':
//		LPC_GPIO0->FIOCLR = (1<<26); //blue off
//		break;
//	case 'G':
//		LPC_GPIO2->FIOSET = (1<<1); //green on
//		break;
//	case 'g':
//		LPC_GPIO2->FIOCLR = (1<<1); //green off
//		break;
//	}
}

//------------------------------------------------------------------------------

int main(void) {
	
	//-----------------------------------------------
	// Configuracion de los pines LED
	//-----------------------------------------------

	LPC_GPIO0->FIODIR |= (1<<22);

	LPC_GPIO0->FIODIR |= (1<<26); //blue
	LPC_GPIO2->FIODIR |= (1<<0); //red
	LPC_GPIO2->FIODIR |= (1<<1); // green

	LPC_GPIO0->FIOCLR = (1<<26);
	LPC_GPIO2->FIOCLR = (1<<0);
	LPC_GPIO2->FIOCLR = (1<<1);

	//-----------------------------------------------
	// Configuracion de los pines para usar la UART3
	//-----------------------------------------------
//
//	PINSEL_CFG_Type configPinUART;
//
//	configPinUART.Funcnum = PINSEL_FUNC_2;
//	configPinUART.OpenDrain = PINSEL_PINMODE_NORMAL;
//	configPinUART.Pinmode = PINSEL_PINMODE_PULLUP;
//	configPinUART.Pinnum = PINSEL_PIN_0; //TXD3
//	configPinUART.Portnum = PINSEL_PORT_0;
//
//	PINSEL_ConfigPin(&configPinUART);
//
//	configPinUART.Pinnum = PINSEL_PIN_1;
//
//	PINSEL_ConfigPin(&configPinUART); //RXD3

	//-----------------------------------------------
	// Configuracion de la UART3
	//-----------------------------------------------

//	UART_CFG_Type configCfgUart;
//	configCfgUart.Baud_rate = 115200;
//	configCfgUart.Databits = UART_DATABIT_8;
//	configCfgUart.Parity = UART_PARITY_NONE;
//	configCfgUart.Stopbits = UART_STOPBIT_1;

//	UART_Init(LPC_UART3,&configCfgUart);
//	UART_TxCmd(LPC_UART3, ENABLE);
//
//	UART_SendString(LPC_UART3,"LPC1769\n");
//
//	UART_IntConfig(LPC_UART3, UART_INTCFG_RBR, ENABLE); // Se activa la interrupcion de RXD

//	NVIC_EnableIRQ(UART3_IRQn);

	led7seg_init();



	//-----------------------------------------------
	// Configuracion del SysTick y Habilita la interrupcion del SysTick
	//-----------------------------------------------

	SysTick_Config(SystemCoreClock/1000); //1ms

	//-----------------------------------------------
	//-----------------------------------------------

	volatile static int i = 0 ;
	while(1) {
		i++ ;
	}
	return 0 ;
}


