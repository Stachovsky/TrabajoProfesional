
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#include <cr_section_macros.h>
#include <NXP/crp.h>

// Variable to store CRP value in. Will be placed automatically
// by the linker when "Enable Code Read Protect" selected.
// See crp.h header for more information
__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;


// CodeRed - added #define extern on next line (else variables
// not defined). This has been done due to include the .h files 
// rather than the .c files as in the original version of easyweb.
#define extern

#include "easyweb.h"

// CodeRed - removed header for original ethernet controller
//#include "cs8900.c"                              // ethernet packet driver

//CodeRed - added for LPC ethernet controller
#include "ethmac.h"

// CodeRed - include .h rather than .c file
// #include "tcpip.c"                               // easyWEB TCP/IP stack
#include "tcpip.h"                               // easyWEB TCP/IP stack

// CodeRed - added NXP LPC register definitions header
#include "LPC17xx.h"

//Drivers
//#include "lpc17xx_pinsel.h"
//#include "lpc17xx_gpio.h"
//#include "lpc17xx_i2c.h"
//#include "lpc17xx_timer.h"
//#include "lpc17xx_ssp.h"
//#include "lpc17xx_adc.h"


#define DEBUG_FANAUR

#include "API_Uart.h"

// IP: 192.168.1.110

//char* ptrRed;
//char* ptrBlue;
//char* ptrGreen;
//char* ptr7segmentos;
//char ptr7segmentosValue[4];
//
//uint8_t ledRedState;
//uint8_t ledBlueState;
//uint8_t ledGreenState;
//
//uint8_t ii;
//
////revisar esto
//static void init_i2c(void)
//{
//	PINSEL_CFG_Type PinCfg;
//
//	/* Initialize I2C2 pin connect */
//	PinCfg.Funcnum = 2;
//	PinCfg.Pinnum = 10;
//	PinCfg.Portnum = 0;
//	PINSEL_ConfigPin(&PinCfg);
//	PinCfg.Pinnum = 11;
//	PINSEL_ConfigPin(&PinCfg);
//
//	// Initialize I2C peripheral
//	I2C_Init(LPC_I2C2, 100000);
//
//	/* Enable I2C1 operation */
//	I2C_Cmd(LPC_I2C2, ENABLE);
//}
//
//static void init_ssp(void)
//{
//	SSP_CFG_Type SSP_ConfigStruct;
//	PINSEL_CFG_Type PinCfg;
//
//	/*
//	 * Initialize SPI pin connect
//	 * P0.7 - SCK;
//	 * P0.8 - MISO
//	 * P0.9 - MOSI
//	 * P2.2 - SSEL - used as GPIO
//	 */
//	PinCfg.Funcnum = 2;
//	PinCfg.OpenDrain = 0;
//	PinCfg.Pinmode = 0;
//	PinCfg.Portnum = 0;
//	PinCfg.Pinnum = 7;
//	PINSEL_ConfigPin(&PinCfg);
//	PinCfg.Pinnum = 8;
//	PINSEL_ConfigPin(&PinCfg);
//	PinCfg.Pinnum = 9;
//	PINSEL_ConfigPin(&PinCfg);
//	PinCfg.Funcnum = 0;
//	PinCfg.Portnum = 2;
//	PinCfg.Pinnum = 2;
//	PINSEL_ConfigPin(&PinCfg);
//
//	SSP_ConfigStructInit(&SSP_ConfigStruct);
//
//	// Initialize SSP peripheral with parameter given in structure above
//	SSP_Init(LPC_SSP1, &SSP_ConfigStruct);
//
//	// Enable SSP peripheral
//	SSP_Cmd(LPC_SSP1, ENABLE);
//
//}
//
//
//static void init_adc(void)
//{
//	PINSEL_CFG_Type PinCfg;
//
//	/*
//	 * Init ADC pin connect
//	 * AD0.0 on P0.23
//	 */
//	PinCfg.Funcnum = 1;
//	PinCfg.OpenDrain = 0;
//	PinCfg.Pinmode = 0;
//	PinCfg.Pinnum = 23;
//	PinCfg.Portnum = 0;
//	PINSEL_ConfigPin(&PinCfg);
//
//	/* Configuration for ADC :
//	 * 	Frequency at 0.2Mhz
//	 *  ADC channel 0, no Interrupt
//	 */
//	ADC_Init(LPC_ADC, 200000);
//	ADC_IntConfig(LPC_ADC,ADC_CHANNEL_0,DISABLE);
//	ADC_ChannelCmd(LPC_ADC,ADC_CHANNEL_0,ENABLE);
//
//}


int main (void)
{

	//----------------------------------------------------------------------------
	// RGB
	//----------------------------------------------------------------------------

//	ptrRed =  NULL;
//	ptrBlue =  NULL;
//	ptrGreen =  NULL;
//
//	ledRedState = 0;
//	ledBlueState = 0;
//	ledGreenState = 0;
//
//
//	LPC_GPIO2->FIODIR |= (1<<0); // red
//	LPC_GPIO2->FIODIR |= (1<<1); // green
//	LPC_GPIO0->FIODIR |= (1<<26); // blue
//
//	LPC_GPIO2->FIOCLR = (1<<0); // red
//	LPC_GPIO2->FIOCLR = (1<<1); // green
//	LPC_GPIO0->FIOCLR = (1<<26); // blue
//	//----------------------------------------------------------------------------
//
//	uint8_t bufWrite[2];
//	I2C_M_SETUP_Type txsetup;
//
//	init_i2c(); // se inicializa el i2c
//	//----------------------------------------------------------------------------
//	// adc
//	//----------------------------------------------------------------------------
//	init_adc();
//
//	//----------------------------------------------------------------------------
//	// spi
//	//----------------------------------------------------------------------------
//	init_ssp();
//	led7seg_init();
//	sprintf(ptr7segmentosValue,"0");
//	led7seg_setChar(ptr7segmentosValue[0],FALSE);
//	//----------------------------------------------------------------------------
//
//	//Acelerometro
//
//	txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
//	txsetup.tx_data = (uint8_t*)bufWrite;
//	txsetup.tx_length = 2;
//	txsetup.rx_data = NULL;
//	txsetup.rx_length = 0;
//	txsetup.retransmissions_max = 3;
//
//	bufWrite[0] = 0x16;
//	bufWrite[1] = 0x05;
//
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	//Sensor Luz
//	uint8_t bufWriteLuz[2];
//
//	I2C_M_SETUP_Type txsetupLuz;
//	txsetupLuz.sl_addr7bit = 0x44; //I2C address (0x44): 1.0.0.0.1.0.0.RW
//	txsetupLuz.tx_data = (uint8_t*)bufWrite;
//	txsetupLuz.tx_length = 2;
//	txsetupLuz.rx_data = NULL;
//	txsetupLuz.rx_length = 0;
//	txsetupLuz.retransmissions_max = 3;
//
//	bufWrite[0] = 0x00;
//	bufWrite[1] = 0x82;
//
//	I2C_MasterTransferData(LPC_I2C2, &txsetupLuz, I2C_TRANSFER_POLLING);
//
//
//	//----------------------------------------------------------
//
//	API_Uart_Config();
//
//	//----------------------------------------------------------


	TCPLowLevelInit();

	HTTPStatus = 0;                                // clear HTTP-server's flag register

//	TCPLocalPort = TCP_PORT_HTTP;                  // set port we want to listen to

	while (1)                                      // repeat forever
	{
		if (!(SocketStatus & SOCK_ACTIVE))						// listen for incoming TCP-connection
			TCPPassiveOpen();

		DoNetworkStuff();                                      	// handle network and easyWEB-stack
													   	   	   	   // events
		HTTPServer();
	}
}


void HTTPServer(void)
{

//
//	int8_t bufWrite[2];
//	int8_t bufRead[2];
//
//	uint16_t adcValue;
//
//	char ejeXStr[15];
//	char ejeYStr[15];
//	char ejeZStr[15];
//	char luzStr[15];
//	char adcStr[15];
//	char tempStr[15];
//
//	I2C_M_SETUP_Type txsetup;
//	I2C_M_SETUP_Type rxsetup;
//
//
//
//	//-----------------------------------------
//	//x
//	txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
//	txsetup.tx_data = (uint8_t*)bufWrite;
//	txsetup.tx_length = 1;
//	txsetup.rx_data = NULL;
//	txsetup.rx_length = 0;
//	txsetup.retransmissions_max = 3;
//	txsetup.rx_count = 0;
//
//	bufWrite[0] = 0x06; // x
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	rxsetup.sl_addr7bit = 0x1d; // w; //I2C address (0x1D): 0.0.1.1.1.0.1. R = 1
//	rxsetup.tx_data = NULL;
//	rxsetup.tx_length = 0;
//	rxsetup.rx_data = (uint8_t*)bufRead;
//	rxsetup.rx_length = 1;
//	rxsetup.retransmissions_max = 3;
//
//	I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);
//
//	sprintf(ejeXStr,"%d",bufRead[0]);
//
//	//y
//
//	txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
//	txsetup.tx_data = (uint8_t*)bufWrite;
//	txsetup.tx_length = 1;
//	txsetup.rx_data = NULL;
//	txsetup.rx_length = 0;
//	txsetup.retransmissions_max = 3;
//	txsetup.rx_count = 0;
//
//	bufWrite[0] = 0x07; // y
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	rxsetup.sl_addr7bit = 0x1d; // w; //I2C address (0x1D): 0.0.1.1.1.0.1. R = 1
//	rxsetup.tx_data = NULL;
//	rxsetup.tx_length = 0;
//	rxsetup.rx_data = (uint8_t*)bufRead;
//	rxsetup.rx_length = 1;
//	rxsetup.retransmissions_max = 3;
//
//	I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);
//
//	sprintf(ejeYStr,"%d",bufRead[0]);
//
//	//z
//	txsetup.sl_addr7bit = 0x1d; //I2C address (0x1D): 0.0.1.1.1.0.1. W = 0
//	txsetup.tx_data = (uint8_t*)bufWrite;
//	txsetup.tx_length = 1;
//	txsetup.rx_data = NULL;
//	txsetup.rx_length = 0;
//	txsetup.retransmissions_max = 3;
//	txsetup.rx_count = 0;
//
//	bufWrite[0] = 0x08; // z
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	rxsetup.sl_addr7bit = 0x1d; // w; //I2C address (0x1D): 0.0.1.1.1.0.1. R = 1
//	rxsetup.tx_data = NULL;
//	rxsetup.tx_length = 0;
//	rxsetup.rx_data = (uint8_t*)bufRead;
//	rxsetup.rx_length = 1;
//	rxsetup.retransmissions_max = 3;
//
//	I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);
//
//	sprintf(ejeZStr,"%d",bufRead[0]);
//
//	//-----------------------------------------
//
//	//-----------------------------------------
//	//Sensor Luz
//	//-----------------------------------------
//
//	//Sensor Luz
//	txsetup.sl_addr7bit = 0x44;
//	txsetup.tx_data = (uint8_t*)bufWrite;
//	txsetup.tx_length = 1;
//	txsetup.rx_data = NULL;
//	txsetup.rx_length = 0;
//	txsetup.retransmissions_max = 3;
//	txsetup.rx_count = 0;
//
//	bufWrite[0] = 0x04; // luz
//	I2C_MasterTransferData(LPC_I2C2, &txsetup, I2C_TRANSFER_POLLING);
//
//	rxsetup.sl_addr7bit = 0x44;
//	rxsetup.tx_data = NULL;
//	rxsetup.tx_length = 0;
//	rxsetup.rx_data = (uint8_t*)bufRead;
//	rxsetup.rx_length = 1;
//	rxsetup.retransmissions_max = 3;
//
//	I2C_MasterTransferData(LPC_I2C2, &rxsetup, I2C_TRANSFER_POLLING);
//
//	sprintf(luzStr,"%d",bufRead[0]);
//
//	//-----------------------------------------
//
//	//-----------------------------------------
//	// ADC
//	//-----------------------------------------
//
//	ADC_StartCmd(LPC_ADC,ADC_START_NOW);
//	//Wait conversion complete
//	while (!(ADC_ChannelGetStatus(LPC_ADC,ADC_CHANNEL_0,ADC_DATA_DONE)));
//		adcValue = ADC_ChannelGetData(LPC_ADC,ADC_CHANNEL_0);
//
//	sprintf(adcStr,"%d",adcValue);

	//-----------------------------------------
	// Manejo HTTP
	//-----------------------------------------

	if (SocketStatus & SOCK_CONNECTED){             // check if somebody has connected to our TCP

		if (SocketStatus & SOCK_DATA_AVAILABLE){      // check if remote TCP sent data

//			#ifdef DEBUG_FANAUR
//				API_UartSendString("\n----------------------RECIBIDO------------------------------\n");
//				API_UartSendString(RxTCPBuffer);
//				API_UartSendString("\n------------------------------------------------------------\n\n");
//			#endif


		memset(TCP_TX_BUF,'\0',sizeof(TCP_TX_BUF)); // Se limpia el buffer de salida

		if (SocketStatus & SOCK_TX_BUF_RELEASED){     // check if buffer is free for TX

			// Para acceder poner en el browser http://192.168.1.110:80
			if(TCPLocalPort == 80){

				/////////////////////////////////////////////////////
				// Se crea el html. Se concatena directamente sobre
				// el buffer de salida.
				/////////////////////////////////////////////////////

				strcpy(TCP_TX_BUF, "HTTP/1.0 200 OK\r\n");
				strcat(TCP_TX_BUF, "Content-Type: text/html\r\n");
				strcat(TCP_TX_BUF, "\r\n");

				strcat(TCP_TX_BUF, "<html>\r\n");

				/////////////////////////////////////////////////////
				// ENCABEZADO
				/////////////////////////////////////////////////////

				// Esta linea de http hace que la pagina se recague automaticamente cada 4 segundos
//				strcat(TCP_TX_BUF, "<meta http-equiv='refresh' content='4' >\r\n");
				strcat(TCP_TX_BUF, "<title>Test</title>\r\n");
				/////////////////////////////////////////////////////

					strcat(TCP_TX_BUF, "<form>\r\n");
						strcat(TCP_TX_BUF, "<b>Hello World</b>\r\n");
					strcat(TCP_TX_BUF, "</form>");

//					/////////////////////////////////////////////////////
//					// ENTRADAS
//					/////////////////////////////////////////////////////
//
//					strcat(TCP_TX_BUF, "<form name='entradas' method='post' action=''>\r\n");
//
//						strcat(TCP_TX_BUF, "<b>Sensores</b>\r\n");
//						strcat(TCP_TX_BUF, "<ul>");
//
//							strcat(TCP_TX_BUF, "<li>");
//								strcat(TCP_TX_BUF, "<b>Acelerometro:</b><br>\r\n");
//								strcat(TCP_TX_BUF, "<ul>");
//
//									strcat(TCP_TX_BUF, "<li>");
//										strcat(TCP_TX_BUF, "X:");
//										strcat(TCP_TX_BUF, ejeXStr);
//									strcat(TCP_TX_BUF, "</li>");
//
//									strcat(TCP_TX_BUF, "<li>");
//										strcat(TCP_TX_BUF, "Y:");
//										strcat(TCP_TX_BUF, ejeYStr);
//									strcat(TCP_TX_BUF, "</li>");
//
//									strcat(TCP_TX_BUF, "<li>");
//										strcat(TCP_TX_BUF, "Z:");
//										strcat(TCP_TX_BUF, ejeZStr);
//									strcat(TCP_TX_BUF, "</li>");
//								strcat(TCP_TX_BUF, "</ul>");
//							strcat(TCP_TX_BUF, "</li>");
//
//							strcat(TCP_TX_BUF, "<li>");
//								strcat(TCP_TX_BUF, "<b>Luz:</b><br>\r\n");
//
//								strcat(TCP_TX_BUF, "<ul>");
//									strcat(TCP_TX_BUF, "<li>");
//										strcat(TCP_TX_BUF, "Valor:");
//										strcat(TCP_TX_BUF, luzStr);
//									strcat(TCP_TX_BUF, "</li>");
//
//								strcat(TCP_TX_BUF, "</ul>");
//							strcat(TCP_TX_BUF, "</li>");
//							strcat(TCP_TX_BUF, "<br>\r\n");
//
//							strcat(TCP_TX_BUF, "<li>");
//								strcat(TCP_TX_BUF, "<b>ACD:</b><br>\r\n");
//
//								strcat(TCP_TX_BUF, "<ul>");
//									strcat(TCP_TX_BUF, "<li>");
//										strcat(TCP_TX_BUF, "Valor:");
//										strcat(TCP_TX_BUF, adcStr);
//									strcat(TCP_TX_BUF, "</li>");
//
//								strcat(TCP_TX_BUF, "</ul>");
//							strcat(TCP_TX_BUF, "</li>");
//
//							strcat(TCP_TX_BUF, "<br>\r\n");
//
//						strcat(TCP_TX_BUF, "</ul>");
//
//						strcat(TCP_TX_BUF, "<br><br>\r\n");
//
//					strcat(TCP_TX_BUF, "</form>\r\n");

//					/////////////////////////////////////////////////////
//					/////////////////////////////////////////////////////
//
//					#ifdef DEBUG_FANAUR
//						API_UartSendString("\n**************************ENVIADO**************************\n");
//						API_UartSendString(TCP_TX_BUF);
//						API_UartSendString("\n***********************************************************\n\n");
//					#endif

				}

//				// Para acceder poner en el browser http://192.168.1.110:90
//				if(TCPLocalPort == 90){
//
//					char* ptrData = (char*)strstr(RxTCPBuffer,"\r\n\r\n");
//
//					if(ptrData != 0){
//						ptrData += strlen("\r\n\r\n");
//
//						// Control Led Rojo
//						ptrRed = (char*)strstr(ptrData, "red=");
//
//						if(ptrRed != 0){
//							LPC_GPIO2->FIOSET = (1<<0); // red
//							ledRedState = 1;
//						}
//						else{
//							LPC_GPIO2->FIOCLR = (1<<0); // red
//							ledRedState = 0;
//						}
//
//
//						// Control Led Azul
//						ptrBlue = (char*)strstr(ptrData, "blue=");
//
//						if(ptrBlue != 0){
//							LPC_GPIO0->FIOSET = (1<<26); // blue
//							ledBlueState = 1;
//						}
//						else{
//							LPC_GPIO0->FIOCLR = (1<<26); // blue
//							ledBlueState = 0;
//						}
//
//
//						// Control Led Verde
//						ptrGreen = (char*)strstr(ptrData, "green=");
//
//						if(ptrGreen != 0){
//							LPC_GPIO2->FIOSET = (1<<1); // green
//							ledGreenState = 1;
//						}
//						else{
//							LPC_GPIO2->FIOCLR = (1<<1); // green
//							ledGreenState = 0;
//						}
//
//						// Control 7segmentos
//						ptr7segmentos = (char*)strstr(ptrData, "7segmentos=");
//
//						if(ptr7segmentos != 0){
//							ptr7segmentos += strlen("7segmentos=");
//							char* ptr7segmentosFin = strstr(ptr7segmentos, "&");
//
//							strncpy(ptr7segmentosValue, ptr7segmentos, ptr7segmentosFin - ptr7segmentos);
//							led7seg_setChar(ptr7segmentosValue[0],FALSE);
//						}
//
//						memset(RxTCPBuffer, '\0', sizeof(RxTCPBuffer));
//						TCPReleaseRxBuffer();
//
//					}
//
//
//						strcpy(TCP_TX_BUF, "HTTP/1.0 200 OK\r\n");
//						strcat(TCP_TX_BUF, "Content-Type: text/html\r\n");
//						strcat(TCP_TX_BUF, "\r\n");
//
//						strcat(TCP_TX_BUF, "<html>\r\n");
//							strcat(TCP_TX_BUF, "<title>SALIDAS</title>\r\n");
//
//							strcat(TCP_TX_BUF, "<form name='salidas' method='post' action=''>\r\n");
//
//							strcat(TCP_TX_BUF, "<b>RGB:</b><br>\r\n");
//							if(ledRedState == 1)
//								strcat(TCP_TX_BUF, "Red<input type='checkbox' name='red' checked></input>\r\n");
//							else
//								strcat(TCP_TX_BUF, "Red<input type='checkbox' name='red'></input>\r\n");
//
//							if(ledBlueState == 1)
//								strcat(TCP_TX_BUF, "Blue<input type='checkbox' name='blue' checked></input>\r\n");
//							else
//								strcat(TCP_TX_BUF, "Blue<input type='checkbox' name='blue'></input>\r\n");
//
//							if(ledGreenState == 1)
//								strcat(TCP_TX_BUF, "Green<input type='checkbox' name='green' checked ></input>\r\n");
//							else
//								strcat(TCP_TX_BUF, "Green<input type='checkbox' name='green' ></input>\r\n");
//
//							strcat(TCP_TX_BUF, "<br><br>\r\n");
//
//							strcat(TCP_TX_BUF, "<b>Display 7 Segmentos:</b><br>\r\n");
//
//							strcat(TCP_TX_BUF, "<select name='7segmentos'>\r\n");
//
//							char temp[2];
//							temp[1] = '\0';
//							for(ii =0; ii <10; ii++){
//								strcat(TCP_TX_BUF, "<option");
//
//								// se agrega el flag de seleccion en el valor
//								if((ptr7segmentosValue[0] - '0') == ii)
//									strcat(TCP_TX_BUF, " selected");
//
//								strcat(TCP_TX_BUF, ">");
//								temp[0] = ii + '0';
//								strcat(TCP_TX_BUF, temp);
//								strcat(TCP_TX_BUF, "</option>\r\n");
//
//							}
//
//							strcat(TCP_TX_BUF, "</select>\r\n");
//
//							strcat(TCP_TX_BUF, "<br><br>\r\n");
//
//							strcat(TCP_TX_BUF, "<input type='submit' name='envio' value='ENVIAR'></input>\r\n");
//
//						strcat(TCP_TX_BUF, "</form>\r\n");
//
//					/////////////////////////////////////////////////////
//

//					strcat(TCP_TX_BUF, "</html>\r\n");
//
//					#ifdef DEBUG_FANAUR
//						API_UartSendString("\n**************************ENVIADO**************************\n");
//						API_UartSendString(TCP_TX_BUF);
//						API_UartSendString("\n***********************************************************\n\n");
//					#endif
//
//				}


				TCPTxDataCount = strlen(TCP_TX_BUF);   // bytes to xfer

				TCPTransmitTxBuffer();                   // xfer buffer
				TCPClose();                              // and close connection
				HTTPBytesToSend = 0;                     // all data sent

				HTTPStatus |= HTTP_SEND_PAGE;              // ok, 1st loop executed
			}
		}
	}else{
		HTTPStatus &= ~HTTP_SEND_PAGE;               // reset help-flag if not connected
	}
}
