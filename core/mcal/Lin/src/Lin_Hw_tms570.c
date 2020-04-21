/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 *
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with
 * the terms contained in the written license agreement between you and ArcCore,
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as
 * published by the Free Software Foundation and appearing in the file
 * LICENSE.GPL included in the packaging of this file or here
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Lin_Hw_tms570.c
 *  This file contains the TMS570 hardware specific implementation of the API's.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Lin
  *  This is the TMS570 Mcal Lin Group
  *  @{
  */


#include "Lin.h"
#include "Lin_Internal.h"
#include "irq_tms570.h"

#include "Lin_Cfg.h"
#include "LinIf_Cbk.h"
#include "Lin_Hw_tms570.h"

#if ( LIN_DEV_ERROR_DETECT == STD_ON )
	#if defined(USE_DET)
		#include "Det.h"
	#else
		#error Lin: Need to add DET module when LinDevErrorDetect is enabled
	#endif
#endif

#if defined(USE_DEM) || defined (WDG_USE_DEM)
	#include "Dem.h"
#endif

#include "Mcu.h"
#include "SchM_Lin.h"
#include "isr.h"
#include "irq.h"


/* ----------------------------[Macro Definitions]--------------*/
/**
  * @name    Hardware specific macros
  * @{
  */
#define LIN_MAX_MSG_LENGTH 	8
#define LIN_PRIO 			3
#define NBR_DATA_BYTES  	8u
#define MASK_LINCR2_DDRQ    (uint32)0x800uL
#define MASK_LINCR2_ABRQ    (uint32)0x200uL
#define MAX_WAIT_CYCLES     (uint32)10000uL
#define MASK_FRAME_ID       0xFFFFFF00U

#define LIN_BE 		0x80000000u			/* Bit error flag */
#define LIN_PBE 	0x40000000u			/* Physical bus error flag */
#define LIN_CE	 	0x20000000u			/* Checksum error flag */
#define LIN_ISFE 	0x10000000u			/* Inconsistent synch field error flag */
#define LIN_NRE 	0x08000000u			/* No-response error flag */
#define LIN_FE 		0x04000000u			/* Framing error flag */
#define LIN_OE 		0x02000000u			/* Overrun error flag */
#define LIN_PE 		0x01000000u			/* Parity error flag */
#define LIN_RXRDY 	0x00000200u			/* Receiver ready flag */
#define LIN_TXRDY 	0x00000100u			/* Transmitter buffer register ready flag. */
#define LIN_BUSY 	0x00000008u			/* Bus busy flag */
#define LIN_WAKEUP 	0x00000002u			/* LIN Wake-Up flag */
#define LIN_BRKDT 	0x00000001u			/* LIN break-detect flag */
#define LIN_TXEMPTY  1ul<<11u
#define LIN_IDTXFLAG 1ul<<13u       /* Identifier on transmit flag. */



/* SCI Global Control Register 1 (SCIGCR1) [offset = 04h] */
#define LIN_GCR1_TXENA	 	0x02000000u	/*  Transmit enable.  */
#define LIN_GCR1_RXENA	 	0x01000000u	/*   Receive enable.  */
#define LIN_GCR1_CONT	 	0x00020000u	/*   When debug mode is entered, the SCI/LIN continues to operate until the current transmit and
receive functions are complete.  */
#define LIN_GCR1_CTYPE_EXT 	1ul<<11u	/*  Checksum type: 0-Classic checksum is used. 1-Enhanced checksum is used. */
#define LIN_GCR1_CTYPE_STD 	~(LIN_GCR1_CTYPE_EXT)	/*  Checksum type: 0-Classic checksum is used. 1-Enhanced checksum is used. */
#define LIN_GCR1_MBUF	 	0x00000400u	/*  The multi-buffer mode is enabled. */

#define LIN_GCR1_SWnRST 	0x00000080u	/*  The SCI/LIN is in its ready state; transmission and reception can be done. After this bit is set to
1, the configuration of the module should not change.. */
#define LIN_GCR1_LINMODE 	0x00000040u	/* 1-  LIN mode is enabled; SCI mode is disabled. */
#define LIN_GCR1_LINMASTER 	0x00000020u	/* 1 - The node is in master mode. */
#define LIN_GCR1_HGENCTRL   1ul<<12u


#define LIN_GCR1_COMM_MODE 	0x00000001u	 /* ID4 and ID5 are used for length control */
#define LIN_GCR1_TIMING_MODE   1u<<1u    /* asynchronous timing mode */

#define LIN_RX_FUNC			0x00000002u
#define LIN_TX_FUNC			0x00000004u

#define LIN_GCR2_POWERDOWN 	0x00000001u	/* 1- The SCI/LIN module enters local low-power mode. */

#define LIN_SETINT_WAKEUP	1u<<2u	/* Setting this bit enables the SCI/LIN to generate a wakeup interrupt and thereby exit low-power mode. */
#define LIN_SETINT_TIMEOUT	1u<<2u
#define LIN_SETINT_RX	    1u<<9u
#define LIN_SETINT_TX	    1u<<8u
#define LIN_SETINT_BE       1u<<31u
#define LIN_SETINT_PBE      1u<<30u
#define LIN_SETINT_CE       1u<<29u
#define LIN_SETINT_NRE      1u<<27u
#define LIN_SETINT_FE       1u<<26u

#define LIN_INT_WAKEUP 		0x00000002u		/* Set wake-up interrupt. */

#define LIN_FORMAT_LENGTH(_x) (_x)<<16

/* Development error macros. */
#if ( LIN_DEV_ERROR_DETECT == STD_ON )
	#define VALIDATE(_exp,_api,_err ) \
			if( !(_exp) ) { \
			  (void)Det_ReportError(LIN_MODULE_ID,0,_api,_err); \
			  return; \
			}

	#define VALIDATE_W_RV(_exp,_api,_err,_rv ) \
			if( !(_exp) ) { \
				(void)Det_ReportError(LIN_MODULE_ID,0,_api,_err); \
			  return (_rv); \
			}

	#define LIN_DET_REPORT_ERROR(_api, _err)    (void)Det_ReportError(LIN_MODULE_ID,0,_api,_err)
	#else
	#define VALIDATE(_exp,_api,_err )
	#define VALIDATE_W_RV(_exp,_api,_err,_rv )
	#define LIN_DET_REPORT_ERROR(_api, _err)
#endif
/** @} */

static linBASE_t * const LIN_HW[] = {(linBASE_t *) &LIN_0, (linBASE_t *) &LIN_1};
#define GET_LIN_HW(_hwUnit) LIN_HW[_hwUnit]

/* ----------------------------[Function Declaration]-----------*/


/* ----------------------------[Variable Definition]-----------*/
/** @req SWS_Lin_00145 Reset -> LIN_UNINIT: After reset, the Lin module shall set its state to LIN_UNINIT. */
static Lin_DriverStatusType LinDriverStatus = LIN_UNINIT;

static Lin_StatusType LinChannelStatus[LIN_CONTROLLER_CNT];

static Lin_StatusType LinChannelOrderedStatus[LIN_CONTROLLER_CNT];

/* Internal shadow buffer */
static uint8 LinBufRx[LIN_CONTROLLER_CNT][LIN_MAX_MSG_LENGTH];


/* ----------------------------[Static Function]-----------------*/

/**
 *
 * @param buf
 * @param Channel
 * @return
 */
static Std_ReturnType linReceive(uint8 *buf, uint8 Channel){

	linBASE_t * TMS570LS_LIN = LIN_HW[Channel];

    for(uint8 i = 0; i < NBR_DATA_BYTES; i++)
    {
        /* convenient with TI reg file */
        /* @req SWS_Lin_00096 */
    	buf[i] = (uint8)TMS570LS_LIN->RDx[i];
    }
    return E_OK;
}

/**
 *
 * @param Channel
 * @param PduInfoPtr
 * @return
 */
static Std_ReturnType linTrasmit(uint8 Channel, Lin_PduType* PduInfoPtr)
{
    Std_ReturnType retval = E_OK;
    linBASE_t * TMS570LS_LIN = LIN_HW[Channel];

    //VALIDATE_PTR_W_RV((NULL != PduInfoPtr->SduPtr), E_NOT_OK);
    VALIDATE_W_RV( (NBR_DATA_BYTES >= PduInfoPtr->Dl), LIN_SEND_FRAME_SERVICE_ID, LIN_E_INVALID_CONFIG, E_NOT_OK);

    /*Frame identifiers 60 (0x3C) to 61 (0x3D) shall always use classic checksum */
    if (PduInfoPtr->Cs != LIN_ENHANCED_CS)
    {
    	TMS570LS_LIN->GCR1 &= LIN_GCR1_CTYPE_STD;
    }
    else {
    	TMS570LS_LIN->GCR1 |= LIN_GCR1_CTYPE_EXT;
    }

    /* Length */
    uint8 len = PduInfoPtr->Dl;
    TMS570LS_LIN->FORMAT  = LIN_FORMAT_LENGTH(len -1);

    /* Request transmission of header */
    /* Id */
    TMS570LS_LIN->ID = (MASK_FRAME_ID & TMS570LS_LIN->ID) | PduInfoPtr->Pid;

    /* Direction */
    if (PduInfoPtr->Drc == LIN_MASTER_RESPONSE) {

    	/* TX is now busy */
    	Lin_Hw_SetChannelStatus(Channel, LIN_TX_BUSY);

		for(uint8 i = 0; i < len;i++)
		{
			TMS570LS_LIN->TDx[len-i-1] = PduInfoPtr->SduPtr[i]; /*lint !e9031 Both are unsigned 8 bit. */
		}

    } else {
    	 /** @req SWS_Lin_00193 */
    	/* RX is now busy */
    	Lin_Hw_SetChannelStatus(Channel, LIN_RX_BUSY);
    }


    return retval;
}


/**
 * @brief Re-init or re-sync driver because of error or hang-up it should be done here
 * @param Channel
 * @return
 */
static Std_ReturnType linResyncDriver(uint8 Channel)
{
	volatile linBASE_t * TMS570LS_LIN = LIN_HW[Channel];

	/* In case we need to re-init or re-sync driver because of error or hangup it should be done here */
	TMS570LS_LIN->GCR1 &= ~LIN_GCR1_SWnRST;
	TMS570LS_LIN->GCR1 |= LIN_GCR1_SWnRST;

    Lin_Hw_SetChannelStatus(Channel,LIN_OPERATIONAL);

    return E_OK;
}
/* ----------------------------[Supported Requirements]---------*/

/** General requirements tagging */
/** @req SWS_Lin_00013 **/
/** @req SWS_Lin_00014 **/
/** @req SWS_Lin_00015 **/
/** @req SWS_Lin_00156 **/
/** @req SWS_Lin_00017 **/
/** @req SWS_Lin_00018 **/
/** @req SWS_Lin_00019 **/
/** !req SWS_Lin_00184 **/
/** @req SWS_Lin_00207 **/
/** @req SWS_Lin_00221 **/
/** @req SWS_Lin_00224 **/
/** @req SWS_Lin_00225 **/
/** @req SWS_Lin_00235 **/
/** @req SWS_Lin_00237 **/
/** @req SWS_Lin_00239 **/
/** @req SWS_Lin_00240 **/
/** @req SWS_Lin_00027 **/
/** @req SWS_Lin_00028 **/
/** @req SWS_Lin_00029 **/
/** @req SWS_Lin_00045 **/
/** @req SWS_Lin_00005 **/
/** @req SWS_Lin_00055 **/

/* ----------------------------[HW Specific Functions]---------*/

/**
 * @brief Init Lin Hw specific driver.
 * @param[in] ConfigPtr Pointer to static configuration
 */
void Lin_Hw_Init(const Lin_ConfigType* ConfigPtr)
{
	/** !req SWS_Lin_00190 The function Lin_Init shall also invoke initializations for LIN channel specific settings. */
	/** @req SWS_Lin_00008 The function Lin_Init shall invoke initializations for relevant hardware register settings common to all channels available on the LIN hardware unit. */
	volatile linBASE_t * TMS570LS_LIN;

	/* Install the interrupts */
	#ifdef LIN_CHANNEL_0_USED
	ISR_INSTALL_ISR2("LinIsr0", Lin_Ch0_Isr, (int16_t)(LIN1_LEVEL_0), LIN_PRIO, LIN_ARC_ISR_APP);
	#endif
	#ifdef LIN_CHANNEL_1_USED
	ISR_INSTALL_ISR2("LinIsr1", Lin_Ch1_Isr, (int16_t)(LIN2_LEVEL_0), LIN_PRIO, LIN_ARC_ISR_APP);
	#endif

    for (uint8 channel = 0; channel<LIN_CONTROLLER_CNT; channel++ )
    {
    	TMS570LS_LIN = LIN_HW[channel];

    	/* configure and enable channel */
		TMS570LS_LIN->GCR0 = 1u; 					/* Enable SCI by setting RESET bit. */

		TMS570LS_LIN->GCR1 &= ~LIN_GCR1_SWnRST; 	/* Clear SWnRST to 0 before configuring the SCI */

		/* Select LIN mode by programming LIN MODE bit. */
		TMS570LS_LIN->GCR1 |= LIN_GCR1_LINMODE;

		/* Setup control register 1 */
		TMS570LS_LIN->GCR1 |= LIN_GCR1_LINMASTER /* Select Master mode by programming the CLOCK bit. */
							| LIN_GCR1_MBUF /* Select multi-buffer mode by programming MBUF MODE bit. */
							| LIN_GCR1_HGENCTRL /* Enable HGENCTRL (Mask filtering with ID-Byte */
							| LIN_GCR1_CONT /* Don't stop when debug mode is entered */
							| LIN_GCR1_TXENA /* Enable transmitter */
							| LIN_GCR1_RXENA; /* Enable receiver */

		/*
		 * Tx/ Rx baud = fperiph_set_1_clk / (16 � LFDIV)
		 * To program LFDIV = 25.62d,
		 * LINFBRR = 16 � 0.62 = 9.92, nearest real number 10d = 0xA
		 * LINIBRR = mantissa (25.620d) = 25d = 0x19
		 */
		/** @req SWS_Lin_00150 */
		uint32 vclk_freq = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_LIN);
		uint32 brs = (((vclk_freq / ConfigPtr->LinChannelConfig->LinChannelBaudRate)-16) / 16);

		/*Fractional devider M is 0xF)*/
		TMS570LS_LIN->BRS = (0xfu << 24) | brs;

		/* Select the RX ID MASK and the TX ID MASK fields in the LINMASK register.*/
		TMS570LS_LIN->MASK = 0x00FF00FF; /* pass through filter configured. */

		/* Configure the LINRX and LINTX pins as SCI functional by setting the RX FUNC and TX FUNC bit. */
		TMS570LS_LIN->PIO0 = LIN_RX_FUNC | LIN_TX_FUNC;

		/* Enable RX interrupt */
		TMS570LS_LIN->SETINT = LIN_SETINT_RX
							 | LIN_SETINT_NRE
							 | LIN_SETINT_BE
							 | LIN_SETINT_PBE
							 | LIN_SETINT_FE
							 | LIN_SETINT_CE;

		/* Clear the status flag registers */
		TMS570LS_LIN->FLR = 0xFFFFFFFFu;

		/* Set SWnRST to 1 after the SCI is configured. */
		TMS570LS_LIN->GCR1 |= LIN_GCR1_SWnRST; 	/* Set SWnRST to Go to normal mode */
    }


}

/**
 * @brief Function to set internal driver status
 * @param status
 */
void Lin_Hw_SetDriverStatus(Lin_DriverStatusType status){
	LinDriverStatus = status;
}

/**
 * @brief Returns the state of the Lin module.
 * @return Lin_StateType
 * @retval LIN_STATE_UNINIT	Lin module is not initialized
 * @retval LIN_STATE_INIT	Lin module is initialized
 */
Lin_DriverStatusType Lin_Hw_GetDriverState(void){
	return LinDriverStatus;
}


/* @brief Returns the state of the Lin module.
 * @return Lin_StatusType
 * @retval LIN_STATE_UNINIT	Lin module is not initialized
 * @retval LIN_STATE_INIT	Lin module is initialized
 */
Lin_StatusType Lin_Hw_GetChannelStatus(uint8 Channel)
{
	Lin_StatusType status;

	SchM_Enter_Lin_EA_0();
	status = LinChannelStatus[Channel];
	SchM_Exit_Lin_EA_0();

	return status;
}


/**
 * @brief Returns the state of the Lin module.
 * @return Lin_StatusType
 * @retval LIN_STATE_UNINIT	Lin module is not initialized
 * @retval LIN_STATE_INIT	Lin module is initialized
 */
void Lin_Hw_SetChannelStatus(uint8 Channel, Lin_StatusType Status)
{
	SchM_Enter_Lin_EA_0();
	LinChannelStatus[Channel] = Status;
	SchM_Exit_Lin_EA_0();
}

/**
 * @brief Returns the state of the Lin module.
 * @return Lin_StatusType
 * @retval LIN_STATE_UNINIT	Lin module is not initialized
 * @retval LIN_STATE_INIT	Lin module is initialized
 */
void Lin_Hw_SetChannelOrderedStatus(uint8 Channel,Lin_StatusType Status)
{
	SchM_Enter_Lin_EA_0();
	LinChannelOrderedStatus[Channel] = Status;
	SchM_Exit_Lin_EA_0();
}

/* @brief Returns the state of the Lin module.
 * @return Lin_StatusType
 * @retval LIN_STATE_UNINIT	Lin module is not initialized
 * @retval LIN_STATE_INIT	Lin module is initialized
 */
Lin_StatusType Lin_Hw_GetChannelOrderedStatus(uint8 Channel){

	return LinChannelOrderedStatus[Channel];
}


/**
 * @brief Returns the state of the Lin module.
 * @return Lin_DriverStatusType
 * @retval LIN_STATE_UNINIT	Lin module is not initialized
 * @retval LIN_STATE_INIT	Lin module is initialized
 */
void Lin_Hw_SetDriverState(Lin_DriverStatusType Status){
	LinDriverStatus = Status;
}



/**
 * Enter power save mode.
 * @param channelCfg
 */
Std_ReturnType Lin_Hw_GoToSleepInternal(uint8 Channel) {
	volatile linBASE_t * TMS570LS_LIN = LIN_HW[Channel];

	 /** @req SWS_Lin_00223 */
	/* Enter power saving mode */
	TMS570LS_LIN->GCR2 |= LIN_GCR2_POWERDOWN;

	return E_OK;
}

Std_ReturnType Lin_Hw_SendFrame( uint8 Channel,  Lin_PduType* PduInfoPtr )
{
	Std_ReturnType retval = E_OK;
	Lin_StatusType status;

    /** @req SWS_Lin_00021 */
    /* @req SWS_Lin_00074 */
    status = Lin_Hw_GetChannelStatus(Channel);

    if( ( status== LIN_TX_BUSY) || (status == LIN_TX_ERROR) || (status == LIN_RX_BUSY) || (status == LIN_RX_ERROR) ||
       (status == LIN_RX_NO_RESPONSE) || (status ==LIN_TX_HEADER_ERROR) )
    {
        retval = linResyncDriver(Channel);
    }

    if (E_OK == retval) {
        /* @req SWS_Lin_00194 */
        /** @req SWS_Lin_00192 */

        /*@req SWS_Lin_00053 */
        retval = linTrasmit(Channel, PduInfoPtr);
    }

    return retval;
}


/** @req SWS_Lin_00256 */
Std_ReturnType Lin_Hw_Wakeup( uint8 Channel ) {

	volatile linBASE_t * TMS570LS_LIN = LIN_HW[Channel];

	/* Clear sleep bit */
    TMS570LS_LIN->GCR2 &= ~LIN_GCR2_POWERDOWN;

    /**@req SWS_Lin_00257 */
    /* @req SWS_Lin_00261 */
    /* @req SWS_Lin_00262 */
	Lin_Hw_SetChannelStatus(Channel,LIN_OPERATIONAL);

    return E_OK;
}
Std_ReturnType Lin_Hw_WakeupInternal( uint8 Channel ) {

	volatile linBASE_t * TMS570LS_LIN = LIN_HW[Channel];

	/* Clear sleep bit */
	TMS570LS_LIN->GCR2 &= ~LIN_GCR2_POWERDOWN;

	return E_OK;
}

Lin_StatusType Lin_Hw_GetStatus( uint8 Channel, uint8** Lin_SduPtr )
{
	Lin_StatusType status = Lin_Hw_GetChannelStatus(Channel);
	Std_ReturnType retval;

    switch (status)
    {
        case LIN_RX_OK:
            /** @req SWS_Lin_00092 */
            /** @req SWS_Lin_00211 */
            *Lin_SduPtr = LinBufRx[Channel];

            Lin_Hw_SetChannelStatus(Channel,LIN_OPERATIONAL);
            break;
        case LIN_TX_OK:
            /** @req SWS_Lin_00238 */
        	Lin_Hw_SetChannelStatus(Channel,LIN_OPERATIONAL);
        	break;
        case LIN_RX_ERROR:
        	/* fall through */
        case LIN_TX_ERROR:
        	/* fall through */
        case LIN_RX_NO_RESPONSE:
        	/* fall through */
        case LIN_TX_HEADER_ERROR:
        	/* fall through */
            retval = linResyncDriver(Channel);

            if (E_OK == retval) {
            	Lin_Hw_SetChannelStatus(Channel,LIN_OPERATIONAL);
            } else {
            	status = LIN_NOT_OK;
            }

            break;

        case LIN_CH_SLEEP_PENDING:
            /** @req SWS_Lin_00255 */
            /** @req SWS_Lin_00264 */
        	Lin_Hw_SetChannelStatus(Channel,LIN_CH_SLEEP);
        	status = LIN_CH_SLEEP;
            break;
        default:
            break;
    }

    /** @req SWS_Lin_00091 */
    /** @req SWS_Lin_00022 */
    /** @req SWS_Lin_00024 */

    return status;
}


/** @req SWS_Lin_00155 The Lin module shall implement the ISRs for all LIN hardware unit interrupts that are needed. */
/* @req SWS_Lin_00060 */
void Lin_Hw_Isr(uint8 Channel)
{
	volatile linBASE_t * TMS570LS_LIN = LIN_HW[Channel];
	uint32 flags = TMS570LS_LIN->FLR;

	if (LIN_RXRDY & flags) {
		/* @req SWS_Lin_00157 */
		TMS570LS_LIN->FLR = LIN_RXRDY; /* Clear flags */

		if (LinChannelStatus[Channel] == LIN_RX_BUSY) {
			/* Read data to RX buffer */
			(void)linReceive(&LinBufRx[Channel][0], Channel);

			/* receive complete */
			LinChannelStatus[Channel] = LIN_RX_OK;
		}
	}

	if (LIN_TXRDY & flags) {
		TMS570LS_LIN->FLR = LIN_TXRDY; /* Clear flags */

		if (LinChannelStatus[Channel] == LIN_TX_BUSY) {
			Lin_Hw_SetChannelStatus(Channel, LIN_TX_OK);
		}

	}

	/* Error Handling */
	if ( (flags & LIN_PBE) ||(flags & LIN_PE) || (flags & LIN_BE) || (flags & LIN_ISFE) || (flags & LIN_FE) || (flags & LIN_NRE)) {
		TMS570LS_LIN->FLR = LIN_PBE |LIN_PE | LIN_BE | LIN_ISFE | LIN_FE | LIN_NRE;

		if (LIN_NRE & flags) {
			LinChannelStatus[Channel] = LIN_RX_NO_RESPONSE;
		} else if ( (flags & LIN_PBE) || (flags & LIN_PE) || (flags & LIN_BE) || (flags & LIN_ISFE) || (flags & LIN_FE)) {
			LinChannelStatus[Channel] = LIN_TX_HEADER_ERROR;
		} else {
			Lin_Hw_SetChannelStatus(Channel,LIN_RX_ERROR);
		}

		/* Note from User Manual: When an inconsistent synch field (ISFE) error occurs, suggested action for the application is
		 * to reset the SWnRST bit and set the SWnRST bit to make sure that the internal state machines are back to their normal states
		 */
		if  (LIN_ISFE & flags) {
			TMS570LS_LIN->GCR1 &= ~LIN_GCR1_SWnRST; 	/* Clear SWnRST to 0 before configuring the SCI */
			TMS570LS_LIN->GCR1 |= LIN_GCR1_SWnRST; 	/* Set SWnRST to Go to normal mode */
		}
	}

	if (LIN_CH_SLEEP_PENDING == Lin_Hw_GetChannelOrderedStatus(Channel)) {
		/** @req SWS_Lin_00221*/
		/** @req SWS_Lin_00032 */
		//Enter power saving mode
		TMS570LS_LIN->GCR2 |= LIN_GCR2_POWERDOWN;

		/** @req SWS_Lin_00266*/
		Lin_Hw_SetChannelStatus(Channel,LIN_CH_SLEEP_PENDING);
		Lin_Hw_SetChannelOrderedStatus(Channel,LIN_OPERATIONAL);
	}

}



