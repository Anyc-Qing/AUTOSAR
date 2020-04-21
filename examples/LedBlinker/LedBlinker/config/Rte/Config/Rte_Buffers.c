#include <Rte_Buffers.h>
#include <Rte_IoHwAb_Type.h>
#include <Rte_LedBlinkerSWC_Type.h>

/*lint -e451 AUTOSAR API SWS_MemMap_00003 */
/** === IoHwAb Data =============================================================== */

/** === LedBlinkerSWC Data =============================================================== */

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_Internal_Init_Buffers(void) {
    // Init communication buffers

    // Init mode machine queues

}
#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

