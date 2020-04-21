/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_LEDBLINKERSWC_TYPE_H_
#define RTE_LEDBLINKERSWC_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_07127
 */
#include <Rte_Type.h>

/** === BODY ====================================================================================
 */

/** --- ENUMERATION DATA TYPES ------------------------------------------------------------------ */

/** Enum literals for DigitalLevel */
#ifndef IOHWAB_LOW
#define IOHWAB_LOW 0U
#endif /* IOHWAB_LOW */

#ifndef IOHWAB_HIGH
#define IOHWAB_HIGH 1U
#endif /* IOHWAB_HIGH */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_LEDBLINKERSWC_TYPE_H_ */
