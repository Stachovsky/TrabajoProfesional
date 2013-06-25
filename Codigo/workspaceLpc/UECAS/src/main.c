/**
 * Name        : main.c
 * Version     :
 * Description : main definition for FreeRTOS application
 */

/*
 * FreeRTOS includes
 */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Tasks/KeepAlive/taskKeepAlive.h"
#include "Tasks/PcCommunication/taskPcCommunication.h"
#include "Tasks/Adc/taskAdc.h"
#include "Tasks/Core/taskCore.h"
#include "Tasks/SdCard/taskSdCard.h"
#include "Tasks/Lcd/taskLcd.h"

#define USERTASK_STACK_SIZE configMINIMAL_STACK_SIZE

void __error__(char *pcFilename, unsigned long ulLine) {
}

xSemaphoreHandle semSdCardAccess;
extern xQueueHandle queueSdCardWrite;
extern xQueueHandle queueSdCardRead;
extern xSemaphoreHandle semSdCardReadAction;

static void setupHardware(void) {

	// Se configuran los perifericos por defecto
	SystemInit();

	// Se inicializa las task de comunicaciones
	taskPcCommunicationInit(); // en conflicto con API Lcd BaseBoarda

//	InitSdCard();
//	API_LcdInit();

	taskCoreInit();



}

/**
 * Program entry point 
 */
int main(void) {

	setupHardware();
	xTaskCreate( taskCore				, (signed portCHAR *) "Core"					, 1024, NULL,			2, NULL );
	xTaskCreate( taskPcCommunicationTX	, (signed portCHAR *) "PcCommunicationTX"		, 512, NULL,			2, NULL );
	xTaskCreate( taskPcCommunicationRX	, (signed portCHAR *) "PcCommunicationRX"		, 512, NULL,			3, NULL );
	xTaskCreate( taskAdc				, (signed portCHAR *) "Adc"						, 512, NULL,			2, NULL );
//	xTaskCreate( taskKeepAlive			, (signed portCHAR *) "KeepAlive"				, 1024, NULL,			2, NULL );//
//	xTaskCreate( vFATFSTimerTask		, (signed portCHAR *) "vFATFSTimerTask"			, 100, NULL,			2, NULL );
//	xTaskCreate( taskLcd			, (signed portCHAR *) 		"Lcd"					, 1024, NULL,			2, NULL );

	/* Start the scheduler. */
	vTaskStartScheduler();

	/* Will only get here if there was insufficient memory to create the idle task. */
	while(1){

	}

	return 1;
}
