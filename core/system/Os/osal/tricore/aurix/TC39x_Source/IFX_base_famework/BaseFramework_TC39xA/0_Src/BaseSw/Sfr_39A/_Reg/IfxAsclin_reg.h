/**
 * \file IfxAsclin_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:16:02 GMT
 * Version: TBD
 * Specification: TBD
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg Asclin address
 * \ingroup IfxLld_Asclin_Registers
 * 
 * \defgroup IfxLld_Asclin_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin0 2-ASCLIN0
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin1 2-ASCLIN1
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin2 2-ASCLIN2
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin3 2-ASCLIN3
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin4 2-ASCLIN4
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin5 2-ASCLIN5
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin6 2-ASCLIN6
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 * \defgroup IfxLld_Asclin_Registers_Cfg_Asclin7 2-ASCLIN7
 * \ingroup IfxLld_Asclin_Registers_Cfg
 *
 *
 */
#ifndef IFXASCLIN_REG_H
#define IFXASCLIN_REG_H 1
/******************************************************************************/
#include "IfxAsclin_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_BaseAddress
 * \{  */

/** \brief ASCLIN object */
#define MODULE_ASCLIN0 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000600u))
#define MODULE_ASCLIN1 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000700u))
#define MODULE_ASCLIN2 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000800u))
#define MODULE_ASCLIN3 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000900u))
#define MODULE_ASCLIN4 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000A00u))
#define MODULE_ASCLIN5 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000B00u))
#define MODULE_ASCLIN6 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000C00u))
#define MODULE_ASCLIN7 /*lint --e(923)*/ ((*(Ifx_ASCLIN*)0xF0000D00u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin0
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN0_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000600u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN0_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000604u)

/** \brief 8, Module Identification Register */
#define ASCLIN0_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000608u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN0_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000060Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN0_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000610u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN0_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000614u)

/** \brief 18, Frame Control Register */
#define ASCLIN0_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000618u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN0_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF000061Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN0_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000620u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN0_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000624u)

/** \brief 28, LIN Control Register */
#define ASCLIN0_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000628u)
/** Alias (User Manual Name) for ASCLIN0_LIN_CON.
* To use register names with standard convension, please use ASCLIN0_LIN_CON.
*/
#define ASCLIN0_LINCON (ASCLIN0_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN0_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000062Cu)
/** Alias (User Manual Name) for ASCLIN0_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN0_LIN_BTIMER.
*/
#define ASCLIN0_LINBTIMER (ASCLIN0_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN0_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000630u)
/** Alias (User Manual Name) for ASCLIN0_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN0_LIN_HTIMER.
*/
#define ASCLIN0_LINHTIMER (ASCLIN0_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN0_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000634u)

/** \brief 38, Flags Set Register */
#define ASCLIN0_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000638u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN0_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000063Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN0_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000640u)

/** \brief 44, Transmit Data Register */
#define ASCLIN0_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000644u)

/** \brief 48, Receive Data Register */
#define ASCLIN0_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000648u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN0_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF000064Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN0_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000650u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN0_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF00006E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN0_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00006ECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN0_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF00006F0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN0_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF00006F4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF00006F8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF00006FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin1
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN1_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000700u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN1_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000704u)

/** \brief 8, Module Identification Register */
#define ASCLIN1_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000708u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN1_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000070Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN1_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000710u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN1_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000714u)

/** \brief 18, Frame Control Register */
#define ASCLIN1_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000718u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN1_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF000071Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN1_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000720u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN1_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000724u)

/** \brief 28, LIN Control Register */
#define ASCLIN1_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000728u)
/** Alias (User Manual Name) for ASCLIN1_LIN_CON.
* To use register names with standard convension, please use ASCLIN1_LIN_CON.
*/
#define ASCLIN1_LINCON (ASCLIN1_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN1_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000072Cu)
/** Alias (User Manual Name) for ASCLIN1_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN1_LIN_BTIMER.
*/
#define ASCLIN1_LINBTIMER (ASCLIN1_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN1_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000730u)
/** Alias (User Manual Name) for ASCLIN1_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN1_LIN_HTIMER.
*/
#define ASCLIN1_LINHTIMER (ASCLIN1_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN1_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000734u)

/** \brief 38, Flags Set Register */
#define ASCLIN1_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000738u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN1_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000073Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN1_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000740u)

/** \brief 44, Transmit Data Register */
#define ASCLIN1_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000744u)

/** \brief 48, Receive Data Register */
#define ASCLIN1_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000748u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN1_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF000074Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN1_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000750u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN1_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF00007E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN1_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00007ECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN1_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF00007F0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN1_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF00007F4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF00007F8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF00007FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin2
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN2_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000800u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN2_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000804u)

/** \brief 8, Module Identification Register */
#define ASCLIN2_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000808u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN2_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000080Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN2_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000810u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN2_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000814u)

/** \brief 18, Frame Control Register */
#define ASCLIN2_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000818u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN2_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF000081Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN2_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000820u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN2_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000824u)

/** \brief 28, LIN Control Register */
#define ASCLIN2_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000828u)
/** Alias (User Manual Name) for ASCLIN2_LIN_CON.
* To use register names with standard convension, please use ASCLIN2_LIN_CON.
*/
#define ASCLIN2_LINCON (ASCLIN2_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN2_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000082Cu)
/** Alias (User Manual Name) for ASCLIN2_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN2_LIN_BTIMER.
*/
#define ASCLIN2_LINBTIMER (ASCLIN2_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN2_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000830u)
/** Alias (User Manual Name) for ASCLIN2_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN2_LIN_HTIMER.
*/
#define ASCLIN2_LINHTIMER (ASCLIN2_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN2_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000834u)

/** \brief 38, Flags Set Register */
#define ASCLIN2_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000838u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN2_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000083Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN2_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000840u)

/** \brief 44, Transmit Data Register */
#define ASCLIN2_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000844u)

/** \brief 48, Receive Data Register */
#define ASCLIN2_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000848u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN2_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF000084Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN2_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000850u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN2_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF00008E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN2_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00008ECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN2_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF00008F0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN2_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF00008F4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN2_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF00008F8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN2_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF00008FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin3
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN3_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000900u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN3_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000904u)

/** \brief 8, Module Identification Register */
#define ASCLIN3_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000908u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN3_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF000090Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN3_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000910u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN3_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000914u)

/** \brief 18, Frame Control Register */
#define ASCLIN3_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000918u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN3_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF000091Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN3_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000920u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN3_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000924u)

/** \brief 28, LIN Control Register */
#define ASCLIN3_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000928u)
/** Alias (User Manual Name) for ASCLIN3_LIN_CON.
* To use register names with standard convension, please use ASCLIN3_LIN_CON.
*/
#define ASCLIN3_LINCON (ASCLIN3_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN3_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF000092Cu)
/** Alias (User Manual Name) for ASCLIN3_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN3_LIN_BTIMER.
*/
#define ASCLIN3_LINBTIMER (ASCLIN3_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN3_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000930u)
/** Alias (User Manual Name) for ASCLIN3_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN3_LIN_HTIMER.
*/
#define ASCLIN3_LINHTIMER (ASCLIN3_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN3_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000934u)

/** \brief 38, Flags Set Register */
#define ASCLIN3_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000938u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN3_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF000093Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN3_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000940u)

/** \brief 44, Transmit Data Register */
#define ASCLIN3_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000944u)

/** \brief 48, Receive Data Register */
#define ASCLIN3_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000948u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN3_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF000094Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN3_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000950u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN3_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF00009E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN3_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF00009ECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN3_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF00009F0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN3_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF00009F4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN3_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF00009F8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN3_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF00009FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin4
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN4_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000A00u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN4_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000A04u)

/** \brief 8, Module Identification Register */
#define ASCLIN4_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000A08u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN4_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000A0Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN4_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000A10u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN4_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000A14u)

/** \brief 18, Frame Control Register */
#define ASCLIN4_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000A18u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN4_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF0000A1Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN4_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000A20u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN4_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000A24u)

/** \brief 28, LIN Control Register */
#define ASCLIN4_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000A28u)
/** Alias (User Manual Name) for ASCLIN4_LIN_CON.
* To use register names with standard convension, please use ASCLIN4_LIN_CON.
*/
#define ASCLIN4_LINCON (ASCLIN4_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN4_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000A2Cu)
/** Alias (User Manual Name) for ASCLIN4_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN4_LIN_BTIMER.
*/
#define ASCLIN4_LINBTIMER (ASCLIN4_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN4_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000A30u)
/** Alias (User Manual Name) for ASCLIN4_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN4_LIN_HTIMER.
*/
#define ASCLIN4_LINHTIMER (ASCLIN4_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN4_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000A34u)

/** \brief 38, Flags Set Register */
#define ASCLIN4_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000A38u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN4_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000A3Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN4_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000A40u)

/** \brief 44, Transmit Data Register */
#define ASCLIN4_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000A44u)

/** \brief 48, Receive Data Register */
#define ASCLIN4_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000A48u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN4_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF0000A4Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN4_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000A50u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN4_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF0000AE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN4_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000AECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN4_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF0000AF0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN4_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF0000AF4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN4_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000AF8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN4_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000AFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin5
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN5_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000B00u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN5_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000B04u)

/** \brief 8, Module Identification Register */
#define ASCLIN5_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000B08u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN5_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000B0Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN5_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000B10u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN5_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000B14u)

/** \brief 18, Frame Control Register */
#define ASCLIN5_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000B18u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN5_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF0000B1Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN5_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000B20u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN5_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000B24u)

/** \brief 28, LIN Control Register */
#define ASCLIN5_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000B28u)
/** Alias (User Manual Name) for ASCLIN5_LIN_CON.
* To use register names with standard convension, please use ASCLIN5_LIN_CON.
*/
#define ASCLIN5_LINCON (ASCLIN5_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN5_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000B2Cu)
/** Alias (User Manual Name) for ASCLIN5_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN5_LIN_BTIMER.
*/
#define ASCLIN5_LINBTIMER (ASCLIN5_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN5_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000B30u)
/** Alias (User Manual Name) for ASCLIN5_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN5_LIN_HTIMER.
*/
#define ASCLIN5_LINHTIMER (ASCLIN5_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN5_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000B34u)

/** \brief 38, Flags Set Register */
#define ASCLIN5_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000B38u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN5_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000B3Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN5_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000B40u)

/** \brief 44, Transmit Data Register */
#define ASCLIN5_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000B44u)

/** \brief 48, Receive Data Register */
#define ASCLIN5_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000B48u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN5_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF0000B4Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN5_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000B50u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN5_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF0000BE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN5_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000BECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN5_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF0000BF0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN5_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF0000BF4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN5_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000BF8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN5_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000BFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin6
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN6_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000C00u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN6_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000C04u)

/** \brief 8, Module Identification Register */
#define ASCLIN6_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000C08u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN6_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000C0Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN6_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000C10u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN6_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000C14u)

/** \brief 18, Frame Control Register */
#define ASCLIN6_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000C18u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN6_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF0000C1Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN6_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000C20u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN6_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000C24u)

/** \brief 28, LIN Control Register */
#define ASCLIN6_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000C28u)
/** Alias (User Manual Name) for ASCLIN6_LIN_CON.
* To use register names with standard convension, please use ASCLIN6_LIN_CON.
*/
#define ASCLIN6_LINCON (ASCLIN6_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN6_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000C2Cu)
/** Alias (User Manual Name) for ASCLIN6_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN6_LIN_BTIMER.
*/
#define ASCLIN6_LINBTIMER (ASCLIN6_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN6_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000C30u)
/** Alias (User Manual Name) for ASCLIN6_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN6_LIN_HTIMER.
*/
#define ASCLIN6_LINHTIMER (ASCLIN6_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN6_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000C34u)

/** \brief 38, Flags Set Register */
#define ASCLIN6_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000C38u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN6_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000C3Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN6_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000C40u)

/** \brief 44, Transmit Data Register */
#define ASCLIN6_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000C44u)

/** \brief 48, Receive Data Register */
#define ASCLIN6_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000C48u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN6_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF0000C4Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN6_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000C50u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN6_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF0000CE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN6_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000CECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN6_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF0000CF0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN6_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF0000CF4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN6_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000CF8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN6_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000CFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Asclin_Cfg_Asclin7
 * \{  */
/** \brief 0, Clock Control Register */
#define ASCLIN7_CLC /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CLC*)0xF0000D00u)

/** \brief 4, Input and Output Control Register */
#define ASCLIN7_IOCR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_IOCR*)0xF0000D04u)

/** \brief 8, Module Identification Register */
#define ASCLIN7_ID /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ID*)0xF0000D08u)

/** \brief C, TX FIFO Configuration Register */
#define ASCLIN7_TXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXFIFOCON*)0xF0000D0Cu)

/** \brief 10, RX FIFO Configuration Register */
#define ASCLIN7_RXFIFOCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXFIFOCON*)0xF0000D10u)

/** \brief 14, Bit Configuration Register */
#define ASCLIN7_BITCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BITCON*)0xF0000D14u)

/** \brief 18, Frame Control Register */
#define ASCLIN7_FRAMECON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FRAMECON*)0xF0000D18u)

/** \brief 1C, Data Configuration Register */
#define ASCLIN7_DATCON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_DATCON*)0xF0000D1Cu)

/** \brief 20, Baud Rate Generation Register */
#define ASCLIN7_BRG /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRG*)0xF0000D20u)

/** \brief 24, Baud Rate Detection Register */
#define ASCLIN7_BRD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_BRD*)0xF0000D24u)

/** \brief 28, LIN Control Register */
#define ASCLIN7_LIN_CON /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_CON*)0xF0000D28u)
/** Alias (User Manual Name) for ASCLIN7_LIN_CON.
* To use register names with standard convension, please use ASCLIN7_LIN_CON.
*/
#define ASCLIN7_LINCON (ASCLIN7_LIN_CON)

/** \brief 2C, LIN Break Timer Register */
#define ASCLIN7_LIN_BTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_BTIMER*)0xF0000D2Cu)
/** Alias (User Manual Name) for ASCLIN7_LIN_BTIMER.
* To use register names with standard convension, please use ASCLIN7_LIN_BTIMER.
*/
#define ASCLIN7_LINBTIMER (ASCLIN7_LIN_BTIMER)

/** \brief 30, LIN Header Timer Register */
#define ASCLIN7_LIN_HTIMER /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_LIN_HTIMER*)0xF0000D30u)
/** Alias (User Manual Name) for ASCLIN7_LIN_HTIMER.
* To use register names with standard convension, please use ASCLIN7_LIN_HTIMER.
*/
#define ASCLIN7_LINHTIMER (ASCLIN7_LIN_HTIMER)

/** \brief 34, Flags Register */
#define ASCLIN7_FLAGS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGS*)0xF0000D34u)

/** \brief 38, Flags Set Register */
#define ASCLIN7_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSSET*)0xF0000D38u)

/** \brief 3C, Flags Clear Register */
#define ASCLIN7_FLAGSCLEAR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSCLEAR*)0xF0000D3Cu)

/** \brief 40, Flags Enable Register */
#define ASCLIN7_FLAGSENABLE /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_FLAGSENABLE*)0xF0000D40u)

/** \brief 44, Transmit Data Register */
#define ASCLIN7_TXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_TXDATA*)0xF0000D44u)

/** \brief 48, Receive Data Register */
#define ASCLIN7_RXDATA /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATA*)0xF0000D48u)

/** \brief 4C, Clock Selection Register */
#define ASCLIN7_CSR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_CSR*)0xF0000D4Cu)

/** \brief 50, Receive Data Debug Register */
#define ASCLIN7_RXDATAD /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_RXDATAD*)0xF0000D50u)

/** \brief E8, OCDS Control and Status */
#define ASCLIN7_OCS /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_OCS*)0xF0000DE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define ASCLIN7_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRSTCLR*)0xF0000DECu)

/** \brief F0, Kernel Reset Register 1 */
#define ASCLIN7_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST1*)0xF0000DF0u)

/** \brief F4, Kernel Reset Register 0 */
#define ASCLIN7_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_KRST0*)0xF0000DF4u)

/** \brief F8, Access Enable Register 1 */
#define ASCLIN7_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN1*)0xF0000DF8u)

/** \brief FC, Access Enable Register 0 */
#define ASCLIN7_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ASCLIN_ACCEN0*)0xF0000DFCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXASCLIN_REG_H */
