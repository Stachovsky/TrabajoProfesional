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

//Drivers
#include "lpc17xx_pinsel.h"
#include "lpc17xx_gpio.h"
#include "lpc17xx_i2c.h"
#include "lpc17xx_timer.h"

// APIs
#include "ApiKeepAlive.h"


//revisar esto
static void init_i2c(void)
{
	PINSEL_CFG_Type PinCfg;

	/* Initialize I2C2 pin connect */
	PinCfg.Funcnum = 2;
	PinCfg.Pinnum = 10;
	PinCfg.Portnum = 0;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 11;
	PINSEL_ConfigPin(&PinCfg);

	// Initialize I2C peripheral
	I2C_Init(LPC_I2C2, 100000);

	/* Enable I2C1 operation */
	I2C_Cmd(LPC_I2C2, ENABLE);
}

uint16_t barra = 0x01;

typedef union{
	uint32_t ledsState;
	uint8_t ledLotes[4];
} ledEstado;

void setLed(uint8_t nroLed){
	uint8_t i;

	ledEstado estado;
	estado.ledsState = 1;
	estado.ledsState = estado.ledsState << (nroLed *2);

	uint8_t buf[2];

	I2C_M_SETUP_Type txsetup;
	txsetup.sl_addr7bit = 0x60; // 1100 000 0=W;
	txsetup.tx_data = (uint8_t*)&buf;
	txsetup.tx_length = 2;
	txsetup.rx_data = NULL;
	txsetup.rx_length = 0;
	txsetup.retransmissions_max = 3;

	for(i=0;i < 4;i++){
		buf[0] = (0x06 + i);
		buf[1] = estado.ledLotes[i];
		I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
	}

}

uint8_t ledActual = 0;

// Board Timer Handlers
void TIMER0_IRQHandler (void)
{
	setLed(ledActual);
	ledActual++;
	ledActual %= 16;

	TIM_ClearIntPending(LPC_TIM0, TIM_MR0_INT);
	TIM_ResetCounter(LPC_TIM0);

}




__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

int main(void) {


//----------------------------------------------------------------------------
// KeepAlive
//----------------------------------------------------------------------------
	API_KeepAliveInit(0,NULL); // KeepAlive con delay y accion por defecto
	
//----------------------------------------------------------------------------
// Timer 0
//----------------------------------------------------------------------------

	TIM_MATCHCFG_Type MatchConfigTM0;
	MatchConfigTM0.MatchChannel = 0;
	MatchConfigTM0.IntOnMatch = TRUE;
	MatchConfigTM0.ResetOnMatch = TRUE;
	MatchConfigTM0.StopOnMatch = FALSE;
	MatchConfigTM0.ExtMatchOutputType =  TIM_EXTMATCH_NOTHING;
	MatchConfigTM0.MatchValue = 100000; // 0.1s

	TIM_TIMERCFG_Type ConfigStructTM0;
	ConfigStructTM0.PrescaleOption = TIM_PRESCALE_USVAL;
	ConfigStructTM0.PrescaleValue = 1;

	TIM_ConfigMatch(LPC_TIM0, &MatchConfigTM0);
	TIM_Init (LPC_TIM0, TIM_TIMER_MODE, &ConfigStructTM0);

	// To start timer
	TIM_Cmd(LPC_TIM0,ENABLE);

	NVIC_EnableIRQ(TIMER0_IRQn); // se activa la interrupcion del timer


//----------------------------------------------------------------------------
// i2c led dimmer
//----------------------------------------------------------------------------
	init_i2c(); // se inicializa el i2c

//	uint8_t buf[2];
//
//	I2C_M_SETUP_Type txsetup;
//	txsetup.sl_addr7bit = 0x60; // 1100 000 0=W;
//	txsetup.tx_data = (uint8_t*)&buf;
//	txsetup.tx_length = 2;
//	txsetup.rx_data = NULL;
//	txsetup.rx_length = 0;
//	txsetup.retransmissions_max = 3;
//
//	buf[0] = 0x06;
//	buf[1] = 0x44;
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	buf[0] = 0x07;
//	buf[1] = 0x44;
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	buf[0] = 0x08;
//	buf[1] = 0x11;
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	buf[0] = 0x09;
//	buf[1] = 0x11;
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

	volatile static int i = 0 ;
	while(1) {
		i++ ;
	}
	return 0 ;
}
