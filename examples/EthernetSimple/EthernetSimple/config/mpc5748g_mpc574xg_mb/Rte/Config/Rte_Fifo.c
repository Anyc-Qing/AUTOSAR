
/*
 *  A circular buffer implementation for Rte fifos.*
 */

#include "Os.h"
#include "Rte_Fifo.h"

/*lint -e160 warning only viable if in c++ */
/*lint -e9008 The comma operator is acceptable even with loss of readability */
//lint --e{9016} correct arithmetic even if Array index is not used
/* IMPROVMENT: Make it threadsafe, add DisableAllInterrts()/EnableAllInterrupts() */
void Rte_Fifo_Init(RteFifoType *fBuf, void *buffer, uint8 maxCnt, size_t dataSize) {
    fBuf->bufStart = buffer;
    fBuf->maxCnt = maxCnt;/*lint !e970 modifier used*/
    fBuf->bufEnd = (char *) fBuf->bufStart + (((uint8) dataSize) * maxCnt);
    fBuf->head = fBuf->bufStart;
    fBuf->tail = fBuf->bufStart;
    fBuf->dataSize = dataSize;
    fBuf->currCnt = 0;
}

//lint --e{9016} correct arithmetic even if Array index is not used
Std_ReturnType Rte_Fifo_Push(RteFifoType *fPtr, void const *dataPtr) {
    SYS_CALL_SuspendOSInterrupts();
    if (fPtr == NULL) {
        SYS_CALL_ResumeOSInterrupts();
        return RTE_E_NOK; /* Faulty pointer into method */
    }
    if (fPtr->currCnt == fPtr->maxCnt) {
        SYS_CALL_ResumeOSInterrupts();
        fPtr->bufFullFlag = TRUE;
        return RTE_E_LIMIT; /* No more room */
    }
    MEMCPY(fPtr->head, dataPtr, fPtr->dataSize);
    fPtr->head = (char *) fPtr->head + fPtr->dataSize; /*lint !e970 modifier used*/
    if (fPtr->head == fPtr->bufEnd) {
        fPtr->head = fPtr->bufStart;
    }
    ++fPtr->currCnt;
    SYS_CALL_ResumeOSInterrupts();

    return RTE_E_OK;
}

/**
 * Pop an entry from the buffer.
 *
 * @param fPtr    Pointer to the queue created with CirqBuffStatCreate, etc.
 * @param dataPtr
 * @return RTE_E_OK - if successfully popped.
 *         RTE_E_NO_DATA - nothing popped (it was empty)
 *         RTE_E_LOST_DATA - if a buffer overflow has occurred previously
 */
//lint --e{9016} correct arithmetic even if Array index is not used
Std_ReturnType Rte_Fifo_Pop(RteFifoType *fPtr, void *dataPtr) {
    SYS_CALL_SuspendOSInterrupts();
    if ((fPtr == NULL) || (fPtr->currCnt == 0)) {
        SYS_CALL_ResumeOSInterrupts();
        return RTE_E_NO_DATA;
    }
    MEMCPY(dataPtr, fPtr->tail, fPtr->dataSize);
    fPtr->tail = (char *) fPtr->tail + fPtr->dataSize; /*lint !e970 modifier used */
    if (fPtr->tail == fPtr->bufEnd) {
        fPtr->tail = fPtr->bufStart;
    }
    --fPtr->currCnt;

    if (fPtr->bufFullFlag == TRUE) {
        fPtr->bufFullFlag = FALSE;
        SYS_CALL_ResumeOSInterrupts();
        return RTE_E_LOST_DATA;
    }

    SYS_CALL_ResumeOSInterrupts();
    return RTE_E_OK;
}

