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
/** @tagSettings DEFAULT_ARCHITECTURE=PPC|ZYNQ|MPC5607B|MPC5645S|STM32|JACINTO5|JACINTO6|MPC5748G */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/** @req SWS_Spi_00367 */
/** @req SWS_Spi_00272 */
/** @req SWS_Spi_00273 */


#include "Spi.h"
#include "Spi_Helpers.h"
#include "debug.h"
#include "SchM_Spi.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "Platform_Types.h"
#include "Spi_Internal.h"
#include "Mcu.h"
#if defined(USE_DET)
#include "Det.h"
#endif

#define USE_DIO_CS          STD_ON

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
static void Spi_FailAll( Spi_UnitType *uPtr );
static void Spi_JobWrite(Spi_UnitType *uPtr);
static Std_ReturnType Spi_SeqWrite(Spi_SequenceType seqIndex, Spi_CallTypeType callType);

/* ----------------------------[private typedef]-----------------------------*/

typedef struct {
    Spi_SeqResultType seqResult;
} Spi_SeqUnitType;
/* ----------------------------[private variables]---------------------------*/
Spi_GlobalType  Spi_Global = { 0 };
Spi_UnitType    Spi_Unit[SPI_CONTROLLER_CNT];
Spi_SeqUnitType Spi_SeqUnit[SPI_MAX_SEQUENCE];
Spi_JobUnitType Spi_JobUnit[SPI_MAX_JOB];
uint8           Spi_CtrlToUnit[6]; /*lint !e9003 It can't be defined at block scope */


/***************************************************************************//**
 * @brief   Function used to validate custom expressions.
 * @details If the validation fails, an error is reported to default error tracer
 *          if SPI_DEV_ERROR_DETECT is STD_ON.
 * @param[in]           exp - boolean expression to be validated
 * @param[in]           apiid - AUTOSAR specified API Id for each module
 * @param[in]           errid - AUTOSAR specified Error Id for each type of error
 *                      specific to each API
 * @param[in/out]       rv - pointer to validation status to be updated according
 * 						to validation result
 ******************************************************************************/
static inline void Spi_validate(boolean exp, uint8 apiid, uint8 errid, Std_ReturnType* rv) {
    if ((*rv == E_OK) && (exp == FALSE)) {
#if SPI_DEV_ERROR_DETECT==STD_ON
        (void)Det_ReportError( SPI_MODULE_ID, 0, apiid, errid);
#endif
        *rv = E_NOT_OK;
    }
}


/**
 * Sets a result for a sequence
 *
 * @param Sequence The sequence to set the result for
 * @param result The result to set.
 */
void Spi_SetSequenceResult(Spi_SequenceType Sequence, Spi_SeqResultType result) {
    Spi_SeqUnit[Sequence].seqResult = result;
}

/**
 * Gets the Rx buffer for a channel.
 *
 * @param ch
 * @param length
 * @return pointer to the buffer
 */
Spi_DataBufferType *Spi_Internal_GetRxChBuf(Spi_ChannelType ch, Spi_NumberOfDataType *length) {
    Spi_DataBufferType *buf;
    if ((Spi_Global.configPtr->SpiChannelConfig[ch].SpiChannelType == SPI_EB)
            && (Spi_Global.extBufPtr[ch].active == 1))
    {
        *length = Spi_Global.extBufPtr[ch].length;
        buf = Spi_Global.extBufPtr[ch].dest;
    }
    else {
        /* No support */
        SPI_DET_REPORT_ERROR(SPI_GENERAL_SERVICE_ID, SPI_E_CONFIG_INVALID);
        *length = 0;
        buf = NULL_PTR;
    }
    return buf;
}


#if defined(__DMA_INT)
static void Spi_Isr_DMA( void )
{
    // Clear interrupt
    Dma_ClearInterrupt(5);
}
#endif

uint32 Spi_Internal_GetTxDefValue(Spi_ChannelType ch) {
    return Spi_Global.configPtr->SpiChannelConfig[ch].SpiDefaultData;
}

/**
 * Gets the Tx buffer for a channel.
 *
 * @param ch
 * @param length
 * @return pointer to the buffer
 */
const Spi_DataBufferType *Spi_Internal_GetTxChBuf(Spi_ChannelType ch, Spi_NumberOfDataType *length) {
    const Spi_DataBufferType *buf;
    if ((Spi_Global.configPtr->SpiChannelConfig[ch].SpiChannelType == SPI_EB)
            && (Spi_Global.extBufPtr[ch].active == 1))
    {
        *length = Spi_Global.extBufPtr[ch].length;
        buf = Spi_Global.extBufPtr[ch].src;
    }
    else {
        /* No support */
        SPI_DET_REPORT_ERROR(SPI_GENERAL_SERVICE_ID, SPI_E_CONFIG_INVALID);
        *length = 0;
        buf = NULL_PTR;
    }
    return buf;
}


/**
 * Function to see if two sequences share jobs
 *
 * @param seq1 - Seqence 1
 * @param seq2 - Seqence 2
 * @return 0  - if the don't share any jobs
 *        !=0 - if they share jobs
 */
static boolean Spi_ShareJobs(Spi_SequenceType seq1, Spi_SequenceType seq2) {
   boolean jobIdMatch = FALSE;
   const Spi_SequenceConfigType *seqConfig1;
   const Spi_SequenceConfigType *seqConfig2;
   /* Search for jobs in sequence 1 */
   seqConfig1 = Config_GetSequence(seq1);
   seqConfig2 = Config_GetSequence(seq2);

   for(uint32 i = 0;seqConfig1->SpiSeqSharingCommonJobsTablePtr[i]!= -1;i++) {
       if(seqConfig1->SpiSeqSharingCommonJobsTablePtr[i]==seqConfig2->SpiSequenceId){
           jobIdMatch = TRUE;
           break;
       }
    }

   return jobIdMatch;
}

/**
 * Write a sequence to the SPI bus
 *
 * @param seqIndex The sequence
 * @param callType Async or Sync
 */
/*lint -save -estring(974,*recursive*)  Misra 2004 16.2, 2012 17.2, Worst case function for stack usage: Spi_Internal_Isr is recursive,
 * loop contains call to Spi_SeqWrite. It is review and accepted.*/
static Std_ReturnType Spi_SeqWrite(Spi_SequenceType seqIndex, Spi_CallTypeType callType) {
    Spi_JobResultType            jobResult;
    const Spi_SequenceConfigType *seqConfig = Config_GetSequence(seqIndex);
    Spi_UnitType                 *uPtr      = GET_SPI_UNIT_PTR(seqConfig->SpiJobAssignment[0]->SpiHwUnit);

    /*  Set JobResult */
    if( callType == SPI_ASYNC_CALL ) {
        jobResult = SPI_JOB_QUEUED;
        if( uPtr->status == SPI_BUSY ) {
            /* Queue the request for later */
            if( QueuePush(&uPtr->queueHead,seqIndex) != 0uL ) {
                /*lint -e{904} OTHER To increase readability */
                return E_NOT_OK;
            }
        }
    } else {
        jobResult = SPI_JOB_PENDING;
        if( uPtr->status == SPI_BUSY ) {
            /* Transmitting on the same bus -> same controller -> SWS_Spi_00135 */
            /* @req SWS_Spi_00245 */
            SPI_DET_REPORT_ERROR(SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_SEQ_IN_PROCESS);
            /* Note!
             * Seems that we don't need to set the sequence result here since
             * we return E_NOT_OK. See SWS_Spi_00254 */
            /*lint -e{904} OTHER To increase readability */
            return E_NOT_OK;
        }
    }

    /* @req SWS_Spi_00194 */
    /* @req SWS_Spi_00157 */
    /*lint -e{9032} Composite expression with smaller essential type than other operand Misra 2012 10.7
     * the lack of proper typecast for NULL is tolerated. */
    for (uint32 i = 0; seqConfig->SpiJobAssignment[i] != NULL_PTR; i++) {
        Spi_SetJobResult(seqConfig->SpiJobAssignment[i]->SpiJobId, jobResult);
    }

    /* @req SWS_Spi_00020 */
    /* @req SWS_Spi_00285 */
    Spi_SetSequenceResult(seqIndex, SPI_SEQ_PENDING);

    if( uPtr->status == SPI_BUSY ) {
        /* We have queue, so not more to do */
        /*lint -e{904} OTHER To increase readability */
        return E_OK;
    }

    uPtr->callType = callType;
    uPtr->seqPtr = seqConfig;
    uPtr->jobPtr = seqConfig->SpiJobAssignment[0];
    uPtr->jobIdxInSeq = 0;

    /* @req SWS_Spi_00020 */
    /* @req SWS_Spi_00134 */
    /* @req SWS_Spi_00349 */
    Spi_SetHWUnitStatus(uPtr, SPI_BUSY);

    Spi_JobWrite(uPtr);

    /* Busy wait */
    if (uPtr->callType == SPI_SYNC_CALL) {
        while (Spi_GetSequenceResult(seqIndex) == SPI_SEQ_PENDING) {
            if (TRUE == Spi_Hw_IsTransmissionDone((uint32)uPtr->hwUnit)) {
                Spi_Internal_Isr(uPtr);
            }
        }
    }
    return E_OK;
}


static boolean Spi_AnyPendingJobs(Spi_SequenceType Sequence) {

    // Check that we don't share any jobs with another sequence that is SPI_SEQ_PENDING
    for (Spi_SequenceType i = 0; i < SPI_MAX_SEQUENCE; i++) {
        if (i == Sequence) {
            continue;
        }

        if (Spi_GetSequenceResult(i) == SPI_SEQ_PENDING) {
            // We have found a pending sequence... check that we don't share any jobs
            // with that sequence
            if (TRUE == Spi_ShareJobs(Sequence, i)) {
                /*lint -e{904} OTHER To increase readability */
                return TRUE ;
            }
        }
    }

    return FALSE ;
}

/* @req SWS_Spi_00180 */
/* @req SWS_Spi_00316 */
/* @req SWS_Spi_00317 */
/* @req SWS_Spi_00318 */
/* @req SWS_Spi_00053 */
/* @req SWS_Spi_00280 */
Std_ReturnType Spi_Hw_SetupEB(Spi_ChannelType Channel, const Spi_DataBufferType* SrcDataBufferPtr,
        Spi_DataBufferType* DesDataBufferPtr, Spi_NumberOfDataType Length) {
    /* @req SWS_Spi_00242 */
    /* @req SWS_Spi_00031 */
	Std_ReturnType ret = E_OK;

    /* @req SWS_Spi_00239 */
#if ( SPI_CHANNEL_BUFFERS_ALLOWED == 1 )
    Spi_validate(( SPI_EB == Spi_Global.configPtr->SpiChannelConfig[Channel].SpiChannelType ), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &ret);
#endif

    /* @req SWS_Spi_00060 */
    /* @req SWS_Spi_00258 */
    Spi_validate(( Length <= Spi_Global.configPtr->SpiChannelConfig[Channel].SpiEbMaxLength ), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &ret);

    if(ret == E_OK){

		const Spi_ChannelConfigType *chConfig = &Spi_Global.configPtr->SpiChannelConfig[Channel];

		/* @req SWS_Spi_00058 */
		/* @req SWS_Spi_00067 */
		Spi_EbType *extChBuff = &Spi_Global.extBufPtr[Channel];
		if (chConfig->SpiChannelType == SPI_EB) {
			extChBuff->src = SrcDataBufferPtr;
			extChBuff->dest = DesDataBufferPtr;
			extChBuff->length = Length;
			extChBuff->active = 1;
		}
		else {
			/* NOT SUPPORTED */
			SPI_DET_REPORT_ERROR(SPI_GENERAL_SERVICE_ID, SPI_E_CONFIG_INVALID);
			ret = E_NOT_OK;
		}
    }

    return ret;
}

/* @req SWS_Spi_00183 */
/* @req SWS_Spi_00251 */
/* @req SWS_Spi_00323 */
/* @req SWS_Spi_00324 */
/* @req SWS_Spi_00039 */
/* @req SWS_Spi_00042 */
/* @req SWS_Spi_00354 */
/* @req SWS_Spi_00351 */
/* @req SWS_Spi_00352 */
/* @req SWS_Spi_00353 */
Spi_SeqResultType Spi_Hw_GetSequenceResult(Spi_SequenceType Sequence) {
    return Spi_SeqUnit[Sequence].seqResult;
}


Spi_StatusType Spi_Hw_GetStatus(void) {
    Spi_StatusType status;
    status = SPI_IDLE;

    // Check all sequences if they have any job pending
    for (Spi_SequenceType i = 0; i < SPI_MAX_SEQUENCE; i++) {
        if (Spi_Hw_GetSequenceResult(i) == SPI_SEQ_PENDING) {
            status = SPI_BUSY;
            break;
        }
    }

    return status;
}

/* @req SWS_Spi_00176 */
/* @req SWS_Spi_00300 */
Std_ReturnType Spi_Hw_DeInit(void) {

    uint32 confMask;
    uint32 ctrlNr;
    Spi_UnitType *uPtr;

    if (Spi_GetStatus() == SPI_BUSY) {
        /*lint -e{904} OTHER To increase readability */
        return E_NOT_OK ;
    }

    // Disable the HW modules
    /* @req SWS_Spi_00021 */
    confMask = SPI_CHANNELS_CONFIGURED;     /*lint !e835 */

    // Disable the SPI hw
    /* @req SWS_Spi_00252 */

    for (uint8 i = 0; i < SPI_CONTROLLER_CNT; i++) {
        ctrlNr = (uint32)ffs(confMask) - 1uL; /*lint !e713 For ghs the argument is signed but the function looks at bits so it's ok */
        confMask &= ~(1uL << ctrlNr); /* clear mask */

        uPtr = &Spi_Unit[i];

        Spi_Hw_DeInitController(ctrlNr);
        Spi_SetHWUnitStatus(uPtr, SPI_UNINIT);
    }

    /* @req SWS_Spi_00022 */
    Spi_Global.configPtr = NULL_PTR;

    /* @req SWS_Spi_00301 */
    return E_OK ;
}


/* @req SWS_Spi_00182 */
/* @req SWS_Spi_00321 */
/* @req SWS_Spi_00038 */
/* @req SWS_Spi_00350 */
/* @req SWS_Spi_00261 */
/* @req SWS_Spi_00062 */
Spi_JobResultType Spi_Hw_GetJobResult(Spi_JobType Job) {
    /* @req SWS_Spi_00322 */
    /* @req SWS_Spi_00026 */
    return Spi_JobUnit[Job].jobResult;
}

#if (SPI_HW_STATUS_API == STD_ON)
/* @req SWS_Spi_00186 */
/* @req SWS_Spi_00142 */
/* @req SWS_Spi_00260 */
/* @req SWS_Spi_00287 */
/* @req SWS_Spi_00331 */
Spi_StatusType Spi_Hw_GetHWUnitStatus(Spi_HWUnitType HWUnit) {
    /* @req SWS_Spi_00332 */
    /* @req SWS_Spi_00141 */
    return (GET_SPI_UNIT_PTR(HWUnit))->status;
}
#endif

/**
 * Blocking write
 *
 * @param Sequence The sequence
 * @return E_OK When the command has been accepted.
 */
#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_0) || (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/* @req SWS_Spi_00136 */
/* @req SWS_Spi_00185 */
/* @req SWS_Spi_00327 */
/* @req SWS_Spi_00328 */
/* @req SWS_Spi_00329 */
/* @req SWS_Spi_00160 */
/* @req SWS_Spi_00128 */
Std_ReturnType Spi_Hw_SyncTransmit(Spi_SequenceType Sequence) {
    Std_ReturnType rv;

    /*lint -save -e904 OTHER to increase readability by reducing cyclomatic complexity */
    SchM_Enter_Spi_EA_0();
    if (Spi_GetSequenceResult(Sequence) == SPI_SEQ_PENDING) {
        SchM_Exit_Spi_EA_0();
        return E_NOT_OK ;
    }

    /* @req SWS_Spi_00135*/
#if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_OFF)
    for (Spi_SequenceType i = 0; i < SPI_MAX_SEQUENCE; i++) {
        if (Spi_GetSequenceResult(i) == SPI_SEQ_PENDING) {
            SchM_Exit_Spi_EA_0();
            /* @req SWS_Spi_00245 */
            SPI_DET_REPORT_ERROR(SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_SEQ_IN_PROCESS);
            return E_NOT_OK ;
        }
    }
#endif

    if (SPI_SEQ_OK != Spi_GetSequenceResult(Sequence)) {
        SchM_Exit_Spi_EA_0();
        SPI_DET_REPORT_ERROR(SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_SEQUENCE_NOT_OK);
        return E_NOT_OK ;
    }
    if (TRUE == Spi_AnyPendingJobs(Sequence)) {
        SchM_Exit_Spi_EA_0();
        return E_NOT_OK ;
    }
    /*lint -restore*/
    rv = Spi_SeqWrite(Sequence, SPI_SYNC_CALL);
    SchM_Exit_Spi_EA_0();

    /* @req SWS_Spi_00309 */
    return rv ;
}
#endif

/* @req SWS_Spi_00055 */
/* @req SWS_Spi_00133 */
/* @req SWS_Spi_00178 */
/* @req SWS_Spi_00308 */
/* @req SWS_Spi_00311 */
/* @req SWS_Spi_00295 */
/* @req SWS_Spi_00162 */
#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_1) || (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
Std_ReturnType Spi_Hw_AsyncTransmit(Spi_SequenceType Sequence) {
    Spi_SeqResultType isSeqPending;
    boolean anyJobPending;
    Std_ReturnType rv;

    SchM_Enter_Spi_EA_0();
    isSeqPending = Spi_GetSequenceResult(Sequence);
    anyJobPending = Spi_AnyPendingJobs(Sequence);

    /* @req SWS_Spi_00081 */
    /* @req SWS_Spi_00086 */
    if ((isSeqPending == SPI_SEQ_PENDING) || (anyJobPending==TRUE)) {
        /* @req SWS_Spi_00266 */
        /* @req SWS_Spi_00243 */
        SPI_DET_REPORT_ERROR(SPI_ASYNCTRANSMIT_SERVICE_ID, SPI_E_SEQ_PENDING);
        rv = E_NOT_OK ;
    }
    else if (SPI_SEQ_OK != Spi_GetSequenceResult(Sequence)) {
        SPI_DET_REPORT_ERROR(SPI_ASYNCTRANSMIT_SERVICE_ID, SPI_E_SEQUENCE_NOT_OK);
        rv = E_NOT_OK ;
    } else {

        rv = Spi_SeqWrite(Sequence, SPI_ASYNC_CALL);
    }
    SchM_Exit_Spi_EA_0();
    /* @req SWS_Spi_00020 */
    /* @req SWS_Spi_00309 */
    /* @req SWS_Spi_00310 */
    return rv;
}
#endif

Std_ReturnType Spi_Hw_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr) {
    /* @req SWS_Spi_00242 */
    /* According to SWS_Spi_00051 it seems that we only have to a "depth" of 1 */
    return E_NOT_OK;
}

Std_ReturnType Spi_Hw_ReadIB(Spi_ChannelType Channel, Spi_DataBufferType* DataBufferPtr) {
    (void) DataBufferPtr;   /*lint !e920 */
    (void) Channel;   /*lint !e920 */
    return E_NOT_OK;
}

#if (SPI_CANCEL_API == STD_ON )
void Spi_Hw_Cancel(Spi_SequenceType Sequence) {
	(void)Sequence;	/*lint !e920 */
}
#endif

/* @req SWS_Spi_00154 */
#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/* @req SWS_Spi_00188 */
/* @req SWS_Spi_00152 */
/* @req SWS_Spi_00335 */
/* @req SWS_Spi_00360 */
/* @req SWS_Spi_00361 */
/* @req SWS_Spi_00362 */
/* @req SWS_Spi_00170 */
Std_ReturnType Spi_Hw_SetAsyncMode(Spi_AsyncModeType Mode) {
    Std_ReturnType retval = E_OK;
    boolean hwUnitBusy = false;
    Spi_CallTypeType currentTransmissionMode = SPI_SYNC_CALL;
    uint32 confMask;
    uint32 ctrlNr;

    confMask = SPI_CHANNELS_CONFIGURED; /*lint !e835 */

    for (uint32 i = 0; i < SPI_CONTROLLER_CNT; i++) {
        ctrlNr = (uint32)ffs(confMask) - 1uL; /*lint !e713 For ghs the argument is signed but the function looks at bits so it's ok */
        confMask &= ~(1uL << ctrlNr); /* clear mask */

        if (Spi_Unit[ctrlNr].status == SPI_BUSY) {
            hwUnitBusy = TRUE;
            currentTransmissionMode = Spi_Unit[i].callType;
        }
    }

    if ((currentTransmissionMode == SPI_ASYNC_CALL) && (hwUnitBusy== TRUE)) {
        /* @req SWS_Spi_00171 */
        /* @req SWS_Spi_00337 */
        retval = E_NOT_OK;
    }
    else {
        /* @req SWS_Spi_00338 */
        /* @req SWS_Spi_00172 */
        Spi_Global.asyncMode = Mode;
        retval = E_OK;
    }

    /* @req SWS_Spi_00336 */
    return retval;
}
#endif

/* @req SWS_Spi_00189 */
void Spi_Hw_MainFunction_Handling(void) {
    uint32 confMask;
    uint32 ctrlNr;
    boolean xDone;
    if (Spi_Global.asyncMode == SPI_POLLING_MODE) {

        confMask = SPI_CHANNELS_CONFIGURED; /*lint !e835 */

        for (uint32 i = 0; i < SPI_CONTROLLER_CNT; i++) {
            ctrlNr = (uint32)ffs(confMask) - 1uL; /*lint !e713 For ghs the argument is signed but the function looks at bits so it's ok */
            confMask &= ~(1uL << ctrlNr); /* clear mask */

            xDone = Spi_Hw_IsTransmissionDone((uint32)Spi_Unit[i].hwUnit);
            if ((Spi_Unit[i].status == SPI_BUSY) && (xDone == TRUE)) {
                Spi_Internal_Isr(&Spi_Unit[i]);
            }
        }
    }
}

/**
 * Write a job to the SPI bus
 *
 * @param uPtr Pointer to a structure representing a Spi controller unit
 */
static void Spi_JobWrite(Spi_UnitType *uPtr) {

    /*lint -e{9050} -e{40} -e{10} -e{9008} -e{534} Assert is used to Stop program execution in case of null pointer argument
     * dependence placed on C/C++ operator precedence; operators '?' and ',' Misra 2012 12.1 12.3 1.3 Misra 2004 1.2
     * Undeclared identifier '__promise' Misra 2004 1.2, 2012 1.3
     * Expecting a function
     * Comma operator used Misra 2012 12.3
     * Ignoring return value of function 'unknown-name' (compare with location unknown) Misra 2004 16.10, Misra 2012 4.7, Misra 2012 Rule 17.7*/
    /*lint -e{1776} OTHER required operation */
    ASSERT((uPtr!=NULL_PTR) && (uPtr->jobPtr!=NULL_PTR));
    sint32 rv;

    /* @req SWS_Spi_00286 */
    Spi_SetJobResult(uPtr->jobPtr->SpiJobId, SPI_JOB_PENDING);

    LDEBUG_PRINTF("Spi_JobWrite: JobId=%d(index=%d)\n",uPtr->jobPtr->SpiJobId,uPtr->jobIdxInSeq);

    uPtr->rxChIdxInJob = 0;
    uPtr->txChIdxInJob = 0;

    /* Get the external device this job uses */
#if defined(SPI_CONFIG_VERSION)
    uPtr->extDevPtr = uPtr->jobPtr->SpiDeviceAssignment;
#else
    uPtr->extDevPtr = &Spi_Global.configPtr->SpiExternalDevice[uPtr->jobPtr->DeviceAssignment];
#endif

#if (USE_DIO_CS == STD_ON)
    void (*cb)(uint32 active) = uPtr->extDevPtr->SpiCsCallback;

    if( cb != NULL_PTR ) {
        cb(1);
    }
#endif
    /* @req SWS_Spi_00330 */
    rv = Spi_Hw_Tx(uPtr);

    if (rv == SPIE_BAD) {
        Spi_FailAll(uPtr);
    }
}

static void Spi_FailAll( Spi_UnitType *uPtr )  {
    /*lint -e{9050} -e{40} -e{10} -e{9008} -e{534} Assert is used to Stop program execution in case of null pointer argument
     * dependence placed on C/C++ operator precedence; operators '?' and ',' Misra 2012 12.1 12.3 1.3 Misra 2004 1.2
     * Undeclared identifier '__promise' Misra 2004 1.2, 2012 1.3
     * Expecting a function
     * Comma operator used Misra 2012 12.3
     * Ignoring return value of function 'unknown-name' (compare with location unknown) Misra 2004 16.10, Misra 2012 4.7, Misra 2012 Rule 17.7*/
    /*lint -e{1776} OTHER required operation */
    ASSERT(((uPtr!=NULL_PTR) && (uPtr->seqPtr!=NULL_PTR)) && (uPtr->jobPtr!=NULL_PTR));

    uint32 i = uPtr->jobIdxInSeq; /*lint !e632 Assignment: uint32 = uint8 ok */

    /* @req SWS_Spi_00057 */
    /** @req SWS_Spi_00119 - When a valid notification function pointer is configured, the SPI Handler/Driver shall call this notification function at the
    *	end of a Job transmission regardless of the result of the Job transmission being either SPI_JOB_FAILED or SPI_JOB_OK */
    /** @req SWS_Spi_00118 - If Jobs are configured with a specific end notification function, the SPI Handler/Driver shall call this
     *  notification function at the end of the Job transmission. */
    /* Fail both job and sequence */
    /* @req SWS_Spi_00348 */
    Spi_SetHWUnitStatus(uPtr, SPI_IDLE);
    /* @req SWS_Spi_00293 */
    /* Fail all the jobs in that sequence */
    while (uPtr->seqPtr->SpiJobAssignment[i] != (Spi_JobConfigType *)NULL ) {
        Spi_SetJobResult(uPtr->jobPtr->SpiJobId, SPI_JOB_FAILED);
        i++;
    }

    Spi_SetSequenceResult(uPtr->seqPtr->SpiSequenceId, SPI_SEQ_FAILED);
    /** @req SWS_Spi_00120 - When a valid notification function pointer is configured, the SPI Handler/Driver shall call this notification function at the
    end of a Sequence transmission regardless of the result of the Sequence transmission being either SPI_SEQ_FAILED, SPI_SEQ_OK or SPI_SEQ_CANCELLED. */
    /* @req SWS_Spi_00281 */
    /** @req SWS_Spi_00264 - Use the callback routines Spi_SeqEndNotification to inform other software modules about certain states or state changes. */
    if (uPtr->seqPtr->SpiSeqEndNotification != NULL) {
        uPtr->seqPtr->SpiSeqEndNotification();
    }
}

void Spi_Internal_Isr(Spi_UnitType *uPtr) {
    sint32 rv;

    LDEBUG_PRINTF("Spi_Isr\n");

    /*lint -e9050 -e40 -e10 -e9008 -e534 -e1776 Assert is used to Stop program execution in case of null pointer argument
     * dependence placed on C/C++ operator precedence; operators '?' and ',' Misra 2012 12.1 12.3 1.3 Misra 2004 1.2
     * Undeclared identifier '__promise' Misra 2004 1.2, 2012 1.3
     * Expecting a function
     * Comma operator used Misra 2012 12.3
     * Ignoring return value of function 'unknown-name' (compare with location unknown) Misra 2004 16.10, Misra 2012 4.7, Misra 2012 Rule 17.7*/
    ASSERT(uPtr != NULL_PTR);
    ASSERT(uPtr->jobPtr != NULL_PTR);
    ASSERT(uPtr->seqPtr != NULL_PTR);
    /*lint -restore*/

    Spi_Global.totalNbrOfTranfers++;

    Spi_Hw_DisableInterrupt((uint32)uPtr->hwUnit);

    rv = Spi_Hw_Rx(uPtr);

    if ( SPIE_JOB_PENDING == rv) {
        /* The job is not complete, so send more */
        LDEBUG_PRINTF("Pending jobs\nSpi_Isr END\n");

        rv = Spi_Hw_Tx(uPtr);

        if( rv == SPIE_BAD ) {
            /* Fail all */
            Spi_FailAll(uPtr);
        }
        /*lint -e904 OTHER To increase readability */
        return;
    }

    //Not supported yet.
#if (USE_DIO_CS == STD_ON)
#if defined(SPI_CONFIG_VERSION)
    uPtr->extDevPtr = uPtr->jobPtr->SpiDeviceAssignment;
#else
    uPtr->extDevPtr = &Spi_Global.configPtr->SpiExternalDevice[uPtr->jobPtr->DeviceAssignment];
#endif
    void (*cb)(uint32 active) = uPtr->extDevPtr->SpiCsCallback;
    if( cb != NULL_PTR ) {
        cb(0);
    }
#endif

    /* Job is done, so for async transmission, set chip select to inactive.
     * For sync transmission, this is done  */
//    if ((uPtr->callType == SPI_ASYNC_CALL) && (Spi_Global.asyncMode == SPI_INTERRUPT_MODE))
//    {
    Spi_Hw_EndTransmission(uPtr);
//    }

    //Notification
    /* @req SWS_Spi_00057 */
    /** @req SWS_Spi_00119 - When a valid notification function pointer is configured, the SPI Handler/Driver shall call this notification function at the
    *	end of a Job transmission regardless of the result of the Job transmission being either SPI_JOB_FAILED or SPI_JOB_OK */
    /** @req SWS_Spi_00118 - If Jobs are configured with a specific end notification function, the SPI Handler/Driver shall call this
     *  notification function at the end of the Job transmission. */
    /** @req SWS_Spi_00071 - If the SpiJobEndNotification is configured (i.e. not a null pointer),
     * the SPI Handler/Driver shall call the configured callback notification at the end of a Job transmission. */
    /* @req SWS_Spi_00054 */
    /* @req SWS_Spi_00088 */
    /** @req SWS_Spi_00075 - The SPI Handler/Driver shall use the callback routines Spi_JobEndNotification to inform other software modules about certain states or state changes. */
    void (*notif)(void) = uPtr->jobPtr->SpiJobEndNotification;
    if (notif != NULL) {
        notif();
    }

    if ( SPIE_BAD == rv) {
        Spi_FailAll(uPtr);
    } else {

        /* Job is done so set job result */
        /* @req SWS_Spi_00292 */

        Spi_SetJobResult(uPtr->jobPtr->SpiJobId, SPI_JOB_OK);

        uPtr->jobIdxInSeq++;
        uPtr->jobPtr = uPtr->seqPtr->SpiJobAssignment[uPtr->jobIdxInSeq];
        /* Find the next job for this sequence if there is any */
        if (uPtr->jobPtr != NULL_PTR) {
            LDEBUG_PRINTF("****** more_jobs %d******\n", uPtr->jobIdxInSeq);
            Spi_JobWrite(uPtr);
        } else {
            Spi_SequenceType seq;
            LDEBUG_PRINTF("######SE####\n");
            // No more jobs, so set HwUnit and sequence IDLE/OK also.
            /* @req SWS_Spi_348 */
            Spi_SetHWUnitStatus(uPtr, SPI_IDLE);
            Spi_SetSequenceResult(uPtr->seqPtr->SpiSequenceId, SPI_SEQ_OK);

            /** @req SWS_Spi_00120 - When a valid notification function pointer is configured, the SPI Handler/Driver shall call this notification function at the
            end of a Sequence transmission regardless of the result of the Sequence transmission being either SPI_SEQ_FAILED, SPI_SEQ_OK or SPI_SEQ_CANCELLED. */
            /* @req SWS_Spi_00281 */
            /** @req SWS_Spi_00264 - Use the callback routines Spi_SeqEndNotification to inform other software modules about certain states or state changes. */
            /* @req SWS_Spi_00073 */
            if (uPtr->seqPtr->SpiSeqEndNotification != NULL_PTR) {
                uPtr->seqPtr->SpiSeqEndNotification();
            }

            /* Check for queued sequences to this unit */
            if( uPtr->callType == SPI_ASYNC_CALL ) {
                /* According to lint this is a recursive call, and it is. However
                 * this is only done at the end of a sequence (ie Spi_MainFunction_Handling())
                 * and not during Spi_AsyncTransmit(..)
                 * */
                if( QueuePop(&uPtr->queueHead,&seq ) == 0 ) {    /*lint !e934 Taking address of near auto var ok */
                    Std_ReturnType tmpReturnValue = Spi_SeqWrite(seq, SPI_ASYNC_CALL );

                    if( tmpReturnValue == E_NOT_OK ) {
                        Spi_FailAll(uPtr);
                    }
                }
            }
        }
    }
}

uint16 Spi_Internal_GetNbrChnInJob(const Spi_UnitType *uPtr) {

    /*lint -e9050 -e40 -e10 -e9008 -e534 -e1776 Assert is used to Stop program execution in case of null pointer argument
     * dependence placed on C/C++ operator precedence; operators '?' and ',' Misra 2012 12.1 12.3 1.3 Misra 2004 1.2
     * Undeclared identifier '__promise' Misra 2004 1.2, 2012 1.3
     * Expecting a function
     * Comma operator used Misra 2012 12.3
     * Ignoring return value of function 'unknown-name' (compare with location unknown) Misra 2004 16.10, Misra 2012 4.7, Misra 2012 Rule 17.7*/
    ASSERT((uPtr!=NULL_PTR) && (uPtr->jobPtr!=NULL_PTR));
    /*lint -restore*/

    uint16 retval = 0;
    const Spi_ChannelConfigType *chPtr;

    for (uint16 n = 0; n < (SPI_MAX_CHANNEL + 1); n++) {
    	/*lint -e{613} LINT:FALSE_POSITIVE: ASSERT on uPtr checks for Null pointer*/
    	chPtr = uPtr->jobPtr->SpiChannelAssignment[n];

        if (chPtr == NULL_PTR) {
            /* we are done */
            retval = n;
            break;
        }
    }

    return retval;
}

