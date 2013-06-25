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

// Variable to store CRP value in. Will be placed automatically
// by the linker when "Enable Code Read Protect" selected.
// See crp.h header for more information
__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

#include <string.h>


/** Se deben encender las dos memoria: Llamar a la funcion display on/off por cada chip
 * 	Chip Select: Se puede seleccionar las dos columnas enciendiedo los dos CS o por separado. Para el clea
 *
 *
 */

#define DELAY		50
#define DELAY_LONG	100
#define MAX_X		8
#define MAX_Y		128

#define	DI	(1 << 6) // gpio 0
#define	RW	(1 << 11) // gpio 0
#define	E	(1 << 21) // gpio 0
#define	CS1	(1 << 17) // gpio 0
#define	CS2	(1 << 16) // gpio 0
#define	RST	(1 << 4) // gpio 2

typedef struct{
	int8_t port;
	int8_t bit;

} LCD_DB;


LCD_DB* dataLcd[8];

LPC_GPIO_TypeDef* port[4];

//
//// Se deben hacer dos lecturas consecutivas para obtener el valor de la RAM
//
//void API_LcdRead(int8_t* data, int8_t command, uint8_t page){
//	int32_t i;
//	int32_t temp;
//	int8_t tempData;
//
//	// Se configuran como entradas los pines del BUS
//	for(i=0; i < 8; i++){
//		port[dataLcd[i]->port]->FIODIR &= ~(1 << dataLcd[i]->bit);
//	}
//
//	LPC_GPIO0->FIOCLR = CS1; // CS1
//	LPC_GPIO0->FIOCLR = CS2; // CS2
//
//	LPC_GPIO0->FIOCLR = RW; // R/W
//	LPC_GPIO0->FIOSET = E; // E
//
//	for(i = 0; i < DELAY_LONG; i++);
//
//	LPC_GPIO0->FIOCLR = E; // E
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOSET = RW; // R/W
//
//	if(page == 1){// if(page == 2){
//		LPC_GPIO0->FIOSET = CS1; // CS2
//	}
//	else if(page == 2){// if(page == 2){
//		LPC_GPIO0->FIOSET = CS2; // CS2
//	}
//
//	if(command == 1)
//		LPC_GPIO0->FIOCLR = DI; // D/I
//	else
//		LPC_GPIO0->FIOSET = DI; // D/I
//
//	for(i = 0; i < DELAY; i++);
//
//
//	LPC_GPIO0->FIOSET = E; // E
//
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOCLR = E; // E
//
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOSET = E; // E
//
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOCLR = E; // E
//
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOSET = E; // E
//
//	for(i = 0; i < DELAY; i++);
//
//	tempData = 0;
//	for(i=0; i < 8; i++){
//		temp = port[dataLcd[i]->port]->FIOPIN & (1 << dataLcd[i]->bit);
//
//		if(temp != 0){
//			tempData |= (1 << i);
//		}
//	}
//
//	*data = tempData;
//
//}
//
//
//
//
//void API_LcdWrite(int8_t data, uint8_t command, uint8_t page){
//	int32_t i;
//	int8_t temp;
//	int8_t mask = 1;
//
//	// Se configuran como salidas los pines del BUS
//	for(i=0; i < 8; i++){
//		port[dataLcd[i]->port]->FIODIR |= (1 << dataLcd[i]->bit);
//	}
//
//	LPC_GPIO0->FIOCLR = CS1; // CS1
//	LPC_GPIO0->FIOCLR = CS2; // CS2
//
//	LPC_GPIO0->FIOSET = RW; // R/W
//	LPC_GPIO0->FIOSET = E; // E
//
//	for(i = 0; i < DELAY_LONG; i++);
//
//	LPC_GPIO0->FIOCLR = E; // E
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOCLR = RW; // R/W
//
//	if(page == 0){
//		LPC_GPIO0->FIOSET = CS1; // CS1
//		LPC_GPIO0->FIOSET = CS2; // CS2
//	}
//	else if(page == 1){// if(page == 2){
//		LPC_GPIO0->FIOSET = CS1; // CS2
//	}
//	else if(page == 2){// if(page == 2){
//		LPC_GPIO0->FIOSET = CS2; // CS2
//	}
//
//
//	if(command == 1)
//		LPC_GPIO0->FIOCLR = DI; // D/I
//	else
//		LPC_GPIO0->FIOSET = DI; // D/I
//
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOSET = E; // E
//
//	for(i=0; i < 8; i++){
//		temp = data & mask;
//		mask = (1 << (i + 1));
//
//		if(temp == 0){
//			port[dataLcd[i]->port]->FIOCLR = (1 << dataLcd[i]->bit);
//		}
//		else{
//			port[dataLcd[i]->port]->FIOSET = (1 << dataLcd[i]->bit);
//		}
//	}
//
//	for(i = 0; i < DELAY; i++);
//
//	LPC_GPIO0->FIOCLR = E; // E
//
//
//}
//
//void API_LcdWriteData(int8_t data, uint8_t page){
//	API_LcdWrite(data, 0, page );
//}
//
//void API_LcdWriteInstruction(int8_t data, uint8_t page){
//	API_LcdWrite(data, 1, page);
//}
//
//void API_LcdWriteByte(int8_t data, uint8_t x, uint8_t y){
//
//	int8_t page;
//	// se calcula la pagina
//	if(y<64){
//		page = 1;
//	}else{
//		page = 2;
//		y -= 64;
//	}
//
//	API_LcdWriteInstruction(0xb8 + x, page); // X
//	API_LcdWriteInstruction(0x40 + y, page); // Y
//
//	API_LcdWrite(data, 0, page);
//}
//
//void API_LcdReadByte(int8_t* data, uint8_t x, uint8_t y){
//
//	int8_t page;
//	// se calcula la pagina
//	if(y<64){
//		page = 1;
//	}else{
//		page = 2;
//		y -= 64;
//	}
//
//	// Se resta 1 para que en la segunda lectura lea el valor correcto
//	y = (y == 0)?63:y-1;
//	API_LcdWriteInstruction(0x40 + y, page); // Y
//	API_LcdWriteInstruction(0xb8 + x, page); // X
//	API_LcdRead(data, 0, page);
//
//}
//
//
//
//void API_LcdGotoXY(int8_t x, int8_t y){
//	int8_t page;
//	page = (y<64)?1:2; // se calcula la pagina
//
//	API_LcdWriteInstruction(0xb8 + x, page); // X
//	API_LcdWriteInstruction(0x40 + y, page); // Y
//}
//
//// clean screen
//void API_LcdCleanScreen(){
//	int8_t x;
//	int8_t y;
//
//	for(x=0; x < 8; x++){
//		API_LcdWriteInstruction(0xb8 + x, 0); // X: page
//		for(y=0; y < 64; y++){
//			API_LcdWriteInstruction(0x40 + y, 0); // Y: index
//			API_LcdWriteData(0x00,0);
//		}
//	}
//}
//
//void API_LcdDisplayON(){
//	API_LcdWriteInstruction(0x3f,1); // Display On
//	API_LcdWriteInstruction(0x3f,2); // Display On
//	API_LcdWriteInstruction(0xc0 + 0, 0); // Z: star line
//}
//
//void API_LcdDisplayOFF(){
//	API_LcdWriteInstruction(0x3e,0); // Display Off
//}
//
//// x=[0:63] y=[0:127]
//void API_LcdSetPixel(int8_t x, int8_t y){
//
//	int8_t dataRead;
//	int8_t temp;
//
//	API_LcdReadByte(&dataRead, x/8, y);
//	temp = x - (x/8)*8;
//	dataRead |= (1 << temp);
//
//	API_LcdWriteByte(dataRead, x/8, y);
//
//}
//
//// x=[0:63] y=[0:127]
//void API_LcdUnSetPixel(int8_t x, int8_t y){
//
//	int8_t dataRead;
//	int8_t temp;
//
//	API_LcdReadByte(&dataRead, x/8, y);
//	temp = x - (x/8)*8;
//	dataRead &= ~(1 << temp);
//
//	API_LcdWriteByte(dataRead, x/8, y);
//
//}
//
//void API_writeBlock(int8_t** block,int8_t x, int8_t y, int16_t width, int8_t height){
//
//	int8_t i;
//	int16_t j;
//
//	for(i=0; i < height; i++){
//		for(j=0; j < width; j++){
//			API_LcdWriteByte(block[i][j], i, j);
//		}
//	}
//}


int main(void) {
	int8_t* screen[8];
	//int8_t rows[128*8];

	int8_t row0[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int8_t row1[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x98, 0x84, 0x84, 0x83, 0x83, 0x82, 0x82, 0x83, 0x83, 0x83, 0x82, 0x86, 0xCE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0, 0xF0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFC, 0x9E, 0x86, 0x86, 0x82, 0x83, 0x83, 0x83, 0x82, 0x82, 0x83, 0x82, 0x84, 0x88, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int8_t row2[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x6F, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8F, 0x6F, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int8_t row3[] = {0x00, 0x00, 0x70, 0x68, 0x74, 0x3A, 0x3D, 0x1E, 0x1F, 0x0F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x1F, 0x1E, 0x3D, 0x3A, 0x74, 0x68, 0x70, 0x00, 0x00};
	int8_t row4[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x90, 0xE8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x18, 0x3C, 0x7E, 0x5E, 0x2F, 0x17, 0x0B, 0x04, 0x03, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xC8, 0x90, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int8_t row5[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x80, 0x40, 0x44, 0x1C, 0x3E, 0x3F, 0x3C, 0x3E, 0x1F, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int8_t row6[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFE, 0xFF, 0xE3, 0xF0, 0x78, 0x38, 0x38, 0x18, 0x18, 0x18, 0x18, 0x38, 0x38, 0x70, 0xF0, 0xF8, 0x1C, 0x0E, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0E, 0x1E, 0xFC, 0xF9, 0xFF, 0xFF, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	int8_t row7[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x10, 0x08, 0x0C, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x08, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};



	int32_t i;

//	int8_t offsetX;
//	int8_t offsetY;
//
//	int8_t x;
//	int8_t y;

	LCD_DB db0;
	LCD_DB db1;
	LCD_DB db2;
	LCD_DB db3;
	LCD_DB db4;
	LCD_DB db5;
	LCD_DB db6;
	LCD_DB db7;


 	port[0] = LPC_GPIO0;
	port[1] = LPC_GPIO1;
	port[2] = LPC_GPIO2;
	port[3] = LPC_GPIO3;

	screen[0] = row7;
	screen[1] = row6;
	screen[2] = row5;
	screen[3] = row4;
	screen[4] = row3;
	screen[5] = row2;
	screen[6] = row1;
	screen[7] = row0;

//	for(i=0; i < 8; i++){
//		screen[i] = rows + i * 128;
//	}


	///////////////////////////////////

	db0.port = 0;
	db0.bit = 8;
	dataLcd[0] = &db0;
	//LPC_GPIO0->FIODIR |= (1 << 8);

	db1.port = 0;
	db1.bit = 22;
	dataLcd[1] = &db1;
	//LPC_GPIO0->FIODIR |= (1 << 22);

	db2.port = 0;
	db2.bit = 24;
	dataLcd[2] = &db2;
	//LPC_GPIO0->FIODIR |= (1 << 24);

	db3.port = 0;
	db3.bit = 26;
	dataLcd[3] = &db3;
	//LPC_GPIO0->FIODIR |= (1 << 26);

	db4.port = 1;
	db4.bit = 31;
	dataLcd[4] = &db4;
	//LPC_GPIO1->FIODIR |= (1 << 31);

	db5.port = 0;
	db5.bit = 1;
	dataLcd[5] = &db5;
	//LPC_GPIO0->FIODIR |= (1 << 1);

	db6.port = 0;
	db6.bit = 3;
	dataLcd[6] = &db6;
	//LPC_GPIO0->FIODIR |= (1 << 3);

	db7.port = 2;
	db7.bit = 1;
	dataLcd[7] = &db7;
	//LPC_GPIO2->FIODIR |= (1 << 1);



	//GPIO 0
	LPC_GPIO0->FIODIR |= DI; // D/I
	LPC_GPIO0->FIODIR |= RW; // R/W
	LPC_GPIO0->FIODIR |= E; // E
	LPC_GPIO0->FIODIR |= CS1; // CS1
	LPC_GPIO0->FIODIR |= CS2; // CS2
	LPC_GPIO2->FIODIR |= RST; // RST

	LPC_GPIO0->FIOCLR = CS1; // CS1
	LPC_GPIO0->FIOCLR = CS2; // CS2
	LPC_GPIO0->FIOSET = E; // CS2
	LPC_GPIO0->FIOSET = RW; // R/W

	///////////////////////////////////
	//reset
	///////////////////////////////////

	LPC_GPIO2->FIOCLR = RST;
	for(i = 0; i < DELAY_LONG; i++);
	LPC_GPIO2->FIOSET = RST;

	///////////////////////////////////

	API_LcdDisplayON();
	API_LcdCleanScreen();

	///////////////////////////////////

	//void API_writeBlock(int8_t x, int8_t y, int8_t** block, int8_t width, int8_t height);

//	for(i=0; i< 8; i++)
//		memset(screen[i],0xff,128);

	API_writeBlock(screen,0,0,64,8);

	///////////////////////////////////



//
//	for(i=0; i < MAX_X; i++){
//		for(j=0; j < MAX_Y; j++){
//			API_LcdWriteByte(0xff,i,j);
//		}
//	}

	///////////////////////////////////

//	API_LcdWriteByte(0x55,0,0);
//	API_LcdWriteByte(0x66,0,1);
//
//	API_LcdReadByte(&data,0,0);

	///////////////////////////////////

//	API_LcdSetPixel(0,0);
//	API_LcdSetPixel(0,1);
//	API_LcdSetPixel(0,2);
//	API_LcdSetPixel(0,4);
//
//	API_LcdSetPixel(1,0);
//	API_LcdSetPixel(1,1);
//	API_LcdSetPixel(1,2);
//	API_LcdSetPixel(1,4);

//	API_LcdSetPixel(1,0);
//	API_LcdSetPixel(2,0);
//	API_LcdSetPixel(3,0);
//	API_LcdSetPixel(4,0);
//	API_LcdSetPixel(5,0);
//	API_LcdSetPixel(6,0);
//
//	API_LcdSetPixel(0,1);
//	API_LcdSetPixel(1,1);
//	API_LcdSetPixel(2,1);
//	API_LcdSetPixel(3,1);
//	API_LcdSetPixel(4,1);
//	API_LcdSetPixel(5,1);
//	API_LcdSetPixel(6,1);



//	// cuadrado de 4x4
//	for(x=0; x < 4; x++){
//		for(y=0; y < 4; y++){
//			API_LcdSetPixel(x,y);
//		}
//	}

	///////////////////////////////////

//	offsetX = 0;
//	offsetY = 0;

	while(1) {


//		for(offsetX=24;offsetX < 44 ; offsetX +=4 ){
//			for(offsetY=40;offsetY < 80 ; offsetY +=4){
//				// cuadrado de 4x4
//				for(x=0; x < 4; x++){
//					for(y=0; y < 4; y++){
//						API_LcdSetPixel(x + offsetX, y + offsetY);
//					}
//				}
//
//				for(i=0; i <4000000; i++);
//			}
//		}
//
//		API_LcdCleanScreen();

		i++;

	}

	return 0 ;
}
