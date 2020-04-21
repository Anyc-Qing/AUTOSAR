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

/** @file Lin_Hw_tms570.h
 *  This files contains the hardware specific register definitions that are required by the port module.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Lin
  *  This is the TMS570 Mcal Lin Group
  *  @{
  */

#ifndef LIN_Hw_tms570_H
#define LIN_Hw_tms570_H

#include "Std_Types.h"


/* ----------------------------[Macro Definitions]-------------*/

/** @def linREG
*   @brief LIN Register Frame Pointer
*
*   This pointer is used by the LIN driver to access the lin module registers.
*/
#define linREG ((linBASE_t *)0xFFF7E400U)

#define LIN_0     (*(volatile linBASE_t *)   0xFFF7E400UL)
#define LIN_1     (*(volatile linBASE_t *)   0xFFF7E500UL)


/* ----------------[Base address type Definition]--------------*/

/** @typedef linBASE_t
*   @brief LIN  Register Frame Type Definition
*
*   This type is used to access the LIN Registers.
*/

typedef volatile struct linBase
{
    uint32      GCR0;         /**< 0x0000: Global control register 0              */
    uint32      GCR1;         /**< 0x0004: Global control register 1              */
    uint32      GCR2;         /**< 0x0008: Global control register 2              */
    uint32      SETINT;       /**< 0x000C: Set interrupt enable register          */
    uint32      CLEARINT;     /**< 0x0010: Clear interrupt enable register        */
    uint32      SETINTLVL;    /**< 0x0014: Set interrupt level register           */
    uint32      CLEARINTLVL;  /**< 0x0018: Set interrupt level register           */
    uint32      FLR;          /**< 0x001C: interrupt flag register                */
    uint32      INTVECT0;     /**< 0x0020: interrupt vector Offset 0              */
    uint32      INTVECT1;     /**< 0x0024: interrupt vector Offset 1              */
    uint32      FORMAT;       /**< 0x0028: Format Control Register                */
    uint32      BRS;          /**< 0x002C: Baud rate selection register           */
    uint32      ED;           /**< 0x0030: Emulation register                     */
    uint32      RD;           /**< 0x0034: Receive data register                  */
    uint32      TD;           /**< 0x0038: Transmit data register                 */
    uint32      PIO0;         /**< 0x003C: Pin function register                  */
    uint32      PIO1;         /**< 0x0040: Pin direction register                 */
    uint32      PIO2;         /**< 0x0044: Pin data in register                   */
    uint32      PIO3;         /**< 0x0048: Pin data out register                  */
    uint32      PIO4;         /**< 0x004C: Pin data set register                  */
    uint32      PIO5;         /**< 0x0050: Pin data clr register                  */
    uint32      PIO6;         /**< 0x0054: Pin open drain output enable register  */
    uint32      PIO7;         /**< 0x0058: Pin pullup/pulldown disable register   */
    uint32      PIO8;         /**< 0x005C: Pin pullup/pulldown selection register */
    uint32      COMP;         /**< 0x0060: Compare register                       */
    uint8       RDx[8U];      /**< 0x0064-0x0068: RX buffer register              */
    uint32      MASK;         /**< 0x006C: Mask register                          */
    uint32      ID;           /**< 0x0070: Identification Register                */
    uint8       TDx[8U];      /**< 0x0074-0x0078: TX buffer register              */
    uint32      MBRSR;        /**< 0x007C: Maximum baud rate selection register   */
    uint32      rsvd1[4U];    /**< 0x0080 - 0x8C: Reserved                               */
    uint32      IODFTCTRL;    /**< 0x0090: IODFT loopback register                */
} linBASE_t;




#endif /* LIN_Hw_tms570_H */

/** @} */
