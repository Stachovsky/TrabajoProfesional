
#include "lpc17xx_uart.h"
#include "lpc17xx_gpdma.h"
#include "lpc17xx_pinsel.h"

/* Receive buffer size */
#define BUFF_SIZE	5

uint8_t rxBuff[2][BUFF_SIZE];
uint8_t txBuff[2][BUFF_SIZE];

__IO uint32_t Channel0_TC;
__IO uint32_t Channel0_Err;
__IO uint32_t Channel1_TC;
__IO uint32_t Channel1_Err;

void DMA_IRQHandler (void)
{
	uint32_t tmp;
		// Scan interrupt pending
	for (tmp = 0; tmp <= 7; tmp++) {
		if (GPDMA_IntGetStatus(GPDMA_STAT_INT, tmp)){
			// Check counter terminal status
			if(GPDMA_IntGetStatus(GPDMA_STAT_INTTC, tmp)){
				// Clear terminate counter Interrupt pending
				GPDMA_ClearIntPending (GPDMA_STATCLR_INTTC, tmp);

				switch (tmp){
					case 0:
						Channel0_TC++;
						GPDMA_ChannelCmd(0, DISABLE);
						break;
					case 1:
						Channel1_TC++;
						GPDMA_ChannelCmd(1, DISABLE);
						break;
					default:
						break;
				}

			}
				// Check error terminal status
			if (GPDMA_IntGetStatus(GPDMA_STAT_INTERR, tmp)){
				// Clear error counter Interrupt pending
				GPDMA_ClearIntPending (GPDMA_STATCLR_INTERR, tmp);
				switch (tmp){
					case 0:
						Channel0_Err++;
						GPDMA_ChannelCmd(0, DISABLE);
						break;
					case 1:
						Channel1_Err++;
						GPDMA_ChannelCmd(1, DISABLE);
						break;
					default:
						break;
				}
			}
		}
	}
}

/*-------------------------MAIN FUNCTION------------------------------*/
/*********************************************************************//**
 * @brief		c_entry: Main UART program body
 * @param[in]	None
 * @return 		int
 **********************************************************************/
int main(void)
{
	int i;
	UART_CFG_Type UARTConfigStruct;
	UART_FIFO_CFG_Type UARTFIFOConfigStruct;

	GPDMA_Channel_CFG_Type GPDMACfg_rx[2];
	GPDMA_Channel_CFG_Type GPDMACfg_tx[2];

	PINSEL_CFG_Type PinCfg;

	//===================================================================
	// Configuación de los pines de la UART3
	//===================================================================
	PinCfg.Funcnum = PINSEL_FUNC_2;
	PinCfg.OpenDrain = PINSEL_PINMODE_NORMAL;
	PinCfg.Pinmode = PINSEL_PINMODE_TRISTATE;
	PinCfg.Pinnum = PINSEL_PIN_0;
	PinCfg.Portnum = PINSEL_PORT_0;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = PINSEL_PIN_1;
	PINSEL_ConfigPin(&PinCfg);

	// Configuramos la UART
	UARTConfigStruct.Baud_rate = 115200;
	UARTConfigStruct.Databits = UART_DATABIT_8;
	UARTConfigStruct.Parity = UART_PARITY_NONE;
	UARTConfigStruct.Stopbits = UART_STOPBIT_1;
	UART_Init(LPC_UART3, &UARTConfigStruct);
	// Enable DMA mode in UART
	UART_FIFOConfigStructInit(&UARTFIFOConfigStruct);
	UARTFIFOConfigStruct.FIFO_DMAMode = ENABLE;
	// Initialize FIFO for UART0 peripheral
	UART_FIFOConfig(LPC_UART3, &UARTFIFOConfigStruct);
	// Enable UART Transmit
	UART_TxCmd(LPC_UART3, ENABLE);

	//===================================================================
	// GPDMA de los pines de la UART3
	//===================================================================

    /* Initialize GPDMA controller */
	GPDMA_Init();

	/* Setting GPDMA interrupt */
    // Disable interrupt for DMA
    NVIC_DisableIRQ (DMA_IRQn);
    /* preemption = 1, sub-priority = 1 */
    NVIC_SetPriority(DMA_IRQn, ((0x01<<3)|0x01));


    // Estrucutura de configuración para PING PONG
    //-----------------------------------------------------------------------
	GPDMACfg_tx[0].ChannelNum = 0;
	GPDMACfg_tx[0].SrcMemAddr = (uint32_t) txBuff[0];
	GPDMACfg_tx[0].DstMemAddr = 0;
	GPDMACfg_tx[0].TransferSize = BUFF_SIZE;
	GPDMACfg_tx[0].TransferWidth = 0;
	GPDMACfg_tx[0].TransferType = GPDMA_TRANSFERTYPE_M2P;
	GPDMACfg_tx[0].SrcConn = 0;
	GPDMACfg_tx[0].DstConn = GPDMA_CONN_UART3_Tx;
	GPDMACfg_tx[0].DMALLI = 0;

	GPDMACfg_tx[1].ChannelNum = 0;
	GPDMACfg_tx[1].SrcMemAddr = (uint32_t) txBuff[1];
	GPDMACfg_tx[1].DstMemAddr = 0;
	GPDMACfg_tx[1].TransferSize = BUFF_SIZE;
	GPDMACfg_tx[1].TransferWidth = 0;
	GPDMACfg_tx[1].TransferType = GPDMA_TRANSFERTYPE_M2P;
	GPDMACfg_tx[1].SrcConn = 0;
	GPDMACfg_tx[1].DstConn = GPDMA_CONN_UART3_Tx;
	GPDMACfg_tx[1].DMALLI = 0;

	GPDMACfg_rx[0].ChannelNum = 1;
	GPDMACfg_rx[0].SrcMemAddr = 0;
	GPDMACfg_rx[0].DstMemAddr = (uint32_t) rxBuff[0];
	GPDMACfg_rx[0].TransferSize = BUFF_SIZE;
	GPDMACfg_rx[0].TransferWidth = 0;
	GPDMACfg_rx[0].TransferType = GPDMA_TRANSFERTYPE_P2M;
	GPDMACfg_rx[0].SrcConn = GPDMA_CONN_UART3_Rx;
	GPDMACfg_rx[0].DstConn = 0;
	GPDMACfg_rx[0].DMALLI = 0;

	GPDMACfg_rx[1].ChannelNum = 1;
	GPDMACfg_rx[1].SrcMemAddr = 0;
	GPDMACfg_rx[1].DstMemAddr = (uint32_t) rxBuff[1];
	GPDMACfg_rx[1].TransferSize = BUFF_SIZE;
	GPDMACfg_rx[1].TransferWidth = 0;
	GPDMACfg_rx[1].TransferType = GPDMA_TRANSFERTYPE_P2M;
	GPDMACfg_rx[1].SrcConn = GPDMA_CONN_UART3_Rx;
	GPDMACfg_rx[1].DstConn = 0;
	GPDMACfg_rx[1].DMALLI = 0;
	//-----------------------------------------------------------------------

	/* Reset terminal counter */
	Channel0_TC = 0;
	/* Reset Error counter */
	Channel0_Err = 0;

    // Enable interrupt for DMA
    NVIC_EnableIRQ (DMA_IRQn);

	// Selecciono los buffers
	GPDMA_Setup(&GPDMACfg_rx[0]);
	GPDMA_Setup(&GPDMACfg_tx[0]);

    // Enable GPDMA channel 0 para transmisión (todavía no hay nada)
	GPDMA_ChannelCmd(0, DISABLE);

	// Enable GPDMA channel 1 para recepción
	GPDMA_ChannelCmd(1, ENABLE);

	uint8_t selectedRxBuff = 0;
	uint8_t selectedTxBuff = 0;

    // Main loop - echos back to the terminal
    while (1){

    	// Esperar que se llene el primer buffer
        while ((Channel1_TC == 0) && (Channel1_Err == 0));
      	Channel1_TC = 0;

        // Poner a recibir en  el otro buffer
        if (selectedRxBuff == 0){
        	GPDMA_Setup(&GPDMACfg_rx[1]);
        	//selectedRxBuff = 1;
        }else{
        	GPDMA_Setup(&GPDMACfg_rx[0]);
        	//selectedRxBuff = 0;
        }
    	GPDMA_ChannelCmd(1, ENABLE);


        // Procesar el buffer de entrada
    	for (i=0;i<BUFF_SIZE;i++){
    		txBuff[selectedTxBuff][i] = rxBuff[selectedRxBuff][i] + ('A'-'a');
    	}

    	if (selectedRxBuff == 0){
    		selectedRxBuff = 1;
    	}else{
    		selectedRxBuff = 0;
    	}

    	// Pongo a mandar el último buffer procesado
        if (selectedTxBuff == 0){
        	GPDMA_Setup(&GPDMACfg_tx[0]);
        	// Le ambio el buffer para que la próxima escritura use el otro buffer
        	selectedTxBuff = 1;
        }else{
        	GPDMA_Setup(&GPDMACfg_tx[1]);
        	// Le ambio el buffer para que la próxima escritura use el otro buffer
        	selectedTxBuff = 0;
        }

    	GPDMA_ChannelCmd(0, ENABLE);

    }

    return 1;
}

