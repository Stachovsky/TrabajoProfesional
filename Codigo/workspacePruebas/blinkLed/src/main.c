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

//------------------------------------------------------------------------------
int estado = 0;
int contador = 0;
//------------------------------------------------------------------------------
//
////------------------------------------------------------------------------------
// Interrupcion del systick
//------------------------------------------------------------------------------
void SysTick_Handler(){

	if(contador == 500){ // cada 500ms cambia el estado
		contador = 0;
		if(estado)
			LPC_GPIO0->FIOCLR = (1<<22);
		else
			LPC_GPIO0->FIOSET = (1<<22);

		estado++;
		estado = estado % 2;
	}else
		contador++;
}

//------------------------------------------------------------------------------

int main(void) {
	
	LPC_GPIO0->FIODIR |= (1<<22);
	LPC_GPIO0->FIOSET = (1<<22);
	LPC_GPIO0->FIOCLR = (1<<22);

	// Configura el SysTick y Habilita la interrupcion del SysTick
	SysTick_Config(SystemCoreClock/1000); //1ms

	volatile static int i = 0 ;
	while(1) {
		i++ ;
	}
	return 0 ;
}

//------------------------------------------------------------------------------