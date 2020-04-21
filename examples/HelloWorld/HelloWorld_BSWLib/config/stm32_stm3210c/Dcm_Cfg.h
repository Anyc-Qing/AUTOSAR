/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
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

/* Generator version: 8.7.0
 * AUTOSAR version:   4.0.3
 */

#if !(((DCM_SW_MAJOR_VERSION == 8) && (DCM_SW_MINOR_VERSION == 7)) )
#error Dcm: Configuration file expected BSW module version to be 8.7.*
#endif
#if !(((DCM_AR_RELEASE_MAJOR_VERSION == 4) && (DCM_AR_RELEASE_MINOR_VERSION == 0)) )
#error Dcm: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#ifndef DCM_CFG_H_
#define DCM_CFG_H_

#define DCM_USE_SPLIT_TASK_CONCEPT STD_OFF


#ifdef DCM_NOT_SERVICE_COMPONENT
#define RTE_MODE_DcmDiagnosticSessionControl_DcmConf_DcmDspSessionRow_Default_Session 1
#endif

#define DCM_PDU_ID_DIAGPHYSICALRX 0
#define DCM_PDU_ID_DIAGFUNCTIONALRX 1
#define DCM_PDU_ID_DIAGPHYSICALTX 0
/* Periodic tx pdus */
#define DCM_FIRST_PERIODIC_TX_PDU 1
#define DCM_PDU_ID_DIAGUUDT 1
#define DCM_NOF_PERIODIC_TX_PDU 1

/* Services used */
#define DCM_USE_SERVICE_READDATABYIDENTIFIER
#define DCM_USE_SERVICE_READDATABYPERIODICIDENTIFIER
#define DCM_USE_SERVICE_DYNAMICALLYDEFINEDATAIDENTIFIER
#define DCM_USE_SERVICE_INPUTOUTPUTCONTROLBYIDENTIFIER


#undef DCM_USE_SERVICE_RESPONSEONEVENT

#define DCM_VERSION_INFO_API				STD_OFF
#define DCM_DEV_ERROR_DETECT				STD_ON
#define DCM_MANUFACTURER_NOTIFICATION		STD_OFF
#define DCM_RESPOND_ALL_REQUEST				STD_ON
#define DCM_PAGEDBUFFER_ENABLED				STD_OFF /* Not configurable */
#define DCM_ROE_INIT_ON_DSC					STD_OFF

#define DCM_DSL_BUFFER_LIST_LENGTH			3
#define DCM_DSL_RX_PDU_ID_LIST_LENGTH		2
#define DCM_DSL_TX_PDU_ID_LIST_LENGTH		1

#define DCM_MAIN_FUNCTION_PERIOD_TIME_MS 	20

#define DCM_LIMITNUMBER_PERIODDATA			10
#define DCM_MAX_DDDSOURCE_NUMBER			10
#define DCM_MAX_DDD_NUMBER					1

#define DCM_ROE_BUFFER_SIZE					0
#define DCM_ROE_INTERNAL_DIDS				STD_OFF


#define DCM_NOF_IOCONTROL_DIDS				1
#define DCM_MAX_IOCONTROL_DID_SIGNALS		1

#define DCM_PERIODICTRANSMIT_SLOW			1500
#define DCM_PERIODICTRANSMIT_MEDIUM			500
#define DCM_PERIODICTRANSMIT_FAST			5

#define DCM_SECURITY_EOL_INDEX 				1

#define DCM_USE_JUMP_TO_BOOT				STD_OFF

#define DCM_PERIODIC_DID_SYNCH_SAMPLING		STD_OFF

#define DCM_USE_NVM_DID						STD_OFF

#define DCM_COMM_CHANNEL_ComMChannel_INDEX 0u
#define DCM_NOF_COMM_CHANNELS 1u





#ifdef DCM_NOT_SERVICE_COMPONENT
// security access functions defined by RTE
extern Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_GetSeed(Dcm_OpStatusType OpStatus, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType Rte_Call_SecurityAccess_SecurityLevel_0_CompareKey(const uint8 *key, Dcm_OpStatusType OpStatus);
#endif

#ifdef DCM_NOT_SERVICE_COMPONENT
// request functions defined by RTE
extern Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(Dcm_ProtocolType protocolID);
extern Std_ReturnType Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol(Dcm_ProtocolType protocolID);
#endif



#ifdef DCM_NOT_SERVICE_COMPONENT
// Communication control functions defined by RTE
extern Std_ReturnType Rte_Switch_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel(uint8 mode);
#endif

extern Std_ReturnType DID_0x0100_ConditionCheck(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType DID_0x0100_Read(uint8 *data);
extern Std_ReturnType DID_0xF200_Read(uint8 *data);
extern Std_ReturnType DID_0x0101_Read(uint8 *data);
extern Std_ReturnType DID_0x0102_Read(uint8 *data);

/* IO Control and read functions for IoHwAb signal PwmSignal_LED3 */
extern Std_ReturnType IoHwAb_Dcm_PwmSignal_LED3(uint8 action, uint8* value);
extern Std_ReturnType IoHwAb_Dcm_Read_PwmSignal_LED3(uint8 *data);







#endif /*DCM_CFG_H_*/
