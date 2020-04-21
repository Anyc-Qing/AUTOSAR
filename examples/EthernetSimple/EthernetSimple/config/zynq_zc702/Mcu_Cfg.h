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

/* Generator version: 2.0.0
 * AUTOSAR version:   4.1.2
 */

#if !(((MCU_SW_MAJOR_VERSION == 2) && (MCU_SW_MINOR_VERSION == 0)) )
#error Mcu: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((MCU_AR_RELEASE_MAJOR_VERSION == 4) && (MCU_AR_RELEASE_MINOR_VERSION == 1)) )
#error Mcu: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#ifndef MCU_CFG_H_
#define MCU_CFG_H_

#define MCU_DEV_ERROR_DETECT 	           STD_ON 
#define MCU_PERFORM_RESET_API 	           STD_ON
#define MCU_VERSION_INFO_API 	           STD_ON
#define MCU_NO_PLL                         STD_OFF
#define MCU_INIT_CLOCK                     STD_ON
#define MCU_GET_RAM_STATE                  STD_OFF
#define MCU_CLOCK_SRC_FAILURE_NOTIFICATION STD_OFF


/** @req SWS_Mcu_00237 */
/* Mcu Modes (Symbolic name) */
#define McuConf_McuModeSettingConf_NORMAL (Mcu_ModeType)0u 
#define McuConf_McuModeSettingConf_SLEEP (Mcu_ModeType)1u 
#define McuConf_McuModeSettingConf_RUN (Mcu_ModeType)2u 

/** @req SWS_Mcu_00232 */
/* Mcu Clock Types (Symbolic name) */
#define McuConf_McuClockSettingConfig_Cpu667Mhz (Mcu_ClockType)0u  

/** @req SWS_Mcu_00239 */
/* Mcu Ram Sections */
	

/* Configuration Set Handle */
#define McuModuleConfiguration (McuConfigData)
#define Mcu_McuModuleConfiguration (McuConfigData)

/* PLLs */
#define IO_PLL_FREQUENCY 			990000000		
#define ARM_PLL_FREQUENCY  			1320000000

/* Clocks */
#define MCU_ARC_CLOCK_ARM_CPU_6X4X_FREQUENCY	(ARM_PLL_FREQUENCY/2)
#define MCU_ARC_CLOCK_ARM_CPU_3X2X_FREQUENCY 	(ARM_PLL_FREQUENCY/4)
#define MCU_ARC_CLOCK_ARM_CPU_2X_FREQUENCY 		(ARM_PLL_FREQUENCY/6)
#define MCU_ARC_CLOCK_ARM_CPU_1X_FREQUENCY 		(ARM_PLL_FREQUENCY/12)

/* CAN */
#define MCU_ARC_CLOCK_CAN_0_FREQUENCY		(IO_PLL_FREQUENCY/ (0 * 0 ))	 
																
#define MCU_ARC_CLOCK_CAN_1_FREQUENCY		MCU_ARC_CLOCK_CAN_0_FREQUENCY

/* GEM */
#define MCU_ARC_CLOCK_GEM_0_FREQUENCY		(IO_PLL_FREQUENCY/ (8 * 5 ))	
#define MCU_ARC_CLOCK_GEM_1_FREQUENCY		(IO_PLL_FREQUENCY/ (0 * 0 ))
																	

/* GEM */
#define MCU_ARC_CLOCK_SMC_FREQUENCY			(IO_PLL_FREQUENCY/ 0 )

/* LSPI */
#define MCU_ARC_CLOCK_LQSPI_FREQUENCY		(IO_PLL_FREQUENCY/ 0 )

/* SDIO */
#define MCU_ARC_CLOCK_SDIO_FREQUENCY		(IO_PLL_FREQUENCY/ 0 )

/* UART */
#define MCU_ARC_CLOCK_UART_0_FREQUENCY		(IO_PLL_FREQUENCY/ 0 )
#define MCU_ARC_CLOCK_UART_1_FREQUENCY		MCU_ARC_CLOCK_UART_0_FREQUENCY					

/* SPI */
#define MCU_ARC_CLOCK_SPI_0_FREQUENCY		(IO_PLL_FREQUENCY/ 1 ) 
#define MCU_ARC_CLOCK_SPI_1_FREQUENCY		MCU_ARC_CLOCK_SPI_0_FREQUENCY								

/* PCAP */
#define MCU_ARC_CLOCK_PCAP_FREQUENCY		(IO_PLL_FREQUENCY/ 0 ) 	
 
 
#endif /* MCU_CFG_H_ */

