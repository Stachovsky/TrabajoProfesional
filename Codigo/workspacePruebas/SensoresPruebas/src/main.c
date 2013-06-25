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

#include "lpc_types.h"

//Drivers
#include "lpc17xx_pinsel.h"
#include "lpc17xx_gpio.h"
#include "lpc17xx_i2c.h"
#include "lpc17xx_timer.h"
#include "lpc17xx_ssp.h"
#include "lpc17xx_adc.h"

#include "led7seg.h"
#include "oled.h"

// APIs
#include "ApiKeepAlive.h"
#include "API_Uart.h"

//-----------------------------------------------------------------
// inicializacion de perifericos
//-----------------------------------------------------------------

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

static void init_ssp(void)
{
	SSP_CFG_Type SSP_ConfigStruct;
	PINSEL_CFG_Type PinCfg;

	/*
	 * Initialize SPI pin connect
	 * P0.7 - SCK;
	 * P0.8 - MISO
	 * P0.9 - MOSI
	 * P2.2 - SSEL - used as GPIO
	 */
	PinCfg.Funcnum = 2;
	PinCfg.OpenDrain = 0;
	PinCfg.Pinmode = 0;
	PinCfg.Portnum = 0;
	PinCfg.Pinnum = 7;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 8;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 9;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Funcnum = 0;
	PinCfg.Portnum = 2;
	PinCfg.Pinnum = 2;
	PINSEL_ConfigPin(&PinCfg);

	SSP_ConfigStructInit(&SSP_ConfigStruct);

	// Initialize SSP peripheral with parameter given in structure above
	SSP_Init(LPC_SSP1, &SSP_ConfigStruct);

	// Enable SSP peripheral
	SSP_Cmd(LPC_SSP1, ENABLE);

}


static void init_adc(void)
{
	PINSEL_CFG_Type PinCfg;

	/*
	 * Init ADC pin connect
	 * AD0.0 on P0.23
	 */
	PinCfg.Funcnum = 1;
	PinCfg.OpenDrain = 0;
	PinCfg.Pinmode = 0;
	PinCfg.Pinnum = 23;
	PinCfg.Portnum = 0;
	PINSEL_ConfigPin(&PinCfg);

	/* Configuration for ADC :
	 * 	Frequency at 0.2Mhz
	 *  ADC channel 0, no Interrupt
	 */
	ADC_Init(LPC_ADC, 200000);
	ADC_IntConfig(LPC_ADC,ADC_CHANNEL_0,DISABLE);
	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,ENABLE);

}

//-----------------------------------------------------------------
//-----------------------------------------------------------------

uint16_t barra = 0x01;

typedef union{
	uint32_t ledsState;
	uint8_t ledLotes[4];
} ledEstado;

void setLed(uint8_t nroLed){
	uint8_t i;

	ledEstado estado;
	estado.ledsState = 1;
	if(nroLed >= 0)
		estado.ledsState = estado.ledsState << (nroLed *2);
	else
		estado.ledsState = 0;

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

BOOL_8 rgbOn = FALSE;
// Board Timer Handlers
void TIMER0_IRQHandler (void)
{

	if(rgbOn == TRUE){
		LPC_GPIO1->FIOSET = (1<<2); // blue
		LPC_GPIO1->FIOSET = (1<<9); // red
		LPC_GPIO1->FIOSET = (1<<10); // green

		rgbOn = FALSE;
	}else{

		LPC_GPIO1->FIOCLR = (1<<2); // blue
		LPC_GPIO1->FIOCLR = (1<<9); // red
		LPC_GPIO1->FIOCLR = (1<<10); // green
		rgbOn = TRUE;
	}
	//	setLed(ledActual);
//	ledActual++;
//	ledActual %= 16;

	TIM_ClearIntPending(LPC_TIM0, TIM_MR0_INT);
	TIM_ResetCounter(LPC_TIM0);

}

BOOL_8 nextDataLedOn = FALSE;
BOOL_8 nextData7Seg = FALSE;

BOOL_8 ledRed = FALSE;
BOOL_8 ledGreen = FALSE;
BOOL_8 ledBlue = FALSE;

void UART3_IRQHandler(void){

	char c = UART_ReceiveByte(LPC_UART3);

	if(nextDataLedOn == TRUE){
		setLed(c);
		nextDataLedOn = FALSE;
		return;
	}

	if(nextData7Seg == TRUE){
		led7seg_setChar(c + '0',FALSE);
		nextData7Seg = FALSE;
		return;
	}

	// adc
	uint16_t adcValue;
	uint8_t* p_adcValue;
	p_adcValue = &adcValue;

	//Acelerometro
	int8_t bufWrite[2];
	int8_t bufRead[2];
	int8_t bufLuz[2];
	int8_t bufTemp[2];


	char ejeStr[15];
	char luzStr[15];
	char tempStr[15];

	I2C_M_SETUP_Type txsetup;
	I2C_M_SETUP_Type rxsetup;


	switch(c){
		case 'A':
			//-----------------------------------------
			//x
			txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
			txsetup.tx_data = (uint8_t*)bufWrite;
			txsetup.tx_length = 1;
			txsetup.rx_data = NULL;
			txsetup.rx_length = 0;
			txsetup.retransmissions_max = 3;
			txsetup.rx_count = 0;

			bufWrite[0] = 0x06; // x
			I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);


			rxsetup.sl_addr7bit = 0x1d; // w; //I2C address (0x1D): 0.0.1.1.1.0.1. R = 1
			rxsetup.tx_data = NULL;
			rxsetup.tx_length = 0;
			rxsetup.rx_data = (uint8_t*)bufRead;
			rxsetup.rx_length = 1;
			rxsetup.retransmissions_max = 3;

			I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);

			//sprintf(ejeStr,"X:%d;",bufRead[0]);
			sprintf(ejeStr,"%d;",bufRead[0]);
			API_UartSendString(ejeStr);

			//y

			txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
			txsetup.tx_data = (uint8_t*)bufWrite;
			txsetup.tx_length = 1;
			txsetup.rx_data = NULL;
			txsetup.rx_length = 0;
			txsetup.retransmissions_max = 3;
			txsetup.rx_count = 0;

			bufWrite[0] = 0x07; // y
			I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

			rxsetup.sl_addr7bit = 0x1d; // w; //I2C address (0x1D): 0.0.1.1.1.0.1. R = 1
			rxsetup.tx_data = NULL;
			rxsetup.tx_length = 0;
			rxsetup.rx_data = (uint8_t*)bufRead;
			rxsetup.rx_length = 1;
			rxsetup.retransmissions_max = 3;

			I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);

			//sprintf(ejeStr,"Y:%d;",bufRead[0]);
			sprintf(ejeStr,"%d;",bufRead[0]);
			API_UartSendString(ejeStr);

			//z
			txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
			txsetup.tx_data = (uint8_t*)bufWrite;
			txsetup.tx_length = 1;
			txsetup.rx_data = NULL;
			txsetup.rx_length = 0;
			txsetup.retransmissions_max = 3;
			txsetup.rx_count = 0;

			bufWrite[0] = 0x08; // z
			I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

			rxsetup.sl_addr7bit = 0x1d; // w; //I2C address (0x1D): 0.0.1.1.1.0.1. R = 1
			rxsetup.tx_data = NULL;
			rxsetup.tx_length = 0;
			rxsetup.rx_data = (uint8_t*)bufRead;
			rxsetup.rx_length = 1;
			rxsetup.retransmissions_max = 3;

			I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);


			//sprintf(ejeStr,"Z:%d;\n",bufRead[0]);
			sprintf(ejeStr,"%d;",bufRead[0]);
			API_UartSendString(ejeStr);
			//-----------------------------------------

			break;

		case 'L':

			//Sensor Luz
			txsetup.sl_addr7bit = 0x44;
			txsetup.tx_data = (uint8_t*)bufWrite;
			txsetup.tx_length = 1;
			txsetup.rx_data = NULL;
			txsetup.rx_length = 0;
			txsetup.retransmissions_max = 3;
			txsetup.rx_count = 0;

			bufWrite[0] = 0x04; // luz
			I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

			rxsetup.sl_addr7bit = 0x44;
			rxsetup.tx_data = NULL;
			rxsetup.tx_length = 0;
			rxsetup.rx_data = (uint8_t*)bufLuz;
			rxsetup.rx_length = 1;
			rxsetup.retransmissions_max = 3;

			I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);

			sprintf(luzStr,"%d",bufLuz[0]);
			API_UartSendString(luzStr);

			break;

		case 'E':
			nextDataLedOn = TRUE;
			break;

		case 'D':
			nextData7Seg = TRUE;
			break;

		case 'C':

			ADC_StartCmd(LPC_ADC,ADC_START_NOW);
			//Wait conversion complete
			while (!(ADC_ChannelGetStatus(LPC_ADC,ADC_CHANNEL_0,ADC_DATA_DONE)));
			adcValue = ADC_ChannelGetData(LPC_ADC,ADC_CHANNEL_0);

			API_UartSendByte(p_adcValue[1]);
			API_UartSendByte(p_adcValue[0]);

			break;

		case 'r':

			if(ledRed == TRUE){
				LPC_GPIO2->FIOCLR = (1<<0); // red
				ledRed = FALSE;
			}else{
				LPC_GPIO2->FIOSET = (1<<0); // red
				ledRed = TRUE;
			}

			break;

		case 'b':

			if(ledBlue == TRUE){
				LPC_GPIO0->FIOCLR = (1<<26); // blue
				ledBlue = FALSE;
			}else{
				LPC_GPIO0->FIOSET = (1<<26); // blur
				ledBlue = TRUE;
			}

			break;

		case 'g':

			if(ledGreen == TRUE){
				LPC_GPIO2->FIOCLR = (1<<1); // green
				ledGreen = FALSE;
			}else{
				LPC_GPIO2->FIOSET = (1<<1); // green
				ledGreen = TRUE;
			}

			break;

		case 'T':

			//Sensor Temperatura
			txsetup.sl_addr7bit = 0x4a;
			txsetup.tx_data = (uint8_t*)bufWrite;
			txsetup.tx_length = 1;
			txsetup.rx_data = NULL;
			txsetup.rx_length = 0;
			txsetup.retransmissions_max = 3;
			txsetup.rx_count = 0;

			bufWrite[0] = 0x00; // temp
			I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

			rxsetup.sl_addr7bit = 0x4a;
			rxsetup.tx_data = NULL;
			rxsetup.tx_length = 0;
			rxsetup.rx_data = (uint8_t*)bufTemp;
			rxsetup.rx_length = 2;
			rxsetup.retransmissions_max = 3;

			I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);

//			sprintf(tempStr,"%d",bufTemp[0]);
//			API_UartSendString(tempStr);

			API_UartSendByte(bufTemp[1]);
			API_UartSendByte(bufTemp[0]);

			break;
	}

}


__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

int main(void) {


//	oled_init();
//	oled_clearScreen(OLED_COLOR_WHITE);
//
//	oled_putString(1,1,  (uint8_t*)"Test...", OLED_COLOR_BLACK, OLED_COLOR_WHITE);

	//	oled_init();
//
//	oled_clearScreen(OLED_COLOR_BLACK);
//
//	oled_putChar(1,10,'F',OLED_COLOR_BLACK,OLED_COLOR_WHITE);
//	oled_putChar(2,10,'a',OLED_COLOR_BLACK,OLED_COLOR_WHITE);
//	oled_putChar(3,10,'c',OLED_COLOR_BLACK,OLED_COLOR_WHITE);
//	oled_putChar(4,10,'u',OLED_COLOR_BLACK,OLED_COLOR_WHITE);

//----------------------------------------------------------------------------
// KeepAlive
//----------------------------------------------------------------------------
	API_KeepAliveInit(1000,NULL); // KeepAlive con delay y accion por defecto
	
//----------------------------------------------------------------------------
// RGB
//----------------------------------------------------------------------------
	LPC_GPIO2->FIODIR |= (1<<0); // red
	LPC_GPIO2->FIODIR |= (1<<1); // green
	LPC_GPIO0->FIODIR |= (1<<26); // blue

	LPC_GPIO2->FIOCLR = (1<<0); // red
	LPC_GPIO2->FIOCLR = (1<<1); // green
	LPC_GPIO0->FIOCLR = (1<<26); // blue

//----------------------------------------------------------------------------
// adc
//----------------------------------------------------------------------------
	init_adc();

//----------------------------------------------------------------------------
// spi
//----------------------------------------------------------------------------
	init_ssp();
	led7seg_init();
//----------------------------------------------------------------------------
// i2c led dimmer
//----------------------------------------------------------------------------
	init_i2c(); // se inicializa el i2c

	uint8_t bufWrite[2];
	I2C_M_SETUP_Type txsetup;

	//Sensor Temperatura
	txsetup.sl_addr7bit = 0x4a;
	txsetup.tx_data = (uint8_t*)bufWrite;
	txsetup.tx_length = 1;
	txsetup.rx_data = NULL;
	txsetup.rx_length = 0;
	txsetup.retransmissions_max = 3;
	txsetup.rx_count = 0;

	bufWrite[0] = 0x01; // temp
	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

	bufWrite[0] = 0x00; // temp
	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);


	//Acelerometro

	txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
	txsetup.tx_data = (uint8_t*)bufWrite;
	txsetup.tx_length = 2;
	txsetup.rx_data = NULL;
	txsetup.rx_length = 0;
	txsetup.retransmissions_max = 3;

	bufWrite[0] = 0x16;
	bufWrite[1] = 0x05;

	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);

	//Sensor Luz
	uint8_t bufWriteLuz[2];

	I2C_M_SETUP_Type txsetupLuz;
	txsetupLuz.sl_addr7bit = 0x44; //I2C address (0x44): 1.0.0.0.1.0.0.RW
	txsetupLuz.tx_data = (uint8_t*)bufWrite;
	txsetupLuz.tx_length = 2;
	txsetupLuz.rx_data = NULL;
	txsetupLuz.rx_length = 0;
	txsetupLuz.retransmissions_max = 3;

	bufWrite[0] = 0x00;
	bufWrite[1] = 0x82;

	I2C_MasterTransferData(LPC_I2C2, &txsetupLuz, I2C_TRANSFER_POLLING);

//----------------------------------------------------------------------------
// Uart
//----------------------------------------------------------------------------
	API_Uart_Config();

//----------------------------------------------------------------------------
// Timer 0
//----------------------------------------------------------------------------

	TIM_MATCHCFG_Type MatchConfigTM0;

	MatchConfigTM0.MatchChannel = 0;
	MatchConfigTM0.IntOnMatch = TRUE;
	MatchConfigTM0.ResetOnMatch = TRUE;
	MatchConfigTM0.StopOnMatch = FALSE;
	MatchConfigTM0.ExtMatchOutputType =  TIM_EXTMATCH_NOTHING;
	MatchConfigTM0.MatchValue = 1000000; // 1s

	TIM_TIMERCFG_Type ConfigStructTM0;
	ConfigStructTM0.PrescaleOption = TIM_PRESCALE_USVAL;
	ConfigStructTM0.PrescaleValue = 1;

	TIM_ConfigMatch(LPC_TIM0, &MatchConfigTM0);
	TIM_Init (LPC_TIM0, TIM_TIMER_MODE, &ConfigStructTM0);

	// To start timer
	TIM_Cmd(LPC_TIM0,ENABLE);

	NVIC_EnableIRQ(TIMER0_IRQn); // se activa la interrupcion del timer




//----------------------------------------------------------------------------

	volatile static int i = 0 ;
	while(1) {
		i++ ;
	}
	return 0 ;
}
