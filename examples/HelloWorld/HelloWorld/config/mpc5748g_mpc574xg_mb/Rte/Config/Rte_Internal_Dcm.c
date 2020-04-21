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
/** ------ CallbackDCMRequestServices_DcmDslCallbackDCMRequestService */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(/*IN*/Dcm_ProtocolType ProtocolID) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(/*IN*/Dcm_ProtocolType ProtocolID) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

/** ------ DCMServices */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_GetActiveProtocol(/*OUT*/Dcm_ProtocolType * ActiveProtocol) {
    return Rte_dcm_Dcm_GetActiveProtocol(ActiveProtocol);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_GetSecurityLevel(/*OUT*/Dcm_SecLevelType * SecLevel) {
    return Rte_dcm_Dcm_GetSecurityLevel(SecLevel);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_GetSesCtrlType(/*OUT*/Dcm_SesCtrlType * SesCtrlType) {
    return Rte_dcm_Dcm_GetSesCtrlType(SesCtrlType);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_DCMServices_ResetToDefaultSession(void) {
    return Rte_dcm_Dcm_ResetToDefaultSession();
}

/** ------ DataServices_SRRead1_Data */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_Dcm_dcm_DataServices_SRRead1_Data_Data(/*OUT*/SRRead1_Data_DataType * value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Receiver (dcm_DataServices_SRWrite1_Data_Write_to_dcm_DataServices_SRRead1_Data) */
    {
        SYS_CALL_SuspendOSInterrupts();
        *value = Rte_Buffer_dcm_DataServices_SRRead1_Data_Data;
        SYS_CALL_ResumeOSInterrupts();
    }

    return retVal;
}

/** ------ DataServices_SRRead2_Data */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_Dcm_dcm_DataServices_SRRead2_Data_Data(/*OUT*/SRRead2_Data_DataType * value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Receiver (dcm_DataServices_SRWrite2_Data_Write_to_dcm_DataServices_SRRead2_Data) */
    {
        SYS_CALL_SuspendOSInterrupts();
        *value = Rte_Buffer_dcm_DataServices_SRRead2_Data_Data;
        SYS_CALL_ResumeOSInterrupts();
    }

    return retVal;
}

/** ------ DataServices_SRRead3_Data */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_Dcm_dcm_DataServices_SRRead3_Data_Data(/*OUT*/SRRead3_Data_DataType * value) { /*lint -e818 AOUTOSAR API SWS_Rte_01091 */
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    retVal = RTE_E_UNCONNECTED;

    return retVal;
}

/** ------ DataServices_SRWrite1_Data_Write */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_Dcm_dcm_DataServices_SRWrite1_Data_Write_Data(/*IN*/SRWrite1_Data_DataType value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (dcm_DataServices_SRWrite1_Data_Write_to_dcm_DataServices_SRRead1_Data) */
    {
        SYS_CALL_SuspendOSInterrupts();
        Rte_Buffer_dcm_DataServices_SRRead1_Data_Data = (SRRead1_Data_DataType) value;
        SYS_CALL_ResumeOSInterrupts();
    }

    return retVal;
}

/** ------ DataServices_SRWrite2_Data_Write */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_Dcm_dcm_DataServices_SRWrite2_Data_Write_Data(/*IN*/SRWrite2_Data_DataType value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (dcm_DataServices_SRWrite2_Data_Write_to_dcm_DataServices_SRRead2_Data) */
    {
        SYS_CALL_SuspendOSInterrupts();
        Rte_Buffer_dcm_DataServices_SRRead2_Data_Data = (SRRead2_Data_DataType) value;
        SYS_CALL_ResumeOSInterrupts();
    }

    return retVal;
}

/** ------ DcmCommunicationControl_ComMChannel */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(/*IN*/uint8 mode) {
    if (Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.nextMode
            == RTE_TRANSITION_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel) {
        {
            SYS_CALL_SuspendOSInterrupts();
            Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.nextMode = mode;
            SYS_CALL_ResumeOSInterrupts();
        }
        // Activate runnables
        // No runnables to activate
        SYS_CALL_SuspendOSInterrupts();
        Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.currentMode =
                Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.nextMode;
        Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.nextMode =
                RTE_TRANSITION_Dcm_dcm_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel;
        SYS_CALL_ResumeOSInterrupts();

        return RTE_E_OK;
    } else {
        return RTE_E_LIMIT;
    }
}

/** ------ DcmControlDTCSetting */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting(/*IN*/uint8 mode) {
    if (Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.nextMode == RTE_TRANSITION_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting) {
        {
            SYS_CALL_SuspendOSInterrupts();
            Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.nextMode = mode;
            SYS_CALL_ResumeOSInterrupts();
        }
        // Activate runnables
        // No runnables to activate
        SYS_CALL_SuspendOSInterrupts();
        Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.currentMode =
                Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.nextMode;
        Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.nextMode = RTE_TRANSITION_Dcm_dcm_DcmControlDTCSetting_DcmControlDTCSetting;
        SYS_CALL_ResumeOSInterrupts();

        return RTE_E_OK;
    } else {
        return RTE_E_LIMIT;
    }
}

/** ------ DcmDiagnosticSessionControl */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(/*IN*/uint8 mode) {
    if (Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.nextMode
            == RTE_TRANSITION_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl) {
        {
            SYS_CALL_SuspendOSInterrupts();
            Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.nextMode = mode;
            SYS_CALL_ResumeOSInterrupts();
        }
        // Activate runnables
        // No runnables to activate
        SYS_CALL_SuspendOSInterrupts();
        Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.currentMode =
                Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.nextMode;
        Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.nextMode =
                RTE_TRANSITION_Dcm_dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl;
        SYS_CALL_ResumeOSInterrupts();

        return RTE_E_OK;
    } else {
        return RTE_E_LIMIT;
    }
}

/** ------ DcmEcuReset */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmEcuReset_DcmEcuReset(/*IN*/uint8 mode) {
    if (Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.nextMode == RTE_TRANSITION_Dcm_dcm_DcmEcuReset_DcmEcuReset) {
        {
            SYS_CALL_SuspendOSInterrupts();
            Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.nextMode = mode;
            SYS_CALL_ResumeOSInterrupts();
        }
        // Activate runnables
        // No runnables to activate
        SYS_CALL_SuspendOSInterrupts();
        Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.currentMode = Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.nextMode;
        Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.nextMode = RTE_TRANSITION_Dcm_dcm_DcmEcuReset_DcmEcuReset;
        SYS_CALL_ResumeOSInterrupts();

        return RTE_E_OK;
    } else {
        return RTE_E_LIMIT;
    }
}

/** ------ DcmIf */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_DcmIf_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

/** ------ DcmRapidPowerShutDown */
Std_ReturnType Rte_Switch_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown(/*IN*/uint8 mode) {
    if (Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.nextMode
            == RTE_TRANSITION_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown) {
        {
            SYS_CALL_SuspendOSInterrupts();
            Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.nextMode = mode;
            SYS_CALL_ResumeOSInterrupts();
        }
        // Activate runnables
        // No runnables to activate
        SYS_CALL_SuspendOSInterrupts();
        Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.currentMode =
                Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.nextMode;
        Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.nextMode =
                RTE_TRANSITION_Dcm_dcm_DcmRapidPowerShutDown_DcmRapidPowerShutDown;
        SYS_CALL_ResumeOSInterrupts();

        return RTE_E_OK;
    } else {
        return RTE_E_LIMIT;
    }
}

/** ------ SecurityAccess_SecurityLevel_0 */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_GetSeed(/*IN*/Dcm_OpStatusType OpStatus, /*OUT*/uint8 * Seed, /*OUT*/
        Dcm_NegativeResponseCodeType * ErrorCode) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dcm_dcm_SecurityAccess_SecurityLevel_0_CompareKey(/*IN*/const uint8 * Key, /*IN*/Dcm_OpStatusType OpStatus) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
