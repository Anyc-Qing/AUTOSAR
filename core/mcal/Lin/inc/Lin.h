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

/** @addtogroup Lin LIN Driver
 *  @{ */

/** @file Lin.h
 * API and type definitions for LIN Driver.
 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=PPC|TMS570|MPC5645S|MPC5607B|ZYNQ|JACINTO6|MPC5748G */

#ifndef LIN_H_
#define LIN_H_

/* ----------------------------[Version Check]-----------------*/
/**
  * @name    Module ID and Version Number
  * @{
  */
#define LIN_MODULE_ID            82u /**< @brief Mcu Module Id*/
#define LIN_VENDOR_ID            60u /**< @brief Mcu Vendor Id*/

#if defined(CFG_TMS570LS12X)
#define LIN_SW_MAJOR_VERSION   3u /**< @brief Lin Module Software Major Version Number for TMS570 */
#define LIN_SW_MINOR_VERSION   0u /**< @brief Lin Module Software Minor Version Number for TMS570 */
#define LIN_SW_PATCH_VERSION   0u /**< @brief Lin Module Software Patch Version Number for TMS570 */

#define LIN_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Lin Module Autosar Major Version Number for TMS570 */
#define LIN_AR_RELEASE_MINOR_VERSION   3u /**< @brief Lin Module Autosar Minor Version Number for TMS570 */
#define LIN_AR_RELEASE_PATCH_VERSION   0u /**< @brief Lin Module Autosar Patch Version Number for TMS570 */

#else
/** @cond DOXYGEN_EXCLUDE */
#define LIN_SW_MAJOR_VERSION   2u /**< @brief Lin Module Software Major Version Number for other architectures */
#define LIN_SW_MINOR_VERSION   1u /**< @brief Lin Module Software Minor Version Number for other architectures */
#define LIN_SW_PATCH_VERSION   0u /**< @brief Lin Module Software Patch Version Number for other architectures */

#define LIN_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Lin Module Autosar Major Version Number for other architectures */
#define LIN_AR_RELEASE_MINOR_VERSION   1u /**< @brief Lin Module Autosar Minor Version Number for other architectures */
#define LIN_AR_RELEASE_PATCH_VERSION   2u /**< @brief Lin Module Autosar Patch Version Number for other architectures */
/** @endcond */
#endif
/** @} */

#if defined(USE_KERNEL)
#include "Os.h"

/* Assign application according to define */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS) && !defined(LIN_ARC_ISR_APP)
#if ((OS_SC3 == STD_ON) || (OS_SC4 == STD_ON))
#error You must define LIN_ARC_ISR_APP
#else
#define LIN_ARC_ISR_APP             0
#endif
#endif
#endif


#include "Std_Types.h"

/** @req 4.1.2|4.3.0/SWS_Lin_00241 Lin.h shall include Lin_GeneralTypes.h. for the include of general LIN type declarations. */
#include "Lin_GeneralTypes.h"

#include "Lin_Cfg.h"

/** @req 4.1.2|4.3.0/SWS_Lin_00205 Lin.h shall include ComStack_Types.h. */
#include "ComStack_Types.h"

/** @req 4.1.2|4.3.0/SWS_Lin_00247 Lin_ConfigType shall be provided by the headerfile Lin.h. */
#include "Lin_ConfigTypes.h"

#if (LIN_VERSION_INFO_API == STD_ON)
void Lin_GetVersionInfo( Std_VersionInfoType *versionInfo );
#endif

/** General requirements tagging */
/* @req SWS_Lin_00226 */
/** @req 4.1.2|4.3.0/SWS_Lin_00054 The file Lin.h only contains external declarations of constants, global data, type definitions and services that are specified in the LIN driver SWS. */
/** @req  4.1.2/SWS_Lin_00064 */
/** @req 4.1.2|4.3.0/SWS_Lin_00075 The include file structure shall be as follows: (refer to Figure 5-1 in AUTOSAR_SWS_LINDriver)  */

typedef enum {
    LIN_UNINIT,
    LIN_INIT,
}Lin_DriverStatusType;

/** @name Service id's */
//@{
#define LIN_INIT_SERVICE_ID               0x00u
#define LIN_GETVERSIONINFO_SERVICE_ID     0x01u
#define LIN_WAKEUPVALIDATION_SERVICE_ID   0x0Au
#define LIN_INIT_CHANNEL_SERVICE_ID       0x02u
#define LIN_DEINIT_CHANNEL_SERVICE_ID     0x03u
#define LIN_SEND_FRAME_SERVICE_ID         0x04u
#define LIN_SEND_RESPONSE_SERVICE_ID      0x05u
#define LIN_GO_TO_SLEEP_SERVICE_ID        0x06u
#define LIN_WAKE_UP_SERVICE_ID            0x07u
#define LIN_GETSTATUS_SERVICE_ID          0x08u
#define LIN_GO_TO_SLEEP_INTERNAL_SERVICE_ID 0x09u
#define LIN_CHECKWAKEUP_SERVICE_ID        0x0Au
#define LIN_WAKE_UP_INTERNAL_SERVICE_ID   0x0Bu

#define LIN_ARC_DEINIT_SERVICE_ID         0xA0u
//@}

/** @req 4.1.2|4.3.0/SWS_Lin_00048 The following errors and exceptions shall be detectable by the LIN driver depending on its build version (development/production mode) */
/** @name Error Codes */
#define LIN_E_UNINIT                    0x00u
#define LIN_E_INVALID_CHANNEL			0x02u
#define LIN_E_INVALID_POINTER			0x03u
#define LIN_E_PARAM_POINTER             0x05u
#define LIN_E_STATE_TRANSITION			0x04u
#define LIN_E_INVALID_CONFIG            0x10u


/** @req 4.1.2|4.3.0/SWS_Lin_00006 void Lin_Init( const Lin_ConfigType* Config ) */
void Lin_Init( const Lin_ConfigType* Config );

void Lin_Arc_DeInit(void);

/** @req 4.1.2|4.3.0/SWS_Lin_00191 Std_ReturnType Lin_SendFrame( uint8 Channel, Lin_PduType* PduInfoPtr ) */
Std_ReturnType Lin_SendFrame(  uint8 Channel,  Lin_PduType* PduInfoPtr );

/** @req 4.1.2|4.3.0/SWS_Lin_00166 Std_ReturnType Lin_GoToSleep( uint8 Channel ) **/
Std_ReturnType Lin_GoToSleep(  uint8 Channel );

/** @req 4.1.2|4.3.0/SWS_Lin_00167 Std_ReturnType Lin_GoToSleepInternal( uint8 Channel ) */
Std_ReturnType Lin_GoToSleepInternal(  uint8 Channel );

/** @req 4.1.2|4.3.0/SWS_Lin_00169 Std_ReturnType Lin_Wakeup( uint8 Channel ) */
Std_ReturnType Lin_Wakeup( uint8 Channel );

/** @req 4.1.2|4.3.0/SWS_Lin_00168 Lin_StatusType Lin_GetStatus( uint8 Channel, uint8** Lin_SduPtr ) */
Lin_StatusType Lin_GetStatus( uint8 Channel, uint8** Lin_SduPtr );

/** @req 4.1.2|4.3.0/SWS_Lin_00256 Std_ReturnType Lin_WakeupInternal( uint8 Channel ) */
Std_ReturnType   Lin_WakeupInternal( uint8 Channel );

/** req 4.1.2|4.3.0/SWS_Lin_00160 Std_ReturnType Lin_CheckWakeup( uint8 Channel ) */
Std_ReturnType Lin_CheckWakeup(uint8 Channel);



#endif
/** @} */

