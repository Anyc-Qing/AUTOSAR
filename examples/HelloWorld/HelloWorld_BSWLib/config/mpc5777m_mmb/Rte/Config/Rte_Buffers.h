#ifndef RTE_BUFFERS_H_
#define RTE_BUFFERS_H_

#include <Rte_Internal.h>

void Rte_Internal_Init_Buffers(void);

/** === BswM Data =============================================================== */

extern ComMModeEnum Rte_Buffer_bswm_modeRequestPort_SwcStartCommunication_requestedMode;
extern WdgMModeEnum Rte_Buffer_bswm_modeRequestPort_WdgMMode_requestedMode;

/** === ComM Data =============================================================== */

extern ComM_ModeMachinesType ComM_ModeMachines;

/** === Dcm Data =============================================================== */

extern SRRead1_Data_DataType Rte_Buffer_dcm_DataServices_SRRead1_Data_Data;
extern SRRead2_Data_DataType Rte_Buffer_dcm_DataServices_SRRead2_Data_Data;

extern Dcm_ModeMachinesType Dcm_ModeMachines;

/** === Dem Data =============================================================== */

/** === Det Data =============================================================== */

/** === Dlt Data =============================================================== */

/** === EcuM Data =============================================================== */

extern EcuM_ModeMachinesType EcuM_ModeMachines;

/** === IoHwAb Data =============================================================== */

/** === NvM Data =============================================================== */

/** === Os Data =============================================================== */

/** === SwcMemType Data =============================================================== */

/** === SwcReaderType Data =============================================================== */

/** === SwcWriterType Data =============================================================== */

extern TestCmdType Rte_Buffer_SwcWriter_InputPort_cmd;
extern uint32 Rte_Buffer_SwcWriter_InputPort_data1;

/** === WdgM Data =============================================================== */

extern WdgM_ModeMachinesType WdgM_ModeMachines;

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

/** --- EXTERNALS --------------------------------------------------------------------------- */
extern Std_ReturnType Rte_comM_GetCurrentComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_GetMaxComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_GetRequestedComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_RequestComMode(/*IN*/ComM_UserHandleType portDefArg1, /*IN*/ComM_ModeType ComMode);
extern Std_ReturnType Rte_dcm_Dcm_GetActiveProtocol(/*OUT*/Dcm_ProtocolType * ActiveProtocol);
extern Std_ReturnType Rte_dcm_Dcm_GetSecurityLevel(/*OUT*/Dcm_SecLevelType * SecLevel);
extern Std_ReturnType Rte_dcm_Dcm_GetSesCtrlType(/*OUT*/Dcm_SesCtrlType * SesCtrlType);
extern Std_ReturnType Rte_dcm_Dcm_ResetToDefaultSession(void);
extern Std_ReturnType Rte_dem_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin);
extern Std_ReturnType Rte_dem_ClearPrestoredFreezeFrame(/*IN*/Dem_EventIdType portDefArg1);
extern Std_ReturnType Rte_dem_GetDTCOfEvent(/*IN*/Dem_EventIdType EventId, /*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/uint32 * DTCOfEvent);
extern Std_ReturnType Rte_dem_GetEventExtendedDataRecord(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*OUT*/uint8 * DestBuffer);
extern Std_ReturnType Rte_dem_GetEventFailed(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventFailed);
extern Std_ReturnType Rte_dem_GetEventFreezeFrameData(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*IN*/boolean ReportTotalRecord, /*IN*/
        uint16 DataId, /*OUT*/uint8 * DestBuffer);
extern Std_ReturnType Rte_dem_GetEventStatus(/*IN*/Dem_EventIdType EventId, /*OUT*/Dem_EventStatusExtendedType * EventStatusExtended);
extern Std_ReturnType Rte_dem_GetEventTested(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventTested);
extern Std_ReturnType Rte_dem_GetFaultDetectionCounter(/*IN*/Dem_EventIdType EventId, /*OUT*/sint8 * FaultDetectionCounter);
extern Std_ReturnType Rte_dem_PrestoreFreezeFrame(/*IN*/Dem_EventIdType portDefArg1);
extern Std_ReturnType Rte_dem_ResetEventStatus(/*IN*/Dem_EventIdType portDefArg1);
extern Std_ReturnType Rte_dem_SetEventAvailable(/*IN*/Dem_EventIdType portDefArg1, /*IN*/boolean AvailableStatus);
extern Std_ReturnType Rte_dem_SetEventDisabled(/*IN*/Dem_EventIdType portDefArg1);
extern Std_ReturnType Rte_dem_SetEventStatus(/*IN*/Dem_EventIdType portDefArg1, /*IN*/Dem_EventStatusType EventStatus);
extern Std_ReturnType Rte_dem_SetOperationCycleState(/*IN*/Dem_OperationCycleIdType portDefArg1, /*IN*/Dem_OperationCycleStateType CycleState);
extern Std_ReturnType Rte_det_ReportError(/*IN*/uint16 portDefArg1, /*IN*/uint8 portDefArg2, /*IN*/uint8 ApiId, /*IN*/uint8 ErrorId);
extern Std_ReturnType Rte_dlt_Dlt_RegisterContext(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const uint8 * app_id, /*IN*/const uint8 * context_id, /*IN*/
        constUint8Ptr app_description, /*IN*/uint8 len_app_description, /*IN*/constUint8Ptr context_description, /*IN*/uint8 len_context_description);
extern Std_ReturnType Rte_dlt_Dlt_SendLogMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/
        constUint8Ptr log_data, /*IN*/uint16 log_data_length);
extern Std_ReturnType Rte_dlt_Dlt_SendTraceMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageTraceInfoType * trace_info, /*IN*/
        constUint8Ptr trace_data, /*IN*/uint16 trace_data_length);
extern Std_ReturnType Rte_ecuM_GetBootTarget(/*OUT*/EcuM_BootTargetType * target);
extern Std_ReturnType Rte_ecuM_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
extern Std_ReturnType Rte_ecuM_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
extern Std_ReturnType Rte_ecuM_ReleasePOSTRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_ReleaseRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_RequestPOSTRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_RequestRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_SelectBootTarget(/*IN*/EcuM_BootTargetType target);
extern Std_ReturnType Rte_ecuM_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode);
extern Std_ReturnType Rte_ioHwAb_AnalogRead(/*IN*/IoHwAb_SignalType_ portDefArg1, /*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality);
extern Std_ReturnType Rte_ioHwAb_DigitalWrite(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DigitalLevel Level);
extern Std_ReturnType Rte_ioHwAb_PwmSetDuty(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality);
extern Std_ReturnType Rte_nvm_EraseNvBlock(/*IN*/NvM_BlockIdType portDefArg1);
extern Std_ReturnType Rte_nvm_GetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/uint8 * DataIndexPtr);
extern Std_ReturnType Rte_nvm_GetErrorStatus(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/NvM_RequestResultType * RequestResultPtr);
extern Std_ReturnType Rte_nvm_InvalidateNvBlock(/*IN*/NvM_BlockIdType portDefArg1);
extern Std_ReturnType Rte_nvm_ReadBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr);
extern Std_ReturnType Rte_nvm_RestoreBlockDefaults(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr);
extern Std_ReturnType Rte_nvm_SetBlockProtection(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean ProtectionEnabled);
extern Std_ReturnType Rte_nvm_SetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/uint8 DataIndex);
extern Std_ReturnType Rte_nvm_SetRamBlockStatus(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean BlockChanged);
extern Std_ReturnType Rte_nvm_WriteBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/ConstVoidPtr SrcPtr);
extern Std_ReturnType Rte_os_GetCounterValue(/*IN*/CounterType portDefArg1, /*OUT*/TickType * value);
extern Std_ReturnType Rte_os_GetElapsedValue(/*IN*/CounterType portDefArg1, /*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue);
extern Std_ReturnType Rte_SwcMem_JobFinishedPIM1(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);
extern Std_ReturnType Rte_SwcMem_JobFinishedPIM2(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);
extern Std_ReturnType Rte_wdgm_CheckpointReached(/*IN*/WdgM_SupervisedEntityIdType portDefArg1, /*IN*/WdgM_CheckpointIdType CheckpointID);

#endif /* RTE_BUFFERS_H_ */

