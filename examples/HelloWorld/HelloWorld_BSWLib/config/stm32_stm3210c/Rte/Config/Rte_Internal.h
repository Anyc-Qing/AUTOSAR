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
typedef struct {
    struct {
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } UM_ComMUser_currentMode;
    } comM;
} ComM_ModeMachinesType;

typedef struct {
    struct {
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } DcmEcuReset_DcmEcuReset;
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } DcmRapidPowerShutDown_DcmRapidPowerShutDown;
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel;
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } DcmControlDTCSetting_DcmControlDTCSetting;
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } DcmDiagnosticSessionControl_DcmDiagnosticSessionControl;
    } dcm;
} Dcm_ModeMachinesType;

typedef struct {
    struct {
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } currentMode_currentMode;
    } ecuM;
} EcuM_ModeMachinesType;

typedef struct {
    struct {
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } mode_Supervised100msTask_currentMode;
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } globalMode_currentMode;
    } wdgm;
} WdgM_ModeMachinesType;

/** --- MODE MACHINE TRANSITION DEFINES ----------------------------------------------------- */
#define RTE_TRANSITION_ComM_comM_UM_ComMUser_currentMode 3
#define RTE_TRANSITION_Dcm_dcm_DcmEcuReset_DcmEcuReset 7
#define RTE_TRANSITION_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown 2
#define RTE_TRANSITION_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel 12
#define RTE_TRANSITION_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting 2
#define RTE_TRANSITION_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl 1
#define RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode 6
#define RTE_TRANSITION_WdgM_wdgm_mode_Supervised100msTask_currentMode 255
#define RTE_TRANSITION_WdgM_wdgm_globalMode_currentMode 255

/** --- MODE MACHINE VALUE DEFINES ---------------------------------------------------------- */
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_FULL_COMMUNICATION 0
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_NO_COMMUNICATION 1
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_SILENT_COMMUNICATION 2
#define RTE_MODE_Dcm_dcm_DcmEcuReset_DcmEcuReset_EXECUTE 0
#define RTE_MODE_Dcm_dcm_DcmEcuReset_DcmEcuReset_HARD 1
#define RTE_MODE_Dcm_dcm_DcmEcuReset_DcmEcuReset_JUMPTOBOOTLOADER 2
#define RTE_MODE_Dcm_dcm_DcmEcuReset_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER 3
#define RTE_MODE_Dcm_dcm_DcmEcuReset_DcmEcuReset_KEYONOFF 4
#define RTE_MODE_Dcm_dcm_DcmEcuReset_DcmEcuReset_NONE 5
#define RTE_MODE_Dcm_dcm_DcmEcuReset_DcmEcuReset_SOFT 6
#define RTE_MODE_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN 0
#define RTE_MODE_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN 1
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_DISABLE_RX_ENABLE_TX_NM 0
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_DISABLE_RX_ENABLE_TX_NORM 1
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_DISABLE_RX_ENABLE_TX_NORM_NM 2
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_DISABLE_RX_TX_NM 3
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_DISABLE_RX_TX_NORMAL 4
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_DISABLE_RX_TX_NORM_NM 5
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_ENABLE_RX_DISABLE_TX_NM 6
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_ENABLE_RX_DISABLE_TX_NORM 7
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_ENABLE_RX_DISABLE_TX_NORM_NM 8
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_ENABLE_RX_TX_NM 9
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_ENABLE_RX_TX_NORM 10
#define RTE_MODE_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel_DCM_ENABLE_RX_TX_NORM_NM 11
#define RTE_MODE_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting_DISABLEDTCSETTING 0
#define RTE_MODE_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting_ENABLEDTCSETTING 1
#define RTE_MODE_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_DcmConf_DcmDspSessionRow_Default_Session 0
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_POST_RUN 0
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_RUN 1
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_SHUTDOWN 2
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_SLEEP 3
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_STARTUP 4
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_WAKE_SLEEP 5
#define RTE_MODE_WdgM_wdgm_mode_Supervised100msTask_currentMode_SUPERVISION_DEACTIVATED 0
#define RTE_MODE_WdgM_wdgm_mode_Supervised100msTask_currentMode_SUPERVISION_EXPIRED 2
#define RTE_MODE_WdgM_wdgm_mode_Supervised100msTask_currentMode_SUPERVISION_FAILED 1
#define RTE_MODE_WdgM_wdgm_mode_Supervised100msTask_currentMode_SUPERVISION_OK 4
#define RTE_MODE_WdgM_wdgm_mode_Supervised100msTask_currentMode_SUPERVISION_STOPPED 3
#define RTE_MODE_WdgM_wdgm_globalMode_currentMode_SUPERVISION_DEACTIVATED 0
#define RTE_MODE_WdgM_wdgm_globalMode_currentMode_SUPERVISION_EXPIRED 2
#define RTE_MODE_WdgM_wdgm_globalMode_currentMode_SUPERVISION_FAILED 1
#define RTE_MODE_WdgM_wdgm_globalMode_currentMode_SUPERVISION_OK 4
#define RTE_MODE_WdgM_wdgm_globalMode_currentMode_SUPERVISION_STOPPED 3

/** --- EXCLUSIVE AREA TYPES ---------------------------------------------------------------- */
typedef struct {
    boolean entered;
} ExclusiveAreaType;

/** --- EXPORTED FUNCTIONS ------------------------------------------------------------------ */
/** === BswM ======================================================================= */
/** --- bswm -------------------------------------------------------------------- */

/** ------ modeRequestPort_SwcStartCommunication */
Std_ReturnType Rte_Read_BswM_bswm_modeRequestPort_SwcStartCommunication_requestedMode(/*OUT*/ComMModeEnum * data);

/** ------ modeRequestPort_WdgMMode */
Std_ReturnType Rte_Read_BswM_bswm_modeRequestPort_WdgMMode_requestedMode(/*OUT*/WdgMModeEnum * data);

/** === ComM ======================================================================= */
/** --- comM -------------------------------------------------------------------- */

/** ------ UM_ComMUser */
Std_ReturnType Rte_Switch_ComM_comM_UM_ComMUser_currentMode(uint8 mode);

/** ------ UR_ComMUser */
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetCurrentComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetMaxComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetRequestedComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_RequestComMode(/*IN*/ComM_ModeType ComMode);

/** === Dcm ======================================================================= */
/** --- dcm -------------------------------------------------------------------- */

/** ------ CallbackDCMRequestServices_DcmDslCallbackDCMRequestService */
Std_ReturnType Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(/*IN*/Dcm_ProtocolType ProtocolID);
Std_ReturnType Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(/*IN*/Dcm_ProtocolType ProtocolID);

/** ------ DCMServices */
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_GetActiveProtocol(/*OUT*/Dcm_ProtocolType * ActiveProtocol);
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_GetSecurityLevel(/*OUT*/Dcm_SecLevelType * SecLevel);
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_GetSesCtrlType(/*OUT*/Dcm_SesCtrlType * SesCtrlType);
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_ResetToDefaultSession(void);

/** ------ DataServices_SRRead1_Data */
Std_ReturnType Rte_Read_Dcm_dcm_DataServices_SRRead1_Data_Data(/*OUT*/SRRead1_Data_DataType * data);

/** ------ DataServices_SRRead2_Data */
Std_ReturnType Rte_Read_Dcm_dcm_DataServices_SRRead2_Data_Data(/*OUT*/SRRead2_Data_DataType * data);

/** ------ DataServices_SRWrite1_Data_Write */
Std_ReturnType Rte_Write_Dcm_dcm_DataServices_SRWrite1_Data_Write_Data(/*IN*/SRWrite1_Data_DataType data);

/** ------ DataServices_SRWrite2_Data_Write */
Std_ReturnType Rte_Write_Dcm_dcm_DataServices_SRWrite2_Data_Write_Data(/*IN*/SRWrite2_Data_DataType data);

/** ------ DcmCommunicationControl_ComMChannel */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(uint8 mode);

/** ------ DcmControlDTCSetting */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting(uint8 mode);

/** ------ DcmDiagnosticSessionControl */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(uint8 mode);

/** ------ DcmEcuReset */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmEcuReset_DcmEcuReset(uint8 mode);

/** ------ DcmIf */
Std_ReturnType Rte_Call_Dcm_dcm_DcmIf_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin);

/** ------ DcmRapidPowerShutDown */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown(uint8 mode);

/** ------ SecurityAccess_SecurityLevel_0 */
Std_ReturnType Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_GetSeed(/*IN*/Dcm_OpStatusType OpStatus, /*OUT*/uint8 * Seed, /*OUT*/
        Dcm_NegativeResponseCodeType * ErrorCode);
Std_ReturnType Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_CompareKey(/*IN*/const uint8 * Key, /*IN*/Dcm_OpStatusType OpStatus);

/** === Dem ======================================================================= */
/** --- dem -------------------------------------------------------------------- */

/** ------ CBInitEvt_TestEvent */
Std_ReturnType Rte_Call_Dem_dem_CBInitEvt_TestEvent_InitMonitorForEvent(/*IN*/Dem_InitMonitorReasonType InitMonitorReason);
Std_ReturnType Rte_Call_Dem_dem_CBInitEvt_TestEvent_InitMonitorForEvent(/*IN*/Dem_InitMonitorReasonType InitMonitorReason);

/** ------ ControlEventAvailable_TestEvent */
Std_ReturnType Rte_Call_Dem_dem_ControlEventAvailable_TestEvent_SetEventAvailable(/*IN*/boolean AvailableStatus);

/** ------ Dcm */
Std_ReturnType Rte_Call_Dem_dem_Dcm_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin);

/** ------ Event_TestEvent */
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_ClearPrestoredFreezeFrame(void);
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_PrestoreFreezeFrame(void);
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_ResetEventStatus(void);
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_SetEventDisabled(void);
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_SetEventStatus(/*IN*/Dem_EventStatusType EventStatus);

/** ------ EvtInfo_TestEvent */
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetDTCOfEvent(/*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/uint32 * DTCOfEvent);
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventExtendedDataRecord(/*IN*/uint8 RecordNumber, /*OUT*/uint8 * DestBuffer);
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventFailed(/*OUT*/boolean * EventFailed);
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventFreezeFrameData(/*IN*/uint8 RecordNumber, /*IN*/boolean ReportTotalRecord, /*IN*/
        uint16 DataId, /*OUT*/uint8 * DestBuffer);
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventStatus(/*OUT*/Dem_EventStatusExtendedType * EventStatusExtended);
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventTested(/*OUT*/boolean * EventTested);
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetFaultDetectionCounter(/*OUT*/sint8 * FaultDetectionCounter);

/** ------ GeneralEvtInfo */
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetDTCOfEvent(/*IN*/Dem_EventIdType EventId, /*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/
        uint32 * DTCOfEvent);
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventExtendedDataRecord(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*OUT*/
        uint8 * DestBuffer);
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventFailed(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventFailed);
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventFreezeFrameData(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*IN*/
        boolean ReportTotalRecord, /*IN*/uint16 DataId, /*OUT*/uint8 * DestBuffer);
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventStatus(/*IN*/Dem_EventIdType EventId, /*OUT*/
        Dem_EventStatusExtendedType * EventStatusExtended);
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventTested(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventTested);
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetFaultDetectionCounter(/*IN*/Dem_EventIdType EventId, /*OUT*/sint8 * FaultDetectionCounter);

/** ------ OpCycle_DemOperationCycle */
Std_ReturnType Rte_Call_Dem_dem_OpCycle_DemOperationCycle_SetOperationCycleState(/*IN*/Dem_OperationCycleStateType CycleState);

/** === Det ======================================================================= */
/** --- det -------------------------------------------------------------------- */

/** ------ Det_DetPortReader_Inst */
Std_ReturnType Rte_Call_Det_det_Det_DetPortReader_Inst_ReportError(/*IN*/uint8 ApiId, /*IN*/uint8 ErrorId);

/** === Dlt ======================================================================= */
/** --- dlt -------------------------------------------------------------------- */

/** ------ Dlt_service */
Std_ReturnType Rte_Call_Dlt_dlt_Dlt_service_RegisterContext(/*IN*/const uint8 * app_id, /*IN*/const uint8 * context_id, /*IN*/
        constUint8Ptr app_description, /*IN*/uint8 len_app_description, /*IN*/constUint8Ptr context_description, /*IN*/uint8 len_context_description);
Std_ReturnType Rte_Call_Dlt_dlt_Dlt_service_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length);
Std_ReturnType Rte_Call_Dlt_dlt_Dlt_service_SendTraceMessage(/*IN*/const Dlt_MessageTraceInfoType * trace_info, /*IN*/constUint8Ptr trace_data, /*IN*/
        uint16 trace_data_length);

/** === EcuM ======================================================================= */
/** --- ecuM -------------------------------------------------------------------- */

/** ------ SR_HelloWorldUser */
Std_ReturnType Rte_Call_EcuM_ecuM_SR_HelloWorldUser_ReleasePOSTRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_HelloWorldUser_ReleaseRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_HelloWorldUser_RequestPOSTRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_HelloWorldUser_RequestRUN(void);

/** ------ bootTarget */
Std_ReturnType Rte_Call_EcuM_ecuM_bootTarget_GetBootTarget(/*OUT*/EcuM_BootTargetType * target);
Std_ReturnType Rte_Call_EcuM_ecuM_bootTarget_SelectBootTarget(/*IN*/EcuM_BootTargetType target);

/** ------ currentMode */
Std_ReturnType Rte_Switch_EcuM_ecuM_currentMode_currentMode(uint8 mode);

/** ------ shutdownTarget */
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode);

/** === IoHwAb ======================================================================= */
/** --- ioHwAb -------------------------------------------------------------------- */

/** ------ Analog_AnalogSignal */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_Analog_AnalogSignal_Read(/*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality);

/** ------ Digital_DigitalSignal_LED1 */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_Digital_DigitalSignal_LED1_Write(/*IN*/DigitalLevel Level);

/** ------ Digital_DigitalSignal_LED2 */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_Digital_DigitalSignal_LED2_Write(/*IN*/DigitalLevel Level);

/** ------ Pwm_PwmSignal_LED3Duty */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_Pwm_PwmSignal_LED3Duty_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality);

/** === NvM ======================================================================= */
/** --- nvm -------------------------------------------------------------------- */

/** ------ PAdmin_SwcMem_Block1 */
Std_ReturnType Rte_Call_NvM_nvm_PAdmin_SwcMem_Block1_SetBlockProtection(/*IN*/boolean ProtectionEnabled);

/** ------ PAdmin_SwcMem_Block2 */
Std_ReturnType Rte_Call_NvM_nvm_PAdmin_SwcMem_Block2_SetBlockProtection(/*IN*/boolean ProtectionEnabled);

/** ------ PNInitBlock_SwcMem_Block1 */
Std_ReturnType Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block1_InitBlock(void);

/** ------ PNInitBlock_SwcMem_Block2 */
Std_ReturnType Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block2_InitBlock(void);

/** ------ PNJobFinished_SwcMem_Block1 */
Std_ReturnType Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block1_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

/** ------ PNJobFinished_SwcMem_Block2 */
Std_ReturnType Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block2_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

/** ------ PS_SwcMem_Block1 */
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_EraseNvBlock(void);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_GetDataIndex(/*OUT*/uint8 * DataIndexPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_GetErrorStatus(/*OUT*/NvM_RequestResultType * RequestResultPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_InvalidateNvBlock(void);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_ReadBlock(/*IN*/VoidPtr DstPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_RestoreBlockDefaults(/*IN*/VoidPtr DstPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_SetDataIndex(/*IN*/uint8 DataIndex);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_SetRamBlockStatus(/*IN*/boolean BlockChanged);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_WriteBlock(/*IN*/ConstVoidPtr SrcPtr);

/** ------ PS_SwcMem_Block2 */
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_EraseNvBlock(void);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_GetDataIndex(/*OUT*/uint8 * DataIndexPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_GetErrorStatus(/*OUT*/NvM_RequestResultType * RequestResultPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_InvalidateNvBlock(void);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_ReadBlock(/*IN*/VoidPtr DstPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_RestoreBlockDefaults(/*IN*/VoidPtr DstPtr);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_SetDataIndex(/*IN*/uint8 DataIndex);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_SetRamBlockStatus(/*IN*/boolean BlockChanged);
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_WriteBlock(/*IN*/ConstVoidPtr SrcPtr);

/** === Os ======================================================================= */
/** --- os -------------------------------------------------------------------- */

/** ------ OsService_OsCounter */
Std_ReturnType Rte_Call_Os_os_OsService_OsCounter_GetCounterValue(/*OUT*/TickType * value);
Std_ReturnType Rte_Call_Os_os_OsService_OsCounter_GetElapsedValue(/*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue);

/** === SwcMemType ======================================================================= */
/** --- SwcMem -------------------------------------------------------------------- */

/** ------ JobFinishedPIM1 */
Std_ReturnType Rte_Call_SwcMemType_SwcMem_JobFinishedPIM1_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

/** ------ JobFinishedPIM2 */
Std_ReturnType Rte_Call_SwcMemType_SwcMem_JobFinishedPIM2_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

/** ------ Mode */
// Empty
/** ------ ServicePIM1 */
Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM1_SetRamBlockStatus(/*IN*/boolean BlockChanged);

/** ------ ServicePIM2 */
Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM2_ReadBlock(/*IN*/VoidPtr DstPtr);
Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM2_WriteBlock(/*IN*/ConstVoidPtr SrcPtr);

/** ------ SwcMemRx */
Std_ReturnType Rte_Read_SwcMemType_SwcMem_SwcMemRx_command(/*OUT*/NvmCmdType * data);
Std_ReturnType Rte_Read_SwcMemType_SwcMem_SwcMemRx_blockId(/*OUT*/uint8 * data);
Std_ReturnType Rte_Read_SwcMemType_SwcMem_SwcMemRx_payload(/*OUT*/uint32 * data);

/** ------ SwcMemTx */
Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_result(/*IN*/NvmResType data);
Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_blockId(/*IN*/uint8 data);
Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_payload(/*IN*/uint32 data);

/** === SwcReaderType ======================================================================= */
/** --- SwcReader -------------------------------------------------------------------- */

/** ------ AdcResult */
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_AdcResult_data1(/*IN*/sint32 data);

/** ------ AnalogReader */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_AnalogReader_Read(/*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality);

/** ------ Blinker */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Blinker_Write(/*IN*/DigitalLevel Level);

/** ------ Dem_TestEvent */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Dem_TestEvent_SetEventStatus(/*IN*/Dem_EventStatusType EventStatus);

/** ------ Det */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Det_ReportError(/*IN*/uint8 ApiId, /*IN*/uint8 ErrorId);

/** ------ Dlt */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Dlt_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length);

/** ------ Mode */
// Empty
/** ------ OsCounter */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_OsCounter_GetCounterValue(/*OUT*/TickType * value);
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_OsCounter_GetElapsedValue(/*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue);

/** ------ PWMWriter */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_PWMWriter_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality);

/** ------ ReceiverPort */
Std_ReturnType Rte_Read_SwcReaderType_SwcReader_ReceiverPort_data1(/*OUT*/uint32 * data);
Std_ReturnType Rte_Read_SwcReaderType_SwcReader_ReceiverPort_cmd(/*OUT*/TestCmdType * data);

/** ------ ResultPort */
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_ResultPort_data1(/*IN*/uint32 data);
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_ResultPort_cmd(/*IN*/TestCmdType data);

/** ------ RunControl */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_RunControl_RequestRUN(void);
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_RunControl_ReleaseRUN(void);

/** ------ WdgM_AliveSup */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_WdgM_AliveSup_CheckpointReached(/*IN*/WdgM_CheckpointIdType CheckpointID);

/** ------ WdgM_LocalMode */
// Empty
/** ------ WdgM_StateReq */
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_WdgM_StateReq_requestedMode(/*IN*/WdgMModeEnum data);

/** === SwcWriterType ======================================================================= */
/** --- SwcWriter -------------------------------------------------------------------- */

/** ------ Blinker */
Std_ReturnType Rte_Call_SwcWriterType_SwcWriter_Blinker_Write(/*IN*/DigitalLevel Level);

/** ------ ComMControl */
Std_ReturnType Rte_Write_SwcWriterType_SwcWriter_ComMControl_requestedMode(/*IN*/ComMModeEnum data);

/** ------ CommandPort */
Std_ReturnType Rte_Read_SwcWriterType_SwcWriter_CommandPort_data1(/*OUT*/uint32 * data);
Std_ReturnType Rte_Read_SwcWriterType_SwcWriter_CommandPort_cmd(/*OUT*/TestCmdType * data);

/** ------ InputPort */
Std_ReturnType Rte_Read_SwcWriterType_SwcWriter_InputPort_data1(/*OUT*/uint32 * data);
Std_ReturnType Rte_Read_SwcWriterType_SwcWriter_InputPort_cmd(/*OUT*/TestCmdType * data);

/** ------ Mode */
// Empty
/** ------ SenderPort */
Std_ReturnType Rte_Write_SwcWriterType_SwcWriter_SenderPort_data1(/*IN*/uint32 data);
Std_ReturnType Rte_Write_SwcWriterType_SwcWriter_SenderPort_cmd(/*IN*/TestCmdType data);

/** === WdgM ======================================================================= */
/** --- wdgm -------------------------------------------------------------------- */

/** ------ alive_Supervised100msTask */
Std_ReturnType Rte_Call_WdgM_wdgm_alive_Supervised100msTask_CheckpointReached(/*IN*/WdgM_CheckpointIdType CheckpointID);

/** ------ globalMode */
Std_ReturnType Rte_Switch_WdgM_wdgm_globalMode_currentMode(uint8 mode);

/** ------ mode_Supervised100msTask */
Std_ReturnType Rte_Switch_WdgM_wdgm_mode_Supervised100msTask_currentMode(uint8 mode);

/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */
/*lint -e451 AUTOSAR API SWS_MemMap_00003 */

extern int compare_uint16(void *a, void *b, size_t s);

#endif /* RTE_INTERNAL_H_ */

