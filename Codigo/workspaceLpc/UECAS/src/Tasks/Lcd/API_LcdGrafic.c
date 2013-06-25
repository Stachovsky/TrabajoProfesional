
#include "API_LcdGrafic.h"

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdInit(void){

	LcdGrafic_Init();

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdGraficPrintBuffer(void) {

	LcdGrafic_WriteBuffer(lcd_buffer);
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdGraficPrintBufferSection(unsigned char xi, unsigned char yi, unsigned char w, unsigned char h){
	LcdGrafic_WriteBlock(lcd_buffer,xi,yi,w,h);
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdGraficPrint(char * data, unsigned char * font, unsigned char x, unsigned char y) {
	uint8_t w;
	uint8_t lon = strlen(data), i;
	w = BuffGetCharDim(data[i])*lon;
	buf_set_font(font);
	buf_set_position(x,y);
	buf_clean_rectangle(x,y,x + w,y + 13);
	for (i = 0; i < lon; i++) {
		buf_putchar(data[i]);
	}

//	API_LcdGraficPrintBufferSection(x,y,w,13);
	API_LcdGraficPrintBuffer();
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdDrawProgressBar(uint8_t progress) {

	int8_t i;
	int8_t j;

	// top
	for(i = 0; i < (100 + 1); i++){
		buf_pixel(i + 13,29);
		buf_pixel(i + 13,30);
	}

	// button
	for(i = 0; i < (100 + 1); i++){
		buf_pixel(i + 13,49);
		buf_pixel(i + 13,50);
	}

	// left
	for(j = 0; j < (20 + 2); j++){
		buf_pixel(11,29 + j);
		buf_pixel(12,29 + j);
	}

	// rigth
	for(j = 0; j < (20 + 2); j++){
		buf_pixel(114,29 + j);
		buf_pixel(115,29 + j);
	}

	// progreso
	for(i = 0; i < progress; i++){
		for(j = 2; j < 18; j++){
			buf_pixel(14 + i,30 + j);
		}
	}


	API_LcdGraficPrintBuffer();
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdCleanScreen(void){

	buf_clear();
	LcdGrafic_CleanScreen();
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdGraficCleanScreenSection(unsigned char x, unsigned char y, unsigned char lon, unsigned char height) {

	unsigned char y_shift = y & 0x7, y_abs = y >> 3, h = height;
	unsigned char * buf = lcd_buffer + x + y_abs * 128;
	unsigned char i, j;
	for (i = 0; i < lon; i++) {
		*buf = *buf & (0xFF >> (8 - y_shift));
		h -= (8 - y_shift);
		for (j = 1; h > 0; j++) {
			if (h > 8) {
				*(buf + 128 * j) &= 0;
				h -= 8;
			} else {
				if (h > 0) {
					*(buf + 128 * j) &= 0xFF << h;
					h = 0;
				} else
					break;
			}
		}
		h = height;
		buf++;
	}

	API_LcdGraficPrintBuffer();
//	LcdGrafic_WriteBlock(lcd_buffer, x,y, lon,height);

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void API_LcdGraficFillDisplay(void){
	buf_fill();
	API_LcdGraficPrintBuffer();
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////