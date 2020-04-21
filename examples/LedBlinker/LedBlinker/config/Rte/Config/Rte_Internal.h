#ifndef RTE_INTERNAL_H_
#define RTE_INTERNAL_H_

#include <Rte_Fifo.h>
#include <Rte_DataHandleType.h>
#include <Os.h>

#include <Queue.h>
extern boolean RteInitialized;

/** --- PORT STATUS TYPES ------------------------------------------------------------------- */

/** --- SERVER REQUEST TYPES ---------------------------------------------------------------- */

/** --- SERVER RESPONSE TYPES --------------------------------------------------------------- */

typedef enum {
    RTE_NO_REQUEST_PENDING = 0, RTE_REQUEST_PENDING = 1, RTE_RESPONSE_RECEIVED = 2
} Rte_ResponseStatusType;

/** --- SERVER RETURN SIGNAL IDS ------------------------------------------------------------ */

/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */

/** --- MODE MACHINE TYPES ------------------------------------------------------------------ */

/** --- MODE MACHINE TRANSITION DEFINES ----------------------------------------------------- */

/** --- MODE MACHINE VALUE DEFINES ---------------------------------------------------------- */

/** --- EXCLUSIVE AREA TYPES ---------------------------------------------------------------- */
typedef struct {
    boolean entered;
} ExclusiveAreaType;

/** --- EXPORTED FUNCTIONS ------------------------------------------------------------------ */
/** === IoHwAb ======================================================================= */
/** --- serviceIoHwAb -------------------------------------------------------------------- */

/** ------ Digital_LED1 */
Std_ReturnType Rte_Call_IoHwAb_serviceIoHwAb_Digital_LED1_Write(/*IN*/DigitalLevel Level);

/** === LedBlinkerSWC ======================================================================= */
/** --- ledBlinkerSWC -------------------------------------------------------------------- */

/** ------ Digital_LED1 */
Std_ReturnType Rte_Call_LedBlinkerSWC_ledBlinkerSWC_Digital_LED1_Write(/*IN*/DigitalLevel Level);

/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */
/*lint -e451 AUTOSAR API SWS_MemMap_00003 */

extern int compare_uint16(void *a, void *b, size_t s);

#endif /* RTE_INTERNAL_H_ */

