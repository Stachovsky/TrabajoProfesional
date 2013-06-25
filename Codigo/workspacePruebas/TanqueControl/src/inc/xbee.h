#ifndef _XBEE_H
#define _XBEE_H

#include "LPC17xx.h"

typedef struct {
	uint32_t PanID;
	uint8_t	DestHi;
	uint8_t	DestLow;
	uint8_t MyAdd;

} Xbee_CFG_Struct;

void XBeeConfig(Xbee_CFG_Struct * cfg);
void Xbee_SendPacket(Xbee_CFG_Struct * cfg, char * msg, int value);

#endif
