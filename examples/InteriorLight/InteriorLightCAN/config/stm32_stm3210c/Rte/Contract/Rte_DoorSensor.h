/**
 * Application Header File
 *
 * @req SWS_Rte_01003
 */

/** === HEADER ====================================================================================
 */
/*lint -e18 -e452 LINT:OTHER:Duplicate declarations hidden behind ifdef */

/** --- Normal include guard ----------------------------------------------------------------------
 */
#ifndef RTE_DOORSENSOR_H_
#define RTE_DOORSENSOR_H_

/** --- C++ guard ---------------------------------------------------------------------------------
 * @req SWS_Rte_03709
 */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Duplicate application include guard -------------------------------------------------------
 * @req SWS_Rte_01006
 */
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif
#define RTE_APPLICATION_HEADER_FILE

/** --- Single runnable API -----------------------------------------------------------------------
 * @req SWS_Rte_02751
 */
#if defined(RTE_RUNNABLEAPI_DoorSensorMain)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_DoorSensor_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_DigitalServiceRead_E_NOT_OK 1U
#define RTE_E_DigitalServiceRead_E_OK 0U

/** --- Initial Values ----------------------------------------------------------------------------
 * @SWS_Rte_05078
 */

/** --- PIM DATA TYPES ------------------------------------------------------------------------------ */

/** --- Condition Value Macros -------------------------------------------------------
 * @req SWS_Rte_03854
 */

/** === BODY ======================================================================================
 */

/** @req SWS_Rte_03731
 *  @req SWS_Rte_07137
 *  @req SWS_Rte_07138
 *  !req SWS_Rte_06523
 *  @req SWS_Rte_03730
 *  @req SWS_Rte_07677
 *  @req SWS_Rte_02620
 *  @req SWS_Rte_02621
 *  @req SWS_Rte_01055
 *  @req SWS_Rte_03726 */
typedef struct {
    Std_ReturnType (*Call_Read)(/*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality);
} Rte_PDS_DoorSensor_DigitalServiceRead_R;

typedef struct {
    // SWS_Rte_07138 requires the existence of a PDS in the CDS. Even if it is empty.
    uint8 _dummy;
} Rte_PDS_DoorSensor_DoorInterface_P;

/** @req SWS_Rte_01343
 *  @req SWS_Rte_01342
 *  !req SWS_Rte_06524
 *  @req SWS_Rte_01053
 */

typedef struct Rte_PDS_DoorSensor_DigitalServiceRead_R * Rte_PortHandle_DigitalServiceRead_R;
typedef struct Rte_PDS_DoorSensor_DoorInterface_P * Rte_PortHandle_DoorInterface_P;

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    Rte_DE_DoorStatusImpl * const DoorSensorMain_DoorStatus_status;
    Rte_PDS_DoorSensor_DigitalServiceRead_R DoorSwitchSignal;
    Rte_PDS_DoorSensor_DoorInterface_P DoorStatus;
} Rte_CDS_DoorSensor;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_DoorSensor const * const Rte_Instance;

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- DoorSensorMain */
#if defined(RTE_RUNNABLEAPI_DoorSensorMain)

void doorSensorMain(Rte_Instance self);

static inline void Rte_IWrite_DoorSensorMain_DoorStatus_status(Rte_Instance self, /*IN*/DoorStatusImpl value) {
    self->DoorSensorMain_DoorStatus_status->value = value;
}

static inline Std_ReturnType Rte_Call_DoorSwitchSignal_Read(Rte_Instance self, /*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality) {
    return ((self)->DoorSwitchSignal.Call_Read(Level, Quality));
}

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
void doorSensorMain(Rte_Instance self);

static inline void Rte_IWrite_DoorSensorMain_DoorStatus_status(Rte_Instance self, /*IN*/DoorStatusImpl value) {
    self->DoorSensorMain_DoorStatus_status->value = value;
}

static inline Std_ReturnType Rte_Call_DoorSwitchSignal_Read(Rte_Instance self, /*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality) {
    return ((self)->DoorSwitchSignal.Call_Read(Level, Quality));
}
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_DOORSENSOR_H_ */
