
#ifndef RGBLED_H_
#define RGBLED_H_


#define RED_LED		0
#define RED_PORT	LPC_GPIO2

#define GREEN_LED	1
#define GREEN_PORT	LPC_GPIO2

#define BLUE_LED	26
#define BLUE_PORT	LPC_GPIO0

void RGB_Off();
void RGB_Init();
void RGB_redLedOn();
void RGB_greenLedOn();
void RGB_blueLedOn();

void RGB_redLedOff();
void RGB_greenLedOff();
void RGB_blueLedOff();

#endif /* RGBLED_H_ */
