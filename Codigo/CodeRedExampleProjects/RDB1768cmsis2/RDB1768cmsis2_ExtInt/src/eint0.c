//*****************************************************************************
//   +--+       
//   | ++----+   
//   +-++    |  
//     |     |  
//   +-+--+  |   
//   | +--+--+  
//   +----+    Copyright (c) 2009 Code Red Technologies Ltd. 
//
// eint0.c provides initialisation and interrupt handler routines for accessing
// the external interrupt button on the RDB1768 development board (labelled ISP)
//
// Software License Agreement
// 
// The software is owned by Code Red Technologies and/or its suppliers, and is 
// protected under applicable copyright laws.  All rights are reserved.  Any 
// use in violation of the foregoing restrictions may subject the user to criminal 
// sanctions under applicable laws, as well as to civil liability for the breach 
// of the terms and conditions of this license.
// 
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// USE OF THIS SOFTWARE FOR COMMERCIAL DEVELOPMENT AND/OR EDUCATION IS SUBJECT
// TO A CURRENT END USER LICENSE AGREEMENT (COMMERCIAL OR EDUCATIONAL) WITH
// CODE RED TECHNOLOGIES LTD. 

#include "LPC17xx.h"
#include "leds.h"

// Counter holding number of times external interrupt 0 triggered
volatile unsigned int eint0_count;

#define EINT0_CLR (1 << 0)
#define EINT0_EDGE	0x00000001

// ***** EINT0 Initialisation function ***** 
// Setup External Interrupt 0 for RDB1768 ISP button
void EINT0_init (void)
{
	// Set PINSEL4 [21:20] = 01 for P2.10 as EINT0
	LPC_PINCON->PINSEL4 &= ~(0x11 << 20);
	LPC_PINCON->PINSEL4 |= (0x01 << 20);

	// EINT0 edge trigger
	LPC_SC->EXTMODE |= EINT0_EDGE;
	
	// EINT0 is falling edge by default		
	LPC_SC->EXTPOLAR &= ~(1 <<0);	
	
	// Setup counter for number of ExtInt0's received
	eint0_count = 0;

	// Enabled External Interrupt 0 (the ISP button on RDB1768).
	NVIC_EnableIRQ(EINT0_IRQn);  

}

// ***** EINT0 Interrupt Handler***** 
// Each time an external interrupt is generated by pressing the ISP
// button, the state of the user LEDs (LEDs 2-5) will toggle.
void EINT0_IRQHandler (void)
{
	// Clear interrupt
	LPC_SC->EXTINT = EINT0_CLR;
	// Increment counter for number of times EINT0 triggered
	eint0_count++;
	// Invert the state of the board's user LEDs
	leds_invert();  
}

