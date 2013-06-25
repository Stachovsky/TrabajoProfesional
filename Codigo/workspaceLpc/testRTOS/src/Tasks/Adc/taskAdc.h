/*
 * taskAdc.h
 *
 *  Created on: Oct 27, 2012
 *      Author: "Facundo Nahuel Uriel Silva"
 */

#ifndef TASKADC_H_
#define TASKADC_H_

#include "LPC17xx.h"

#include "Tasks/PcCommunication/taskPcCommunication.h"
#include "Tasks/PcCommunication/ProtocolPCComunication.h"

extern xQueueHandle queuePcComTX;
extern xQueueHandle queuePcComRX;

// PCADC / PCAD
#define ADC_POWERON (1 << 12)
#define PCLK_ADC 24
#define PCLK_ADC_MASK (3 << 24)

// AD0.0 - P0.23, PINSEL1 [15:14] = 01
#define SELECT_ADC0 (0x1<<14)
#define SELECT_ADC1 (0x1<<14)
#define SELECT_ADC2 (0x1<<14)
#define SELECT_ADC3 (0x1<<14)

// ADOCR constants
#define START_ADC (1<<24)
#define OPERATIONAL_ADC (1 << 21)
#define SEL_AD0 (1 <<0)
#define SEL_AD1 (1 <<1)
#define SEL_AD2 (1 <<2)
#define SEL_AD3 (1 <<3)
#define SEL_AD4 (1 <<4)
#define ADC_DONE_BIT	(1 << 31)

#define MAX_SIZE_QUEUE_ADC_SDCARD 20

typedef struct{
	uint32_t Adc0Value;
	uint32_t Adc1Value;
	uint32_t Adc2Value;
	uint32_t Adc3Value;
	uint32_t Adc4Value;
} msgAdcSdCard;

/** \brief
 *
 * @param param
 */
void taskAdc(void *param);

#endif /* TASKADC_H_ */