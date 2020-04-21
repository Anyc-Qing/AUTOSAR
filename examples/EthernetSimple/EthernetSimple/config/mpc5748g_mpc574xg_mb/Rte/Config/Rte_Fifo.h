
#ifndef RTE_FIFO_H_
#define RTE_FIFO_H_

#include <stddef.h> /*lint !e451 MISRA:OTHER:It is not within ARCCOREs scope to MISRA check the C standard libary [MISRA 2012 Directive 4.10, required] */
#include "Platform_Types.h"
#include "Rte.h"

typedef struct {
    /* The max number of elements in the list */
    uint8 maxCnt;
    uint8 currCnt;

    /* Error flag */
    boolean bufFullFlag;

    /* Size of the elements in the list */
    size_t dataSize;
    /* List head and tail */
    void *head;
    void *tail;

    /* Buffer start/stop */
    void *bufStart;
    void *bufEnd;
} RteFifoType;

Std_ReturnType Rte_Fifo_Push(RteFifoType *fPtr, void const *dataPtr);
Std_ReturnType Rte_Fifo_Pop(RteFifoType *fPtr, void *dataPtr);
void Rte_Fifo_Init(RteFifoType *fPtr, void *buffer, uint8 maxCnt, size_t dataSize);

static inline boolean Rte_Fifo_Is_Empty(const RteFifoType *fPtr) {
    return (fPtr->currCnt == 0);
}

#endif /* RTE_FIFO_H_ */

