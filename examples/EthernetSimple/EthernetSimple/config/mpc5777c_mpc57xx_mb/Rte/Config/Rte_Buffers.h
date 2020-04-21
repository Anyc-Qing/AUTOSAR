#ifndef RTE_BUFFERS_H_
#define RTE_BUFFERS_H_

#include <Rte_Internal.h>

void Rte_Internal_Init_Buffers(void);

/** === BswM Data =============================================================== */

extern ComMModeEnum Rte_Buffer_bswm_modeRequestPort_SwcStartCommunication_requestedMode;

/** === ComM Data =============================================================== */

extern ComM_ModeMachinesType ComM_ModeMachines;

/** === Dlt Data =============================================================== */

/** === EcuM Data =============================================================== */

extern EcuM_ModeMachinesType EcuM_ModeMachines;

/** === IoHwAb Data =============================================================== */

/** === SwcReaderType Data =============================================================== */

/** === SwcWriterType Data =============================================================== */

extern uint32 Rte_Buffer_SwcWriter_InputPort_data1;

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

/** --- EXTERNALS --------------------------------------------------------------------------- */
extern Std_ReturnType Rte_comM_GetCurrentComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_GetMaxComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_GetRequestedComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_RequestComMode(/*IN*/ComM_UserHandleType portDefArg1, /*IN*/ComM_ModeType ComMode);
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
extern Std_ReturnType Rte_ioHwAb_DigitalWrite(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DigitalLevel Level);

#endif /* RTE_BUFFERS_H_ */

