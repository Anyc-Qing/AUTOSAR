/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2014, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 *
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with
 * the terms contained in the written license agreement between you and ArcCore,
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as
 * published by the Free Software Foundation and appearing in the file
 * LICENSE.GPL included in the packaging of this file or here
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

#include "Std_Types.h"
#include "Dcm.h"

/*
Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_GetSeed(Dcm_OpStatusType OpStatus, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode)
{
    (void)OpStatus;
    (void)seed;
    *errorCode = DCM_E_POSITIVERESPONSE;
    return E_OK;
}
Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_CompareKey(const uint8 *key)
{
    (void)key;
    return E_OK;
}


Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(Dcm_ProtocolType protocolID)
{
    (void)protocolID;
    return E_OK;
}
Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(Dcm_ProtocolType protocolID)
{
    (void)protocolID;
    return E_OK;
}
*/
Std_ReturnType DID_0x0100_ConditionCheck(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *errorCode)
{
    (void)OpStatus;
    *errorCode = DCM_E_POSITIVERESPONSE;
    return E_OK;
}
Std_ReturnType DID_0x0100_Read(uint8 *data)
{
    for(uint8 i = 0; i < 20; i++) {
        data[i] = i;
    }
    return E_OK;
}

Std_ReturnType DID_0x0101_Read(uint8 *data)
{
    for(uint8 i = 0; i < 2; i++) {
        data[i] = i;
    }
    return E_OK;
}


Std_ReturnType DID_0x0102_Read(uint8 *data)
{
    for(uint8 i = 0; i < 2; i++) {
        data[i] = i;
    }
    return E_OK;
}


Std_ReturnType DID_0xF200_Read(uint8 *data)
{
    for(uint8 i = 0; i < 4; i++) {
        data[i] = i + 1;
    }
    return E_OK;
}


