/*
 * potentiometer.c
 *
 *  Created on: 13/09/2011
 *      Author: Alan
 */
#include "LPC17xx.h"
#include "lpc17xx_adc.h"

uint32_t readPote(){

	// Start conversion
	ADC_StartCmd(LPC_ADC,ADC_START_NOW);

	//Wait conversion complete
	while (!(ADC_ChannelGetStatus(LPC_ADC,ADC_CHANNEL_0,ADC_DATA_DONE)));
	return ADC_ChannelGetData(LPC_ADC,ADC_CHANNEL_0);

}
