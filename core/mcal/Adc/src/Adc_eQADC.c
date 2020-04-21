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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=NOT_USED */

#include "arc_assert.h"
#include <stdlib.h>
//#include "System.h"
#include "mpc55xx.h"
#include "Mcu.h"
#include "Adc.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Os.h"
#include "isr.h"
#include "irq.h"
#include "arc.h"
#include "Adc_Hw_Helpers.h"

#define ADC_USES_DMA
#include "Dma.h"

#if ( defined(ADC_USES_DMA) && !defined(USE_DMA) )
    #error Adc is configured to use Dma but the module is not enabled.
#endif

typedef volatile struct EQADC_tag eqadc_t;
#if defined(CFG_MPC5777C)
/*lint -e(923, 929) MISRA:OTHER:To handle two separate hwunit register base address
                   [MISRA 2012 Rule 14.4, required] */
static eqadc_t * const EQADC_HW[] = { &EQADC_A, &EQADC_B};
#define GET_EQADC_HW(_hwUnit) EQADC_HW[_hwUnit]
#else /*defined (CFG_MPC5516) || (CFG_MPC5567) || (CFG_MPC563XM) || (CFG_MPC5644A)*/
#define GET_EQADC_HW(_hwUnit)       (eqadc_t *)((0xFFF80000 + (0x0000uL*(_hwUnit))))
#endif

#define CCM_EOQ(x)        ((x)<<31)
#define CCM_PAUSE(x)      ((x)<<30)
#define CCM_BN(x)       ((x)<<25)
#define CCM_CAL(x)        ((x)<<24)
#define CCM_MESSAGE_TAG(x)    ((x)<<20)
#define CCM_LST(x)        ((x)<<18)
#define CCM_TSR(x)        ((x)<<17)
#define CCM_FMT(x)        ((x)<<16)
#define CCM_CHANNEL_NUMBER(x) ((x)<<8)

#define CAL_CH(ch)  CCM_EOQ(0) | CCM_PAUSE(0) | CCM_BN(0) | CCM_CAL(0) | CCM_MESSAGE_TAG(0) | CCM_LST(ADC_CONVERSION_TIME_128_CLOCKS) | \
          CCM_TSR(0) | CCM_FMT(0) | CCM_CHANNEL_NUMBER(ch)

/* Development error macros. */
#if ( ADC_DEV_ERROR_DETECT == STD_ON )
#define VALIDATE(_exp,_api,_err ) \
        if( !(_exp) ) { \
          Det_ReportError(ADC_MODULE_ID,0,_api,_err); \
          return; \
        }

#define VALIDATE_W_RV(_exp,_api,_err,_rv ) \
        if( !(_exp) ) { \
          Det_ReportError(ADC_MODULE_ID,0,_api,_err); \
          return (_rv); \
        }
#else
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_W_RV(_exp,_api,_err,_rv )
#endif

typedef union
{
  vuint32_t R;
  struct
  {
    vuint32_t EOQ:1;
    vuint32_t PAUSE:1;
    vuint32_t :4;
    vuint32_t BN:1;
    vuint32_t RW:1;
    vuint32_t ADC_REG:16;
    vuint32_t ADC_REG_ADDR:8;
   } B;
}Adc_RegisterWriteType;

typedef union
{
  vuint32_t R;
  struct
  {
    vuint32_t EOQ:1;
    vuint32_t PAUSE:1;
    vuint32_t :4;
    vuint32_t BN:1;
    vuint32_t RW:1;
    vuint32_t MESSAGE_TAG:4;
    vuint32_t :12;
    vuint32_t ADC_REG_ADDR:8;
   } B;
}Adc_RegisterReadType;

typedef enum
{
  ADC_EQADC_QUEUE_0,
  ADC_EQADC_QUEUE_1,
  ADC_EQADC_QUEUE_2,
  ADC_EQADC_QUEUE_3,
  ADC_EQADC_QUEUE_4,
  ADC_EQADC_QUEUE_5,
  ADC_EQADC_NBR_OF_QUEUES
}Adc_eQADCQueueType;

typedef enum
{
  EQADC_CFIFO_STATUS_IDLE = 0,
  EQADC_CFIFO_STATUS_WAITINGFOR_TRIGGER = 0x2,
  EQADC_CFIFO_STATUS_TRIGGERED = 0x3
}Adc_EQADCQueueStatusType;

typedef int16_t Adc_EQADCRegister;

typedef enum
{
  ADC0_CR = 1,
  ADC0_TSCR,
  ADC0_TBCR,
  ADC0_GCCR,
  ADC0_OCCR
}Adc_EQADCRegisterType;

/* Command queue for calibration sequence. See 31.5.6 in reference manual. */
const Adc_CommandType AdcCalibrationCommandQueue [] =
{
  /* Four samples of 25 % of (VRh - VRl). */
  {
  .R = CAL_CH(44),
  },
  {
  .R = CAL_CH(44),
  },
  {
  .R = CAL_CH(44),
  },
  {
  .R = CAL_CH(44),
  },
  /* Four samples of 75 % of (VRh - VRl). */
  {
    .R = CAL_CH(43),
  },
  {
  .R = CAL_CH(43),
  },
  {
  .R = CAL_CH(43),
  },
  {
  .R = CAL_CH(43),
  }
};

#if defined(CFG_MPC5777C)
/* DMA configuration for calibration sequence. */
const Dma_TcdType EQADC_A_CalibrationDMACommandConfig =
{
  .SADDR = (uint32_t)AdcCalibrationCommandQueue,
  .SMOD = 0,
  .SSIZE = DMA_TRANSFER_SIZE_32BITS,
  .DMOD = 0,
  .DSIZE = DMA_TRANSFER_SIZE_32BITS,
  .SOFF = sizeof(Adc_CommandType),
  .NBYTESu.R = sizeof(Adc_CommandType),
  .SLAST = 0,
  .DADDR = (vuint32_t)&EQADC_A.CFPR[0].R,
  .CITERE_LINK = 0,
  .CITER = 0,
  .DOFF = 0,
  .DLAST_SGA = 0,
  .BITERE_LINK = 0,
  .BITER = 0,
  .BWC = 0,
  .MAJORLINKCH = 0,
  .DONE = 0,
  .ACTIVE = 0,
  .MAJORE_LINK = 0,
  .E_SG = 0,
  .D_REQ = 1,
  .INT_HALF = 0,
  .INT_MAJ = 0,
  .START = 0,
};

const Dma_TcdType EQADC_A_CalibrationDMAResultConfig =
{
  .SADDR = (vuint32_t)&EQADC_A.RFPR[0].R + 2,
  .SMOD = 0,
  .SSIZE = DMA_TRANSFER_SIZE_16BITS,
  .DMOD = 0,
  .DSIZE = DMA_TRANSFER_SIZE_16BITS,
  .SOFF = 0,
  .NBYTESu.R = sizeof(Adc_ValueGroupType),
  .SLAST = 0,
  .DADDR = 0, /* Dynamic address, written later. */
  .CITERE_LINK = 0,
  .CITER = 0,
  .DOFF = sizeof(Adc_ValueGroupType),
  .DLAST_SGA = 0,
  .BITERE_LINK = 0,
  .BITER = 0,
  .BWC = 0,
  .MAJORLINKCH = 0,
  .DONE = 0,
  .ACTIVE = 0,
  .MAJORE_LINK = 0,
  .E_SG = 0,
  .D_REQ = 1,
  .INT_HALF = 0,
  .INT_MAJ = 0,
  .START = 0
};


/* DMA configuration for calibration sequence. */
const Dma_TcdType EQADC_B_CalibrationDMACommandConfig =
{
  .SADDR = (uint32_t)AdcCalibrationCommandQueue,
  .SMOD = 0,
  .SSIZE = DMA_TRANSFER_SIZE_32BITS,
  .DMOD = 0,
  .DSIZE = DMA_TRANSFER_SIZE_32BITS,
  .SOFF = sizeof(Adc_CommandType),
  .NBYTESu.R = sizeof(Adc_CommandType),
  .SLAST = 0,
  .DADDR = (vuint32_t)&EQADC_B.CFPR[0].R,
  .CITERE_LINK = 0,
  .CITER = 0,
  .DOFF = 0,
  .DLAST_SGA = 0,
  .BITERE_LINK = 0,
  .BITER = 0,
  .BWC = 0,
  .MAJORLINKCH = 0,
  .DONE = 0,
  .ACTIVE = 0,
  .MAJORE_LINK = 0,
  .E_SG = 0,
  .D_REQ = 1,
  .INT_HALF = 0,
  .INT_MAJ = 0,
  .START = 0,
};

const Dma_TcdType EQADC_B_CalibrationDMAResultConfig =
{
  .SADDR = (vuint32_t)&EQADC_B.RFPR[0].R + 2,
  .SMOD = 0,
  .SSIZE = DMA_TRANSFER_SIZE_16BITS,
  .DMOD = 0,
  .DSIZE = DMA_TRANSFER_SIZE_16BITS,
  .SOFF = 0,
  .NBYTESu.R = sizeof(Adc_ValueGroupType),
  .SLAST = 0,
  .DADDR = 0, /* Dynamic address, written later. */
  .CITERE_LINK = 0,
  .CITER = 0,
  .DOFF = sizeof(Adc_ValueGroupType),
  .DLAST_SGA = 0,
  .BITERE_LINK = 0,
  .BITER = 0,
  .BWC = 0,
  .MAJORLINKCH = 0,
  .DONE = 0,
  .ACTIVE = 0,
  .MAJORE_LINK = 0,
  .E_SG = 0,
  .D_REQ = 1,
  .INT_HALF = 0,
  .INT_MAJ = 0,
  .START = 0
};
#else
/* DMA configuration for calibration sequence. */
const Dma_TcdType AdcCalibrationDMACommandConfig =
{
  .SADDR = (uint32_t)AdcCalibrationCommandQueue,
  .SMOD = 0,
  .SSIZE = DMA_TRANSFER_SIZE_32BITS,
  .DMOD = 0,
  .DSIZE = DMA_TRANSFER_SIZE_32BITS,
  .SOFF = sizeof(Adc_CommandType),
  .NBYTESu.R = sizeof(Adc_CommandType),
  .SLAST = 0,
  .DADDR = (vuint32_t)&EQADC.CFPR[0].R,
  .CITERE_LINK = 0,
  .CITER = 0,
  .DOFF = 0,
  .DLAST_SGA = 0,
  .BITERE_LINK = 0,
  .BITER = 0,
  .BWC = 0,
  .MAJORLINKCH = 0,
  .DONE = 0,
  .ACTIVE = 0,
  .MAJORE_LINK = 0,
  .E_SG = 0,
  .D_REQ = 1,
  .INT_HALF = 0,
  .INT_MAJ = 0,
  .START = 0,
};

const Dma_TcdType AdcCalibrationDMAResultConfig =
{
  .SADDR = (vuint32_t)&EQADC.RFPR[0].R + 2,
  .SMOD = 0,
  .SSIZE = DMA_TRANSFER_SIZE_16BITS,
  .DMOD = 0,
  .DSIZE = DMA_TRANSFER_SIZE_16BITS,
  .SOFF = 0,
  .NBYTESu.R = sizeof(Adc_ValueGroupType),
  .SLAST = 0,
  .DADDR = 0, /* Dynamic address, written later. */
  .CITERE_LINK = 0,
  .CITER = 0,
  .DOFF = sizeof(Adc_ValueGroupType),
  .DLAST_SGA = 0,
  .BITERE_LINK = 0,
  .BITER = 0,
  .BWC = 0,
  .MAJORLINKCH = 0,
  .DONE = 0,
  .ACTIVE = 0,
  .MAJORE_LINK = 0,
  .E_SG = 0,
  .D_REQ = 1,
  .INT_HALF = 0,
  .INT_MAJ = 0,
  .START = 0
};
#endif

/* Function prototypes. */
static void Adc_ConfigureEQADC (const Adc_ConfigType *ConfigPtr);
static void Adc_ConfigureEQADCInterrupts (const Adc_ConfigType *ConfigPtr);
static void Adc_EQADCCalibrationSequence (const Adc_ConfigType *ConfigPtr);
static void Adc_WriteEQADCRegister (uint8 hwUnitId, Adc_EQADCRegisterType reg, Adc_EQADCRegister value);
static Adc_EQADCRegister Adc_ReadEQADCRegister (uint8 hwUnitId, Adc_EQADCRegisterType reg);

void Adc_GroupConversionComplete (uint8_t unitId, Adc_GroupType group);

#if defined(CFG_MPC5777C)
static const uint8_t numOfADCs = ADC_ARC_CTRL_CONFIG_CNT;
#else
static const uint8_t numOfADCs = 1;
#endif

/* static variable declarations */
static Adc_StateType adcState[] = {ADC_STATE_UNINIT,ADC_STATE_UNINIT};

static const Adc_ConfigType *AdcConfigPtr = NULL;      /* Pointer to configuration structure. */


/* ----------------------------[public functions]----------------------------*/
#if (ADC_DEINIT_API == STD_ON)
void Adc_DeInit (void)
{
    const Adc_ConfigType *AdcHwConfigPtr;
    Adc_eQADCQueueType queue;
    Adc_GroupType group;
    boolean queueStopped;
    boolean okToClear = TRUE;


    for(uint8_t hwUnitCount = 0;( hwUnitCount < numOfADCs)&&(TRUE == okToClear ); hwUnitCount++)
    {
        AdcHwConfigPtr = &AdcConfigPtr[hwUnitCount];

        if (E_OK != Adc_CheckDeInit(adcState[hwUnitCount], AdcHwConfigPtr))
        {
            okToClear = FALSE;
        }
    }
    if ( TRUE == okToClear) {
        /* Clean internal status. */

        for(uint8_t hwUnitCount = 0;( hwUnitCount < numOfADCs); hwUnitCount++)
        {
            const Adc_ConfigType *AdcHwConfigPtr = &AdcConfigPtr[hwUnitCount];

            if (E_OK == Adc_CheckDeInit(adcState[hwUnitCount], AdcHwConfigPtr))
            {
                eqadc_t *eqadcHw = GET_EQADC_HW(AdcHwConfigPtr->hwConfigPtr->hwUnitId);

                /* @req SWS_Adc_00110 */
                /* Stop all queues. */
                for (queue = ADC_EQADC_QUEUE_0; queue < ADC_EQADC_NBR_OF_QUEUES; queue++)
                {
                    /* Disable queue. */
                    eqadcHw->CFCR[queue].B.MODE = 0;

                    /* Wait for queue to enter idle state. */
                    queueStopped = FALSE;
                    /* IMPROVEMENT replace switch with bit pattern. */
                    while (!queueStopped)
                    {
                        switch (queue)
                        {
                            case ADC_EQADC_QUEUE_0:
                            queueStopped = (eqadcHw->CFSR.B.CFS0 == EQADC_CFIFO_STATUS_IDLE);
                            break;
                            case ADC_EQADC_QUEUE_1:
                            queueStopped = (eqadcHw->CFSR.B.CFS1 == EQADC_CFIFO_STATUS_IDLE);
                            break;
                            case ADC_EQADC_QUEUE_2:
                            queueStopped = (eqadcHw->CFSR.B.CFS2 == EQADC_CFIFO_STATUS_IDLE);
                            break;
                            case ADC_EQADC_QUEUE_3:
                            queueStopped = (eqadcHw->CFSR.B.CFS3 == EQADC_CFIFO_STATUS_IDLE);
                            break;
                            case ADC_EQADC_QUEUE_4:
                            queueStopped = (eqadcHw->CFSR.B.CFS4 == EQADC_CFIFO_STATUS_IDLE);
                            break;
                            case ADC_EQADC_QUEUE_5:
                            queueStopped = (eqadcHw->CFSR.B.CFS5 == EQADC_CFIFO_STATUS_IDLE);
                            break;
                            default :
                            /* We should never get here... Terminate loop. */
                            queueStopped = TRUE;
                            break;
                        }
                    }
                    /* @req SWS_Adc_00111 */
                    /* Disable eDMA requests for commands and results. */
                    eqadcHw->IDCR[queue].B.CFFS = 0;
                    eqadcHw->IDCR[queue].B.RFDS = 0;

                    /* Disable FIFO fill requests. */
                    eqadcHw->IDCR[queue].B.CFFE = 0;
                    eqadcHw->IDCR[queue].B.RFDE = 0;

                    /* Disable interrupts. */
                    eqadcHw->IDCR[queue].B.RFOIE = 0;
                    eqadcHw->IDCR[queue].B.CFUIE = 0;
                    eqadcHw->IDCR[queue].B.TORIE = 0;
                    eqadcHw->IDCR[queue].B.EOQIE = 0;
                }

                /* Stop all DMA channels connected to EQADC. */
                for (group = (Adc_GroupType)0; group < AdcHwConfigPtr->nbrOfGroups; group++)
                {
#if defined(CFG_MPC5777C)
                    Dma_StopChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaCommandChannel, AdcHwConfigPtr->hwConfigPtr->hwUnitId);
                    Dma_StopChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaResultChannel, AdcHwConfigPtr->hwConfigPtr->hwUnitId);
#else
                    Dma_StopChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaCommandChannel);
                    Dma_StopChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaResultChannel);
#endif

                    /* Set group status to idle. */
                    AdcHwConfigPtr->groupConfigPtr[group].status->groupStatus = ADC_IDLE;
                }

                /* Disable EQADC. */
                Adc_WriteEQADCRegister (AdcConfigPtr[hwUnitCount].hwConfigPtr->hwUnitId, ADC0_CR, 0);

                /* Clean internal status. */
                AdcHwConfigPtr = (Adc_ConfigType *)NULL;
                adcState[hwUnitCount] = ADC_STATE_UNINIT;
            }

        }
        AdcConfigPtr = (Adc_ConfigType *)NULL;
    }


}
#endif

void Adc_Init (const Adc_ConfigType *ConfigPtr){
  const Adc_ConfigType *AdcHwConfigPtr;
  Adc_InternalChannelIdType channel;
  Adc_InternalChannelIdType channelId;
  Adc_GroupType group;
  Adc_CommandType *commandQueue;
  Adc_CommandType command;
  uint8_t unitId = 0;
  /* First of all, store the location of the configuration data. */
  AdcConfigPtr = ConfigPtr;

  for(uint8_t hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++){
            /* @req SWS_Adc_00342 */
      if (E_OK == Adc_CheckInit(adcState[hwUnitCount], ConfigPtr))
      {
          unitId = AdcConfigPtr[hwUnitCount].hwConfigPtr->hwUnitId;

          AdcHwConfigPtr = &AdcConfigPtr[hwUnitCount];

          eqadc_t *eqadcHw = GET_EQADC_HW(unitId);

            /* Start configuring the eQADC queues. */
            for (group = (Adc_GroupType)0; group < AdcHwConfigPtr->nbrOfGroups; group++)
            {
                //Adc_InternalChannelIdType numOFChannels  = AdcHwConfigPtr->groupConfigPtr[group - 6].numberOfChannels;

                /* Loop through all channels and make the command queue. */
                for (channel = 0; channel < AdcHwConfigPtr->groupConfigPtr[group].numberOfChannels; channel++)
                {
                    /* Get physical channel. */
                    channelId = AdcHwConfigPtr->groupConfigPtr[group].channelList[channel];

                    commandQueue = AdcHwConfigPtr->groupConfigPtr[group].commandBuffer;

                    /* Begin with empty command. */
                    command.R = 0;

                    /* Physical channel number. */
                    command.B.CHANNEL_NUMBER = channelId;
                    /* Sample time. */
                    command.B.LST = AdcHwConfigPtr->channelConfigPtr [channel].adcChannelConvTime;
                    /* Calibration feature. */
                    command.B.CAL = AdcHwConfigPtr->channelConfigPtr [channel].adcChannelCalibrationEnable;
                    /* Result buffer FIFO. The number of groups must not be greater than the number of queues. */
                    command.B.MESSAGE_TAG = group;

                    /* Write command to command queue. */
                    commandQueue [channel].R = command.R;

                    /* Last channel in group. Write EOQ and configure eQADC FIFO. */
                    if ( (channel == (AdcHwConfigPtr->groupConfigPtr[group].numberOfChannels - 1))
                    && (AdcHwConfigPtr->groupConfigPtr[group].conversionMode != ADC_CONV_MODE_CONTINUOUS))
                    {
                        commandQueue [channel].B.EOQ = 1;
                    }
                }
            }

            /* Enable ADC. */
            Adc_ConfigureEQADC (AdcHwConfigPtr);

            /* Perform calibration of the ADC. */
            Adc_EQADCCalibrationSequence(AdcHwConfigPtr);

            /* Configure DMA channels. */
            for (group = (Adc_GroupType)0; group < AdcHwConfigPtr->nbrOfGroups; group++)
            {
                /* @req  SWS_Adc_00307 */
                AdcHwConfigPtr->groupConfigPtr[group].status->groupStatus = ADC_IDLE;
                AdcHwConfigPtr->groupConfigPtr[group].status->currSampleCount = 0u;
#if defined(CFG_MPC5777C)
                Dma_ConfigureChannel ((Dma_TcdType *)AdcHwConfigPtr->groupConfigPtr [group].groupDMAResults, AdcHwConfigPtr->groupConfigPtr [group].dmaResultChannel, unitId);
                Dma_ConfigureChannel ((Dma_TcdType *)AdcHwConfigPtr->groupConfigPtr [group].groupDMACommands, AdcHwConfigPtr->groupConfigPtr [group].dmaCommandChannel, unitId);
#else
                Dma_ConfigureChannel ((Dma_TcdType *)AdcHwConfigPtr->groupConfigPtr [group].groupDMAResults, AdcHwConfigPtr->groupConfigPtr [group].dmaResultChannel);
                Dma_ConfigureChannel ((Dma_TcdType *)AdcHwConfigPtr->groupConfigPtr [group].groupDMACommands, AdcHwConfigPtr->groupConfigPtr [group].dmaCommandChannel);
#endif
            }

            /* Start DMA channels. */
            for (group = (Adc_GroupType)0; group < AdcHwConfigPtr->nbrOfGroups; group++)
            {
                /* Invalidate queues. */
                eqadcHw->CFCR[group].B.CFINV = 1;
#if defined(CFG_MPC5777C)
                Dma_StartChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaResultChannel, unitId);
                Dma_StartChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaCommandChannel, unitId);
#else
                Dma_StartChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaResultChannel);
                Dma_StartChannel (AdcHwConfigPtr->groupConfigPtr [group].dmaCommandChannel);
#endif
            }

            Adc_ConfigureEQADCInterrupts (AdcHwConfigPtr);
            /* Move on to INIT state. */
            adcState[hwUnitCount] = ADC_STATE_INIT;
        }

     }

}

Std_ReturnType Adc_SetupResultBuffer (Adc_GroupType group, Adc_ValueGroupType *bufferPtr)
{
    Std_ReturnType returnValue = E_NOT_OK;

    for(uint8 hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++)
    {
        const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];

        /* Check for development errors. */
        if (E_OK == Adc_CheckSetupResultBuffer (adcState[hwUnitCount], configPtr, group, bufferPtr))
        {
            /* @req SWS_Adc_00420 */
            configPtr->groupConfigPtr[group].status->resultBufferPtr = bufferPtr;

            returnValue = E_OK;
            break;
        }
    }
    return (returnValue);
}

Adc_StreamNumSampleType Adc_GetStreamLastPointer(Adc_GroupType group, Adc_ValueGroupType** PtrToSamplePtr)
{
    Adc_StreamNumSampleType nofSample = 0;
    Std_ReturnType assignedPointer = E_OK;

    for(uint8_t hwUnitCount = 0; (hwUnitCount < numOfADCs)&&(assignedPointer == E_OK); hwUnitCount++)
    {
        const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];

        Adc_GroupDefType *groupPtr = (Adc_GroupDefType *)&configPtr->groupConfigPtr[group];

        /* Check for development errors. */
        if ( (E_OK == Adc_CheckGetStreamLastPointer (adcState[hwUnitCount], configPtr, group)) &&
        (groupPtr->status->groupStatus != ADC_BUSY) )
        {
            /* Set resultPtr to application buffer. */
            if(groupPtr->status->currSampleCount > 0)
            {
                /* @req SWS_Adc_00214 */
                /* @req SWS_Adc_00387 */
                *PtrToSamplePtr = &groupPtr->status->resultBufferPtr[groupPtr->status->currSampleCount-1];
            }

            if ((ADC_CONV_MODE_ONESHOT == groupPtr->conversionMode) &&
            (ADC_STREAM_COMPLETED  == groupPtr->status->groupStatus))
            {
                /* @req SWS_Adc_00327 */
                groupPtr->status->groupStatus = ADC_IDLE;
            }
            else if ((ADC_CONV_MODE_CONTINUOUS == groupPtr->conversionMode) &&
                    (ADC_ACCESS_MODE_STREAMING == groupPtr->accessMode) &&
                    (ADC_STREAM_BUFFER_LINEAR == groupPtr->streamBufferMode) &&
                    (ADC_STREAM_COMPLETED    == groupPtr->status->groupStatus))
            {
                /* @req SWS_Adc_00327 */
                groupPtr->status->groupStatus = ADC_IDLE;
            }
            else if ( (ADC_CONV_MODE_CONTINUOUS == groupPtr->conversionMode) &&
                    ((ADC_STREAM_COMPLETED    == groupPtr->status->groupStatus) ||
                    (ADC_COMPLETED           == groupPtr->status->groupStatus)) )
            {
                /* Restart continous mode, and reset result buffer */
                if ((ADC_CONV_MODE_CONTINUOUS == groupPtr->conversionMode) &&
                (ADC_STREAM_COMPLETED    == groupPtr->status->groupStatus))
                {
                    /* Start continous conversion again */
                    /* @req SWS_Adc_00326 */
                    Adc_StartGroupConversion(group);
                }
            }
            else{/* Keep status. */}

        }
        else
        {
            /* Some condition not met */
            /** @req SWS_Adc_00216 */
            *PtrToSamplePtr = NULL;
            assignedPointer = E_NOT_OK;
        }
    }
    return nofSample;
}

#if (ADC_READ_GROUP_API == STD_ON)
Std_ReturnType Adc_ReadGroup (Adc_GroupType group, Adc_ValueGroupType *dataBufferPtr)
{
    Std_ReturnType returnValue = E_OK;
    uint8_t channel;

    for(uint8_t hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++)
    {
        const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];

        VALIDATE_W_RV( dataBufferPtr != NULL, ADC_READGROUP_ID, ADC_E_PARAM_POINTER, E_NOT_OK);

        if (E_OK == Adc_CheckReadGroup (adcState[hwUnitCount], AdcConfigPtr, group))
        {
            Adc_GroupDefType *groupPtr = (Adc_GroupDefType *)&configPtr->groupConfigPtr[group];

            /* Copy the result to application buffer. */
            for (channel = 0; channel < groupPtr->numberOfChannels; channel++)
            {
                if(groupPtr->status->currSampleCount > 0){
                    /* @req SWS_Adc_00075 */
                    dataBufferPtr[channel] = (&(groupPtr->status->resultBufferPtr[groupPtr->status->currSampleCount-1]))[channel];
                }else{
                    /* @req SWS_Adc_00075 */
                    dataBufferPtr[channel] = groupPtr->status->resultBufferPtr[channel];
                }
            }

            if ((ADC_CONV_MODE_ONESHOT == groupPtr->conversionMode) &&
            (ADC_STREAM_COMPLETED  == groupPtr->status->groupStatus))
            {
                /** @req SWS_Adc_00330. */
                groupPtr->status->groupStatus = ADC_IDLE;
            }
            else if ((ADC_CONV_MODE_CONTINUOUS == groupPtr->conversionMode) &&
                 (ADC_STREAM_BUFFER_LINEAR == groupPtr->streamBufferMode) &&
                 (ADC_ACCESS_MODE_STREAMING == groupPtr->accessMode) &&
                 (ADC_STREAM_COMPLETED    == groupPtr->status->groupStatus))
            {
                /** @req SWS_Adc_00330. */
                groupPtr->status->groupStatus = ADC_IDLE;
            }
            else if ((ADC_CONV_MODE_CONTINUOUS == groupPtr->conversionMode) &&
                 ((ADC_STREAM_COMPLETED    == groupPtr->status->groupStatus) ||
                  (ADC_COMPLETED           == groupPtr->status->groupStatus)))
            {
                /** @req SWS_Adc_00329 */
                /* Restart continous mode, and reset result buffer */
                if ((ADC_CONV_MODE_CONTINUOUS == groupPtr->conversionMode) &&
                  (ADC_STREAM_COMPLETED    == groupPtr->status->groupStatus))
                {
                    /* Start continous conversion again */
                    Adc_StartGroupConversion(group);
                }
            }
            else{/* Keep status. */}
        }
        else
        {
            /* An error have been raised from Adc_CheckReadGroup(). */
            returnValue = E_NOT_OK;
        }
        break;
    }
    return (returnValue);
}
#endif

void Adc_GroupConversionComplete (uint8_t unitId, Adc_GroupType group)
{
    uint8_t configHWID = 0;

    /* if onle hardware unit has defined the the HWUNITID should be changed as '0' to 
       get the configuration poiter address */
    if(numOfADCs == 1)
    {
        if (unitId == 1)
        {
            configHWID = unitId - 1;
        }
    }

    const Adc_ConfigType *configPtr = &AdcConfigPtr[configHWID];

    eqadc_t *eqadcHw = GET_EQADC_HW(unitId);

    Adc_GroupDefType *adcGroup = (Adc_GroupDefType *)&configPtr->groupConfigPtr[group];

    if(ADC_ACCESS_MODE_SINGLE == adcGroup->accessMode )
    {
        /* @req SWS_Adc_00325 */
        adcGroup->status->groupStatus = ADC_STREAM_COMPLETED;

        /* Disable trigger. */
        eqadcHw->CFCR[group].B.MODE = 0;

        /* Call notification if enabled. */
        #if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        if (adcGroup->status->notifictionEnable && adcGroup->groupCallback != NULL)
        {
            adcGroup->groupCallback();
        }
    #endif
    }
    else
    {
        if(ADC_STREAM_BUFFER_LINEAR == adcGroup->streamBufferMode)
        {
            adcGroup->status->currSampleCount++;
            if(adcGroup->status->currSampleCount < adcGroup->streamNumSamples)
            {
                adcGroup->status->currResultBufPtr += adcGroup->numberOfChannels;
                /* @req SWS_Adc_00224 */
                adcGroup->status->groupStatus = ADC_COMPLETED;

                #if defined (ADC_USES_DMA)
                /* Increase current result buffer ptr */
#if defined(CFG_MPC5777C)
                Dma_ConfigureDestinationAddress((uint32_t)adcGroup->status->currResultBufPtr, adcGroup->dmaResultChannel, unitId);
#else
                Dma_ConfigureDestinationAddress((uint32_t)adcGroup->status->currResultBufPtr, adcGroup->dmaResultChannel);
#endif
                #endif

                /* Set single scan enable bit */
                eqadcHw->CFCR[group].B.SSE = 1;
            }
            else
            {
                /* @req SWS_Adc_00325 */
                /* All sample completed. */
                adcGroup->status->groupStatus = ADC_STREAM_COMPLETED;

                /* Disable trigger. */
                eqadcHw->CFCR[group].B.MODE = 0;

                /* Call notification if enabled. */
                #if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
                if (adcGroup->status->notifictionEnable && adcGroup->groupCallback != NULL)
                {
                    adcGroup->groupCallback();
                }
            #endif
            }
        }
        else if(ADC_STREAM_BUFFER_CIRCULAR == adcGroup->streamBufferMode)
        {
            adcGroup->status->currSampleCount++;
            if(adcGroup->status->currSampleCount < adcGroup->streamNumSamples)
            {
                adcGroup->status->currResultBufPtr += adcGroup->numberOfChannels;
                #if defined (ADC_USES_DMA)
                /* Increase current result buffer ptr */
#if defined(CFG_MPC5777C)
                Dma_ConfigureDestinationAddress((uint32_t)adcGroup->status->currResultBufPtr, adcGroup->dmaResultChannel, unitId);
#else
                Dma_ConfigureDestinationAddress((uint32_t)adcGroup->status->currResultBufPtr, adcGroup->dmaResultChannel);
#endif
                #endif

                /* @req SWS_Adc_00224 */
                adcGroup->status->groupStatus = ADC_COMPLETED;

                /* Set single scan enable bit */
                eqadcHw->CFCR[group].B.SSE = 1;
            }
            else
            {
                /* Sample completed. */

                /* Disable trigger. */
                eqadcHw->CFCR[group].B.MODE = 0;
                /* @req SWS_Adc_00325 */
                adcGroup->status->groupStatus = ADC_STREAM_COMPLETED;
                /* Call notification if enabled. */
                #if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
                if (adcGroup->status->notifictionEnable && adcGroup->groupCallback != NULL)
                {
                    adcGroup->groupCallback();
                }
                #endif
            }
        }
        else
        {
        //nothing to do.
        }
    }
}

#if defined(CFG_MPC5777C)
#ifdef ADC_HWUNIT_EQADC_CTRL_A_ENABLED
ISR(Adc_hwUnitA_Group0ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)0);
}
ISR(Adc_hwUnitA_Group1ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)1);
}
ISR(Adc_hwUnitA_Group2ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_2].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)2);
}
ISR(Adc_hwUnitA_Group3ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_3].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)3);
}
ISR(Adc_hwUnitA_Group4ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_4].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)4);
}
ISR(Adc_hwUnitA_Group5ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_5].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)5);
}

ISR(Adc_EQADCAError)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);

    /* Something is wrong!! Check the cause of the error and try to correct it. */
    if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.TORF)
    {
        /* Trigger overrun on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.TORF)
    {
        /* Trigger overrun on queue 1!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.CFUF)
    {
        /* Command underflow on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.CFUF)
    {
        /* Command underflow on queue 1!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.RFOF)
    {
        /* Result overflow on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.RFOF)
    {
        /* Result overflow on queue 1!! */
        ASSERT(0);
    }
    else
    {
        /* Something else...*/
        ASSERT(0);
    }
}
#endif

#ifdef ADC_HWUNIT_EQADC_CTRL_B_ENABLED
ISR(Adc_hwUnitB_Group0ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(1);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.EOQF = 1;
    Adc_GroupConversionComplete(1, (Adc_GroupType)0);
}
ISR(Adc_hwUnitB_Group1ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(1);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.EOQF = 1;
    Adc_GroupConversionComplete(1, (Adc_GroupType)1);
}
ISR(Adc_hwUnitB_Group2ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(1);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_2].B.EOQF = 1;
    Adc_GroupConversionComplete(1, (Adc_GroupType)2);
}
ISR(Adc_hwUnitB_Group3ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(1);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_3].B.EOQF = 1;
    Adc_GroupConversionComplete(1, (Adc_GroupType)3);
}
ISR(Adc_hwUnitB_Group4ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(1);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_4].B.EOQF = 1;
    Adc_GroupConversionComplete(1, (Adc_GroupType)4);
}
ISR(Adc_hwUnitB_Group5ConversionComplete)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(1);
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadcHw->FISR[ADC_EQADC_QUEUE_5].B.EOQF = 1;
    Adc_GroupConversionComplete(1, (Adc_GroupType)5);
}

ISR(Adc_EQADCBError)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(1);

    /* Something is wrong!! Check the cause of the error and try to correct it. */
    if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.TORF)
    {
        /* Trigger overrun on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.TORF)
    {
        /* Trigger overrun on queue 1!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.CFUF)
    {
        /* Command underflow on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.CFUF)
    {
        /* Command underflow on queue 1!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.RFOF)
    {
        /* Result overflow on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.RFOF)
    {
        /* Result overflow on queue 1!! */
        ASSERT(0);
    }
    else
    {
        /* Something else...*/
        ASSERT(0);
    }
}
#endif
#else
ISR(Adc_Group0ConversionComplete)
{
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)0);
}
ISR(Adc_Group1ConversionComplete)
{
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)1);
}
ISR(Adc_Group2ConversionComplete)
{
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    eqadcHw->FISR[ADC_EQADC_QUEUE_2].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)2);
}
ISR(Adc_Group3ConversionComplete)
{
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    eqadcHw->FISR[ADC_EQADC_QUEUE_3].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)3);
}
ISR(Adc_Group4ConversionComplete)
{
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    eqadcHw->FISR[ADC_EQADC_QUEUE_4].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)4);
}
ISR(Adc_Group5ConversionComplete)
{
    /* @req SWS_Adc_00078 */
    /* ISR for FIFO 0 end of queue. Clear interrupt flag.  */
    eqadc_t *eqadcHw = GET_EQADC_HW(0);
    eqadcHw->FISR[ADC_EQADC_QUEUE_5].B.EOQF = 1;
    Adc_GroupConversionComplete(0, (Adc_GroupType)5);
}

ISR(Adc_EQADCError)
{
    eqadc_t *eqadcHw = GET_EQADC_HW(0);

    /* Something is wrong!! Check the cause of the error and try to correct it. */
    if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.TORF)
    {
        /* Trigger overrun on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.TORF)
    {
        /* Trigger overrun on queue 1!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.CFUF)
    {
        /* Command underflow on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.CFUF)
    {
        /* Command underflow on queue 1!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.RFOF)
    {
        /* Result overflow on queue 0!! */
        ASSERT(0);
    }
    else if (eqadcHw->FISR[ADC_EQADC_QUEUE_1].B.RFOF)
    {
        /* Result overflow on queue 1!! */
        ASSERT(0);
    }
    else
    {
        /* Something else...*/
        ASSERT(0);
    }
}
#endif

/* Helper macro to make sure that the command queue have
 * executed the commands in the fifo.
 * First check that the H/W negate the
 * single scan bit and then wait for EOQ. */
#define WAIT_FOR_QUEUE_TO_FINISH(q) \
  while (eqadcHw->FISR[q].B.SSS)             \
  {                                        \
    ;                                      \
  }                                        \
                                           \
  while (!eqadcHw->FISR[q].B.EOQF)           \
  {                                        \
    ;                                      \
  }

static void Adc_WriteEQADCRegister (uint8 hwUnitId, Adc_EQADCRegisterType reg, Adc_EQADCRegister value)
{
    Adc_RegisterWriteType writeReg;
    uint32_t temp, oldMode;

    eqadc_t *eqadcHw = GET_EQADC_HW(hwUnitId);

    writeReg.R = 0;

    /* Write command. */
    writeReg.B.RW = 0;
    writeReg.B.EOQ = 1;
    writeReg.B.ADC_REG = value;
    writeReg.B.ADC_REG_ADDR = reg;

    /* Invalidate queue. */
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.CFINV = 1;


    /* Write command through FIFO. */
    eqadcHw->CFPR[ADC_EQADC_QUEUE_0].R = writeReg.R;

    /* Enable FIFO. */
    oldMode = eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE;
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE = ADC_CONV_MODE_ONESHOT;
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.SSE = 1;

    /* Wait for command to be executed. */
    WAIT_FOR_QUEUE_TO_FINISH(ADC_EQADC_QUEUE_0);

    /* Flush result buffer. */
    temp = eqadcHw->RFPR[ADC_EQADC_QUEUE_0].R;
    (void)temp;
    eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.EOQF = 1;

    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE = oldMode;

}

static Adc_EQADCRegister Adc_ReadEQADCRegister (uint8 hwUnitId, Adc_EQADCRegisterType reg)
{
    Adc_RegisterReadType readReg;
    Adc_EQADCRegister result;
    uint32_t oldMode, dmaRequestEnable;

    eqadc_t *eqadcHw = GET_EQADC_HW(hwUnitId);

    readReg.R = 0;

    /* Read command. */
    readReg.B.RW = 1;
    readReg.B.EOQ = 1;
    readReg.B.ADC_REG_ADDR = reg;
    readReg.B.MESSAGE_TAG = ADC_EQADC_QUEUE_0;

    /* Make sure that DMA requests for command fill and result drain is disabled. */
    if (eqadcHw->IDCR[ADC_EQADC_QUEUE_0].B.RFDE || eqadcHw->IDCR[ADC_EQADC_QUEUE_0].B.CFFE)
    {
        eqadcHw->IDCR[ADC_EQADC_QUEUE_0].B.CFFE = 0;
        eqadcHw->IDCR[ADC_EQADC_QUEUE_0].B.RFDE = 0;

        /* Remember to enable requests again... */
        dmaRequestEnable = TRUE;
    }
    else
    {
        dmaRequestEnable = FALSE;
    }

    /* Invalidate queue. */
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.CFINV = 1;

    /* Write command through FIFO. */
    eqadcHw->CFPR[ADC_EQADC_QUEUE_0].R = readReg.R;

    /* Enable FIFO. */
    oldMode = eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE;
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE = ADC_CONV_MODE_ONESHOT;
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.SSE = 1;

    /* Wait for command to be executed. */
    WAIT_FOR_QUEUE_TO_FINISH(ADC_EQADC_QUEUE_0);

    /* Read result buffer. */
    result = eqadcHw->RFPR[ADC_EQADC_QUEUE_0].R;
    eqadcHw->FISR[ADC_EQADC_QUEUE_0].B.EOQF = 1;

    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE = oldMode;

    if (dmaRequestEnable)
    {
        eqadcHw->IDCR[ADC_EQADC_QUEUE_0].B.CFFE = 1;
        eqadcHw->IDCR[ADC_EQADC_QUEUE_0].B.RFDE = 1;
    }
    else
    {
        /* Do nothing. */
    }
    return (result);
}

static void  Adc_ConfigureEQADC (const Adc_ConfigType *ConfigPtr)
{
    Adc_GroupType group;

    enum
    {
        ADC_ENABLE = 0x8000,
    };

    eqadc_t *eqadcHw = GET_EQADC_HW(ConfigPtr->hwConfigPtr->hwUnitId);

    /* Enable ADC0. */
    Adc_WriteEQADCRegister (ConfigPtr->hwConfigPtr->hwUnitId, ADC0_CR, (ADC_ENABLE | ConfigPtr->hwConfigPtr->adcPrescale));

    /* Disable time stamp timer. */
    Adc_WriteEQADCRegister (ConfigPtr->hwConfigPtr->hwUnitId, ADC0_TSCR, 0);

    for (group = (Adc_GroupType)0; group < ConfigPtr->nbrOfGroups; group++)
    {
        /* Enable eDMA requests for commands and results. */
        eqadcHw->IDCR[group].B.CFFS = 1;
        eqadcHw->IDCR[group].B.RFDS = 1;

        /* Invalidate FIFO. */
        eqadcHw->CFCR[group].B.CFINV = 1;

        /* Enable FIFO fill requests. */
        eqadcHw->IDCR[group].B.CFFE = 1;
        eqadcHw->IDCR[group].B.RFDE = 1;
    }

}

void Adc_ConfigureEQADCInterrupts (const Adc_ConfigType *ConfigPtr)
{
    Adc_GroupType group;

    eqadc_t *eqadcHw = GET_EQADC_HW(ConfigPtr->hwConfigPtr->hwUnitId);
#if defined(CFG_MPC5777C)
#ifdef ADC_HWUNIT_EQADC_CTRL_A_ENABLED
    if(ConfigPtr->hwConfigPtr->hwUnitId == 0)
    {
        ISR_INSTALL_ISR2( "Adc_Err", Adc_EQADCAError, EQADCA_FISRx_TORF, 2, 0);
        for (group = (Adc_GroupType)0; group < ConfigPtr->nbrOfGroups; group++)
        {
            /* Enable end of queue, queue overflow/underflow interrupts. Clear corresponding flags. */
            eqadcHw->FISR[group].B.RFOF = 1;
            eqadcHw->IDCR[group].B.RFOIE = 1;

            eqadcHw->FISR[group].B.CFUF = 1;
            eqadcHw->IDCR[group].B.CFUIE = 1;

            eqadcHw->FISR[group].B.TORF = 1;
            eqadcHw->IDCR[group].B.TORIE = 1;

            eqadcHw->FISR[group].B.EOQF = 1;
            eqadcHw->IDCR[group].B.EOQIE = 1;
            if(group == 0){
                ISR_INSTALL_ISR2( "Adc_Grp0", Adc_hwUnitA_Group0ConversionComplete, EQADCA_FISR0_EOQF,     2, 0);
            }else if(group == 1){
                ISR_INSTALL_ISR2( "Adc_Grp1", Adc_hwUnitA_Group1ConversionComplete, EQADCA_FISR1_EOQF,     2, 0);
            }else if(group == 2){
                ISR_INSTALL_ISR2( "Adc_Grp2", Adc_hwUnitA_Group2ConversionComplete, EQADCA_FISR2_EOQF,     2, 0);
            }else if(group == 3){
                ISR_INSTALL_ISR2( "Adc_Grp3", Adc_hwUnitA_Group3ConversionComplete, EQADCA_FISR3_EOQF,     2, 0);
            }else if(group == 4){
                ISR_INSTALL_ISR2( "Adc_Grp4", Adc_hwUnitA_Group4ConversionComplete, EQADCA_FISR4_EOQF,     2, 0);
            }else if(group == 5){
                ISR_INSTALL_ISR2( "Adc_Grp5", Adc_hwUnitA_Group5ConversionComplete, EQADCA_FISR5_EOQF,     2, 0);
            }
        }
    }
#endif
#ifdef ADC_HWUNIT_EQADC_CTRL_B_ENABLED
    if(ConfigPtr->hwConfigPtr->hwUnitId == 1)
    {
        ISR_INSTALL_ISR2( "Adc_Err", Adc_EQADCBError, EQADCB_FISRx_TORF_RFOF_CFUF, 2, 0);
        for (group = (Adc_GroupType)0; group < ConfigPtr->nbrOfGroups; group++)
        {
            /* Enable end of queue, queue overflow/underflow interrupts. Clear corresponding flags. */
            eqadcHw->FISR[group].B.RFOF = 1;
            eqadcHw->IDCR[group].B.RFOIE = 1;

            eqadcHw->FISR[group].B.CFUF = 1;
            eqadcHw->IDCR[group].B.CFUIE = 1;

            eqadcHw->FISR[group].B.TORF = 1;
            eqadcHw->IDCR[group].B.TORIE = 1;

            eqadcHw->FISR[group].B.EOQF = 1;
            eqadcHw->IDCR[group].B.EOQIE = 1;
            if(group == 0){
                ISR_INSTALL_ISR2( "Adc_Grp100", Adc_hwUnitB_Group0ConversionComplete, EQADCB_FISR0_EOQF,     2, 0);
            }else if(group == 1){
                ISR_INSTALL_ISR2( "Adc_Grp101", Adc_hwUnitB_Group1ConversionComplete, EQADCB_FISR1_EOQF,     2, 0);
            }else if(group == 2){
                ISR_INSTALL_ISR2( "Adc_Grp102", Adc_hwUnitB_Group2ConversionComplete, EQADCB_FISR2_EOQF,     2, 0);
            }else if(group == 3){
                ISR_INSTALL_ISR2( "Adc_Grp103", Adc_hwUnitB_Group3ConversionComplete, EQADCB_FISR3_EOQF,     2, 0);
            }else if(group == 4){
                ISR_INSTALL_ISR2( "Adc_Grp104", Adc_hwUnitB_Group4ConversionComplete, EQADCB_FISR4_EOQF,     2, 0);
            }else if(group == 5){
                ISR_INSTALL_ISR2( "Adc_Grp105", Adc_hwUnitB_Group5ConversionComplete, EQADCB_FISR5_EOQF,     2, 0);
            }
        }
    }
#endif
#else
    ISR_INSTALL_ISR2( "Adc_Err", Adc_EQADCError, EQADC_FISR_OVER,2, 0);
    for (group = (Adc_GroupType)0; group < AdcConfigPtr->nbrOfGroups; group++)
    {
        /* Enable end of queue, queue overflow/underflow interrupts. Clear corresponding flags. */
        eqadcHw->FISR[group].B.RFOF = 1;
        eqadcHw->IDCR[group].B.RFOIE = 1;

        eqadcHw->FISR[group].B.CFUF = 1;
        eqadcHw->IDCR[group].B.CFUIE = 1;

        eqadcHw->FISR[group].B.TORF = 1;
        eqadcHw->IDCR[group].B.TORIE = 1;

        eqadcHw->FISR[group].B.EOQF = 1;
        eqadcHw->IDCR[group].B.EOQIE = 1;
        if(group == 0){
            ISR_INSTALL_ISR2( "Adc_Grp0", Adc_Group0ConversionComplete, EQADC_FISR0_EOQF0,     2, 0);
        }else if(group == 1){
            ISR_INSTALL_ISR2( "Adc_Grp1", Adc_Group1ConversionComplete, EQADC_FISR1_EOQF1,     2, 0);
        }else if(group == 2){
            ISR_INSTALL_ISR2( "Adc_Grp2", Adc_Group2ConversionComplete, EQADC_FISR2_EOQF2,     2, 0);
        }else if(group == 3){
            ISR_INSTALL_ISR2( "Adc_Grp3", Adc_Group3ConversionComplete, EQADC_FISR3_EOQF3,     2, 0);
        }else if(group == 4){
            ISR_INSTALL_ISR2( "Adc_Grp4", Adc_Group4ConversionComplete, EQADC_FISR4_EOQF4,     2, 0);
        }else if(group == 5){
            ISR_INSTALL_ISR2( "Adc_Grp5", Adc_Group5ConversionComplete, EQADC_FISR5_EOQF5,     2, 0);
        }
    }
#endif
}

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
void Adc_StartGroupConversion (Adc_GroupType group)
{
    for(uint8_t hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++)
    {
        /* Run development error check. */
        if (E_OK == Adc_CheckStartGroupConversion (adcState[hwUnitCount], AdcConfigPtr, group))
        {
            const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];

            eqadc_t *eqadcHw = GET_EQADC_HW(configPtr->hwConfigPtr->hwUnitId);

            Adc_GroupDefType *groupPtr = (Adc_GroupDefType *)&configPtr->groupConfigPtr[group];

            /* Disable trigger. */
            eqadcHw->CFCR[group].B.MODE = 0;

            /* Set group state to BUSY. */
            groupPtr->status->groupStatus = ADC_BUSY;

            groupPtr->status->currSampleCount = 0;
            /* @req SWS_Adc_00431 */
            groupPtr->status->currResultBufPtr = groupPtr->status->resultBufferPtr; /* Set current result buffer */
#if defined(CFG_MPC5777C)
            Dma_ConfigureDestinationAddress((uint32_t)groupPtr->status->resultBufferPtr, groupPtr->dmaResultChannel, configPtr->hwConfigPtr->hwUnitId);
#else
            Dma_ConfigureDestinationAddress((uint32_t)groupPtr->status->resultBufferPtr, groupPtr->dmaResultChannel);
#endif
            /* Always use single shot in streaming mode */
            if( groupPtr->accessMode == ADC_ACCESS_MODE_STREAMING)
            {
                /* Set conversion mode. */
                eqadcHw->CFCR[group].B.MODE = ADC_CONV_MODE_ONESHOT;
                /* Set single scan enable bit if this group is one shot. */
                eqadcHw->CFCR[group].B.SSE = 1;
            }
            else
            {
                /* Set conversion mode. */
                eqadcHw->CFCR[group].B.MODE = groupPtr->conversionMode;
                /* Set single scan enable bit if this group is one shot. */
                if (AdcConfigPtr->groupConfigPtr[group].conversionMode == ADC_CONV_MODE_ONESHOT)
                {
                    eqadcHw->CFCR[group].B.SSE = 1;
                }
            }
            break;
        }
        else
        {
            /* Error have been set within Adc_CheckStartGroupConversion(). */
        }
        /* @req SWS_Adc_00156 */
    }
}

void Adc_StopGroupConversion (Adc_GroupType group)
{
    for(uint8_t hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++)
    {
        if (E_OK == Adc_CheckStopGroupConversion (adcState[hwUnitCount], AdcConfigPtr, group))
        {
            const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];

            eqadc_t *eqadcHw = GET_EQADC_HW(configPtr->hwConfigPtr->hwUnitId);

            uint32 groupMask = 0x3 << (group * 2);
            /* Disable trigger normal conversions for ADC */
            /*@req SWS_Adc_00385 */
            /*@req SWS_Adc_00386 */
            eqadcHw->CFCR[group].B.MODE = 0;
            while((eqadcHw->CFSR.R & groupMask) != EQADC_CFIFO_STATUS_IDLE);

            /* Invalidate FIFO. */
            eqadcHw->CFCR[group].B.CFINV = 1;

            /* Set group state to IDLE. */
            /* @req SWS_Adc_00360 */
            configPtr->groupConfigPtr[group].status->groupStatus = ADC_IDLE;

            #if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
            /* Disable group notification if enabled. */
            if(1 == configPtr->groupConfigPtr[group].status->notifictionEnable)
            {
                /* @req SWS_Adc_00155 */
                Adc_DisableGroupNotification (group);
            }
            #endif
            break;
        }
        else
        {
            /* Error have been set within Adc_CheckStartGroupConversion(). */
        }
    }

}
#endif

static void Adc_EQADCCalibrationSequence (const Adc_ConfigType *ConfigPtr)
{
    Adc_ValueGroupType calibrationResult[sizeof(AdcCalibrationCommandQueue)/sizeof(AdcCalibrationCommandQueue[0])];
    int32_t point25Average, point75Average, i;
    Adc_EQADCRegister tempGCC, tempOCC;
    uint8_t unitID = 0;
    enum
    {
        IDEAL_RES25 = 0x1000,
        IDEAL_RES75 = 0x3000,
    };

    unitID = ConfigPtr->hwConfigPtr->hwUnitId;
    eqadc_t *eqadcHw = GET_EQADC_HW(unitID);

#if defined(CFG_MPC5777C)
    if(unitID == 0)
    {
        /* Use group 0 DMA channel for calibration. */
        Dma_ConfigureChannel ((Dma_TcdType *)&EQADC_A_CalibrationDMACommandConfig,DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);
        Dma_ConfigureChannelTranferSize (sizeof(AdcCalibrationCommandQueue)/sizeof(AdcCalibrationCommandQueue[0]),
                                   DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);
        Dma_ConfigureChannelSourceCorr (-sizeof(AdcCalibrationCommandQueue), DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);

        Dma_ConfigureChannel ((Dma_TcdType *)&EQADC_A_CalibrationDMAResultConfig, DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        Dma_ConfigureChannelTranferSize (sizeof(calibrationResult)/sizeof(calibrationResult[0]),
                                   DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        Dma_ConfigureChannelDestinationCorr (-sizeof(calibrationResult), DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        Dma_ConfigureDestinationAddress ((uint32_t)calibrationResult, DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        EDMA.TCD[DMA_ADC_GROUP0_COMMAND_CHANNEL].D_REQ = 1;
        EDMA.TCD[DMA_ADC_GROUP0_RESULT_CHANNEL].D_REQ = 1;
    }
    else
    {
        /* Use group 0 DMA channel for calibration. */
        Dma_ConfigureChannel ((Dma_TcdType *)&EQADC_B_CalibrationDMACommandConfig,DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);
        Dma_ConfigureChannelTranferSize (sizeof(AdcCalibrationCommandQueue)/sizeof(AdcCalibrationCommandQueue[0]),
                                   DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);
        Dma_ConfigureChannelSourceCorr (-sizeof(AdcCalibrationCommandQueue), DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);

        Dma_ConfigureChannel ((Dma_TcdType *)&EQADC_B_CalibrationDMAResultConfig, DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        Dma_ConfigureChannelTranferSize (sizeof(calibrationResult)/sizeof(calibrationResult[0]),
                                   DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        Dma_ConfigureChannelDestinationCorr (-sizeof(calibrationResult), DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        Dma_ConfigureDestinationAddress ((uint32_t)calibrationResult, DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
        EDMB.TCD[DMA_ADC_GROUP0_COMMAND_CHANNEL].D_REQ = 1;
        EDMB.TCD[DMA_ADC_GROUP0_RESULT_CHANNEL].D_REQ = 1;
    }
#else
    /* Use group 0 DMA channel for calibration. */
    Dma_ConfigureChannel ((Dma_TcdType *)&AdcCalibrationDMACommandConfig,DMA_ADC_GROUP0_COMMAND_CHANNEL);
    Dma_ConfigureChannelTranferSize (sizeof(AdcCalibrationCommandQueue)/sizeof(AdcCalibrationCommandQueue[0]),
                                     DMA_ADC_GROUP0_COMMAND_CHANNEL);
    Dma_ConfigureChannelSourceCorr (-sizeof(AdcCalibrationCommandQueue), DMA_ADC_GROUP0_COMMAND_CHANNEL);

    Dma_ConfigureChannel ((Dma_TcdType *)&AdcCalibrationDMAResultConfig, DMA_ADC_GROUP0_RESULT_CHANNEL);
    Dma_ConfigureChannelTranferSize (sizeof(calibrationResult)/sizeof(calibrationResult[0]),
                                     DMA_ADC_GROUP0_RESULT_CHANNEL);
    Dma_ConfigureChannelDestinationCorr (-sizeof(calibrationResult), DMA_ADC_GROUP0_RESULT_CHANNEL);
    Dma_ConfigureDestinationAddress ((uint32_t)calibrationResult, DMA_ADC_GROUP0_RESULT_CHANNEL);

    EDMA.TCD[DMA_ADC_GROUP0_COMMAND_CHANNEL].D_REQ = 1;
    EDMA.TCD[DMA_ADC_GROUP0_RESULT_CHANNEL].D_REQ = 1;
#endif

    /* Invalidate queues. */
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.CFINV = 1;
#if defined(CFG_MPC5777C)
    Dma_StartChannel (DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);
    Dma_StartChannel (DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
#else
    Dma_StartChannel (DMA_ADC_GROUP0_COMMAND_CHANNEL);
    Dma_StartChannel (DMA_ADC_GROUP0_RESULT_CHANNEL);
#endif

    /* Start conversion. */
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE = ADC_CONV_MODE_ONESHOT;
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.SSE = 1;

    /* Wait for conversion to complete. */
#if defined(CFG_MPC5777C)
    while(!Dma_ChannelDone (DMA_ADC_GROUP0_RESULT_CHANNEL, unitID))
    {
        ;
    }
#else
    while(!Dma_ChannelDone (DMA_ADC_GROUP0_RESULT_CHANNEL))
    {
       ;
    }
#endif

    /* Stop DMA channels and write calibration data to ADC engine. */
    eqadcHw->CFCR[ADC_EQADC_QUEUE_0].B.MODE = ADC_CONV_MODE_DISABLED;
#if defined(CFG_MPC5777C)
    Dma_StopChannel (DMA_ADC_GROUP0_COMMAND_CHANNEL, unitID);
    Dma_StopChannel (DMA_ADC_GROUP0_RESULT_CHANNEL, unitID);
#else
    Dma_StopChannel (DMA_ADC_GROUP0_COMMAND_CHANNEL);
    Dma_StopChannel (DMA_ADC_GROUP0_RESULT_CHANNEL);
#endif

    /* Calculate conversion factors and write to ADC. */
    point25Average = 0;
    point75Average = 0;
    for (i = 0; i < sizeof(calibrationResult)/sizeof(calibrationResult[0] / 2); i++)
    {
        point25Average += calibrationResult[i];
        point75Average += calibrationResult[i + sizeof(calibrationResult)/sizeof(calibrationResult[0]) / 2];
    }

    /* Calculate average and correction slope and offset.  */
    point25Average /= (sizeof(calibrationResult)/sizeof(calibrationResult[0]) / 2);
    point75Average /= (sizeof(calibrationResult)/sizeof(calibrationResult[0]) / 2);

    tempGCC = ((IDEAL_RES75 - IDEAL_RES25) << 14) / (point75Average - point25Average);
    tempOCC = IDEAL_RES75 - ((tempGCC * point75Average) >> 14) - 2;

    /* GCC field is only 15 bits. */
    tempGCC = tempGCC & ~(1 << 15);

    /* OCC field is only 14 bits. */
    tempOCC = tempOCC & ~(3 << 14);

    /* Write calibration data to ADC engine. */
    Adc_WriteEQADCRegister (unitID,ADC0_GCCR, tempGCC);
    Adc_WriteEQADCRegister (unitID, ADC0_OCCR, tempOCC);

    /* Read back and check calibration values. */
    if (Adc_ReadEQADCRegister (unitID, ADC0_GCCR) != tempGCC)
    {
        ASSERT(0);
    }
    else if (Adc_ReadEQADCRegister (unitID, ADC0_OCCR) != tempOCC)
    {
        ASSERT(0);
    }

}

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
void Adc_EnableGroupNotification (Adc_GroupType group)
{
    for(uint8_t hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++)
    {
        const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];

        /* @req SWS_Adc_00057 */
        Adc_EnableInternalGroupNotification(adcState[hwUnitCount], configPtr, group);
    }
}

void Adc_DisableGroupNotification (Adc_GroupType group)
{
    for(uint8_t hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++)
    {
        const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];

        /* @req SWS_Adc_00058 */
        Adc_InternalDisableGroupNotification(adcState[hwUnitCount], configPtr, group);
    }
}
#endif

Adc_StatusType Adc_GetGroupStatus (Adc_GroupType group)
{
    Adc_StatusType returnValue;

    for(uint8 hwUnitCount = 0; hwUnitCount < numOfADCs; hwUnitCount++)
    {
        const Adc_ConfigType *configPtr = &AdcConfigPtr[hwUnitCount];
        
        returnValue = Adc_InternalGetGroupStatus(adcState[hwUnitCount], configPtr, group);
    }
    return returnValue;
}

#if (STD_ON == ADC_VERSION_INFO_API)
void Adc_GetVersionInfo(Std_VersionInfoType* versioninfo)
{
    Adc_InternalGetVersionInfo(versioninfo);
}
#endif
