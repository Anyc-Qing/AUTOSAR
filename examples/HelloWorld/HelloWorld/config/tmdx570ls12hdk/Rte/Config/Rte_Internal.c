#include <Rte_Internal.h>
#include <Rte_Buffers.h>

/*lint -e522 lint does not understand that low level calls to void operator are needed */
/*lint -e160 warning only viable if in c++ */
/*lint -e950 asm command needs to be used */
/*lint -e9008 The comma operator is acceptable even with loss of readability */
/*lint -e451 AUTOSAR API */
/*lint -e515 Variable amount of Arguments for SYS_CALLS */
/*lint -e970 Use of types and modifiers acceptable outside of typedefs */
/*lint -e843 AUTOSAR API for memory wrapping */
/*lint -e838 all values must have an assigned value on initialization even if unused */
/*lint -e9018 AUTOSAR API for Union types */
/*lint -e516 Variable argument types for SYS_CALLS */
/*lint -e545 Sending pointer address is legal in ANSI C */

/*lint -e957 Should be fixed, most functions are missing these prototypes */
/** --- RTE INTERNAL DATA ------------------------------------------------------------------- */

#define Rte_START_SEC_VAR_INIT_UNSPECIFIED
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
boolean RteInitialized = FALSE;
#define Rte_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */

int compare_uint16(void *a, void *b, size_t s) {
    return (*(uint16*) a - *(uint16*) b);
}

//lint -restore
