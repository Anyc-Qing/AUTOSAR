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

/* @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|TMS570|RH850F1H|MPC5607B|MPC5645S|MPC5646B|STM32|JACINTO5|JACINTO6|MPC5748G|MPC5744P|MPC5777C */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/** @file Port.c
 *
 *  The Port.c file will contain the generic implementation of all the API mentioned in Port driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Port_Hw_* .c file (depends on the architecture).
 *  Each API will have the Det error check mentioned in section 7.5 (Port driver SWS document) and will call the the hardware specific implementation function if the check passes.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  @{
  */

 /** \addtogroup Port
  *  This is the Mcal Port Group
  *  @{
  */

/** @req SWS_Port_00004 - The PORT Driver module shall allow the configuration of different functionality for each port and port pin, e.g. ADC, SPI, DIO etc.*/
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00079 - Port shall provide direction, init value, changable dir and mode */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00131 - Port.c shall include Port.h, Port_MemMap.h, Det.h, SchM_Port.h*/
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00204 - Port.c shall optionally include Port_Cbk.h and Dem.h. Port.c has implicit access to the Port_Cfg.h file through the Port.h file
 * As it is optional Port_Cbk.h and Dem.h are not used */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00129 - Imported Types
 * Types used when applicable, Dem types is not needed since Dem is not used by Port */

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00081 - Port shall provide optional configuration of slew rate, pull up, open drain and read back. Not supporting pin levels */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00082 - The PORT Driver module shall not provide the facility to configure pin level inversion. The default value shall be set (i.e. not inverted). */
/** @req SWS_Port_00006 - The user of the PORT Driver module shall configure the symbolic names of the port pins of the MCU.
 * Symbolic names - implemented in the generator/tool */

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00207 - These symbolic names for the individual port pins (e.g. PORT_A_PIN_0) shall be defined in the configuration tool.
 * Symbolic names - implemented in the generator/tool */

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00072 - Pin mode, Pin direction, Pin level Init value, Pin direction changeable during runtime,Pin mode changeable during runtime,  Slew rate control etc.. should be configurable
 * Implemented in the generator/tool */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00076 - The PORT Driver module’s implementer shall define symbolic names in the file Port_Cfg.h
 * Symbolic names - implemented in the generator/tool */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00075 - Atomic access to all ports and port pins*/
/* SWS_Port_00213 - If Port_Init function is not called first, then no operation can occur on the MCU ports and port pins.
 * All the API check for the port initialization first. If the Port_Init is not done then no other operation will occur on the pins
 * This requirement is not at Port Module level*/

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00146 - Det_ReportError
 * Det error are reported*/

/** @req:MPC|TMS570 SWS_Port_00215 - If the register can affect several hardware modules and if it is not an I/O register, it shall be initialised by the MCU driver.*/
/** @req:MPC|TMS570 SWS_Port_00217 - One-time writable registers that require initialisation directly after reset shall be initialised by the startup code.*/
/** @req:MPC|TMS570 SWS_Port_00218 - All the other registers not mentioned before, shall be initialised by the start-up code.*/

/* Requirements that are not implemented*/
/** !req SWS_Port_00071 - The Port Driver module’s environment shall call the function Port_Init after a reset in order to reconfigure the ports and port pins of the MCU.*/
/** !req:ZYNQ SWS_Port_00077 - If default error detection is enabled the Port Driver module shall check the function parameters in the order in which they are passed and skip further parameter checking if one check fails.*/
/** !req SWS_Port_00078 - The Port Driver module’s environment shall call the function Port_Init first in order to initialize the port for use.*/
/** !req SWS_Port_00113 - If the hardware allows for only one usage of the register, the driver module implementing that functionality is responsible for initializing the register.*/

#include "Port.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Port_MemMap.h"
#include "Port_Internal.h"
#include "SchM_Port.h"

/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_PPC)
#define PORT_SW_MAJOR_VERSION_INT   7u /**< @brief Port Module Software Major Version Number  */
#define PORT_SW_MINOR_VERSION_INT   0u /**< @brief Port Module Software Minor Version Number  */
#define PORT_SW_PATCH_VERSION_INT   0u /**< @brief Port Module Software Patch Version Number  */

#define PORT_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Port Module Autosar Major Version Number  */
#define PORT_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Port Module Autosar Minor Version Number  */
#define PORT_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Port Module Autosar Patch Version Number  */

#elif defined(CFG_TMS570LS12X)
#define PORT_SW_MAJOR_VERSION_INT   6u /**< @brief Port Module Software Major Version Number  */
#define PORT_SW_MINOR_VERSION_INT   0u /**< @brief Port Module Software Minor Version Number  */
#define PORT_SW_PATCH_VERSION_INT   0u /**< @brief Port Module Software Patch Version Number  */

#define PORT_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Port Module Autosar Major Version Number  */
#define PORT_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Port Module Autosar Minor Version Number  */
#define PORT_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Port Module Autosar Patch Version Number  */

#else
#define PORT_SW_MAJOR_VERSION_INT   5u  /**< @brief Port Module Software Major Version Number for other architectures */
#define PORT_SW_MINOR_VERSION_INT   0u  /**< @brief Port Module Software Minor Version Number for other architectures */
#define PORT_SW_PATCH_VERSION_INT   1u  /**< @brief Port Module Software patch Version Number for other architectures */

#define PORT_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Port Module Autosar Major Version Number  */
#define PORT_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Port Module Autosar Minor Version Number  */
#define PORT_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Port Module Autosar Patch Version Number  */
#endif


/** @} */

#if (PORT_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION_INT) || (PORT_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Port.c and Port.h"
#endif

#if (PORT_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION_INT) || (PORT_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Port.c and Port.h"
#endif
/* ----------------------------[private function]-------------------------------*/

/**
 * @brief  Validate function that will be used in API's that can be used to check the expression and report Det errors if PORT_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[in] rv - Return value based on which the further execution of API is determined. RANGE : E_OK or E_NOT_OK.
 */
static inline Std_ReturnType validatePortParameter (boolean exp,uint8 apiid,uint8 errid){
    Std_ReturnType rv;

    rv = E_OK;
    if(exp == FALSE){
        rv = E_NOT_OK;
#if(PORT_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError(PORT_MODULE_ID, 0,apiid,errid);
#endif
    }
    return rv;
}

/* ----------------------------[static variables ]-----------------*/
static Port_StateType portState = PORT_UNINITIALIZED;

/* ----------------------------[static functions]-----------------*/

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00001 - The PORT Driver module shall initialize the whole port structure of the microcontroller.*/
/** @req SWS_Port_00140 - Port Init */
/** @req SWS_Port_00042 - The function Port_Init shall initialize all configured resources.*/
/** @req SWS_Port_00041 - The function Port_Init shall initialize ALL ports and port pins with the configuration set pointed to by the parameter ConfigPtr.*/
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00121 -  Port_Init shall always have a pointer as a parameter
 * Pre Compile only*/
/** !req SWS_Port_00005 - The PORT Driver module shall configure all ports and port pins that are not used (neither as GPIO nor special purpose IO) to be set to a defined state by the PORT Driver module configuration.
 * Only pins in the configuration is set*/
/** @req SWS_Port_00043 - The function Port_Init shall avoid glitches and spikes on the affected port pins.*/

/** @brief API that initializes the port module
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] ConfigPtr - Pointer that holds the configuration of the pins
 */
void Port_Init(const Port_ConfigType *ConfigPtr) {
    Std_ReturnType rv;
    rv = validatePortParameter((boolean)(ConfigPtr != NULL_PTR), PORT_INIT_ID,PORT_E_INIT_FAILED);
    if (rv == E_OK){
        Port_Hw_Init(ConfigPtr);
        /** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00002 - The function Port_Init shall initialize all variables used by the PORT driver module to an initial state.*/
        portState = PORT_INITIALIZED;
    }
}

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00086 - The function Port_SetPinDirection shall only be available to the user if the pre-compile parameter PortSetPinDirectionApi is set to TRUE. If set to FALSE, the function Port_SetPinDirection is not available. */

#if ( PORT_SET_PIN_DIRECTION_API == STD_ON )

/** @req SWS_Port_00141 - Port_SetPinDirection */
/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00054 - The function Port_SetPinDirection shall be re-entrant if accessing different pins independent of a port.*/

/** @brief API that changes the direction of the pin during run time.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Pin - Pin for which the direction should be changed
 *  @param[in] Direction - Direction of the pin
 */
void Port_SetPinDirection( Port_PinType Pin, Port_PinDirectionType Direction ){
    const  Port_ConfigType * configPtr;
    Std_ReturnType rv;

    configPtr = &PortConfigData;
    rv = validatePortParameter((boolean)(portState == PORT_INITIALIZED), PORT_SET_PIN_DIRECTION_ID, PORT_E_UNINIT);

    if (E_OK != rv) {
        /*lint -e{904} MISRA:PERFORMANCE:Multiple return statements:[MISRA 2004 Rule 14.7, required] */
        return;
    }
    rv = validatePortParameter((boolean)(Pin < PORT_NR_PINS), PORT_SET_PIN_DIRECTION_ID,PORT_E_PARAM_PIN);

    if (E_OK != rv) {
        /*lint -e{904} MISRA:PERFORMANCE:Multiple return statements:[MISRA 2004 Rule 14.7, required] */
        return;
    }

    /** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00137 - For the port pins configured as changeable using the configuration tool, the PORT driver shall allow the user to change the direction of port pins during runtime.*/
    rv = validatePortParameter(configPtr->padConfig[Pin].pinDirectionChangeable , PORT_SET_PIN_DIRECTION_ID, PORT_E_DIRECTION_UNCHANGEABLE);

    if (rv == E_OK){
        Port_Hw_SetPinDirection(Pin,Direction);
    }


}
#endif

/** @req SWS_Port_00142 - Port Refresh Port Direction */

/** @brief API that is used to refresh the direction of the port
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 */
void Port_RefreshPortDirection(void) {
    Std_ReturnType rv;

    /** @req SWS_Port_00051 - Det error check as mentioned in section 7.5 (Port Driver SWS document - ASR 4.3.0)*/

    rv = validatePortParameter((boolean)(portState == PORT_INITIALIZED), PORT_REFRESH_PORT_DIRECTION_ID, PORT_E_UNINIT);
    if (rv == E_OK){
    	/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00060 -
    	 * 	The function Port_RefreshPortDirection shall refresh the direction of all configured ports to the configured direction (PortPinDirection).*/
    	/** @req:TMS570|PPC SWS_Port_00066 - For refreshing of the port on the microcontroller,
    	 * 	the PORT driver shall allow the user to refresh the direction of those port pins whose direction is set by configuration and cannot be changed dynamically.*/
    	Port_Hw_RefreshPortDirection();
    }
}

#if (PORT_VERSION_INFO_API == STD_ON)

/** @brief  API that returns the version information of this module.
 *          Synchronous
 *  @note   Reentrant
 *  @param[in]  versionInfo - Pointer that holds the version info.
 */
void Port_GetVersionInfo(Std_VersionInfoType* versionInfo){
    Std_ReturnType rv;

    /** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00225 - if Det is enabled, the parameter versioninfo shall be checked for being NULL. The error PORT_E_PARAM_POINTER shall be reported in case the value is a NULL pointer.*/
    /** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00087 - If default error detection is enabled and the Port Driver module has detected an error, the desired functionality shall be skipped and the requested service shall return without any action */

    rv = validatePortParameter((boolean)(versionInfo != NULL_PTR), PORT_GET_VERSION_INFO_ID,PORT_E_PARAM_POINTER);
    if (rv == E_OK){
        versionInfo->vendorID = PORT_VENDOR_ID;
        versionInfo->moduleID = PORT_MODULE_ID;
        versionInfo->sw_major_version = PORT_SW_MAJOR_VERSION;
        versionInfo->sw_minor_version = PORT_SW_MINOR_VERSION;
        versionInfo->sw_patch_version = PORT_SW_PATCH_VERSION;
    }
}
#endif

/* !!!! Port_SetPinMode - For safety reason the mode of the pin should not be changed during run time.Hence this function is disabled for the user.(TMS570|MPC5744P) !!!*/
#if (PORT_SET_PIN_MODE_API == STD_ON)

/** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|JACINTO5|JACINTO6|MPC5744P|TMS570 SWS_Port_00145 - Port_SetPinMode Api
 *  Shall not be used in TMS570 for safety reasons*/
/** @req SWS_Port_00087 PORT_E_PARAM_INVALID_MODE not available */

/** @brief API that is used to change the mode of the pin during run time.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         TMS 570 : For safety reason the mode of the pin should not be changed during run time.Hence this function is disabled for the user in TMS570|MPC5744P.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Pin - Pin for which the mode should be changed
 *  @param[in] Mode - Mode to be changed
 */
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode) {
    const  Port_ConfigType * configPtr;
    Std_ReturnType rv;

    configPtr = &PortConfigData;

    /** @req:ZYNQ|PPC|RH850F1H|MPC5607B|MPC5645S|MPC5646B|MPC5748G|STM32|TMS570|MPC5744P SWS_Port_00223 - If Det is enabled, the function Port_SetPinMode shall report PORT_E_MODE_UNCHANGEABLE error and return without any other action, if the parameter PortPinModeChangeable is set to FALSE*/
    rv = validatePortParameter((boolean)(portState == PORT_INITIALIZED), PORT_SET_PIN_MODE_ID, PORT_E_UNINIT);
    if (E_OK != rv) {
        /*lint -e{904} MISRA:PERFORMANCE:Multiple return statements:[MISRA 2004 Rule 14.7, required] */
        return;
    }
    rv = validatePortParameter((boolean)(Pin < PORT_NR_PINS), PORT_SET_PIN_MODE_ID,PORT_E_PARAM_PIN);
    if (E_OK != rv) {
        /*lint -e{904} MISRA:PERFORMANCE:Multiple return statements:[MISRA 2004 Rule 14.7, required] */
        return;
    }
    rv = validatePortParameter(configPtr->padConfig[Pin].pinModeChangeable, PORT_SET_PIN_MODE_ID, PORT_E_MODE_UNCHANGEABLE);

    if (rv == E_OK){
        Port_Hw_SetPinMode(Pin,Mode);
    }

}
#endif

/** @}*/
/** @}*/
