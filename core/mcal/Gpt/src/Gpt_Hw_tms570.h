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

/** @file Gpt_Hw_tms570.h
 *	This file contains the hardware specific register declarations.
 */

/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  @{
  */

 /** \addtogroup Gpt
  *  This is the TMS 570 Mcal Gpt Group
  *  @{
  */

#include "Std_Types.h"

/**
*   @brief  RTI counter unit numbers
*/
#define RTI_COUNTER_NR 2U

/**
*   @brief  RTI compare unit numbers
*/
#define RTI_COMPARE_NR 4U

/**
*   @brief  RTI register value used in  reserved registers.
*/
#define RTI_REG_VALUE  32
/**
*   @brief  RTI module register definition
*/
typedef volatile struct rtiBase
{
	uint32 GCTRL;          /**< @brief 0x0000: Global Control Register   */
	uint32 TBCTRL;         /**< @brief 0x0004: Timebase Control Register */
	uint32 CAPCTRL;        /**< @brief 0x0008: Capture Control Register  */
	uint32 COMPCTRL;       /**< @brief 0x000C: Compare Control Register  */
    struct
    {
		uint32 FRCx;       /**< @brief 0x0010,0x0030: Free Running Counter x Register         */
		uint32 UCx;        /**< @brief 0x0014,0x0034: Up Counter x Register                   */
		uint32 CPUCx;      /**< @brief 0x0018,0x0038: Compare Up Counter x Register           */
		uint32 : RTI_REG_VALUE;/**< @brief 0x001C,0x003C: Reserved                                */
		uint32 CAFRCx;     /**< @brief 0x0020,0x0040: Capture Free Running Counter x Register */
		uint32 CAUCx;      /**< @brief 0x0024,0x0044: Capture Up Counter x Register           */
		uint32 : RTI_REG_VALUE;/**< @brief 0x0028,0x0048: Reserved                                */
		uint32 : RTI_REG_VALUE;/**< @brief 0x002C,0x004C: Reserved                                */
    } CNT[RTI_COUNTER_NR];     /**< @brief Counter x selection:
                                    - 0: Counter 0
                                    - 1: Counter 1                                       */
    struct
    {
    	uint32 COMPx;      /**< @brief 0x0050,0x0058,0x0060,0x0068: Compare x Register        */
    	uint32 UDCPx;      /**< @brief 0x0054,0x005C,0x0064,0x006C: Update Compare x Register */
    } CMP[RTI_COMPARE_NR]; /**< @brief Compare x selection:
                                    - 0: Compare 0
                                    - 1: Compare 1
                                    - 2: Compare 2
                                    - 3: Compare 3                                       */
    uint32 TBLCOMP;        /**< @brief 0x0070: External Clock Timebase Low Compare Register   */
    uint32 TBHCOMP;        /**< @brief 0x0074: External Clock Timebase High Compare Register  */
    uint32 : RTI_REG_VALUE;/**< @brief 0x0078: Reserved                                       */
    uint32 : RTI_REG_VALUE;/**< @brief 0x007C: Reserved                                       */
    uint32 SETINT;         /**< @brief 0x0080: Set/Status Interrupt Register                  */
    uint32 CLEARINT;       /**< @brief 0x0084: Clear/Status Interrupt Register                */
    uint32 INTFLAG;        /**< @brief 0x008C: Interrupt Flag Register                        */
} rtiBASE_t;

/**
*   @brief RTI1 Register Frame Pointer
**   This pointer is used by the RTI driver to access the RTI1 registers.
*/

#define rtiREG1 ((rtiBASE_t *)0xFFFFFC00u)

/** @}*/
/** @}*/
