#include <Rte_Internal.h>
#include <Rte_Calprms.h>
#include <Rte_Assert.h>
#include <Rte_Fifo.h>
#include <Com.h>
#include <Os.h>
#include <Ioc.h>
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
/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */

/** --- FUNCTIONS --------------------------------------------------------------------------- */
//lint -save -e715 Ignore unconnected functions
#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
/** ------ AdcResult */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_AdcResult_data1(/*IN*/sint32 value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (TxAdcdata1ISig) @req SWS_Rte_04505, @req SWS_Rte_06023 */

    retVal |= Com_SendSignal(ComConf_ComSignal_AdcValue, &value);

    return retVal;
}

/** ------ AnalogReader */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_AnalogReader_Read(/*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_IoHwAb_ioHwAb_Analog_AnalogSignal_Read(Value, Quality);
}

/** ------ Blinker */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Blinker_Write(/*IN*/DigitalLevel Level) {
    return Rte_Call_IoHwAb_ioHwAb_Digital_DigitalSignal_LED1_Write(Level);
}

/** ------ Dem_TestEvent */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Dem_TestEvent_SetEventStatus(/*IN*/Dem_EventStatusType EventStatus) {
    return Rte_Call_Dem_dem_Event_TestEvent_SetEventStatus(EventStatus);
}

/** ------ Det */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Det_ReportError(/*IN*/uint8 ApiId, /*IN*/uint8 ErrorId) {
    return Rte_Call_Det_det_Det_DetPortReader_Inst_ReportError(ApiId, ErrorId);
}

/** ------ Dlt */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Dlt_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length) {
    return Rte_Call_Dlt_dlt_Dlt_service_SendLogMessage(log_info, log_data, log_data_length);
}

/** ------ Mode */

/** ------ OsCounter */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_OsCounter_GetCounterValue(/*OUT*/TickType * value) {
    return Rte_Call_Os_os_OsService_OsCounter_GetCounterValue(value);
}

//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_OsCounter_GetElapsedValue(/*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue) {
    return Rte_Call_Os_os_OsService_OsCounter_GetElapsedValue(value, elapsedValue);
}

/** ------ PWMWriter */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_PWMWriter_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_IoHwAb_ioHwAb_Pwm_PwmSignal_LED3Duty_Set(DutyValue, Quality);
}

/** ------ ReceiverPort */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_SwcReaderType_SwcReader_ReceiverPort_data1(/*OUT*/uint32 * value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Receiver (Rx01data1ISig) @req SWS_Rte_04505, @req SWS_Rte_06023 */

    retVal |= Com_ReceiveSignal(ComConf_ComSignal_rxsignal01, value);

    return retVal;
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_SwcReaderType_SwcReader_ReceiverPort_cmd(/*OUT*/TestCmdType * value) { /*lint -e818 AOUTOSAR API SWS_Rte_01091 */
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    retVal = RTE_E_UNCONNECTED;

    return retVal;
}

/** ------ ResultPort */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_ResultPort_data1(/*IN*/uint32 value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (SR3) */
    {
        SYS_CALL_AtomicCopy32(Rte_Buffer_SwcWriter_InputPort_data1, value);
    }

    return retVal;
}

/** ------ RunControl */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_RunControl_RequestRUN(void) {
    return Rte_Call_EcuM_ecuM_SR_HelloWorldUser_RequestRUN();
}

//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_RunControl_ReleaseRUN(void) {
    return Rte_Call_EcuM_ecuM_SR_HelloWorldUser_ReleaseRUN();
}

/** ------ WdgM_AliveSup */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcReaderType_SwcReader_WdgM_AliveSup_CheckpointReached(/*IN*/WdgM_CheckpointIdType CheckpointID) {
    return Rte_Call_WdgM_wdgm_alive_Supervised100msTask_CheckpointReached(CheckpointID);
}

/** ------ WdgM_LocalMode */

/** ------ WdgM_StateReq */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcReaderType_SwcReader_WdgM_StateReq_requestedMode(/*IN*/WdgMModeEnum value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (SwcReader_WdgM_StateReq_to_bswm_modeRequestPort_WdgMMode) */
    {
        SYS_CALL_SuspendOSInterrupts();
        Rte_Buffer_bswm_modeRequestPort_WdgMMode_requestedMode = value;
        SYS_CALL_ResumeOSInterrupts();
    }

    return retVal;
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
