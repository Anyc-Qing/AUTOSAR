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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=RH850F1H|TMS570|PPC|MPC5607B|MPC5645S|MPC5646B|MPC5748G|MPC5744P|MPC5747C|MPC5746C|MPC5777M|MPC5777C */


/** @addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** @addtogroup Mcu
  *  This is the Mcal Mcu Group
  *  @{
  */
/* ----------------------------[includes]------------------------------------*/
#include "SchM_Mcu.h"
#include "Mcu_MemMap.h"
#include "Mcu.h"
#include "Mcu_Internal.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif


/* Global requirements */
/** @req 4.1.2|4.3.0/SWS_Mcu_00017 If the default error detection is enabled for the MCU module, the MCU functions shall check the following API parameters, report detected errors to the Default Error Tracer and reject with return value E_NOT_OK in case the function has a standard return type.  */
/** @req 4.1.2|4.3.0/SWS_Mcu_00226 Production Errors shall not be used as the return value of the called function */
/** @req 4.3.0/SWS_Mcu_00152 Imported Type: Dem_EventIdType, Dem_EventStatusType, Std_ReturnType, Std_VersionInfoType */

/* ----------------------------[private define]------------------------------*/
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

Mcu_GlobalType Mcu_Global =
{
    .initRun = FALSE,
    .config = &McuConfigData[0],
    .clockSetting = 0,
    .rawResetvalue = 0,
    .resetReason = MCU_RESET_UNDEFINED
};

/* ----------------------------[private functions]---------------------------*/


/**
 * @brief Arccore internal function to get Mcu reset reason.
 *
 * @return Reset type
 * @retval MCU_POWER_ON_RESET Power on reset
 * @retval MCU_WATCHDOG_RESET Reset caused by Watchdog
 * @retval MCU_SW_RESET       SW Reset
 * @retval MCU_RESET_UNDEFINED Undefined reset type
 * @retval MCU_OSC_FAILURE_RESET Oscilator failure
 * @retval MCU_CPU_RESET CPU internal reset.
 * @retval MCU_EXT_RESET External reset cause.
 * @retval MCU_VSW_RESET Valid Sw Reset
 */
Mcu_ResetType Mcu_Arc_GetResetReason(void)
{
    return Mcu_Global.resetReason;
}

/**
 * @brief  validateMcuParameter function that will be used in API's that can be used to check the expression and report Det errors if MCU_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[out] Returns the validity of the expression provided
 * @retval E_OK      Expression passed is OK
 * @retval E_NOT_OK  Expression passed is NOT OK (FALSE)
 * @param[in,out] _rvPtr - Returns the validity of the expression provided
 */
static inline void validateMcuParameter (boolean exp,uint8 apiid,uint8 errid, Std_ReturnType* _rvPtr){
	  if ((E_OK == *_rvPtr) && (exp == FALSE)) {
		#if (MCU_DEV_ERROR_DETECT == STD_ON)
		/** @req 4.1.2|4.3.0/SWS_Mcu_00163 - Optional Interfaces (Section 8.6.2) API Det_ReportError */
		(void)Det_ReportError(MCU_MODULE_ID, 0, apiid, errid);
		#endif
		*_rvPtr = E_NOT_OK;
	  }
}


/* ----------------------------[public functions]----------------------------*/

/** @req 4.1.2|4.3.0/SWS_Mcu_00026 - The function Mcu_Init shall initialize the MCU module, i.e. make the configuration settings for power down, clock and RAM sections visible within the MCU module.  */
/** @req 4.1.2|4.3.0/SWS_Mcu_00116 - If the hardware allows for only one usage of the register, the driver module implementing that functionality is responsible for initializing the register.  */
/** @req 4.1.2|4.3.0/SWS_Mcu_00244 - If the register can affect several hardware modules and if it is an I/O register, it shall be initialised by the PORT driver.  */
/** @req 4.1.2|4.3.0/SWS_Mcu_00245 - If the register can affect several hardware modules and if it is not an I/O register, it shall be initialised by this MCU driver. */
/** @req 4.1.2|4.3.0/SWS_Mcu_00246 - One-time writable registers that require initialisation directly after reset shall be initialised by the startup code. */
/** @req 4.1.2|4.3.0/SWS_Mcu_00247 - All other registers not mentioned before shall be initialised by the start-up code.  */

/**
 * @brief Mcu init function
 *
 * @note Non reentrant
 *
 * @param[in] ConfigPtr Pointer to configuration generated by Arctic Studio
 */
void Mcu_Init(const Mcu_ConfigType *ConfigPtr)
{
	Std_ReturnType validVal = E_OK;

	/** @req 4.1.2/SWS_Mcu_00018 -If development error detection is enabled, the parameter ConfigPtr shall be checked for being NULL_PTR. Related error value: MCU_E_PARAM_CONFIG. */
    validateMcuParameter((boolean)( NULL_PTR != ConfigPtr ), MCU_INIT_SERVICE_ID, MCU_E_PARAM_CONFIG, &validVal);

    if(E_OK == validVal) {
        /* Get reset cause and clear */
        Mcu_Hw_Init(ConfigPtr);

        /* Save configuration in global Mcu config structure */
        Mcu_Global.config = ConfigPtr;

        /* Set init flag to TRUE -> module initialised */
        Mcu_Global.initRun = TRUE;
    }
}

/**
 * @brief Arccore specific function that sets the Mcu init internal state to false.
 * @note Non reentrant
 */
void Mcu_Arc_DeInit( void )
{
	/* Set init flag to TRUE -> module deinitialised */
    Mcu_Global.initRun = FALSE;
}



/** @req:TMS570|MPC5744P 4.1.2|4.3.0/SWS_Mcu_00011 - The function Mcu_InitRamSection shall fill the memory from address McuRamSectionBaseAddress up to address McuRamSectionBaseAddress + McuRamSectionSize-1 with the byte-value contained in McuRamDefaultValue, where McuRamSectionBaseAddress, McuRamSectionSize and McuRamDefaultValue are the values of the configuration parameters for each RamSection (see SWS_Mcu_00030). */

/**
 * @brief Initialised configured RAM section with a default value
 *
 * @param[in] RamSection RAM Section to be initialised
 *
 * @note Non reentrant
 *
 * @retval E_OK     If success.
 * @retval E_NOT_OK In case of error.
 */
Std_ReturnType Mcu_InitRamSection(Mcu_RamSectionType RamSection)
{
	Std_ReturnType validVal_rv = E_OK;
	uint32 ramSecIdx;

	/** @req 4.1.2|4.3.0/SWS_Mcu_00021 - RamSection shall be within the sections defined in the configuration data structure. Related error value: MCU_E_PARAM_RAMSECTION */
	/** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/
	validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_INITRAMSECTION_SERVICE_ID, MCU_E_UNINIT, &validVal_rv );
    validateMcuParameter( (boolean) ( RamSection < Mcu_Global.config->McuRamSectors ), MCU_INITRAMSECTION_SERVICE_ID, MCU_E_PARAM_RAMSECTION, &validVal_rv );

    if (E_OK == validVal_rv) {
        /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
        uint8 *ramBaseAddr = (uint8 *) Mcu_Global.config->McuRamSectorSettingConfig[RamSection].McuRamSectionBaseAddress;
        uint32 ramSecSize = Mcu_Global.config->McuRamSectorSettingConfig[RamSection].McuRamSectionSize;

    	/* OK, Mcu.chk for the specific MCU needs to check that McuRamDefaultValue fits within an uint8. */
		/*This for loop replace memset in original code*/
		for(ramSecIdx = 0 ; ramSecIdx < ramSecSize; ramSecIdx++){
			/* Set default value */
			*ramBaseAddr = (uint8) Mcu_Global.config->McuRamSectorSettingConfig[RamSection].McuRamDefaultValue;

			/* next address */
			ramBaseAddr++;
		}
    }

    return validVal_rv;
}


#if ( MCU_GET_RAM_STATE == STD_ON )
/**
 * @brief Gets the state of the RAM memory
 *
 * @note Function not supported.
 *
 * @retval MCU_RAMSTATE_INVALID Invalid because function is not supported.
 */
Mcu_RamStateType Mcu_GetRamState( void )
{
    /* NOT SUPPORTED */
    return MCU_RAMSTATE_INVALID;
}
#endif 

#if ( MCU_INIT_CLOCK == STD_ON )

/** @req 4.1.2|4.3.0/SWS_Mcu_00137 - The function Mcu_InitClock shall initialize the PLL and other MCU specific clock options. The clock configuration parameters are provided via the configuration structure. */
/** @req 4.1.2|4.3.0/SWS_Mcu_00210 - The function Mcu_InitClock shall be disabled if the parameter McuInitClock is set to FALSE. Instead this function is available if the former parameter is set to TRUE  (see also ECUC_Mcu_00182) */

/**
 * @brief Initialise PLL and other MCU specific clock options.
 *
 * @note Non reentrant.
 *
 * @param[in] ClockSetting Clock settings.
 *
 * @retval E_OK     If success.
 * @retval E_NOT_OK In case of error.
 */
Std_ReturnType Mcu_InitClock(Mcu_ClockType ClockSetting)
{
    const Mcu_ClockSettingConfigType *clockSettingsPtr;
    Std_ReturnType validVal_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/
    /** @req 4.1.2|4.3.0/SWS_Mcu_00019 - ClockSetting shall be within the settings defined in the configuration data structure. Related error value: MCU_E_PARAM_CLOCK⌋() */
    validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_INITCLOCK_SERVICE_ID, MCU_E_UNINIT, &validVal_rv );
    validateMcuParameter( (boolean) ( ClockSetting < Mcu_Global.config->McuClockSettings ), MCU_INITCLOCK_SERVICE_ID, MCU_E_PARAM_CLOCK, &validVal_rv );

    if (E_OK == validVal_rv) {
        Mcu_Global.clockSetting = ClockSetting;
        clockSettingsPtr = &Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting];

        validVal_rv = Mcu_Hw_InitClock(clockSettingsPtr);
    }

    return validVal_rv;
}

#endif /* #if ( MCU_INIT_CLOCK == STD_ON )*/

#if ( MCU_NO_PLL == STD_OFF )

/** @req 4.1.2|4.3.0/SWS_Mcu_00205 - The function Mcu_DistributePllClock shall be available if the pre-compile parameter McuNoPll is set to FALSE. Otherwise, this Api has to be disabled (see also ECUC_Mcu_00180) */

/**
 * @brief This service activates the PLL clock to the MCU clock distribution.
 *
 * @note This function has no effect on TMS570. If called it will always return E_OK.
 *
 * @note Non reentrant
 * @retval E_OK     Command has been accepted.
 * @retval E_NOT_OK Command has not been accepted.
 */
Std_ReturnType Mcu_DistributePllClock(void)
{
	Std_ReturnType validVal_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/
	/** @req 4.1.2|4.3.0/SWS_Mcu_00122 - A error shall be reported if the status of the PLL is detected as not locked with the function Mcu_DistributePllClock(). The DET error reporting shall be used. Related error value: MCU_E_PLL_NOT_LOCKED. */
    validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_DISTRIBUTEPLLCLOCK_SERVICE_ID, MCU_E_UNINIT, &validVal_rv );
    validateMcuParameter( (boolean) ( Mcu_Hw_GetPllStatus() == MCU_PLL_LOCKED), MCU_DISTRIBUTEPLLCLOCK_SERVICE_ID, MCU_E_PLL_NOT_LOCKED, &validVal_rv);

    if (E_OK == validVal_rv) {
    	validVal_rv = Mcu_Hw_DistributePllClock();
    }
    return validVal_rv;
}

#endif /* #if ( MCU_NO_PLL == STD_ON ) */


/**
 * @brief This service gets the lock status of the PLL.
 *
 * @note Reentrant
 *
 * @retval MCU_PLL_LOCKED           PLL is locked.
 * @retval MCU_PLL_UNLOCKED         PLL is not locked.
 * @retval MCU_PLL_STATUS_UNDEFINED PLL is in an undefined state.
 */
Mcu_PllStatusType Mcu_GetPllStatus(void)
{
	Std_ReturnType validVal_rv = E_OK;
	Mcu_PllStatusType pllStatus = MCU_PLL_STATUS_UNDEFINED;

	/** @req 4.1.2|4.3.0/SWS_Mcu_00206 - The function Mcu_GetPllStatus shall also return MCU_PLL_STATUS_UNDEFINED if the pre-compile parameter McuNoPll is set to TRUE (see also ECUC_Mcu_00180). */
#if ( MCU_NO_PLL == STD_ON )
	pllStatus = MCU_PLL_STATUS_UNDEFINED;
#else
    /** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/
    /** @req 4.1.2|4.3.0/SWS_Mcu_00132 - The function Mcu_GetPllStatus shall return MCU_PLL_STATUS_UNDEFINED if this function is called prior to calling of the function Mcu_Init. */

    validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_GETPLLSTATUS_SERVICE_ID, MCU_E_UNINIT, &validVal_rv);

    if (E_OK == validVal_rv) {
#if defined(CFG_SIMULATOR)
    	pllStatus =  MCU_PLL_LOCKED;
#else
    	pllStatus = Mcu_Hw_GetPllStatus();
#endif /* #if defined(CFG_SIMULATOR) */
    } else {
    	pllStatus = MCU_PLL_STATUS_UNDEFINED;
    }
#endif /* #if ( MCU_NO_PLL == STD_ON ) */
    return pllStatus;
}

/**
 * @brief Get reset reason
 *
 * @note Reentrant
 *
 * @retval MCU_POWER_ON_RESET    Power on reset
 * @retval MCU_WATCHDOG_RESET    Reset caused by Watchdog
 * @retval MCU_SW_RESET          SW Reset
 * @retval MCU_RESET_UNDEFINED   Undefined reset type
 * @retval MCU_OSC_FAILURE_RESET Oscilator failure
 * @retval MCU_CPU_RESET         CPU internal reset.
 * @retval MCU_EXT_RESET         External reset cause.
 * @retval MCU_VSW_RESET         Valid SW Reset
 */
Mcu_ResetType Mcu_GetResetReason(void)
{
	Std_ReturnType validVal_rv = E_OK;
	Mcu_ResetType resetReason = MCU_RESET_UNDEFINED;

    /** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/
	/** @req 4.1.2|4.3.0/SWS_Mcu_00133 - The function Mcu_GetResetReason shall return MCU_RESET_UNDEFINED if this function is called prior to calling of the function Mcu_Init, and if supported by the hardware. */
	/** @req 4.1.2|4.3.0/SWS_Mcu_00052 - The MCU module shall provide services to get the reset reason of the last reset if the hardware supports such a feature. */

    validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_GETRESETREASON_SERVICE_ID, MCU_E_UNINIT, &validVal_rv);

    if (E_OK == validVal_rv) {
    	resetReason = Mcu_Global.resetReason;
    }

    return resetReason;
}


/** @req:RH850F1H|TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5744P|MPC5747C|MPC5746C|MPC5777M|MPC5777C 4.1.2|4.3.0/SWS_Mcu_00235 - The type Mcu_RawResetType specifies the reset reason in raw register format, read from a reset status register */
/** @req 4.1.2|4.3.0/SWS_Mcu_00006 - The function Mcu_GetResetRawValue shall read the reset raw value from the hardware register if the hardware supports this. If the hardware does not have a reset status register, the return value shall be 0x0. */

/**
 * @brief Get raw value of the reset reason
 *
 * @note Reentrant
 *
 * @return Return reason as a raw value
 */
Mcu_RawResetType Mcu_GetResetRawValue(void)
{
	/** @req 4.1.2|4.3.0/SWS_Mcu_00135 - The function Mcu_GetResetRawValue shall return an implementation specific value which does not correspond to a valid value of the reset status register and is not equal to 0 if this function is called prior to calling of the function Mcu_Init, and if supported by the hardware. */
    Mcu_RawResetType Retval = MCU_GETRESETRAWVALUE_UNINIT_RV; /* if Mcu is not initialised, this value will be returned */
    Std_ReturnType validVal_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/

    validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_GETRESETREASON_SERVICE_ID, MCU_E_UNINIT, &validVal_rv);

    if (E_OK == validVal_rv) {
    	 /* Get Raw reset value */
    	 Retval = Mcu_Global.rawResetvalue;
    }

    return Retval;
}

#if ( MCU_PERFORM_RESET_API == STD_ON )

/** @req 4.1.2|4.3.0/SWS_Mcu_00143 - The function Mcu_PerformReset shall perform a microcontroller reset by using the hardware feature of the microcontroller. */

/**
 * @brief Allows the caller to perform a SW reset.
 *
 * @note Non reentrant
 */
void Mcu_PerformReset(void)
{
	Std_ReturnType validVal_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/
    validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_PERFORMRESET_SERVICE_ID, MCU_E_UNINIT, &validVal_rv );
    if (E_OK == validVal_rv) {
    	Mcu_Hw_PerformReset();
    }
}
#endif

//-------------------------------------------------------------------

/**
 * @brief Changes Mcu to a desired pre-configured mode
 * @note Non reentrant
 *
 * @param[in] mcuMode It could be e.g. MCU_MODE_RUN, MCU_MODE_SLEEP or MCU_MODE_NORMAL
 */
void Mcu_SetMode( Mcu_ModeType mcuMode)
{
	Std_ReturnType validVal_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Mcu_00125 - If default error detection is enabled and if any other function (except Mcu_GetVersionInfo) of the MCU module is called before Mcu_Init function, the error code MCU_E_UNINIT shall be reported to the DET.*/
	/** !req 4.1.2|4.3.0/SWS_Mcu_00020 - McuMode shall be within the modes defined in the configuration data structure. Related error value: MCU_E_PARAM_MODE */

	validateMcuParameter( (boolean) ( TRUE == Mcu_Global.initRun ), MCU_SETMODE_SERVICE_ID, MCU_E_UNINIT, &validVal_rv);
	validateMcuParameter( (boolean) ( (mcuMode <= Mcu_Global.config->McuNumberOfMcuModes)), MCU_SETMODE_SERVICE_ID, MCU_E_PARAM_MODE, &validVal_rv);
    /*lint -restore*/

	if (E_OK == validVal_rv) {
		Mcu_Hw_SetMode(mcuMode);
	}
}

#if ( MCU_VERSION_INFO_API == STD_ON )
/**
 * @brief Gets the SW version of the Mcu module, including Vendor Id, Module Id, major, minor and patch versions.
 * @note Reentrant
 *
 * @param[out] versioninfo Version information.
 */
void Mcu_GetVersionInfo( Std_VersionInfoType* versioninfo) {

	Std_ReturnType validVal_rv = E_OK;

    /** @req 4.1.2/SWS_Mcu_00204 - if development error detection is enabled, the parameter versioninfo shall be checked for being NULL_PTR. The error MCU_E_PARAM_POINTER shall be reported in case the value is a NULL_PTR pointer. */

    validateMcuParameter( (boolean) ( NULL_PTR != versioninfo ), MCU_GETVERSIONINFO_SERVICE_ID, MCU_E_PARAM_POINTER, &validVal_rv);

    if (E_OK == validVal_rv) {
		versioninfo->vendorID = MCU_VENDOR_ID;
		versioninfo->moduleID = MCU_MODULE_ID;
		versioninfo->sw_major_version = MCU_SW_MAJOR_VERSION;
		versioninfo->sw_minor_version = MCU_SW_MINOR_VERSION;
		versioninfo->sw_patch_version = MCU_SW_PATCH_VERSION;
    }
}
#endif

/**
 * @brief Get frequency of the oscillator
 * @note Reentrant
 */
uint32 Mcu_Arc_GetClockReferencePointFrequency(void)
{
    return Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;
}

/** @}*/
/** @}*/

