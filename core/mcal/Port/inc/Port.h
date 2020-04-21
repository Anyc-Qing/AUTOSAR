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

/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|TMS570|RH850F1H|MPC5607B|MPC5645S|MPC5646B|STM32|JACINTO5|JACINTO6|MPC5748G|MPC5744p */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Port.h
 *
 *  The Port driver configures and initializes the pins in microcontroller.
 *  The Port driver provides API for Initializing the pins, to Set mode and direction of the pins etc.
 *  This file will contain the Port Type definitions and API definitions
 */
 /** @addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Port
  *  This is the Mcal Port Group
  *  @{
  */
#ifndef PORT_H_
#define PORT_H_

/**
  * @name    Module ID and Version Number
  * @{
  */
#define PORT_MODULE_ID           124u /**< @brief Port Module Id  */
#define PORT_VENDOR_ID           60u  /**< @brief Port Vendor Id  */

#if defined(CFG_PPC)
#define PORT_SW_MAJOR_VERSION   7u /**< @brief Port Module Software Major Version Number */
#define PORT_SW_MINOR_VERSION   0u /**< @brief Port Module Software Minor Version Number */
#define PORT_SW_PATCH_VERSION   0u /**< @brief Port Module Software Patch Version Number */

#define PORT_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Port Module Autosar Major Version Number */
#define PORT_AR_RELEASE_MINOR_VERSION   3u /**< @brief Port Module Autosar Minor Version Number */
#define PORT_AR_RELEASE_PATCH_VERSION   0u /**< @brief Port Module Autosar Patch Version Number */

#elif defined(CFG_TMS570LS12X)
#define PORT_SW_MAJOR_VERSION   6u /**< @brief Port Module Software Major Version Number */
#define PORT_SW_MINOR_VERSION   0u /**< @brief Port Module Software Minor Version Number */
#define PORT_SW_PATCH_VERSION   0u /**< @brief Port Module Software Patch Version Number */

#define PORT_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Port Module Autosar Major Version Number */
#define PORT_AR_RELEASE_MINOR_VERSION   3u /**< @brief Port Module Autosar Minor Version Number */
#define PORT_AR_RELEASE_PATCH_VERSION   0u /**< @brief Port Module Autosar Patch Version Number */

#else

/** @cond DOXYGEN_EXCLUDE */
#define PORT_SW_MAJOR_VERSION   5u /**< @brief Port Module Software Major Version Number for other architectures */
#define PORT_SW_MINOR_VERSION   0u /**< @brief Port Module Software Minor Version Number for other architectures */
#define PORT_SW_PATCH_VERSION   1u /**< @brief Port Module Software Patch Version Number for other architectures */

#define PORT_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Port Module Autosar Major Version Number for other architectures */
#define PORT_AR_RELEASE_MINOR_VERSION   1u /**< @brief Port Module Autosar Minor Version Number for other architectures */
#define PORT_AR_RELEASE_PATCH_VERSION   2u /**< @brief Port Module Autosar Patch Version Number for other architectures */

/** @endcond */
#endif

/** @} */

/** @req:PPC|MPC5607B|MPC5645S|MPC5646B|MPC5748G|TMS570|MPC5744P|ZYNQ|JACINTO5|JACINTO6 4.1.2|4.3.0/SWS_Port_00080 - The include file structure of the Port Driver should be according to the Fig -1 in Port driver SWS (ASR 4.3.0) */

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00130 - Port.h shall include Port_Cfg.h for the API pre-compiler switches and Std_Types.h */

/** @req:PPC|MPC5607B|MPC5645S|MPC5646B|MPC5748G|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00205 - Port_Lcfg.c shall include Port_MemMap.h and Port.h
 * Implemented in Generated file  */

/** @req:PPC|MPC5607B|MPC5645S|MPC5646B|MPC5748G|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00133 - Port_PBcfg.c shall include Port_MemMap.h and Port.h
 * Implemented in Generated file  */
#include "Std_Types.h"
#include "Port_Cfg.h"

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00208 - The PORT Driver module’s implementer shall publish the symbolic names through the file Port.h.
 * Published via Port_Cfg.h */

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00228 - Port_ConfigType
 * Defined in Port_Cfg.h */

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00051 - DET error code (Section 7.2.1 in Port driver SWS document)*/
/**
  * @name    Error Code - AUTOSAR
  * @{
  */
#define PORT_E_PARAM_PIN              0x0Au  /**< @brief Invalid Port Pin ID requested  */
#define PORT_E_DIRECTION_UNCHANGEABLE 0x0Bu  /**< @brief Port Pin direction not configured as changeable  */

/*SWS_Port_00051 modified in ASR 4.3.0
 * PORT_E_INIT_FAILED in ASR 4.3.0 and
 * PORT_E_PARAM_CONFIG in older version. Having both. */
#define PORT_E_INIT_FAILED            0x0Cu  /**< @brief API Port_Init service called with wrong parameter. In ASR 4.3.0 */

#define PORT_E_PARAM_CONFIG           0x0Cu  /**< @brief API Port_Init service called with wrong parameter. In ASR 4.1.2 */
#define PORT_E_PARAM_INVALID_MODE     0x0Du  /**< @brief API Port_SetPinMode service called when mode is unchangeable.*/
#define PORT_E_MODE_UNCHANGEABLE      0x0Eu  /**< @brief API Port_SetPinMode service called when mode is unchangeable.*/
#define PORT_E_UNINIT                 0x0Fu  /**< @brief API service called without module initialization */
#define PORT_E_PARAM_POINTER          0x10u  /**< @brief APIs called with a Null Pointer */
#define PORT_E_UNEXPECTED_EXECUTION   0x20u  /**< @brief Arccore Internal Error Id.  Used in MPC and RH architecture only. */

/** @} */
/**
  * @name    Service Id
  * @{
  */
#define PORT_INIT_ID                    0x00u /**< @brief Service Id for Port_Init API */
#define PORT_SET_PIN_DIRECTION_ID       0x01u /**< @brief Service Id for Port_SetPinDirection API */
#define PORT_REFRESH_PORT_DIRECTION_ID  0x02u /**< @brief Service Id for Port_RefreshPortDirection API */
#define PORT_GET_VERSION_INFO_ID        0x03u /**< @brief Service Id for Port_GetVersionInfo API */
#define PORT_SET_PIN_MODE_ID            0x04u /**< @brief Service Id for Port_SetPinMode API */
#define PORT_GLOBAL_ID                  0xFFu /**< @brief Global Id for the Port Module */
/** @} */

/* ----------------------------[Type Definitions]-----------------*/

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00230 - Port_PinDirectionType */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00220 - The type Port_PinDirectionType shall be of enumeration type having range as PORT_PIN_IN and PORT_PIN_OUT
 * PORT_PIN_IN Sets port pin as input. 
 * PORT_PIN_OUT  Sets port pin as output. 
 */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00046 - The type Port_PinDirectionType is a type for defining the direction of a Port Pin */

/** @enum Port_PinDirectionType
*   @brief   AUTOSAR Specified Port Pin Direction Type Definition
*   This type is used define the possible direction of a port pin.
*/
typedef enum
{

	PORT_PIN_IN = 0u, /**< @brief INPUT PIN is assigned with value 0*/
	PORT_PIN_OUT = 1u /**< @brief OUTPUT PIN is assigned with value 1*/
} Port_PinDirectionType;

/** @req:PPC|MPC5607B|MPC5645S|MPC5646B|MPC5748G|MPC5744P|TMS570 4.1.2|4.3.0/SWS_Port_00124 - A port pin shall be configurable with a number of port pin modes (type Port_PinModeType).*/
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00231 - Port_PinModeType */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00221 - The type Port_PinModeType shall be uint8, uint16 or uint32.*/
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00212 - The type Port_PinModeType shall be used with the function call Port_SetPinMode
 * Port_SetPinMode API is supported (TMS570|MPC5744P) but disabled for safety reasons.*/
#if defined(CFG_RH850)
typedef uint16 Port_PinModeType;
#elif defined(CFG_MPC560X) || defined(CFG_MPC5645S) || defined(CFG_MPC5643L) || defined(CFG_SPC56XL70) || defined(CFG_MPC5777C)
typedef uint16 Port_PinModeType;
#else
/** @typedef Port_PinModeType
*   @brief   AUTOSAR Specified Port Pin Mode Type Definition
*   This type is used define different port pin modes. It shall be uint8, uint16 or uint32 depending on the architecture.
*/
typedef uint32 Port_PinModeType;
#endif

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00229 - Port_PinType*/
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00219 - The type Port_PinType shall be uint8, uint16 or uint32 based on the specific MCU platform.*/
/** @req:ZYNQ|PPC|TMS570|RH850F1H|MPC5607B|MPC5646B|MPC5645S|STM32|MPC5744P|MPC5748G 4.1.2|4.3.0/SWS_Port_00013 - The type Port_PinType shall be used for the symbolic name of a Port Pin.*/

#if defined(CFG_PPC) || defined(CFG_RH850)
typedef uint16 Port_PinType;
#elif defined(CFG_ARM)
/** @typedef Port_PinType
*   @brief   AUTOSAR Specified Port Pin Mode Type Definition
*   Data type for the symbolic name of a port pin. It shall be uint8, uint16 or uint32 depending on the architecture.
*/
typedef uint8_t Port_PinType;
#else
#error "Invalid architecture"
#endif

/* ----------------------------[Public API's]-----------------*/

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00140 - The function Port_Init shall initialize ALL ports and port pins with the configuration set pointed to by the parameter ConfigPtr. */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00073 - The type Port_ConfigType is a type for the external data structure containing the initialization data for the PORT Driver.*/

/** @brief API that initializes the port module
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] ConfigPtr - Pointer that holds the configuration of the pins
 */
void Port_Init(const Port_ConfigType *ConfigPtr);
void usart_Configuration(void);
int usart_send_char(char ch);
/** @req 4.1.2|4.3.0/SWS_Port_00086 - The function Port_SetPinDirection shall only be available to the user if the pre-compile parameter PortSetPinDirectionApi is set to TRUE. If set to FALSE, the function Port_SetPinDirection is not available.*/
#if ( PORT_SET_PIN_DIRECTION_API == STD_ON )
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00141 -  Port_SetPinDirection */

/** @brief API that changes the direction of the pin during run time.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Pin - Pin for which the direction should be changed
 *  @param[in] Direction - Direction of the pin
 */
void Port_SetPinDirection( Port_PinType Pin, Port_PinDirectionType Direction);
#endif

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P 4.1.2|4.3.0/SWS_Port_00142 - Port_RefreshPortDirection*/

/** @brief API that is used to refresh the direction of the port
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 */
void Port_RefreshPortDirection(void);

#if (PORT_SET_PIN_MODE_API == STD_ON)
/** @brief API that is used to change the mode of the pin during run time.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         TMS 570 : For safety reason the mode of the pin should not be changed during run time.Hence this function is disabled for the user in TMS570|MPC5744P.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Pin - Pin for which the mode should be changed
 *  @param[in] Mode - Mode to be changed
 */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|JACINTO5|JACINTO6|MPC5744P SWS_Port_00145 - - Port_SetPinMode*/
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);
#endif

#if (PORT_VERSION_INFO_API == STD_ON)
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P  4.1.2|4.3.0/SWS_Port_00143 - Port_GetVersionInfo*/
/** @brief  API that returns the version information of this module.
 *          Synchronous
 *  @note   Reentrant
 *  @param[in]  versionInfo - Pointer that holds the version info.
 */
void Port_GetVersionInfo(Std_VersionInfoType *versionInfo);
#endif


#endif /*PORT_H_*/
/** @}*/
/** @}*/
