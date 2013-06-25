
#include "taskLcd.h"

void taskLcd(void *paramametro){

	uint8_t i = 0;
	int8_t str[30];
	portTickType xDelay = 1000/portTICK_RATE_MS;

	API_LcdGraficPrintBuffer();

	while(1) {

		sprintf((char*)str,"Carga: %%%d   ",i);		API_LcdGraficPrint(str,FONT_SMALL,30,14);
		API_LcdDrawProgressBar(i);
		i++;
		if(i >100){
			i = 0;
			API_LcdCleanScreen();
		}

		vTaskDelay(xDelay);
	}
}
