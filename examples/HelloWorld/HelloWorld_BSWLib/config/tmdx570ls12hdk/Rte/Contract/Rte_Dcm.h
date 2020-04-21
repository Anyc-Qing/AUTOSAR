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
#ifndef RTE_DCM_H_
#define RTE_DCM_H_

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
#if defined(RTE_RUNNABLEAPI_Dcm_GetActiveProtocol) || \
defined(RTE_RUNNABLEAPI_Dcm_GetSecurityLevel) || \
defined(RTE_RUNNABLEAPI_Dcm_GetSesCtrlType) || \
defined(RTE_RUNNABLEAPI_Dcm_MainFunction) || \
defined(RTE_RUNNABLEAPI_Dcm_ResetToDefaultSession)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_Dcm_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_CallbackDCMRequestServices_E_NOT_OK 1U
#define RTE_E_CallbackDCMRequestServices_E_OK 0U
#define RTE_E_CallbackDCMRequestServices_E_PROTOCOL_NOT_ALLOWED 5U
#define RTE_E_DCMServices_E_NOT_OK 1U
#define RTE_E_DCMServices_E_OK 0U
#define RTE_E_DcmIf_DEM_CLEAR_FAILED 4U
#define RTE_E_DcmIf_DEM_CLEAR_OK 0U
#define RTE_E_DcmIf_DEM_CLEAR_PENDING 5U
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTC 1U
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCKIND 3U
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCORIGIN 2U
#define RTE_E_SecurityAccess_SecurityLevel_0_E_COMPARE_KEY_FAILED 11U
#define RTE_E_SecurityAccess_SecurityLevel_0_E_NOT_OK 1U
#define RTE_E_SecurityAccess_SecurityLevel_0_E_OK 0U
#define RTE_E_SecurityAccess_SecurityLevel_0_E_PENDING 10U

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

/** @req SWS_Rte_01343
 *  @req SWS_Rte_01342
 *  !req SWS_Rte_06524
 *  @req SWS_Rte_01053
 */

extern Std_ReturnType Rte_Write_Dcm_dcm_DataServices_SRWrite1_Data_Write_Data(/*IN*/SRWrite1_Data_DataType data);
extern Std_ReturnType Rte_Write_Dcm_dcm_DataServices_SRWrite2_Data_Write_Data(/*IN*/SRWrite2_Data_DataType data);
extern Std_ReturnType Rte_Read_Dcm_dcm_DataServices_SRRead1_Data_Data(/*OUT*/SRRead1_Data_DataType * data);
extern Std_ReturnType Rte_Read_Dcm_dcm_DataServices_SRRead2_Data_Data(/*OUT*/SRRead2_Data_DataType * data);
extern Std_ReturnType Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_GetSeed(/*IN*/Dcm_OpStatusType OpStatus, /*OUT*/uint8 * Seed, /*OUT*/
        Dcm_NegativeResponseCodeType * ErrorCode);
extern Std_ReturnType Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_CompareKey(/*IN*/const uint8 * Key, /*IN*/Dcm_OpStatusType OpStatus);
extern Std_ReturnType Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(/*IN*/Dcm_ProtocolType ProtocolID);
extern Std_ReturnType Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(/*IN*/Dcm_ProtocolType ProtocolID);
extern Std_ReturnType Rte_Call_Dcm_dcm_DcmIf_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin);
extern Std_ReturnType Rte_Switch_Dcm_dcm_DcmEcuReset_DcmEcuReset(/*IN*/uint8 mode);
extern Std_ReturnType Rte_Switch_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown(/*IN*/uint8 mode);
extern Std_ReturnType Rte_Switch_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(/*IN*/uint8 mode);
extern Std_ReturnType Rte_Switch_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting(/*IN*/uint8 mode);
extern Std_ReturnType Rte_Switch_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(/*IN*/uint8 mode);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    uint8 _dummy;
} Rte_CDS_Dcm;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_Dcm const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_Dcm;
#define self (Rte_Inst_Dcm)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- Dcm_GetActiveProtocol */
#if defined(RTE_RUNNABLEAPI_Dcm_GetActiveProtocol)

Std_ReturnType Dcm_GetActiveProtocol(/*OUT*/Dcm_ProtocolType * ActiveProtocol);

#endif

/** --- Dcm_GetSecurityLevel */
#if defined(RTE_RUNNABLEAPI_Dcm_GetSecurityLevel)

Std_ReturnType Dcm_GetSecurityLevel(/*OUT*/Dcm_SecLevelType * SecLevel);

#endif

/** --- Dcm_GetSesCtrlType */
#if defined(RTE_RUNNABLEAPI_Dcm_GetSesCtrlType)

Std_ReturnType Dcm_GetSesCtrlType(/*OUT*/Dcm_SesCtrlType * SesCtrlType);

#endif

/** --- Dcm_MainFunction */
#if defined(RTE_RUNNABLEAPI_Dcm_MainFunction)

void Dcm_MainFunction(void);

static inline Std_ReturnType Rte_Read_DataServices_SRRead1_Data_Data(/*OUT*/SRRead1_Data_DataType * data) {
    return Rte_Read_Dcm_dcm_DataServices_SRRead1_Data_Data(data);
}

static inline Std_ReturnType Rte_Read_DataServices_SRRead2_Data_Data(/*OUT*/SRRead2_Data_DataType * data) {
    return Rte_Read_Dcm_dcm_DataServices_SRRead2_Data_Data(data);
}

static inline Std_ReturnType Rte_Write_DataServices_SRWrite1_Data_Write_Data(/*IN*/SRWrite1_Data_DataType data) {
    return Rte_Write_Dcm_dcm_DataServices_SRWrite1_Data_Write_Data(data);
}

static inline Std_ReturnType Rte_Write_DataServices_SRWrite2_Data_Write_Data(/*IN*/SRWrite2_Data_DataType data) {
    return Rte_Write_Dcm_dcm_DataServices_SRWrite2_Data_Write_Data(data);
}

static inline Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_GetSeed(/*IN*/Dcm_OpStatusType OpStatus, /*OUT*/uint8 * Seed, /*OUT*/Dcm_NegativeResponseCodeType * ErrorCode) {
    return Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_GetSeed(OpStatus, Seed, ErrorCode);
}

static inline Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_CompareKey(/*IN*/const uint8 * Key, /*IN*/Dcm_OpStatusType OpStatus) {
    return Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_CompareKey(Key, OpStatus);
}

static inline Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(/*IN*/Dcm_ProtocolType ProtocolID) {
    return Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(ProtocolID);
}

static inline Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(/*IN*/Dcm_ProtocolType ProtocolID) {
    return Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(ProtocolID);
}

static inline Std_ReturnType Rte_Call_DcmIf_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin) {
    return Rte_Call_Dcm_dcm_DcmIf_ClearDTC(DTC, DTCFormat, DTCOrigin);
}

static inline Std_ReturnType Rte_Switch_DcmEcuReset_DcmEcuReset(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmEcuReset_DcmEcuReset(mode);
}

static inline Std_ReturnType Rte_Switch_DcmRapidPowerShutDown_DcmRapidPowerShutDown(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown(mode);
}

static inline Std_ReturnType Rte_Switch_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(mode);
}

static inline Std_ReturnType Rte_Switch_DcmControlDTCSetting_DcmControlDTCSetting(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting(mode);
}

static inline Std_ReturnType Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(mode);
}

#endif

/** --- Dcm_ResetToDefaultSession */
#if defined(RTE_RUNNABLEAPI_Dcm_ResetToDefaultSession)

Std_ReturnType Dcm_ResetToDefaultSession(void);

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
Std_ReturnType Dcm_GetActiveProtocol(/*OUT*/Dcm_ProtocolType * ActiveProtocol);

Std_ReturnType Dcm_GetSecurityLevel(/*OUT*/Dcm_SecLevelType * SecLevel);

Std_ReturnType Dcm_GetSesCtrlType(/*OUT*/Dcm_SesCtrlType * SesCtrlType);

void Dcm_MainFunction(void);

static inline Std_ReturnType Rte_Read_DataServices_SRRead1_Data_Data(/*OUT*/SRRead1_Data_DataType * data) {
    return Rte_Read_Dcm_dcm_DataServices_SRRead1_Data_Data(data);
}

static inline Std_ReturnType Rte_Read_DataServices_SRRead2_Data_Data(/*OUT*/SRRead2_Data_DataType * data) {
    return Rte_Read_Dcm_dcm_DataServices_SRRead2_Data_Data(data);
}

static inline Std_ReturnType Rte_Write_DataServices_SRWrite1_Data_Write_Data(/*IN*/SRWrite1_Data_DataType data) {
    return Rte_Write_Dcm_dcm_DataServices_SRWrite1_Data_Write_Data(data);
}

static inline Std_ReturnType Rte_Write_DataServices_SRWrite2_Data_Write_Data(/*IN*/SRWrite2_Data_DataType data) {
    return Rte_Write_Dcm_dcm_DataServices_SRWrite2_Data_Write_Data(data);
}

static inline Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_GetSeed(/*IN*/Dcm_OpStatusType OpStatus, /*OUT*/uint8 * Seed, /*OUT*/
        Dcm_NegativeResponseCodeType * ErrorCode) {
    return Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_GetSeed(OpStatus, Seed, ErrorCode);
}

static inline Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_CompareKey(/*IN*/const uint8 * Key, /*IN*/Dcm_OpStatusType OpStatus) {
    return Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_CompareKey(Key, OpStatus);
}

static inline Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(/*IN*/Dcm_ProtocolType ProtocolID) {
    return Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(ProtocolID);
}

static inline Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(/*IN*/Dcm_ProtocolType ProtocolID) {
    return Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(ProtocolID);
}

static inline Std_ReturnType Rte_Call_DcmIf_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin) {
    return Rte_Call_Dcm_dcm_DcmIf_ClearDTC(DTC, DTCFormat, DTCOrigin);
}

static inline Std_ReturnType Rte_Switch_DcmEcuReset_DcmEcuReset(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmEcuReset_DcmEcuReset(mode);
}

static inline Std_ReturnType Rte_Switch_DcmRapidPowerShutDown_DcmRapidPowerShutDown(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown(mode);
}

static inline Std_ReturnType Rte_Switch_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(mode);
}

static inline Std_ReturnType Rte_Switch_DcmControlDTCSetting_DcmControlDTCSetting(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting(mode);
}

static inline Std_ReturnType Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(/*IN*/uint8 mode) {
    return Rte_Switch_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(mode);
}

Std_ReturnType Dcm_ResetToDefaultSession(void);
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_DCM_H_ */
