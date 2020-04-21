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

/** @tagSettings DEFAULT_ARCHITECTURE=PPC|MPC5607B|MPC5645S|MPC5646B|RH850F1H|TMS570|ZYNQ|JACINTO5|JACINTO6|MPC5748G|MPC5744P|MPC5747C|MPC5746C|MPC5777M|MPC5777C*/
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */


/** @addtogroup Mcu MCU Driver
 *  @{ */

/** @file Mcu.h
 * API and type definitions for MCU Driver.
 */

/** @req 4.1.2|4.3.0/SWS_Mcu_00215 - The type definitions for Mcu_Lcfg.c and Mcu_PBcfg.c are located in the file Mcu.h. */

#ifndef MCU_H_
#define MCU_H_

/* ----------------------------[includes]------------------------------------*/


#define MCU_MODULE_ID                       101 /**< @brief Mcu Module Id*/
#define MCU_VENDOR_ID                       60  /**< @brief Mcu Vendor Id*/

#if defined(CFG_TMS570LS12X) || defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined(CFG_MPC5748G) || defined(CFG_MPC5777C)
#define MCU_SW_MAJOR_VERSION                3 /**< @brief Mcu Module Software Major Version Number  */
#define MCU_SW_MINOR_VERSION   	            0 /**< @brief Mcu Module Software Minor Version Number  */
#define MCU_SW_PATCH_VERSION                0 /**< @brief Mcu Module Software Patch Version Number  */

#define MCU_AR_RELEASE_MAJOR_VERSION        4 /**< @brief Mcu Module Autosar Major Version Number  */
#define MCU_AR_RELEASE_MINOR_VERSION        3 /**< @brief Mcu Module Autosar Minor Version Number  */
#define MCU_AR_RELEASE_PATCH_VERSION        0 /**< @brief Mcu Module Autosar Patch Version Number  */
#else
/** @cond DOXYGEN_EXCLUDE */
#define MCU_SW_MAJOR_VERSION                2 /**< @brief Mcu Module Software Major Version Number for other architecture */
#define MCU_SW_MINOR_VERSION   	            0 /**< @brief Mcu Module Software Minor Version Number for other architecture */
#define MCU_SW_PATCH_VERSION                0 /**< @brief Mcu Module Software Patch Version Number for other architecture */

#define MCU_AR_RELEASE_MAJOR_VERSION        4 /**< @brief Mcu Module Autosar Major Version Number for other architecture */
#define MCU_AR_RELEASE_MINOR_VERSION        1 /**< @brief Mcu Module Autosar Minor Version Number for other architecture */
#define MCU_AR_RELEASE_PATCH_VERSION        2 /**< @brief Mcu Module Autosar Patch Version Number for other architecture */
/** @endcond */
#endif


#include "Std_Types.h"
#include "irq_types.h"               /* Include header deviation */
/** @req 4.1.2|4.3.0/SWS_Mcu_00211 - Mcu.h shall include Mcu_Cfg.h for the API pre-compiler switches. */
#include "Mcu_Cfg.h"

#if defined(USE_DEM)
#include "Dem.h"                     /* Include header deviation */
#endif


/* ----------------------------[private define]------------------------------*/

/** @name Service id's */
//@{
#define MCU_INIT_SERVICE_ID                 0x00
#define MCU_INITRAMSECTION_SERVICE_ID       0x01
#define MCU_INITCLOCK_SERVICE_ID            0x02
#define MCU_DISTRIBUTEPLLCLOCK_SERVICE_ID   0x03
#define MCU_GETPLLSTATUS_SERVICE_ID         0x04
#define MCU_GETRESETREASON_SERVICE_ID       0x05
#define MCU_GETRESETRAWVALUE_SERVICE_ID     0x06
#define MCU_PERFORMRESET_SERVICE_ID         0x07
#define MCU_SETMODE_SERVICE_ID              0x08
#define MCU_GETVERSIONINFO_SERVICE_ID       0x09
#define MCU_INTCVECTORINSTALL_SERVICE_ID    0x0A // Not in spec but follows pattern
#define MCU_LOSS_OF_CLOCK_SERVICE_ID        0x0B // Not in spec but follows pattern
#define MCU_ARC_GET_PERIPHERAL_CLOCK        0x0Cu  // Not in spec but follows pattern
//@}


/** @req 4.1.2|4.3.0/SWS_Mcu_00012 The following errors and exceptions shall be detectable by the MCU module depending on its build version (development/production mode): */
/** @name Error Codes */
//@{
#define MCU_E_PARAM_CONFIG                  0x0A
#define MCU_E_PARAM_CLOCK                   0x0B
#define MCU_E_PARAM_MODE                    0x0C
#define MCU_E_PARAM_RAMSECTION              0x0D
#define MCU_E_PLL_NOT_LOCKED                0x0E
#define MCU_E_UNINIT                        0x0F
#define MCU_E_PARAM_POINTER                 0x10
#define MCU_E_INIT_FAILED                   0x11

/* Added by ArcCore*/
#define MCU_E_UNEXPECTED_EXECUTION          0x20u
//@}


/* Specific return values */
#define MCU_GETRESETRAWVALUE_NORESETREG_RV  0x00         /**< Not used for PPC. Raw reset value is supported */
#define MCU_GETRESETRAWVALUE_UNINIT_RV      0xffffffffU  /**< Not used for PPC. Raw reset value is supported */


/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/

/** @req 4.1.2|4.3.0/SWS_Mcu_00250 - Mcu_PllStatusType (Section 8.2.2 in Mcu Driver SWS document)  */
/** @req 4.1.2|4.3.0/SWS_Mcu_00231 - The type of Mcu_PllStatusType is an enumeration with the following values: MCU_PLL_LOCKED, MCU_PLL_UNLOCKED, MCU_PLL_STATUS_UNDEFINED.⌋*/

/**
*   @brief This is a status value returned by the function Mcu_GetPllStatus of the MCU module.
*/
typedef enum {
    MCU_PLL_LOCKED,
    MCU_PLL_UNLOCKED,
    MCU_PLL_STATUS_UNDEFINED
} Mcu_PllStatusType;

/** @req 4.1.2|4.3.0/SWS_Mcu_00255 - Mcu_RamSectionType (Section 8.2.7 in Mcu Driver SWS document) */
/** @req 4.1.2|4.3.0/SWS_Mcu_00240 - The type shall be uint8, uint16 or uint32, based on best performance */
/** @req:TMS570|ZYNQ|PPC 4.1.2|4.3.0/SWS_Mcu_00239 - The Mcu_RamSectionType specifies the identification (ID) for a RAM section, configured via the configuration structure. */

/**
*   @brief This type specifies the identification (ID) for a RAM section, which is configured in the configuration structure.
*/
typedef uint8 Mcu_RamSectionType;

/** @req 4.1.2|4.3.0/SWS_Mcu_00253 - Mcu_RawResetType (Section 8.2.5 in in Mcu Driver SWS document)  */
/** @req 4.1.2|4.3.0/SWS_Mcu_00236 - The type shall be uint8, uint16 or uint32 based on best performance */

/**
*   @brief This type specifies the reset reason in raw register format read from a reset status register.
*/
typedef uint32 Mcu_RawResetType;

/** @req 4.1.2|4.3.0/SWS_Mcu_00251 - Mcu_ClockType (Section 8.2.3 in in Mcu Driver SWS document) */
/** @req 4.1.2|4.3.0/SWS_Mcu_00233 - The type shall be uint8, uint16 or uint32, depending on uC platform */

/**
*   @brief Specifies the identification (ID) for a clock setting, which is configured in the configuration structure
*/
typedef uint8 Mcu_ClockType;

/** @req 4.1.2|4.3.0/SWS_Mcu_00254 - Mcu_ModeType  (Section 8.2.6 in in Mcu Driver SWS document)  */
/** @req 4.1.2|4.3.0/SWS_Mcu_00238 - The type shall be uint8, uint16 or uint32 */
/** @req 4.1.2|4.3.0/SWS_Mcu_00237 - The Mcu_ModeType specifies the identification (ID) for a MCU mode, configured via configuration structure. */

/**
*   @brief This type specifies the identification (ID) for a MCU mode, which is configured in the configuration structure.
*/
typedef uint8 Mcu_ModeType;

/** @req 4.1.2|4.3.0/SWS_Mcu_00252 - Mcu_ResetType (Section 8.2.4 in in Mcu Driver SWS document)*/
/** @req 4.1.2|4.3.0/SWS_Mcu_00234 - The type Mcu_ResetType, represents the different reset that a specified MCU can have */
/** @req 4.1.2|4.3.0/SWS_Mcu_00134 - The MCU module shall provide at least the values MCU_POWER_ON_RESET and MCU_RESET_UNDEFINED for the enumeration Mcu_ResetType. */

/**
*  @brief This is the type of the reset enumerator containing the subset of reset types. It is not required that all reset types are supported by hardware.
*/
typedef enum {
    MCU_POWER_ON_RESET,
    MCU_WATCHDOG_RESET,
    MCU_SW_RESET,
    MCU_RESET_UNDEFINED,
    MCU_OSC_FAILURE_RESET,
    MCU_CPU_RESET,
    MCU_EXT_RESET,
    MCU_VSW_RESET,
    MCU_HWTEST_RESET
} Mcu_ResetType;

#if defined(CFG_ZYNQ)

typedef struct {
    //  This is the frequency for the specific instance of the McuClockReference-
    //  Point container. It shall be givn in Hz.
    uint32 McuClockReferencePointFrequency;

    uint32 ARM_PLL_CFG;
    uint32 ARM_PLL_CTRL;

    uint32 IO_PLL_CFG;
    uint32 IO_PLL_CTRL;

    uint32 CAN_CLK_CTRL;
    uint32 CAN_MIOCLK_CTRL;

    uint32 ARM_CLK_CTRL;

    uint32 GEM0_CLK_CTRL;
    uint32 GEM0_RCLK_CTRL;
    uint32 GEM1_CLK_CTRL;
    uint32 GEM1_RCLK_CTRL;

    uint32 SMC_CLK_CTRL;
    uint32 LQSPI_CLK_CTRL;
    uint32 SDIO_CLK_CTRL;
    uint32 UART_CLK_CTRL;
    uint32 SPI_CLK_CTRL;
    uint32 PCAP_CLK_CTRL;
} Mcu_ClockSettingConfigType;


#elif defined(CFG_TMS570)
//nothing

#else

/**
  * @brief   Clock Setting Configuration type.
  * @details This structure represents Clock reference and various Pll settings for Mcu module.
  */
typedef struct {
    uint32 McuClockReferencePointFrequency; /**< @brief Mcu Clock Reference Point */
#if defined(CFG_TC2XX) || defined(CFG_RH850) || defined(TMS570) || defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined(CFG_MPC5777C) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
    const struct Mcu_Hw_ClockSettings *Mcu_Hw_ClockSettings;
#else
    uint8 Pll1;   /**< @brief PLL setting 1 */
    uint8 Pll2;   /**< @brief PLL setting 2 */
    uint8 Pll3;   /**< @brief PLL setting 3 */
    uint8 Pll1_1; /**< @brief PLL setting 1 */
    uint8 Pll2_1; /**< @brief PLL setting 2 */
    uint8 Pll3_1; /**< @brief PLL setting 3 */
    uint8 Pll4;   /**< @brief PLL setting 4 */
#endif
} Mcu_ClockSettingConfigType;

#endif

/** @req 4.1.2|4.3.0/SWS_Mcu_00030 - The definitions for each RAM section within the structure Mcu_ConfigType shall contain:
 * - RAM section base address
 * - Section size
 * - Data pre-setting to be initialized
 */
typedef struct {

    uint32 McuRamDefaultValue;       /**< @brief This parameter shall represent the Data pre-setting to be initialized */
    uint32 McuRamSectionBaseAddress; /**< @brief This parameter shall represent the MCU RAM section base address */
    uint32 McuRamSectionSize;        /**< @brief This parameter shall represent the MCU RAM Section size */
} Mcu_RamSectorSettingConfigType;


#if ( MCU_GET_RAM_STATE == STD_ON )
/** @req 4.1.2|4.3.0/SWS_Mcu_00256 - Mcu_RamStateType (Section 8.2.8 in in Mcu Driver SWS document)  */
typedef enum {
    MCU_RAMSTATE_INVALID,
    MCU_RAMSTATE_VALID
} Mcu_RamStateType;
#endif


/** @req 4.1.2|4.3.0/SWS_Mcu_00249 - Mcu_ConfigType (Section 8.2.1 in in Mcu Driver SWS document) */
/** @req 4.1.2|4.3.0/SWS_Mcu_00131 - The structure Mcu_ConfigType is an external data structure (i.e. implementation specific) and shall contain the initialization data for the MCU module. It shall contain:
 * - MCU dependent properties
 * - Reset Configuration
 * - Definition of MCU modes
 * - Definition of Clock settings
 * - Definition of RAM sections
 */
/** @req 4.1.2|4.3.0/SWS_Mcu_00031 - The definitions for each Clock setting within the structure Mcu_ConfigType shall contain:
 * - MCU specific properties as, e.g., clock safety features and special clock distribution settings
 * - PLL settings /start lock options
 * - Internal oscillator setting
 */
/** @req 4.1.2|4.3.0/SWS_Mcu_00232 - The type Mcu_ClockType defines the identification (ID) for clock setting configured via the configuration structure.*/


/**
  * @brief   Mcu Configuration tyoe
  * @details This structure represents Mcu module configuration such as Number of modes , Ram sectors etc.
  */
typedef struct {
    uint8 McuNumberOfMcuModes;             /**< @brief This parameter shall represent the number of Modes available for the MCU. calculationFormula = Number of configured McuModeSettingConf */
    uint8 McuRamSectors;                   /**< @brief This parameter shall represent the number of RAM sectors available for the MCU. calculationFormula = Number of configured McuRamSectorSettingConf */
    uint8 McuClockSettings;                /**< @brief This parameter shall represent the number of clock setting available for the MCU. */
    Mcu_ClockType McuDefaultClockSettings; /**< @brief This parameter defines the default clock settings that should be used. It is an index into the McuClockSettingsConfig */
#ifdef USE_DEM
    Dem_EventIdType       McuClockFailure; /**< @brief This parameter holds the DemEvent used when reporting McuClockFailure. */
#endif
    const Mcu_ClockSettingConfigType * McuClockSettingConfig;     /**< @brief This container contains the configuration (parameters) for the Clock settings of the MCU. Please see MCU031 for more information on the MCU clock settings. */
    const Mcu_RamSectorSettingConfigType *McuRamSectorSettingConfig;  /**< @brief This container contains the configuration (parameters) for the RAM Sector setting. Please see MCU030 for more information on RAM sec-tor settings. */
} Mcu_ConfigType;

/* ----------------------------[public functions]----------------------------*/
/**
  * @brief   Mcu module configuration data
  */

extern const Mcu_ConfigType McuConfigData[];


/** @req 4.1.2|4.3.0/SWS_Mcu_153 - Mcu_Init (Section 8.3.1 in in Mcu Driver SWS document)  */
void Mcu_Init( const Mcu_ConfigType *ConfigPtr );

/** @req 4.1.2|4.3.0/SWS_Mcu_00154 - Mcu_InitRamSection (Section 8.3.2 in in Mcu Driver SWS document) */
Std_ReturnType Mcu_InitRamSection(Mcu_RamSectionType RamSection );

/* @req 4.1.2|4.3.0/SWS_Mcu_00207 - Mcu_GetRamState (Section 8.3.11 in in Mcu Driver SWS document)*/
/* @req 4.1.2|4.3.0/SWS_Mcu_00209 -The function Mcu_GetRamState shall be available to the user if the pre-compile parameter McuGetRamStateApi is set to TRUE. Instead, if the former parameter is set to FALSE, this function shall be disabled (e.g. the hardware does not support this functionality). */
#if ( MCU_GET_RAM_STATE == STD_ON )
Mcu_RamStateType Mcu_GetRamState( void );
#endif 

/** @req 4.1.2|4.3.0/SWS_Mcu_00248 - Mcu shall provide a service to enable and set the MCU clock. (i.e. Cpu clock, Peripheral Clock, Prescalers, Multipliers have to be configured in the MCU */
/** @req 4.1.2|4.3.0/SWS_Mcu_00155 - Mcu_InitClock (Section 8.3.3 in in Mcu Driver SWS document) */
/** @req 4.1.2|4.3.0/SWS_Mcu_00210 - The function Mcu_InitClock shall be disabled if the parameter McuInitClock is set to FALSE. Instead this function is available if the former parameter is set to TRUE  (see also ECUC_Mcu_00182) */
#if ( MCU_INIT_CLOCK == STD_ON )
Std_ReturnType Mcu_InitClock( Mcu_ClockType ClockSetting );
#endif

/** @req 4.1.2|4.3.0/SWS_Mcu_00156 - Mcu_DistributePllClock (Section 8.3.4 in in Mcu Driver SWS document) */
/** @req 4.1.2|4.3.0/SWS_Mcu_00205 - The function Mcu_DistributePllClock shall be available if the pre-compile parameter McuNoPll is set to FALSE. Otherwise, this Api has to be disabled (see also ECUC_Mcu_00180) */
/** @req 4.1.2|4.3.0/SWS_Mcu_00230 - The type Mcu_PllStatusType is the type of the return value of the function Mcu_GetPllStatus.*/
#if ( MCU_NO_PLL == STD_OFF )
Std_ReturnType Mcu_DistributePllClock( void );
#endif

/** @req 4.1.2|4.3.0/SWS_Mcu_00157 - Mcu_GetPllStatus (Section 8.3.5 in in Mcu Driver SWS document)  */
Mcu_PllStatusType Mcu_GetPllStatus( void );

/** @req 4.1.2|4.3.0/SWS_Mcu_00158 - Mcu_GetResetReason (Section 8.3.6 in in Mcu Driver SWS document) */
Mcu_ResetType Mcu_GetResetReason( void );

/** @req 4.1.2|4.3.0/SWS_Mcu_00159 - Mcu_GetResetRawValue (Section 8.3.7 in in Mcu Driver SWS document)  */
Mcu_RawResetType Mcu_GetResetRawValue( void );

/** @req 4.1.2|4.3.0/SWS_Mcu_00055 - The MCU module shall provide a service to provide software triggering of a hardware reset. */
/** @req 4.1.2|4.3.0/SWS_Mcu_00146 - The function Mcu_PerformReset is only available if the pre-compile parameter McuPerformResetApi is set to TRUE. If set to FALSE, the function Mcu_PerformReset is not applicable. (see Section 10.2.2) */
/** @req 4.1.2|4.3.0/SWS_Mcu_00160 - Mcu_PerformReset (Section 8.3.8 in in Mcu Driver SWS document) */
#if ( MCU_PERFORM_RESET_API == STD_ON )
void Mcu_PerformReset( void );
#endif

/** @req 4.1.2|4.3.0/SWS_Mcu_00161 - Mcu_SetMode (Section 8.3.9 in in Mcu Driver SWS document) */
void Mcu_SetMode( Mcu_ModeType McuMode );

/**  @req 4.1.2|4.3.0/SWS_Mcu_00162 - Mcu_GetVersionInfo (Section 8.3.10 in in Mcu Driver SWS document) */
#if ( MCU_VERSION_INFO_API == STD_ON )
void Mcu_GetVersionInfo( Std_VersionInfoType* versioninfo);
#endif

/* ArcCore extensions functions */

uint32 Mcu_Arc_GetSystemClock( void );
#if !defined(CFG_ZYNQ)
uint32 Mcu_Arc_GetPeripheralClock( Mcu_Arc_PeriperalClock_t type );
#endif
uint32 Mcu_Arc_GetClockReferencePointFrequency(void);

/**
 * @brief Arccore Internal Function.
 * Used in PPC architecture
 */
void Mcu_Arc_EnterLowPower( sint32 mode );

/**
 * @brief Arccore Internal Function.
 * Used in PPC architecture
 */
void Mcu_Arc_LowPowerRecoverFlash( void );
void Mcu_Arc_InitZero(void);
Mcu_ResetType Mcu_Arc_GetResetReason(void);

void Mcu_Arc_DeInit(void);
void Mcu_Arc_LossOfLock(void);
void Mcu_Arc_LossOfClock(void);

/**
 * @brief Arccore Internal Function.
 * Used in PPC architecture (mpc5xxx_handlers_asm.s)
 */
int Mcu_Arc_setjmp(uint8_t* env);

void Mcu_Arc_GetECCError( uint8 *err );

/**
 * @brief Arccore Internal Function. Used in Print Mcu Cpu information.
 * Used in PPC and Renesas architecture.
 */
void Mcu_Arc_PrintInfo( void );

#endif /*MCU_H_*/
/** @} */
