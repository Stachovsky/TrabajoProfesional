/*
 * screenLog.c
 *
 *  Created on: 14/09/2011
 *      Author: Alan
 */
#include "LPC17xx.h"
#include "oled.h"
#include <string.h>

#define WIDTH	15
#define HEIGHT	7

uint8_t currentLine=0;
uint8_t currentRow=0;
uint8_t currentScroll=0;

void screenLogNumber(int n){
	char buff[10];

	intToString(n,buff,10,10);
	screenLogText(buff);
}

void screenLogText(char * msg){

	int i=0;

	while(msg[i]!='\0'){
		if (msg[i]=='\r'){
			currentRow = 0;
		}else if(msg[i]=='\n'){
			currentLine++;
			if (currentLine==HEIGHT){
				oled_clearScreen(OLED_COLOR_BLACK);
				currentLine = 0;
			}
		}else{
			oled_putChar(currentRow*6+1,currentLine*8+1,msg[i],OLED_COLOR_WHITE,OLED_COLOR_BLACK);
			currentRow++;
		}
		if ((currentRow)<WIDTH){
			i++;
		}else{
			currentLine++;
			currentRow = 0;
			i++;
			if (currentLine==HEIGHT){
				oled_clearScreen(OLED_COLOR_BLACK);
				currentLine = 0;
			}
		}
	}
}
