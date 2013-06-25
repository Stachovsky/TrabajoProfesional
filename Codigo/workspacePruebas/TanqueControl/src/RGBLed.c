
#include "RGBLed.h"
#include "LPC17xx.h"

void RGB_Off(){
	RED_PORT->FIOCLR = (1<<RED_LED);
	GREEN_PORT->FIOCLR = (1<<GREEN_LED);
	BLUE_PORT->FIOCLR = (1<<BLUE_LED);
}
void RGB_Init(){
	RED_PORT->FIODIR |= (1<<RED_LED);
	GREEN_PORT->FIODIR |= (1<<GREEN_LED);
	BLUE_PORT->FIODIR |= (1<<BLUE_LED);

	RGB_Off();
}

void RGB_redLedOn(){
	RED_PORT->FIOSET = (1<<RED_LED);
}
void RGB_redLedOff(){
	RED_PORT->FIOCLR = (1<<RED_LED);
}
void RGB_greenLedOn(){
	GREEN_PORT->FIOSET = (1<<GREEN_LED);
}
void RGB_greenLedOff(){
	GREEN_PORT->FIOCLR = (1<<GREEN_LED);
}
void RGB_blueLedOn(){
	BLUE_PORT->FIOSET = (1<<BLUE_LED);
}
void RGB_blueLedOff(){
	BLUE_PORT->FIOCLR = (1<<BLUE_LED);
}

