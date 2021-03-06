/*
 * ProtocolPCComunicaction.h
 *
 *  Created on: Sep 26, 2012
 *      Author: Facundo Nahuel Uriel Silva
 */

#ifndef PROTOCOLPCCOMUNICACTION_H_
#define PROTOCOLPCCOMUNICACTION_H_
//
//#include "LPC17xx.h"
//#include "lpc_types.h"

#include <string.h>

#define MIN_CMDPCCOM_SIZE_PACKED	7
#define MAX_CMDPCCOM_SIZE_DATA		10

/** \brief
 *
 */
typedef struct{
	unsigned char		start;
	unsigned char		cmdId;
	unsigned char		len;
	unsigned char		data[MAX_CMDPCCOM_SIZE_DATA];
        union{
            unsigned short		crc;
            unsigned char		crcHL[2];
        };
        unsigned char		end;

} cmdPcCom;

/** \brief
 *
 */
typedef enum{
	SRM_RECEIVING_START,     //!< SRM_RECEIVE_START
	SRM_RECEIVING_CMD_TYPE,  //!< SRM_RECEIVE_CMD_TYPE
	SRM_RECEIVING_DATA_LEN,  //!< SRM_RECEIVE_DATA_LEN
	SRM_RECEIVING_CMD_DATA,	 //!< SRM_RECEIVING_CMD_DATA
	SRM_RECEIVING_CRC_1,       //!< SRM_RECEIVE_CRC
	SRM_RECEIVING_CRC_2,       //!< SRM_RECEIVE_CRC
	SRM_RECEIVING_END        //!< SRM_RECEIVE_END

} stateReceptionMsg;

#define		PCCOM_START_BYTE				0x55
#define		PCCOM_END_BYTE					0xaa

#define		PCCOM_RX_MSG_IN_PROCESS			0x00
#define		PCCOM_RX_MSG_TERMINATE			0x01

// Codigo de comandos

// Confirmacion
#define		CMD_PCCOM_NACK                  0x00
#define		CMD_PCCOM_ACK                   0x01

// Sensores
#define		CMD_PCCOM_READ_ADC_0            0x10
#define		CMD_PCCOM_READ_ADC_1            0x11
#define		CMD_PCCOM_READ_ADC_2            0x12
#define		CMD_PCCOM_READ_ADC_3            0x13
#define		CMD_PCCOM_READ_ADC_4            0x14
#define		CMD_PCCOM_VALUE_CURRENT		0x15

// Actuadores
#define		CMD_PCCOM_ACTUADOR_1_ON     	0x20
#define		CMD_PCCOM_ACTUADOR_1_OFF    	0x21
#define		CMD_PCCOM_ACTUADOR_2_ON     	0x22
#define		CMD_PCCOM_ACTUADOR_2_OFF    	0x23
#define		CMD_PCCOM_ACTUADOR_3_ON         0x24
#define		CMD_PCCOM_ACTUADOR_3_OFF        0x25
#define		CMD_PCCOM_ACTUADOR_4_ON         0x26
#define		CMD_PCCOM_ACTUADOR_4_OFF        0x27

// Logica
#define		CMD_PCCOM_SYNC_REQUEST      	0x30
#define		CMD_PCCOM_SYNC_RESPONSE     	0x31
#define		CMD_PCCOM_MONITOR           	0x32
#define		CMD_PCCOM_INIT_PROCESS          0x33
#define		CMD_PCCOM_STOP_PROCESS      	0x34
#define		CMD_PCCOM_ACTIVAR_HV            0x35
#define		CMD_PCCOM_DESACTIVAR_HV         0x36
#define		CMD_PCCOM_INICIAR_CARGA         0x37
#define		CMD_PCCOM_CARGA_TERMINADA       0x38
#define		CMD_PCCOM_CARGA_INTERRUMPIDA    0x39
#define		CMD_PCCOM_REALIZAR_DESCARGA     0x40
#define		CMD_PCCOM_DESCARGA_TERMINADA	0x41
#define		CMD_PCCOM_EVIAR_DATOS_DESCARGA	0x42



/** \brief
 *
 * @param cmd
 * @param state
 * @param byteReceive
 * @return
 */
int pcComMachineState(cmdPcCom* cmd, stateReceptionMsg* state, unsigned char byteReceive);

/** \brief Inicializa los valores del mensaje
 *
 * @param msg
 * @param cmd
 */
void pcComInitMsg(cmdPcCom* msg, unsigned char cmd);

/** \brief
 *
 * @param msg
 * @param buffer
 * @param lenBuffer
 * @return
 */
unsigned char pcComPackMsg(cmdPcCom* msg, unsigned char *buffer, unsigned char lenBuffer);

// Comprobación de redundancia cíclica (CRC)
#define POLY 0x8408

/** \brief
 *
 * @param data_p
 * @param length
 */
unsigned short crc16(unsigned char *data_p, unsigned short length);


#endif /* PROTOCOLPCCOMUNICACTION_H_ */
