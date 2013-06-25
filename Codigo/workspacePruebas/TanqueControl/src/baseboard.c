/*
 * hal.c
 *
 *  Created on: 13/09/2011
 *      Author: Alan
 */


#include "lpc17xx_pinsel.h"
#include "lpc17xx_ssp.h"
#include "led7seg.h"
#include "RGBLed.h"
#include "oled.h"
#include "lpc17xx_adc.h"
#include "lpc17xx_uart.h"
#include "light.h"

void initBaseBoard(){

	//===============================================================
	// Led 7 segments
	//===============================================================

	SSP_CFG_Type SSP_ConfigStruct;
	PINSEL_CFG_Type PinCfg;

	// SSP port for 7 segmentes
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
	SSP_Init(LPC_SSP1, &SSP_ConfigStruct);
	SSP_Cmd(LPC_SSP1, ENABLE);

	led7seg_init();

	//===============================================================
	// RGB Init
	//===============================================================
	RGB_Init();

	//===============================================================
	// OLED Init
	//===============================================================
	oled_init();
	RGB_greenLedOn();

	//===============================================================
	// Analog potentiometer Init
	//===============================================================
	// Configuración del pin GPIO0.23 como ADC. Corresponde a AD0

	PinCfg.Funcnum = PINSEL_FUNC_1;
	PinCfg.OpenDrain = PINSEL_PINMODE_NORMAL;
	PinCfg.Pinmode = PINSEL_PINMODE_PULLUP;
	PinCfg.Pinnum = PINSEL_PIN_23;
	PinCfg.Portnum = PINSEL_PORT_0;
	PINSEL_ConfigPin(&PinCfg);

	// Inicializamos el Conversor A/D
	ADC_Init(LPC_ADC, 200000);
	ADC_IntConfig(LPC_ADC,ADC_ADINTEN0,DISABLE);
	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,ENABLE);

	//===============================================================
	// Analog potentiometer Init
	//===============================================================

	// Declaramos estructuras para usar en la configuración
	UART_CFG_Type UARTConfigStruct;

	// Configuración de los pines de Rx y Tx
	PinCfg.Funcnum = PINSEL_FUNC_2;
	PinCfg.OpenDrain = PINSEL_PINMODE_NORMAL;
	PinCfg.Pinmode = PINSEL_PINMODE_PULLUP;
	PinCfg.Pinnum = PINSEL_PIN_0;
	PinCfg.Portnum = PINSEL_PORT_0;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = PINSEL_PIN_1;
	PINSEL_ConfigPin(&PinCfg);

	// Configuramos la UART
	UARTConfigStruct.Baud_rate = 115200;
	UARTConfigStruct.Databits = UART_DATABIT_8;
	UARTConfigStruct.Parity = UART_PARITY_NONE;
	UARTConfigStruct.Stopbits = UART_STOPBIT_1;

	// Inicializamos la UART
	UART_Init(LPC_UART3, &UARTConfigStruct);
	UART_TxCmd(LPC_UART3, ENABLE);

	//===============================================================
	// I2C init
	//===============================================================

	// Initialize I2C2 pin connect
	PinCfg.Funcnum = 2;
	PinCfg.Pinnum = 10;
	PinCfg.Portnum = 0;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 11;
	PINSEL_ConfigPin(&PinCfg);

	// Initialize I2C peripheral
	I2C_Init(LPC_I2C2, 100000);

	// Enable I2C1 operation
	I2C_Cmd(LPC_I2C2, ENABLE);

	light_enable();
	light_setWidth(LIGHT_WIDTH_12BITS);
}
