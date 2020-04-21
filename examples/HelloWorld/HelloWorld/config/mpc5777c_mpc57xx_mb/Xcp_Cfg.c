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

/* Generator version: 2.0.0
 * AUTOSAR version:   4.1.3
 */

#include "Xcp.h"
#include "Xcp_Callout_Stubs.h"
#include <string.h>

#define COUNTOF(a) (sizeof(a)/sizeof(*(a)))

/*This Pdu Id will be used by Xcp when it calls <Lo>_Transmit() */
static Xcp_TxChType Xcp_TxCh[XCP_TX_CH_NUMBER] = {
	{
    	.pduId = CANIF_PDU_ID_XCP_TX_PDU,
    },
};



static const Xcp_EventChannelType Xcp_Channels[ ] = {
    {   /*XcpEventChannel*/
        .XcpEventChannelMaxDaqList          = 4,
        .XcpEventChannelName                = "XcpEventChannel",
        .XcpEventChannelRate                = 1,
        .XcpEventChannelUnit                = XCP_TIMESTAMP_UNIT_10MS,
        .XcpEventChannelProperties          = XCP_EVENTCHANNEL_PROPERTY_ALL,
    },
};

static struct {
	/* These parameters are necessary for the Dynamic part of the DAQ. */
	uint32 XcpDynamicBuffer[(XCP_DAQ_COUNT*sizeof(Xcp_DaqListType) + XCP_DAQ_COUNT*XCP_ODT_COUNT*sizeof(Xcp_OdtType) + XCP_DAQ_COUNT*XCP_ODT_COUNT*XCP_ODT_ENTRIES_COUNT*sizeof(Xcp_OdtEntryType))/sizeof(uint32)];
} XcpBuffer;

/* This is the collection of the Runtime parameters*/
static Xcp_RunTimeType XcpRuntimeParameters;

const Xcp_ConfigType XcpConfig = {
    
    .XcpTxCh               = Xcp_TxCh
  , .rt                    = &XcpRuntimeParameters
    /* Pointer to the DAQ list buffer. daq lists must be allocated first, i.e. begin of dynamic buffer is begin of daq list */
  , .XcpDaqList            = (Xcp_DaqListType *)XcpBuffer.XcpDynamicBuffer
  , .XcpEventChannel       = Xcp_Channels 
  , .XcpInfo               = { .XcpMC2File = "XcpServer" }
  , .XcpMtaInit            = Xcp_Arc_MtaInit
  , .XcpBuildChecksum      = Xcp_Arc_BuildChecksum
  , .XcpRecievePduAllowed  = Xcp_Arc_RecievePduAllowed
  , .XcpTransmitPduAllowed = Xcp_Arc_TransmitPduAllowed
  
  
#if(XCP_FEATURE_PROTECTION == STD_ON)
  , .XcpOriginalProtect = XCP_PROTECT_NONE
  , .XcpSeedFn             = Xcp_Arc_GetSeed
  , .XcpUnlockFn           = Xcp_Arc_Unlock
#endif /*XCP_FEATURE_PROTECTION == STD_ON*/

#if (XCP_FEATURE_CALPAG == STD_ON)
  , .XcpSetCalPage      				 = Xcp_Arc_SetCalPage
  , .XcpGetCalPage      				 = Xcp_Arc_GetCalPage
  , .XcpCopyCalPage     				 = Xcp_Arc_CopyCalPage
  , .XcpGetPagProcessorInfo 			 = Xcp_Arc_GetPagProcessorInfo
  , .XcpGetSegmentInfo_GetBasicAddress   = Xcp_Arc_GetSegmentInfo_GetBasicAddress
  , .XcpGetSegmentInfo_GetStandardInfo   = Xcp_Arc_GetSegmentInfo_GetStandardInfo
  , .XcpGetSegmentInfo_GetAddressMapping = Xcp_Arc_GetSegmentInfo_GetAddressMapping
  , .XcpGetPageInfo     				 = Xcp_Arc_GetPageInfo
  , .XcpSetSegmentMode  				 = Xcp_Arc_SetSegmentMode
  , .XcpGetSegmentMode  				 = Xcp_Arc_GetSegmentMode
#endif /*XCP_FEATURE_CALPAG == STD_ON*/

#if(XCP_FEATURE_PGM == STD_ON)
  , .XcpProgramClear_FunctionalAccess    = Xcp_Arc_ProgramClear_FunctionalAccess	
  , .XcpProgramClear_AbsoluteAccess      = Xcp_Arc_ProgramClear_AbsoluteAccess
  , .XcpProgramReset                     = Xcp_Arc_ProgramReset
  , .XcpGetPgmProcessorInfo              = Xcp_Arc_GetPgmProcessorInfo
  , .XcpGetSectorInfo_Mode0_1            = Xcp_Arc_GetSectorInfo_Mode0_1
  , .XcpGetSectorInfo_Mode2              = Xcp_Arc_GetSectorInfo_Mode2
  , .XcpProgramPrepare                   = Xcp_Arc_ProgramPrepare
  , .XcpProgramFormat                    = Xcp_Arc_ProgramFormat
  , .XcpProgramVerify                    = Xcp_Arc_ProgramVerify
  , .XcpProgram                          = Xcp_Arc_Program
#endif /*XCP_FEATURE_PGM == STD_ON*/

#if(XCP_DAQ_CONFIG_TYPE == DAQ_DYNAMIC)
  , .ptrDynamicRamBuffer      = XcpBuffer.XcpDynamicBuffer
  , .dynamicRamBufferSize     = sizeof(XcpBuffer.XcpDynamicBuffer) / sizeof(XcpBuffer.XcpDynamicBuffer[0])
#endif /*XCP_DAQ_CONFIG_TYPE == DAQ_DYNAMIC*/  
};


/*This wrapper function is intended to be called from periodic task, 
  which has the period: 10 millisecond. */
void Xcp_Arc_WrapperForEventChannel_XcpEventChannel(void) {
	Xcp_MainFunction_Channel(0);
}

