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

/** @file Wdg_Hw_tms570.h
 *  This files contains the hardware specific register definitions that are required by the watchdog module.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Wdg
  *  This is the TMS570 Mcal Wdg Group
  *  @{
  */

#ifndef WDG_HW_TMS570_H_
#define WDG_HW_TMS570_H_

#include "WdgIf_Types.h"


/* ----------------------------[Macro Definition]--------------*/
/**
  * @name    Values used in Wdg_Hw_tms570.h and Wdg_Hw_tms570.c
  * @{
  */
#define WDG_ENABLE_MAGIC					0xA98559DAu
#define WDG_KEY_ONE							0xE51Au
#define WDG_KEY_TWO							0xA35Cu
#define WDG_WINDOW_100_SETTING				0x5u
#define WDG_RTICLK_CMP_INDEX				3u
#define WDG_COMP_CTRL_COMPSEL_JUMP			4u
#define TMS570_RTI_CTRL_BASE				0xFFFFFC00u

#define WDG_TMS570_TIMEOUT					4095u
#define WDG_INTERRUPT_PRIORITY				2u
#define WDG_APP								0u
/** @} */


/* ----------------[Base address type Definition]--------------*/

/**
  * @brief   RTI timer and watchdog registers in TMS570
  * @details This structure represents the layout of the hardware registers in TMS570 microcontroller.
  */
typedef volatile struct rtiBase{
    uint32 GCTRL;          /**< 0x0000: Global Control Register   */
    uint32 TBCTRL;         /**< 0x0004: Timebase Control Register */
    uint32 CAPCTRL;        /**< 0x0008: Capture Control Register  */
    uint32 COMPCTRL;       /**< 0x000C: Compare Control Register  */
    struct
    {
    	uint32 FRCx;       /**< 0x0010,0x0030: Free Running Counter x Register         */
    	uint32 UCx;        /**< 0x0014,0x0034: Up Counter x Register                   */
    	uint32 CPUCx;      /**< 0x0018,0x0038: Compare Up Counter x Register           */
    	uint32 : 32;       /**< 0x001C,0x003C: Reserved                                */
    	uint32 CAFRCx;     /**< 0x0020,0x0040: Capture Free Running Counter x Register */
    	uint32 CAUCx;      /**< 0x0024,0x0044: Capture Up Counter x Register           */
    	uint32 : 32;       /**< 0x0028,0x0048: Reserved                                */
    	uint32 : 32;       /**< 0x002C,0x004C: Reserved                                */
    } CNT[2U];               /**< Counter x selection:
                                    - 0: Counter 0
                                    - 1: Counter 1                                       */
    struct
    {
    	uint32 COMPx;      /**< 0x0050,0x0058,0x0060,0x0068: Compare x Register        */
    	uint32 UDCPx;      /**< 0x0054,0x005C,0x0064,0x006C: Update Compare x Register */
    } CMP[4U];               /**< Compare x selection:
                                    - 0: Compare 0
                                    - 1: Compare 1
                                    - 2: Compare 2
                                    - 3: Compare 3                                       */
    uint32 TBLCOMP;        /**< 0x0070: External Clock Timebase Low Compare Register   */
    uint32 TBHCOMP;        /**< 0x0074: External Clock Timebase High Compare Register  */
    uint32 : 32;           /**< 0x0078: Reserved                                       */
    uint32 : 32;           /**< 0x007C: Reserved                                       */
    uint32 SETINT;         /**< 0x0080: Set/Status Interrupt Register                  */
    uint32 CLEARINT;       /**< 0x0084: Clear/Status Interrupt Register                */
    uint32 INTFLAG;        /**< 0x0088: Interrupt Flag Register                        */
    uint32 DWDCTRL;		 /**< 0x0090: Digital watchdog control Register              */
    uint32 DWDPRLD;		 /**< 0x0094: Digital watchdog preload register              */
    uint32 WDSTATUS;       /**< 0x0098: Watchdog status register                       */
    uint32 WDKEY;          /**< 0x009C: Watchdog key register                          */
    uint32 DWDCNTRM;       /**< 0x00A0: Digital watchdog down counter register         */
    uint32 WWDRXNCTRL;     /**< 0x00A4: Digital Windowed Watchdog Reaction Control Register */
    uint32 WWDSIZECTRL;    /**< 0x00A8: Digital windowed watchdog window size control register */
} rtiBASE_t;

/** @} */

/**
*   @brief RTI1 Register Frame Pointer.
*   This pointer is used by the RTI driver to access the RTI1 registers.
*/
#define rtiREG1 ((volatile rtiBASE_t *)TMS570_RTI_CTRL_BASE)

#endif

/** @}*/
/** @}*/
