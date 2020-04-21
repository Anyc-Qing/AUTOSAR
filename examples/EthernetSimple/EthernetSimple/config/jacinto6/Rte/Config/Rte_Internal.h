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
        } currentMode_currentMode;
    } ecuM;
} EcuM_ModeMachinesType;

/** --- MODE MACHINE TRANSITION DEFINES ----------------------------------------------------- */
#define RTE_TRANSITION_ComM_comM_UM_ComMUser_currentMode 3
#define RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode 6

/** --- MODE MACHINE VALUE DEFINES ---------------------------------------------------------- */
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_FULL_COMMUNICATION 0
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_NO_COMMUNICATION 1
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_SILENT_COMMUNICATION 2
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_POST_RUN 0
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_RUN 1
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_SHUTDOWN 2
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_SLEEP 3
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_STARTUP 4
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_WAKE_SLEEP 5

/** --- EXCLUSIVE AREA TYPES ---------------------------------------------------------------- */
typedef struct {
    boolean entered;
} ExclusiveAreaType;

/** --- EXPORTED FUNCTIONS ------------------------------------------------------------------ */
/** === BswM ======================================================================= */
/** --- bswm -------------------------------------------------------------------- */

/** ------ modeRequestPort_SwcStartCommunication */
Std_ReturnType Rte_Read_BswM_bswm_modeRequestPort_SwcStartCommunication_requestedMode(/*OUT*/ComMModeEnum * data);

/** === ComM ======================================================================= */
/** --- comM -------------------------------------------------------------------- */

/** ------ UM_ComMUser */
Std_ReturnType Rte_Switch_ComM_comM_UM_ComMUser_currentMode(uint8 mode);

/** ------ UR_ComMUser */
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetCurrentComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetMaxComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetRequestedComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_RequestComMode(/*IN*/ComM_ModeType ComMode);

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

/** ------ SR_EthernetUser */
Std_ReturnType Rte_Call_EcuM_ecuM_SR_EthernetUser_ReleasePOSTRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_EthernetUser_ReleaseRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_EthernetUser_RequestPOSTRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_EthernetUser_RequestRUN(void);

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

/** ------ Digital_DigitalSignal_LED1 */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_Digital_DigitalSignal_LED1_Write(/*IN*/DigitalLevel Level);

/** ------ Digital_DigitalSignal_LED2 */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_Digital_DigitalSignal_LED2_Write(/*IN*/DigitalLevel Level);

/** === SwcReaderType ======================================================================= */
/** --- SwcReader -------------------------------------------------------------------- */

/** ------ Blinker */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Blinker_Write(/*IN*/DigitalLevel Level);

/** ------ Det */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Det_ReportError(/*IN*/uint8 ApiId, /*IN*/uint8 ErrorId);

/** ------ Dlt */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Dlt_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length);

/** ------ Mode */
// Empty
/** ------ ReceiverPort */
Std_ReturnType Rte_Read_SwcReaderType_SwcReader_ReceiverPort_data1(/*OUT*/uint32 * data);

/** ------ ResultPort */
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_ResultPort_data1(/*IN*/uint32 data);

/** ------ RunControl */
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_RunControl_RequestRUN(void);

/** === SwcWriterType ======================================================================= */
/** --- SwcWriter -------------------------------------------------------------------- */

/** ------ Blinker */
Std_ReturnType Rte_Call_SwcWriterType_SwcWriter_Blinker_Write(/*IN*/DigitalLevel Level);

/** ------ ComMControl */
Std_ReturnType Rte_Write_SwcWriterType_SwcWriter_ComMControl_requestedMode(/*IN*/ComMModeEnum data);

/** ------ InputPort */
Std_ReturnType Rte_Read_SwcWriterType_SwcWriter_InputPort_data1(/*OUT*/uint32 * data);

/** ------ Mode */
// Empty
/** ------ SenderPort */
Std_ReturnType Rte_Write_SwcWriterType_SwcWriter_SenderPort_data2(/*IN*/sint32 data);

/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */
/*lint -e451 AUTOSAR API SWS_MemMap_00003 */

extern int compare_uint16(void *a, void *b, size_t s);

#endif /* RTE_INTERNAL_H_ */

