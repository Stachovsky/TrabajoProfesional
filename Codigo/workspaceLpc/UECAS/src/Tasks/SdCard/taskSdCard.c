///*
// * FatFS Test program
// *
// * This program contains a number of tests for ChaN's FatFS
// * on the lpc1769 module
// *
// * The idea is to create a generic test suite that can be used to
// * check if the SD card interface works.
// * Also, a timer is used to measure the amount of time needed by
// * different functions to check the timing.
// *
// * (c) Rob Jansen
// *
// * This software is free software, you may use it, enhance it
// * and share it as long as you like as long as this copyright
// * message stays in place.
// */
//
#include "taskSdCard.h"

FATFS fs;

uint8_t spi_div_low = 250;
uint8_t spi_div_high = 10;


void InitSdCard(){

	semSdCardAccess = xSemaphoreCreateMutex();
	xSemaphoreGive(semSdCardAccess);

	// SD Card
	LPC_GPIO0->FIODIR |= 1<<22;
	LPC_GPIO0->FIOCLR |= 1<<22;

	LPC_SC->PCLKSEL0 &= ~(3<<2);
	LPC_SC->PCLKSEL0 |= 1<<2;

	/*
	 * Default values for the SPI clock
	 * Use 400 kHz during init and 1 MHz during data transfer
	 *
	 * These values are believed to be reasonably safe values.
	 */
	SetSPIClocks(KHZ(400), MHZ(1));

	f_mount(0, &fs);

}

void vFATFSTimerTask (void* pvParameters)
{
	portTickType xLastWakeTime = xTaskGetTickCount();
	while(1){
		disk_timerproc();
		vTaskDelayUntil (&xLastWakeTime, (10 / portTICK_RATE_MS)); //each 10ms
	}
}

void SetSPIClocks(uint32_t low, uint32_t high){
	spi_div_low  = SystemCoreClock / low;
	spi_div_high = (SystemCoreClock+high-1) / high;

	if(spi_div_low & 1) spi_div_low++;
	if(spi_div_high & 1) spi_div_high++;
}
