#include "Dcm.h"
Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_GetSeed(Dcm_OpStatusType OpStatus, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode){
     return E_OK;
}

Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_CompareKey(const uint8 *key, Dcm_OpStatusType OpStatus) {
    return E_OK;
}
Std_ReturnType Rte_Switch_DcmCommunicationControl_EthChnl_DcmCommunicationControl_EthChnl(uint8 mode) {
    return E_OK;
}
Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(Dcm_ProtocolType protocolID) {
    return E_OK;
}
Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(Dcm_ProtocolType protocolID) {
    return E_OK;
}

Std_ReturnType DID_0xE103_ConditionCheck(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *errorCode)
{
    (void)OpStatus;
    *errorCode = DCM_E_POSITIVERESPONSE;
    return E_OK;
}

Std_ReturnType DID_0xE103_Read(uint8 *data)
{
        data[0] = 0x42;
        // data[0] = 'A';
        // data[1] = 'P';
        // data[2] = 'P';
        // data[3] = 'L';
        // data[4] = 'I';
        // data[5] = 'C' ;
        // data[6] = 'A';
        // data[7] = 'T';
        // data[8] = 'I';
        // data[9] = 'N';

    return E_OK;
}


