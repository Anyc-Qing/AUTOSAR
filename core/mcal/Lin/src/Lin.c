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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Lin.c
 *
 *  The Lin.c file will contain the generic implementation of all the API mentioned in Lin driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Lin_Hw_* .c file (depends on the architecture).
 *  Each API will have the Det error check mentioned in section 7.3 (Lin driver SWS document) and will call the the hardware specific implementation function if the check passes.
 */
 /**@addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */
 /** @addtogroup Lin
  *  This is the Mcal Lin Group
  *  @{
  */

#include "Lin.h"
#include "Lin_cfg.h"
#include "Lin_MemMap.h"
#include "Lin_Internal.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM) || defined (WDG_USE_DEM)
#include "Dem.h"
#endif
#include "SchM_Lin.h"
#if defined(USE_ECUM_FIXED)
#include "EcuM.h"
#endif

/* ----------------------------[Version Check]-----------------*/
/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X)
#define LIN_SW_MAJOR_VERSION_INT   3u /**< @brief Lin Module Software Major Version Number for TMS570 */
#define LIN_SW_MINOR_VERSION_INT   0u /**< @brief Lin Module Software Minor Version Number for TMS570 */
#define LIN_SW_PATCH_VERSION_INT   0u /**< @brief Lin Module Software Patch Version Number for TMS570 */

#define LIN_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Lin Module Autosar Major Version Number for TMS570 */
#define LIN_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Lin Module Autosar Minor Version Number for TMS570 */
#define LIN_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Lin Module Autosar Patch Version Number for TMS570 */

#else
/** @cond DOXYGEN_EXCLUDE */
#define LIN_SW_MAJOR_VERSION_INT   2u /**< @brief Lin Module Software Major Version Number for other architectures */
#define LIN_SW_MINOR_VERSION_INT   1u /**< @brief Lin Module Software Minor Version Number for other architectures */
#define LIN_SW_PATCH_VERSION_INT   0u /**< @brief Lin Module Software Patch Version Number for other architectures */

#define LIN_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Lin Module Autosar Major Version Number for other architectures */
#define LIN_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Lin Module Autosar Minor Version Number for other architectures */
#define LIN_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Lin Module Autosar Patch Version Number for other architectures */
/** @endcond */
#endif
/** @} */

#if (LIN_SW_MAJOR_VERSION != LIN_SW_MAJOR_VERSION_INT) || (LIN_SW_MINOR_VERSION != LIN_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Lin.c and Lin.h"
#endif

#if (LIN_AR_RELEASE_MAJOR_VERSION != LIN_AR_RELEASE_MAJOR_VERSION_INT) || (LIN_AR_RELEASE_MINOR_VERSION != LIN_AR_RELEASE_MINOR_VERSION_INT)
	#error "AR Version mismatch between Lin.c and Lin.h"
#endif


/** General requirements tagging */
/** @req 4.1.2/SWS_Lin_00103 VARIANT-PRE-COMPILE: Only parameters with "Pre-compile time" configuration are allowed in this variant. */

/* @req SWS_Lin_00013 The configuration is stored as constant data */
/* @req SWS_Lin_00156 Only the required interrupts are enabled*/
/* @req SWS_Lin_00017 The driver can send headers*/
/* @req SWS_Lin_00018 The driver can transmit and receive response frames*/
/* @req SWS_Lin_00019 The driver can calculate classic and enhanced checksum*/
/* @!req SWS_Lin_00184 ambiguous requirement, ie Lin_Wakeup will return DET error(as specified) if called when channel status is LIN_OPERATIONAL */
/* @req SWS_Lin_00207 Are defined within this file*/
/* @req SWS_Lin_00224 Validation is done by the configuration tool*/
/* @req SWS_Lin_00235 Implemented optional interfaces are Det_ReportError and EcuM_CheckWakeup*/
/* @req SWS_Lin_00237 All detected DET errors will call the error tracer and return*/
/* @req SWS_Lin_00027 The driver can initiate transmission and will check transmission of previous byte*/
/* @req SWS_Lin_00028 While receiving data the driver does not block*/
/* @req SWS_Lin_00029 This Lin driver implementation is specific for the Jacinto6 uart controller */
/* @req SWS_Lin_00045 There are up to nine uart controllers of the same type, each with one channel*/
/* @req SWS_Lin_00005 The driver is implemented to support the LIN 2.1 protcol */
/* @req SWS_Lin_00032 Not supported by hardware */
/* @req SWS_Lin_00157 Done by hardware*/
/* @req SWS_Lin_00206 The lin driver does not provid any callback functions*/
/* @!req SWS_Lin_00234 Only callback to EcuM_SetWakeupEvent is supported by the module */
/** @req 4.1.2|4.3.0/SWS_Lin_00063 It is intended to support the complete range of LIN hardware from a simple SCI/UART to a complex LIN hardware controller. Using a SW-UART implementation is out of the scope. For a closer description of the LIN hardware unit, see chapter 2.3. */
/* @req SWS_Lin_00055 Implemented accodring to the ArcCore C-coding style*/
/*lint -save -e9003 Misra 2012 8.9 Blockscope variables definitions neglected.
 * Static variable declaration in Function body violates the AUTOSAR memory mapping concept.*/

/* Development error macros. */
#if ( LIN_DEV_ERROR_DETECT == STD_ON )
#define VALIDATE(_exp,_api,_err ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(LIN_MODULE_ID,0,_api,_err); \
          return; \
        }

#define VALIDATE_W_RV(_exp,_api,_err,_rv ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(LIN_MODULE_ID,0,_api,_err); \
          return (_rv); \
        }

#define DET_REPORT_ERROR(_api,_err) (void)Det_ReportError(MODULE_ID_LINIF, 0, _api, _err);

#else
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_W_RV(_exp,_api,_err,_rv )
#define DET_REPORT_ERROR(_api,_err)
#endif

#define LIN_SLEEP_COMMAND_ID (0x3C) /**< @brief Sleep command ID 0x3C.*/

/* ----------------------------[Static Function]---------------*/
/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors if ADC_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[inout] _rvPtr - Returns the validity of the expression provided
 */
static inline void validateLinParameter (boolean exp,uint8 apiid,uint8 errid, Std_ReturnType* _rvPtr){
	  if ((E_OK == *_rvPtr) && (exp == FALSE)) {
		#if (LIN_DEV_ERROR_DETECT == STD_ON)
			 /** @req:TMS570 4.1.2|4.3.0/SWS_Adc_00377 Det_ReportError */
			 (void)Det_ReportError(LIN_MODULE_ID, 0, apiid, errid);
		#endif
		 *_rvPtr = E_NOT_OK;
	  }
}
 /* ----------------------------[static variables ]-----------------*/
 static boolean Lin_WakeupSet[LIN_ARC_LOG_UNIT_CNT];

 static const Lin_ConfigType* Lin_CfgPtr = NULL;

/* ----------------------------[Public Function]---------------*/

/** !req SWS_Lin_00106 The Lin module�s environment shall not call any function of the Lin module before having called Lin_Init except Lin_GetVersionInfo.*/

/** @req 4.1.2|4.3.0/SWS_Lin_00006 void Lin_Init( const Lin_ConfigType* Config ) */
/** @req 4.1.2|4.3.0/SWS_Lin_00150 The function Lin_Init shall initialize the module according to the configuration set pointed to by the parameter Config. */
/***************************************************************************//**
 * @brief Initializes the Lin driver
 * @note Non-reentrant
 * @param[in] ConfigPtr Holds the configuration for the driver and the LIN communication channels
 ******************************************************************************/
void Lin_Init( const Lin_ConfigType* ConfigPtr )
{
    Std_ReturnType rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Lin_00105 If default error detection for the Lin module is enabled: the function Lin_Init shall check the Lin driver for being in the state LIN_UNINIT. If the Lin driver is not in the state LIN_UNINIT, the function Lin_Init shall raise the default error LIN_E_STATE_TRANSITION.**/
    /** @req 4.1.2|4.3.0/SWS_Lin_00213 The LIN Driver module shall report the default error "LIN_E_STATE_TRANSITION (0x04)", when Invalid state transition occurs from the current state. */
    validateLinParameter( (boolean) (Lin_Hw_GetDriverState() == LIN_UNINIT), LIN_INIT_SERVICE_ID, LIN_E_STATE_TRANSITION, &rv );
    /** @req 4.1.2|4.3.0/SWS_Lin_00099 If default error detection for the Lin module is enabled: the function Lin_Init shall check the parameter Config for being within the allowed range. If Config is not in the allowed range, the function Lin_Init shall raise the default error LIN_E_INVALID_POINTER. **/
    /** @req 4.1.2|4.3.0/SWS_Lin_00216 The LIN Driver module shall report the default error "LIN_E_INVALID_POINTER (0x03)", when API Service is called with invalid configuration pointer.**/
    validateLinParameter( (boolean) (ConfigPtr!=NULL), LIN_INIT_SERVICE_ID, LIN_E_INVALID_POINTER, &rv );

    /** @req SWS_Lin_00084 */
    if (E_OK == rv) {
    	/* Call HW specific initialization */
    	Lin_Hw_Init(ConfigPtr);

		/** @req 4.1.2|4.3.0/SWS_Lin_00146 LIN_UNINIT -> LIN_INIT: The Lin module shall transition from LIN_UNINIT to LIN_INIT when the function Lin_Init is called. */
    	Lin_Hw_SetDriverStatus(LIN_INIT);

        /** @req 4.1.2|4.3.0/SWS_Lin_00171 On entering the state LIN_INIT, the Lin module shall set each channel into state LIN_CH_OPERATIONAL. */
    	for (uint8 ch = 0; ch < LIN_CONTROLLER_CNT; ch++) {
    		Lin_Hw_SetChannelStatus(ch, LIN_OPERATIONAL);
    	}
    }
}

/** @req 4.1.2|4.3.0/SWS_Lin_00169 Std_ReturnType Lin_Wakeup( uint8 Channel ) */
/***************************************************************************//**
 * @brief Wakeup LIN bus from sleep mode
 * @param[in] Channel
 * @return Status of operation
 * @retval E_OK LIN bus successfully woken up
***************************************************************************** */
Std_ReturnType Lin_Wakeup( uint8 Channel )
{
    Std_ReturnType retval = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Lin_00137 If default error detection for the LIN module is enabled: if the function Lin_Wakeup is called before the LIN module was initialized, the function Lin_Wakeup shall raise the default error LIN_E_UNINIT. */
    /** @req 4.1.2|4.3.0/SWS_Lin_00214 The LIN Driver module shall report the default error "LIN_E_UNINIT (0x00)", when the API Service is used without module initialization. */
    validateLinParameter( (boolean)(Lin_Hw_GetDriverState() != LIN_UNINIT), LIN_WAKE_UP_SERVICE_ID, LIN_E_UNINIT, &retval);

    /** @req 4.1.2|4.3.0/SWS_Lin_00139 If default error detection for the LIN module is enabled: the function Lin_Wakeup shall raise the default error LIN_E_INVALID_CHANNEL if the channel parameter is invalid or the channel is inactive. */
    /** @req 4.1.2|4.3.0/SWS_Lin_00215 The LIN Driver module shall report the default error "LIN_E_INVALID_CHANNEL (0x02)", when API Service used with an invalid or inactive channel parameter.*/
    validateLinParameter( (boolean)(Channel < LIN_CONTROLLER_CNT), LIN_WAKE_UP_SERVICE_ID, LIN_E_INVALID_CHANNEL, &retval);

    /** @req 4.1.2|4.3.0/SWS_Lin_00140 If default error detection for the LIN module is enabled: the function Lin_Wakeup shall raise the default error LIN_E_STATE_TRANSITION if the LIN channel state-machine is not in the state LIN_CH_SLEEP.*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00213 The LIN Driver module shall report the default error "LIN_E_STATE_TRANSITION (0x04)", when Invalid state transition occurs from the current state. */
    validateLinParameter( (boolean)(Lin_Hw_GetChannelStatus(Channel) == LIN_CH_SLEEP), LIN_WAKE_UP_SERVICE_ID, LIN_E_STATE_TRANSITION, &retval);

    if (E_OK == retval)
    {
    	retval = Lin_Hw_Wakeup(Channel);
    }

    return retval;
}

/** @req 4.1.2|4.3.0/SWS_Lin_00256 Std_ReturnType Lin_WakeupInternal( uint8 Channel ) */
/***************************************************************************//**
 * @brief Wakeup LIN bus from sleep mode without sending wakeup pulse to the LIN bus
 * @param[in] Channel
 * @return Status of operation
 * @retval E_OK LIN bus successfully woken up
*******************************************************************************/
Std_ReturnType Lin_WakeupInternal( uint8 Channel )
{
	Std_ReturnType rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Lin_00258 If default error detection for the LIN module is enabled: if the function Lin_WakeupInternal is called before the LIN module was initialized, the function Lin_WakeupInternal shall raise the default error LIN_E_UNINIT. */
	/** @req 4.1.2|4.3.0/SWS_Lin_00214 The LIN Driver module shall report the default error "LIN_E_UNINIT (0x00)", when the API Service is used without module initialization. */
    validateLinParameter( (Lin_Hw_GetDriverState() != LIN_UNINIT), LIN_WAKE_UP_INTERNAL_SERVICE_ID, LIN_E_UNINIT, &rv);
    /** @req 4.1.2|4.3.0/SWS_Lin_00259 If default error detection for the LIN module is enabled: the function Lin_WakeupInternal shall raise the default error LIN_E_INVALID_CHANNEL if the channel parameter is invalid or the channel is inactive. */
    /** @req 4.1.2|4.3.0/SWS_Lin_00215 The LIN Driver module shall report the default error "LIN_E_INVALID_CHANNEL (0x02)", when API Service used with an invalid or inactive channel parameter.*/
    validateLinParameter( (Channel < LIN_CONTROLLER_CNT), LIN_WAKE_UP_INTERNAL_SERVICE_ID, LIN_E_INVALID_CHANNEL, &rv);
    /** @req 4.1.2|4.3.0/SWS_Lin_00260 If default error detection for the LIN module is enabled: the function Lin_WakeupInternal shall raise the default error LIN_E_STATE_TRANSITION if the LIN channel state-machine is not in the state LIN_CH_SLEEP.*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00213 The LIN Driver module shall report the default error "LIN_E_STATE_TRANSITION (0x04)", when Invalid state transition occurs from the current state. */
    validateLinParameter( (Lin_Hw_GetChannelStatus(Channel) == LIN_CH_SLEEP), LIN_WAKE_UP_INTERNAL_SERVICE_ID, LIN_E_STATE_TRANSITION, &rv);

    if (E_OK == rv) {
    	/** @req 4.1.2|4.3.0/SWS_Lin_00213SWS_Lin_00262 Lin_WakeupInternal: If the LIN driver receives an internal wake-up request from the LIN interface, the requested channel shall send no wake-up pulse to the LIN bus. (see Lin_WakeupInternal) */
    	rv = Lin_Hw_WakeupInternal(Channel);

    	if (E_OK == rv) {
    		/** @req 4.1.2|4.3.0/SWS_Lin_00257 The function Lin_WakeupInternal sets the addressed LIN channel to state LIN_CH_OPERATIONAL without generating a wake up pulse. */
    		/** @req 4.1.2|4.3.0/SWS_Lin_00261 LIN_CH_SLEEP -> LIN_CH_OPERATIONAL through Lin_WakeupInternal: If a LIN channel is in the state LIN_CH_SLEEP, the function Lin_WakeupInternal shall put the LIN channel into the state LIN_CH_OPERATIONAL */
    		Lin_Hw_SetChannelStatus(Channel, LIN_OPERATIONAL);
    	}
    }

    return rv;
}


/** @req 4.1.2|4.3.0/SWS_Lin_00168 Lin_StatusType Lin_GetStatus( uint8 Channel, uint8** Lin_SduPtr ) */
/***************************************************************************//**
 * @brief Gets the status of the LIN driver.
 *
 * @param[in]  Channel LIN channel to be checked.
 * @param[out] Lin_SduPtr Pointer to pointer to a shadow buffer or memory mapped LIN Hardware receive buffer where the current SDU is stored
 *
 * @return Status of the channel
 *******************************************************************************/
Lin_StatusType Lin_GetStatus( uint8 Channel, uint8** Lin_SduPtr )
{
    Lin_StatusType status;

    /** @req 4.1.2|4.3.0/SWS_Lin_00141 If default error detection for the LIN module is enabled: if the function Lin_GetStatus is called before the LIN module was initialized, the function Lin_GetStatus shall raise the default error LIN_E_UNINIT and return LIN_NOT_OK*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00214 The LIN Driver module shall report the default error "LIN_E_UNINIT (0x00)", when the API Service is used without module initialization. */
    VALIDATE_W_RV( (Lin_Hw_GetDriverState() != LIN_UNINIT), LIN_GETSTATUS_SERVICE_ID, LIN_E_UNINIT, LIN_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00143 If default error detection for the LIN module is enabled: if the channel parameter is invalid or the channel is inactive, the function Lin_GetStatus shall raise the default error LIN_E_INVALID_CHANNEL and return LIN_NOT_OK*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00215 The LIN Driver module shall report the default error "LIN_E_INVALID_CHANNEL (0x02)", when API Service used with an invalid or inactive channel parameter.*/
    VALIDATE_W_RV( (Channel < LIN_CONTROLLER_CNT), LIN_GETSTATUS_SERVICE_ID, LIN_E_INVALID_CHANNEL, LIN_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00144 If default error detection for the LIN module is enabled: the function Lin_GetStatus shall check the parameter Lin_SduPtr for not being a NULL pointer. If Lin_SduPtr is a NULL pointer, the function Lin_GetStatus shall raise the default error LIN_E_PARAM_POINTER and return LIN_NOT_OK.*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00249 The LIN Driver module shall report the default error "LIN_E_PARAM_POINTER (0x05)", when API Service is called with a NULL pointer. In case of this error, the API service shall return immediately without any further action, beside reporting this default error. **/
    VALIDATE_W_RV( (Lin_SduPtr!=NULL), LIN_GETSTATUS_SERVICE_ID, LIN_E_PARAM_POINTER, LIN_NOT_OK);

    status = Lin_Hw_GetStatus(Channel, Lin_SduPtr);

    return status;
}

/** req 4.1.2|4.3.0/SWS_Lin_00160 Std_ReturnType Lin_CheckWakeup( uint8 Channel ) */
/***************************************************************************//**
 * @brief
 * @param[in] Channel
 * @return
 *******************************************************************************/
Std_ReturnType Lin_CheckWakeup(uint8 Channel)
{

    const Lin_ChannelConfigType *ChannelCfg;

	/** @req 4.1.2|4.3.0/SWS_Lin_00251 If default error detection for the LIN module is enabled: if the channel parameter is invalid, the function Lin_CheckWakeup shall raise the default error LIN_E_INVALID_CHANNEL and return with E_NOT_OK.*/
	VALIDATE_W_RV( (Channel < LIN_ARC_HW_UNIT_CNT), LIN_CHECKWAKEUP_SERVICE_ID, LIN_E_INVALID_CHANNEL, E_NOT_OK);

	/** @req 4.1.2|4.3.0/SWS_Lin_00107 If default error detection for the LIN module is enabled: if the function Lin_CheckWakeup is called before the LIN module was initialized, the function Lin_CheckWakeup shall raise the default error LIN_E_UNINIT.*/
	VALIDATE_W_RV( (Lin_Hw_GetDriverState() != LIN_UNINIT), LIN_CHECKWAKEUP_SERVICE_ID, LIN_E_UNINIT, E_NOT_OK);


	ChannelCfg = &Lin_CfgPtr->LinChannelConfig[Channel];

    if ((ChannelCfg->LinChannelWakeUpSupport == TRUE) &&
        (ChannelCfg->LinChannelEcuWakeUpDefined == TRUE) && Lin_WakeupSet[Channel])
    {

        /* !req SWS_Lin_00098 Not fully fulfilled, callback to LinIf_WakeupConfirmation is not done.
         * Event is detected by interrupt routine */
        EcuM_SetWakeupEvent(ChannelCfg->LinChannelEcuMWakeUpSource);
    }

    // Always set to false after it has been read out.
    Lin_WakeupSet[Channel] = FALSE;

	return E_OK;
}


/** @req 4.1.2|4.3.0/SWS_Lin_00166 Std_ReturnType Lin_GoToSleep( uint8 Channel ) **/
/***************************************************************************//**
 *  @brief Hardware specific implementation of Lin_GoToSleep
 *  @param[in] Channel - ID of LIN channel
 ******************************************************************************/
Std_ReturnType Lin_GoToSleep(uint8 Channel )
{
    Lin_PduType PduInfo;

    uint8 data[8] = {0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};

    /** @req 4.1.2|4.3.0/SWS_Lin_00129 If default error detection for the LIN module is enabled: if the function Lin_GoToSleep is called before the LIN module was initialized, the function Lin_GoToSleep shall raise the default error LIN_E_UNINIT. */
    /** @req 4.1.2|4.3.0/SWS_Lin_00214 The LIN Driver module shall report the default error "LIN_E_UNINIT (0x00)", when the API Service is used without module initialization. */
    VALIDATE_W_RV( (Lin_Hw_GetDriverState() != LIN_UNINIT), LIN_GO_TO_SLEEP_SERVICE_ID, LIN_E_UNINIT, E_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00131 If default error detection for the LIN module is enabled: the function Lin_GoToSleep shall raise the default error LIN_E_INVALID_CHANNEL if the channel parameter is invalid.*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00215 The LIN Driver module shall report the default error "LIN_E_INVALID_CHANNEL (0x02)", when API Service used with an invalid or inactive channel parameter.*/
    VALIDATE_W_RV( (Channel < LIN_CONTROLLER_CNT), LIN_GO_TO_SLEEP_SERVICE_ID, LIN_E_INVALID_CHANNEL, E_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00089 The function Lin_GoToSleep shall send a go-to-sleep-command on the addressed LIN channel as defined in LIN Specification 2.1. */
    /* Prepare sleep command */
    PduInfo.Cs = LIN_CLASSIC_CS;
    PduInfo.Pid = LIN_SLEEP_COMMAND_ID;
    PduInfo.SduPtr = data;
    PduInfo.Dl = 8;
    PduInfo.Drc = LIN_MASTER_RESPONSE;

    /** @req SWS_Lin_00074 */ //Cancellation of previous send in done in Lin_SendFrame Api
    /** @req 4.1.2|4.3.0/SWS_Lin_00263 LIN_CH_OPERATIONAL -> LIN_CH_SLEEP_PENDING through Lin_GoToSleep: If a go to sleep is requested by the LIN interface, the Lin module shall ensure that the rest of the LIN cluster goes to sleep also. This is achieved by issuing a go-to-sleep-command on the bus before entering the LIN_CH_SLEEP_PENDING state. */
    Lin_SendFrame(Channel,  &PduInfo); /*lint !e534 According to SWS_Lin_00266 action is same regardless of return value */

    /** @req 4.1.2|4.3.0/SWS_Lin_00033 Each LIN channel shall be able to accept a sleep request independently of the other channel states (see Lin_GoToSleep/Lin_GoToSleepInternal). */
    Lin_Hw_SetChannelOrderedStatus(Channel, LIN_CH_SLEEP_PENDING);

    return E_OK;
}

/** @req 4.1.2|4.3.0/SWS_Lin_00167 Std_ReturnType Lin_GoToSleepInternal( uint8 Channel ) */
/***************************************************************************//**
 *  @brief Hardware specific implementation of Lin_GoToSleep
 *  @param[in] Channel - ID of LIN channel
 ******************************************************************************/
Std_ReturnType Lin_GoToSleepInternal(uint8 Channel)
{
    /** @req 4.1.2|4.3.0/SWS_Lin_00133 If default error detection for the LIN module is enabled: if the function Lin_GoToSleepInternal is called before the LIN module was initialized, the function Lin_GoToSleepInternal shall raise the default error LIN_E_UNINIT. */
	/** @req 4.1.2|4.3.0/SWS_Lin_00214 The LIN Driver module shall report the default error "LIN_E_UNINIT (0x00)", when the API Service is used without module initialization. */
    VALIDATE_W_RV( (Lin_Hw_GetDriverState() != LIN_UNINIT), LIN_GO_TO_SLEEP_INTERNAL_SERVICE_ID, LIN_E_UNINIT, E_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00135 If default error detection for the LIN module is enabled: the function Lin_GoToSleepInternal shall raise the default error LIN_E_INVALID_CHANNEL if the channel parameter is invalid.*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00215 The LIN Driver module shall report the default error "LIN_E_INVALID_CHANNEL (0x02)", when API Service used with an invalid or inactive channel parameter.*/
    VALIDATE_W_RV( (Channel < LIN_CONTROLLER_CNT), LIN_GO_TO_SLEEP_INTERNAL_SERVICE_ID, LIN_E_INVALID_CHANNEL, E_NOT_OK);

    (void)Lin_Hw_GoToSleepInternal(Channel);

    /** @req 4.1.2|4.3.0/SWS_Lin_00095 The function Lin_GoToSleepInternal shall set the channel state to LIN_CH_SLEEP. */
    /** @req 4.1.2|4.3.0/SWS_Lin_00265 LIN_CH_OPERATIONAL -> LIN_CH_SLEEP through Lin_GoToSleepInternal: If an internal go to sleep is requested by the LIN interface, the LIN driver shall directly enter the LIN_CH_SLEEP state. */
    Lin_Hw_SetChannelStatus(Channel, LIN_CH_SLEEP);

    return E_OK;
}

/** @req  4.1.2|4.3.0/SWS_Lin_00015 Each LIN PID shall be associated with a response data length in bytes (see Lin_PduType).*/
/** @req 4.1.2|4.3.0/SWS_Lin_00191 Std_ReturnType Lin_SendFrame( uint8 Channel, Lin_PduType* PduInfoPtr ) */
/***************************************************************************//**
 *  @brief Sends a LIN header and a LIN response, if necessary. The direction of the frame response (master response, slave response, slave-to-slave communication) is provided by the PduInfoPtr
 *  @param[in] Channel - ID of LIN channel
 *  @param[in] PduInfoPtr - Pointer to PDU containing the PID, checksum model, response type, Dl and SDU data pointe
 ******************************************************************************/
Std_ReturnType Lin_SendFrame( uint8 Channel,  Lin_PduType* PduInfoPtr )
{
    Std_ReturnType rv;

    /** @req 4.1.2|4.3.0/SWS_Lin_00195 If default error detection for the LIN module is enabled: if the function Lin_SendFrame is called before the LIN module was initialized, the function Lin_SendFrame shall raise the default error LIN_E_UNINIT and return with E_NOT_OK.  */
    /** @req 4.1.2|4.3.0/SWS_Lin_00214 The LIN Driver module shall report the default error "LIN_E_UNINIT (0x00)", when the API Service is used without module initialization. */
    VALIDATE_W_RV( (Lin_Hw_GetDriverState() != LIN_UNINIT), LIN_SEND_FRAME_SERVICE_ID, LIN_E_UNINIT, E_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00197 If default error detection for the LIN module is enabled: if the channel parameter is invalid, the function Lin_SendFrame shall raise the default error LIN_E_INVALID_CHANNEL and return with E_NOT_OK. */
    /** @req 4.1.2|4.3.0/SWS_Lin_00215 The LIN Driver module shall report the default error "LIN_E_INVALID_CHANNEL (0x02)", when API Service used with an invalid or inactive channel parameter.*/
    VALIDATE_W_RV( (Channel < LIN_CONTROLLER_CNT), LIN_SEND_FRAME_SERVICE_ID, LIN_E_INVALID_CHANNEL, E_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00199 If default error detection for the LIN module is enabled: if the LIN channel state-machine is in the state LIN_CH_SLEEP, the function Lin_SendFrame shall raise the default error LIN_E_STATE_TRANSITION and return with E_NOT_OK. */
    /** @req 4.1.2|4.3.0/SWS_Lin_00213 The LIN Driver module shall report the default error "LIN_E_STATE_TRANSITION (0x04)", when Invalid state transition occurs from the current state. */
    VALIDATE_W_RV( (Lin_Hw_GetChannelStatus(Channel) != LIN_CH_SLEEP), LIN_SEND_FRAME_SERVICE_ID, LIN_E_STATE_TRANSITION, E_NOT_OK);

    /** @req 4.1.2|4.3.0/SWS_Lin_00198 If default error detection for the LIN module is enabled: the function Lin_SendFrame shall check the parameter PduInfoPtr for not being a NULL pointer. If PduInfoPtr is a NULL pointer, the function Lin_SendFrame shall raise the default error LIN_E_PARAM_POINTER and return with E_NOT_OK.*/
    /** @req 4.1.2|4.3.0/SWS_Lin_00249 The LIN Driver module shall report the default error "LIN_E_PARAM_POINTER (0x05)", when API Service is called with a NULL pointer. In case of this error, the API service shall return immediately without any further action, beside reporting this default error. **/
    VALIDATE_W_RV( (PduInfoPtr != NULL), LIN_SEND_FRAME_SERVICE_ID, LIN_E_PARAM_POINTER, E_NOT_OK);

    rv = Lin_Hw_SendFrame(Channel, PduInfoPtr);

    return rv;
}

#if (LIN_VERSION_INFO_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Lin_00161 void Lin_GetVersionInfo( Std_VersionInfoType* versioninfo ) **/
void Lin_GetVersionInfo(Std_VersionInfoType* versioninfo)
{
    /** @req 4.1.2|4.3.0/SWS_Lin_00248 If default error detection for the LIN module is enabled: If the parameter versioninfo is a NULL pointer, the function Lin_GetVersionInfo shall raise the error LIN_E_PARAM_POINTER. **/
	/** @req 4.1.2|4.3.0/SWS_Lin_00249 The LIN Driver module shall report the default error "LIN_E_PARAM_POINTER (0x05)", when API Service is called with a NULL pointer. In case of this error, the API service shall return immediately without any further action, beside reporting this default error. **/
    VALIDATE( !(versioninfo == NULL), LIN_GETVERSIONINFO_SERVICE_ID, LIN_E_PARAM_POINTER );

    /** @req 4.1.2|4.3.0/SWS_Lin_00001 The function Lin_GetVersionInfo shall return the version information of the LIN module. The version information includes: **/
    versioninfo->vendorID = LIN_VENDOR_ID;
    versioninfo->moduleID = LIN_MODULE_ID;
    versioninfo->sw_major_version = LIN_SW_MAJOR_VERSION;
    versioninfo->sw_minor_version = LIN_SW_MINOR_VERSION;
    versioninfo->sw_patch_version = LIN_SW_PATCH_VERSION;
}
#endif

#if defined(HOST_TEST)
/**
 * @brief De-initializes the module (used for tests)
 */
void Lin_Arc_DeInit(void){
	Lin_Hw_SetDriverStatus(LIN_UNINIT);
}
#endif

/** @}*/
/** @}*/
