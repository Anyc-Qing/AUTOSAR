#ifndef RTE_BUFFERS_H_
#define RTE_BUFFERS_H_

#include <Rte_Internal.h>

void Rte_Internal_Init_Buffers(void);

/** === IoHwAb Data =============================================================== */

/** === LedBlinkerSWC Data =============================================================== */

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

/** --- EXTERNALS --------------------------------------------------------------------------- */
extern Std_ReturnType Rte_serviceIoHwAb_DigitalWrite(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DigitalLevel Level);

#endif /* RTE_BUFFERS_H_ */

