/*
 * ApiKeepAlive.c
 *
 *  Created on: 28/04/2012
 *      Author: Facundo Nahuel Uriel Silva
 */

#include "ApiKeepAlive.h";

//------------------------------------------------------------------------------
// Variables Globales
//------------------------------------------------------------------------------
API_KeepAliveStruc KeepAliveData;
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Interrupcion del systick
//------------------------------------------------------------------------------
void SysTick_Handler(){
	KeepAliveData.accion();
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// KeepAlive Ini
//------------------------------------------------------------------------------
void API_KeepAliveInit(uint32_t milisegundos, void (*accion)(void)){
	if(milisegundos != 0)
		KeepAliveData.milisegundos = milisegundos;
	else
		KeepAliveData.milisegundos = MILISEGUNDOS_KEEP_ALIVE_DEFAULD;

	if(accion != NULL)
		KeepAliveData.accion = accion;
	else
		KeepAliveData.accion = API_KeepAliveLedBlink;

	// Se configura el SysTick para que interrumpa cada 1ms
	SysTick_Config(SystemCoreClock/1000);
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Funcion de keep alive por defauld;
//------------------------------------------------------------------------------
void API_KeepAliveLedBlink(void){
	if(KeepAliveData.contador == KeepAliveData.milisegundos){ // cada 500ms cambia el estado
		KeepAliveData.contador = 0;
		if(KeepAliveData.estadoLedBlink){
			LPC_GPIO0->FIOCLR = (1<<22);
		}else{
			LPC_GPIO0->FIOSET = (1<<22);
		}
		KeepAliveData.estadoLedBlink++;
		KeepAliveData.estadoLedBlink %= 2;
	}else
		KeepAliveData.contador++;

	// Se configura el pin del led del LCPXpresso
	LPC_GPIO0->FIODIR |= (1<<22);
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
