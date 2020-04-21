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
/** ------ Blinker */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcWriterType_SwcWriter_Blinker_Write(/*IN*/DigitalLevel Level) {
    return Rte_Call_IoHwAb_ioHwAb_Digital_DigitalSignal_LED2_Write(Level);
}

/** ------ ComMControl */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcWriterType_SwcWriter_ComMControl_requestedMode(/*IN*/ComMModeEnum value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (SwcWriter_ComMControl_to_bswm_modeRequestPort_SwcStartCommunication) */
    {
        SYS_CALL_SuspendOSInterrupts();
        Rte_Buffer_bswm_modeRequestPort_SwcStartCommunication_requestedMode = value;
        SYS_CALL_ResumeOSInterrupts();
    }

    return retVal;
}

/** ------ CommandPort */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_SwcWriterType_SwcWriter_CommandPort_cmd(/*OUT*/TestCmdType * value) { /*lint -e818 AOUTOSAR API SWS_Rte_01091 */
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    retVal = RTE_E_UNCONNECTED;

    return retVal;
}

/** ------ InputPort */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_SwcWriterType_SwcWriter_InputPort_data1(/*OUT*/uint32 * value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Receiver (SR3) */
    {
        SYS_CALL_AtomicCopy32(*value, Rte_Buffer_SwcWriter_InputPort_data1);
    }

    return retVal;
}

/** ------ Mode */

/** ------ SenderPort */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcWriterType_SwcWriter_SenderPort_data1(/*IN*/uint32 value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (Tx01data1ISig) @req SWS_Rte_04505, @req SWS_Rte_06023 */

    retVal |= Com_SendSignal(ComConf_ComSignal_txsignal01, &value);

    return retVal;
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
