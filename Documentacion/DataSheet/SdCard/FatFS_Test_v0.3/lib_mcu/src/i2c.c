/*****************************************************************************
 *   i2c.c:  I2C C file for NXP LPC11xx Family Microprocessors
 *
 *   Copyright(C) 2008, NXP Semiconductor
 *   parts of this code are (C) 2010, MyVoice CAD/CAM Services
 *   All rights reserved.
 *
 *   History
 *   2009.12.07  ver 1.00    Preliminary version, first Release
 *   2010.07.19  ver 1.10    Rob Jansen - MyVoice CAD/CAM Services:
 *                           Major cleaning an a rewrite of some functions
 *                           - adding ACK/NACK handling to the state machine
 *                           - adding a return result to the I2CEngine()
 *   2011.06.30  ver 1.20    Rob Jansen - MyVoice CAD/CAM Services:
 *                           - Remove fixed buffer, using pointers to buffers
 *                             in interface instead of the fixed buffers
 *
*****************************************************************************/
#include "LPC17xx.h"			/* LPC11xx Peripheral Registers */
#include "i2c.h"

#undef __FREERTOS
#define FALSE 0
#define TRUE  1

#ifdef __FREERTOS
	#include "FreeRTOS.h"
	#include "task.h"
	#include "queue.h"
	#include "semphr.h"
#endif

static volatile uint32_t I2CMasterState = I2CSTATE_IDLE;
static volatile uint32_t I2CSlaveState = I2CSTATE_IDLE;

static volatile uint8_t *I2CMasterBuffer;
static volatile uint8_t *I2CSlaveBuffer;
static volatile uint32_t I2CReadLength;
static volatile uint32_t I2CWriteLength;

static volatile uint32_t RdIndex = 0;
static volatile uint32_t WrIndex = 0;

#ifdef __FREERTOS
	/*
	 * For FreeRTOS a semaphore is used to guard the transaction
	 * so that a second process requesting an I2C transaction will wait
	 * for the first one to finish.
	 *
	 * I2CStarting is introduced in order to let other tasks take over
	 * while we are waiting for the transaction to start.
	 * It is not possible to use the I2CMasterState for this since the
	 * transaction may complete before returning.
	 */
	static uint8_t I2CStarting;
	static xSemaphoreHandle xGuard;
#endif

/*****************************************************************************
** Function name:		I2C1_IRQHandler
**
** Descriptions:		I2C interrupt handler for I2C1 on lpc17xx
**                      This handler only acts as master.
**
** parameters:			None
** Returned value:		None
**
*****************************************************************************/
void I2C1_IRQHandler(void)
{
	uint8_t StatValue;

	/* this handler deals with master read and master write only */
	StatValue = LPC_I2C1->I2STAT;
	switch ( StatValue )
	{
	case 0x08:
		/*
		 * A START condition has been transmitted.
		 * We now send the slave address and initialize
		 * the write buffer
		 * (we always start with a write after START+SLA)
		 */
#ifdef __FREERTOS
		I2CStarting = 0;
#endif
		WrIndex = 0;
		LPC_I2C1->I2DAT = I2CMasterBuffer[WrIndex++];
		LPC_I2C1->I2CONCLR = (I2CONCLR_SIC | I2CONCLR_STAC);
		I2CMasterState = I2CSTATE_PENDING;
		break;

	case 0x10:
		/*
		 * A repeated START condition has been transmitted.
		 * Now a second, read, transaction follows so we
		 * initialize the read buffer.
		 */
		RdIndex = 0;
		/* Send SLA with R bit set, */
		LPC_I2C1->I2DAT = I2CMasterBuffer[WrIndex++];
		LPC_I2C1->I2CONCLR = (I2CONCLR_SIC | I2CONCLR_STAC);
	break;

	case 0x18:
		/*
		 * SLA+W has been transmitted; ACK has been received.
		 * We now start writing bytes.
		 */
		LPC_I2C1->I2DAT = I2CMasterBuffer[WrIndex++];
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		break;

	case 0x20:
		/*
		 * SLA+W has been transmitted; NOT ACK has been received.
		 * Send a stop condition to terminate the transaction
		 * and signal I2CEngine the transaction is aborted.
		 */
		LPC_I2C1->I2CONSET = I2CONSET_STO;
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		I2CMasterState = I2CSTATE_SLA_NACK;
		break;

	case 0x28:
		/*
		 * Data in I2DAT has been transmitted; ACK has been received.
		 * Continue sending more bytes as long as there are bytes to send
		 * and after this check if a read transaction should follow.
		 */
		if ( WrIndex < I2CWriteLength )
		{
			/* Keep writing as long as bytes avail */
			LPC_I2C1->I2DAT = I2CMasterBuffer[WrIndex++];
		}
		else
		{
			if ( I2CReadLength != 0 )
			{
				/* Send a Repeated START to initialize a read transaction */
				/* (handled in state 0x10)                                */
				LPC_I2C1->I2CONSET = I2CONSET_STA;	/* Set Repeated-start flag */
			}
			else
			{
				I2CMasterState = I2CSTATE_ACK;
				LPC_I2C1->I2CONSET = I2CONSET_STO;      /* Set Stop flag */
			}
		}
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		break;

	case 0x30:
		/*
		 * Data byte in I2DAT has been transmitted; NOT ACK has been received
		 * Send a STOP condition to terminate the transaction and inform the
		 * I2CEngine that the transaction failed.
		 */
		LPC_I2C1->I2CONSET = I2CONSET_STO;
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		I2CMasterState = I2CSTATE_NACK;
		break;

	case 0x38:
		/*
		 * Arbitration loss in SLA+R/W or Data bytes.
		 * This is a fatal condition, the transaction did not complete due
		 * to external reasons (e.g. hardware system failure).
		 * Inform the I2CEngine of this and cancel the transaction
		 * (this is automatically done by the I2C hardware)
		 */
		I2CMasterState = I2CSTATE_ARB_LOSS;
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		break;

	case 0x40:
		/*
		 * SLA+R has been transmitted; ACK has been received.
		 * Initialize a read.
		 * Since a NOT ACK is sent after reading the last byte,
		 * we need to prepare a NOT ACK in case we only read 1 byte.
		 */
		if ( I2CReadLength == 1 )
		{
			/* last (and only) byte: send a NACK after data is received */
			LPC_I2C1->I2CONCLR = I2CONCLR_AAC;
		}
		else
		{
			/* more bytes to follow: send an ACK after data is received */
			LPC_I2C1->I2CONSET = I2CONSET_AA;
		}
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		break;

	case 0x48:
		/*
		 * SLA+R has been transmitted; NOT ACK has been received.
		 * Send a stop condition to terminate the transaction
		 * and signal I2CEngine the transaction is aborted.
		 */
		LPC_I2C1->I2CONSET = I2CONSET_STO;
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		I2CMasterState = I2CSTATE_SLA_NACK;
		break;

	case 0x50:
		/*
		 * Data byte has been received; ACK has been returned.
		 * Read the byte and check for more bytes to read.
		 * Send a NOT ACK after the last byte is received
		 */
		if(I2CSlaveBuffer)
			I2CSlaveBuffer[RdIndex++] = LPC_I2C1->I2DAT; /* Only store when buffer available */
		if ( RdIndex < (I2CReadLength-1) )
		{
			/* lmore bytes to follow: send an ACK after data is received */
			LPC_I2C1->I2CONSET = I2CONSET_AA;
		}
		else
		{
			/* last byte: send a NACK after data is received */
			LPC_I2C1->I2CONCLR = I2CONCLR_AAC;
		}
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
		break;

	case 0x58:
		/*
		 * Data byte has been received; NOT ACK has been returned.
		 * This is the last byte to read.
		 * Generate a STOP condition and flag the I2CEngine that the
		 * transaction is finished.
		 */
		if(I2CSlaveBuffer)
			I2CSlaveBuffer[RdIndex++] = LPC_I2C1->I2DAT; /* Only store when buffer available */
		I2CMasterState = I2CSTATE_ACK;
		LPC_I2C1->I2CONSET = I2CONSET_STO;	/* Set Stop flag */
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;	/* Clear SI flag */
		break;


	default:
		LPC_I2C1->I2CONCLR = I2CONCLR_SIC;
	break;
  }
  return;
}

/*****************************************************************************
** Function name:	I2CStart
**
** Descriptions:	Create I2C start condition, a timeout
**					value is set if the I2C never gets started,
**					and timed out. It's a fatal error.
**
**					This function is called from the I2CEngine() to
**					start a transfer.
**
** parameters:		None
** Returned value:	true or false, return false if timed out
**
*****************************************************************************/
static uint32_t I2CStart( void )
{
	uint32_t timeout = 0;

	/*
	 * For FreeRTOS, set the I2CStarting condition true.
	 * this is reset by the interrupt handler as soon as the start condition
	 * has been received to hand the control back to the I2CEngine().
	 */
	#ifdef __FREERTOS
		I2CStarting = 1;

		/*--- Issue a start condition ---*/
		LPC_I2C1->I2CONSET = I2CONSET_STA;	/* Set Start flag */

		while((I2CStarting) && (timeout < MAX_TIMEOUT))
		{
			vTaskDelay(1); // Let other processes take control while we wait
			timeout++;
		}
	#else
		/*--- Issue a start condition ---*/
		LPC_I2C1->I2CONSET = I2CONSET_STA;	/* Set Start flag */

		while((I2CMasterState != I2CSTATE_PENDING) && (timeout < MAX_TIMEOUT))
		{
			timeout++;
		}
	#endif
	return (timeout < MAX_TIMEOUT);
}

/*****************************************************************************
** Function name:	I2CStop
**
** Descriptions:	Set the I2C stop condition
**
** parameters:		None
** Returned value:	true or never return
**
*****************************************************************************/
static uint32_t I2CStop( void )
{
	uint32_t timeout = 0;

	LPC_I2C1->I2CONSET = I2CONSET_STO;      /* Set Stop flag */
	LPC_I2C1->I2CONCLR = I2CONCLR_SIC;  /* Clear SI flag */

	/*--- Wait for STOP detected ---*/
	while((LPC_I2C1->I2CONSET & I2CONSET_STO) && (timeout < MAX_TIMEOUT))
	{
#ifdef __FREERTOS
		vTaskDelay(1); // Let other processes take control while we wait
#endif
		timeout++;
	}
	return (timeout >= MAX_TIMEOUT);
}

/*****************************************************************************
** Function name:	I2CInit
**
** Descriptions:	Initialize I2C controller
**
** parameters:		I2c mode is either MASTER or SLAVE
** Returned value:	true or false, return false if the I2C
**					interrupt handler was not installed correctly
**
*****************************************************************************/
uint32_t I2CInit( uint32_t I2cMode )
{
	LPC_SC->PCONP |= 1<<19;       /* power and clocking to I2C1 */
	LPC_SC->PCLKSEL1 |= 0b11 < 6; /* I2C_PCLK = CCLK/8          */

	LPC_PINCON->PINSEL0 |= 0b1111; /* P0.0 and P0.1 are in I2C mode */
	LPC_PINCON->PINMODE_OD0 |= 3;  /* and Open Drain                */

	/*--- Clear flags ---*/
	LPC_I2C1->I2CONCLR = I2CONCLR_AAC | I2CONCLR_SIC | I2CONCLR_STAC | I2CONCLR_I2ENC;

	/*--- Reset registers ---*/

	LPC_I2C1->I2SCLL   = I2SCLL_SCLL;
	LPC_I2C1->I2SCLH   = I2SCLH_SCLH;

	if ( I2cMode == I2CSLAVE )
	{
		LPC_I2C1->I2ADR0 = PCF8594_ADDR;
	}

	/* Enable the I2C Interrupt */
	//NVIC_SetPriority(I2C1_IRQn, 10);
	NVIC_EnableIRQ(I2C1_IRQn);

	LPC_I2C1->I2CONSET = I2CONSET_I2EN;

#ifdef __FREERTOS

	/* Mutex to make sure that only one transaction is taking place */
	xGuard = xSemaphoreCreateMutex();

#endif
	return( TRUE );
}

/*****************************************************************************
** Function name:	I2CEngine
**
** Descriptions:	The routine to complete a I2C transaction
**					from start to stop. All the intermitten
**					steps are handled in the interrupt handler.
**					Before this routine is called, the read
**					length, write length and I2C master buffer
**					need to be filled.
**
** parameters:		None
** Returned value:	Any of the I2CSTATE_... values. See i2c.h
**
*****************************************************************************/
uint32_t I2CEngine(uint8_t *WriteBuf, uint8_t *WriteLen, uint8_t *ReadBuf, uint8_t *ReadLen)
{
#ifdef __FREERTOS

	/* Guard the I2C transaction with a semaphore.
	 * Only one I2C transaction may be active at any given time
	 */
	xSemaphoreTake(xGuard, portMAX_DELAY);

#endif

	I2CMasterBuffer = WriteBuf;
	I2CSlaveBuffer = ReadBuf;
	I2CWriteLength = *WriteLen;
	I2CReadLength = ReadLen ? *ReadLen : 0; // If available then value else 0

	I2CMasterState = I2CSTATE_IDLE;
	RdIndex = 0;
	WrIndex = 0;
	if (!I2CStart())
	{
		I2CStop();
		return ( FALSE );
	}

	/* wait until the state is a terminal state
	 *
	 * ToDo: Make this nicer ... using a plain delay in a while loop
	 *       is not a proper way to wait for the transaction to finish
	 */
#ifdef __FREERTOS
	while(I2CMasterState < 0x100);  vTaskDelay(1);

	xSemaphoreGive(xGuard); /* Release the semaphore, transaction finished */
#else
	while(I2CMasterState < 0x100);
#endif


	return I2CMasterState;
}

/******************************************************************************
**                            End Of File
******************************************************************************/

