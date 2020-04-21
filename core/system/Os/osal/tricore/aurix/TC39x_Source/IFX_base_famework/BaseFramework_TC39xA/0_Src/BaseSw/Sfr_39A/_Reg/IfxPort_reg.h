/**
 * \file IfxPort_reg.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: MCMCAN_TC39x_MCSFR.xml dated 07.08.2014
 * Specification: TBD
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
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
 * \defgroup IfxLld_Port_Cfg Port address
 * \ingroup IfxLld_Port
 *
 * \defgroup IfxLld_Port_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P00 2-P00
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P01 2-P01
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P02 2-P02
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P10 2-P10
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P11 2-P11
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P12 2-P12
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P13 2-P13
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P14 2-P14
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P15 2-P15
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P20 2-P20
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P21 2-P21
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P22 2-P22
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P23 2-P23
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P24 2-P24
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P25 2-P25
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P26 2-P26
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P30 2-P30
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P31 2-P31
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P32 2-P32
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P33 2-P33
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P34 2-P34
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P40 2-P40
 * \ingroup IfxLld_Port_Cfg
 *
 * \defgroup IfxLld_Port_Cfg_P41 2-P41
 * \ingroup IfxLld_Port_Cfg
 *
 */
#ifndef IFXPORT_REG_H
#define IFXPORT_REG_H 1
/******************************************************************************/
#include "IfxPort_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_BaseAddress
 * \{  */

/** \\brief  Port object */
#define MODULE_P00 /*lint --e(923)*/ ((*(Ifx_P *)0xF003A000u))

/** \\brief  Port object */
#define MODULE_P01 /*lint --e(923)*/ ((*(Ifx_P *)0xF003A100u))

/** \\brief  Port object */
#define MODULE_P02 /*lint --e(923)*/ ((*(Ifx_P *)0xF003A200u))

/** \\brief  Port object */
#define MODULE_P10 /*lint --e(923)*/ ((*(Ifx_P *)0xF003AA00u))

/** \\brief  Port object */
#define MODULE_P11 /*lint --e(923)*/ ((*(Ifx_P *)0xF003AB00u))

/** \\brief  Port object */
#define MODULE_P12 /*lint --e(923)*/ ((*(Ifx_P *)0xF003AC00u))

/** \\brief  Port object */
#define MODULE_P13 /*lint --e(923)*/ ((*(Ifx_P *)0xF003AD00u))

/** \\brief  Port object */
#define MODULE_P14 /*lint --e(923)*/ ((*(Ifx_P *)0xF003AE00u))

/** \\brief  Port object */
#define MODULE_P15 /*lint --e(923)*/ ((*(Ifx_P *)0xF003AF00u))

/** \\brief  Port object */
#define MODULE_P20 /*lint --e(923)*/ ((*(Ifx_P *)0xF003B400u))

/** \\brief  Port object */
#define MODULE_P21 /*lint --e(923)*/ ((*(Ifx_P *)0xF003B500u))

/** \\brief  Port object */
#define MODULE_P22 /*lint --e(923)*/ ((*(Ifx_P *)0xF003B600u))

/** \\brief  Port object */
#define MODULE_P23 /*lint --e(923)*/ ((*(Ifx_P *)0xF003B700u))

/** \\brief  Port object */
#define MODULE_P24 /*lint --e(923)*/ ((*(Ifx_P *)0xF003B800u))

/** \\brief  Port object */
#define MODULE_P25 /*lint --e(923)*/ ((*(Ifx_P *)0xF003B900u))

/** \\brief  Port object */
#define MODULE_P26 /*lint --e(923)*/ ((*(Ifx_P *)0xF003BA00u))

/** \\brief  Port object */
#define MODULE_P30 /*lint --e(923)*/ ((*(Ifx_P *)0xF003BE00u))

/** \\brief  Port object */
#define MODULE_P31 /*lint --e(923)*/ ((*(Ifx_P *)0xF003BF00u))

/** \\brief  Port object */
#define MODULE_P32 /*lint --e(923)*/ ((*(Ifx_P *)0xF003C000u))

/** \\brief  Port object */
#define MODULE_P33 /*lint --e(923)*/ ((*(Ifx_P *)0xF003C100u))

/** \\brief  Port object */
#define MODULE_P34 /*lint --e(923)*/ ((*(Ifx_P *)0xF003C200u))

/** \\brief  Port object */
#define MODULE_P40 /*lint --e(923)*/ ((*(Ifx_P *)0xF003C800u))

/** \\brief  Port object */
#define MODULE_P41 /*lint --e(923)*/ ((*(Ifx_P *)0xF003C900u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P00
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P00_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003A0FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P00_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003A0F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P00_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003A050u)

/** \\brief  8, Port Identification Register */
#define P00_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003A008u)

/** \\brief  24, Port Input Register */
#define P00_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003A024u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P00_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003A010u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P00_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003A01Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P00_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003A014u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P00_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003A018u)

/** \\brief  94, Port Output Modification Clear Register */
#define P00_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003A094u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P00_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003A080u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P00_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003A08Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P00_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003A084u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P00_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003A088u)

/** \\brief  4, Port Output Modification Register */
#define P00_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003A004u)

/** \\brief  90, Port Output Modification Set Register */
#define P00_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003A090u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P00_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003A070u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P00_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003A07Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P00_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003A074u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P00_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003A078u)

/** \\brief  0, Port Output Register */
#define P00_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003A000u)

/** \\brief  64, Port Pin Controller Select Register */
#define P00_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003A064u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P00_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003A060u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P00_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003A040u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P00_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003A044u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P01
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P01_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003A1FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P01_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003A1F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P01_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003A150u)

/** \\brief  8, Port Identification Register */
#define P01_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003A108u)

/** \\brief  24, Port Input Register */
#define P01_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003A124u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P01_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003A110u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P01_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003A11Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P01_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003A114u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P01_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003A118u)

/** \\brief  94, Port Output Modification Clear Register */
#define P01_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003A194u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P01_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003A180u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P01_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003A18Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P01_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003A184u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P01_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003A188u)

/** \\brief  4, Port Output Modification Register */
#define P01_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003A104u)

/** \\brief  90, Port Output Modification Set Register */
#define P01_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003A190u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P01_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003A170u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P01_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003A17Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P01_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003A174u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P01_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003A178u)

/** \\brief  0, Port Output Register */
#define P01_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003A100u)

/** \\brief  64, Port Pin Controller Select Register */
#define P01_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003A164u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P01_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003A160u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P01_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003A140u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P01_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003A144u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P02
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P02_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003A2FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P02_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003A2F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P02_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003A250u)

/** \\brief  8, Port Identification Register */
#define P02_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003A208u)

/** \\brief  24, Port Input Register */
#define P02_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003A224u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P02_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003A210u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P02_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003A21Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P02_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003A214u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P02_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003A218u)

/** \\brief  94, Port Output Modification Clear Register */
#define P02_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003A294u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P02_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003A280u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P02_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003A28Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P02_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003A284u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P02_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003A288u)

/** \\brief  4, Port Output Modification Register */
#define P02_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003A204u)

/** \\brief  90, Port Output Modification Set Register */
#define P02_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003A290u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P02_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003A270u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P02_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003A27Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P02_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003A274u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P02_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003A278u)

/** \\brief  0, Port Output Register */
#define P02_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003A200u)

/** \\brief  64, Port Pin Controller Select Register */
#define P02_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003A264u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P02_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003A260u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P02_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003A240u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P02_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003A244u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P10
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P10_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003AAFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P10_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003AAF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P10_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003AA50u)

/** \\brief  8, Port Identification Register */
#define P10_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003AA08u)

/** \\brief  24, Port Input Register */
#define P10_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003AA24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P10_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003AA10u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P10_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003AA1Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P10_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003AA14u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P10_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003AA18u)

/** \\brief  94, Port Output Modification Clear Register */
#define P10_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003AA94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P10_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003AA80u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P10_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003AA8Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P10_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003AA84u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P10_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003AA88u)

/** \\brief  4, Port Output Modification Register */
#define P10_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003AA04u)

/** \\brief  90, Port Output Modification Set Register */
#define P10_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003AA90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P10_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003AA70u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P10_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003AA7Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P10_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003AA74u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P10_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003AA78u)

/** \\brief  0, Port Output Register */
#define P10_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003AA00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P10_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003AA64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P10_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003AA60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P10_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003AA40u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P10_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003AA44u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P11
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P11_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003ABFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P11_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003ABF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P11_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003AB50u)

/** \\brief  8, Port Identification Register */
#define P11_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003AB08u)

/** \\brief  24, Port Input Register */
#define P11_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003AB24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P11_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003AB10u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P11_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003AB1Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P11_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003AB14u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P11_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003AB18u)

/** \\brief  94, Port Output Modification Clear Register */
#define P11_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003AB94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P11_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003AB80u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P11_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003AB8Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P11_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003AB84u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P11_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003AB88u)

/** \\brief  4, Port Output Modification Register */
#define P11_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003AB04u)

/** \\brief  90, Port Output Modification Set Register */
#define P11_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003AB90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P11_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003AB70u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P11_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003AB7Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P11_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003AB74u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P11_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003AB78u)

/** \\brief  0, Port Output Register */
#define P11_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003AB00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P11_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003AB64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P11_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003AB60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P11_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003AB40u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P11_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003AB44u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P12
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P12_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003ACFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P12_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003ACF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P12_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003AC50u)

/** \\brief  8, Port Identification Register */
#define P12_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003AC08u)

/** \\brief  24, Port Input Register */
#define P12_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003AC24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P12_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003AC10u)

/** \\brief  94, Port Output Modification Clear Register */
#define P12_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003AC94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P12_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003AC80u)

/** \\brief  4, Port Output Modification Register */
#define P12_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003AC04u)

/** \\brief  90, Port Output Modification Set Register */
#define P12_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003AC90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P12_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003AC70u)

/** \\brief  0, Port Output Register */
#define P12_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003AC00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P12_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003AC64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P12_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003AC60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P12_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003AC40u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P13
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P13_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003ADFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P13_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003ADF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P13_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003AD50u)

/** \\brief  8, Port Identification Register */
#define P13_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003AD08u)

/** \\brief  24, Port Input Register */
#define P13_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003AD24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P13_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003AD10u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P13_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003AD1Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P13_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003AD14u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P13_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003AD18u)

/** \\brief  A0, Port LVDS Pad Control Register 0 */
#define P13_LPCR0  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR0 *)0xF003ADA0u)

/** \\brief  A4, Port LVDS Pad Control Register 1 */
#define P13_LPCR1  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR1 *)0xF003ADA4u)

/** \\brief  A8, Port LVDS Pad Control Register 2 */
#define P13_LPCR2  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR2 *)0xF003ADA8u)

/** \\brief  AC, Port LVDS Pad Control Register 3 */
#define P13_LPCR3  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR3 *)0xF003ADACu)

/** \\brief  94, Port Output Modification Clear Register */
#define P13_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003AD94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P13_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003AD80u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P13_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003AD8Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P13_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003AD84u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P13_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003AD88u)

/** \\brief  4, Port Output Modification Register */
#define P13_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003AD04u)

/** \\brief  90, Port Output Modification Set Register */
#define P13_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003AD90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P13_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003AD70u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P13_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003AD7Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P13_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003AD74u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P13_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003AD78u)

/** \\brief  0, Port Output Register */
#define P13_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003AD00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P13_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003AD64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P13_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003AD60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P13_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003AD40u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P13_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003AD44u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P14
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P14_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003AEFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P14_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003AEF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P14_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003AE50u)

/** \\brief  8, Port Identification Register */
#define P14_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003AE08u)

/** \\brief  24, Port Input Register */
#define P14_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003AE24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P14_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003AE10u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P14_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003AE1Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P14_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003AE14u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P14_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003AE18u)

/** \\brief  B4, Port LVDS Pad Control Register 5 */
#define P14_LPCR5  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR5 *)0xF003AEB4u)

/** \\brief  94, Port Output Modification Clear Register */
#define P14_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003AE94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P14_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003AE80u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P14_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003AE8Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P14_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003AE84u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P14_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003AE88u)

/** \\brief  4, Port Output Modification Register */
#define P14_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003AE04u)

/** \\brief  90, Port Output Modification Set Register */
#define P14_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003AE90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P14_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003AE70u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P14_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003AE7Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P14_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003AE74u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P14_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003AE78u)

/** \\brief  0, Port Output Register */
#define P14_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003AE00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P14_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003AE64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P14_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003AE60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P14_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003AE40u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P14_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003AE44u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P15
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P15_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003AFFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P15_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003AFF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P15_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003AF50u)

/** \\brief  8, Port Identification Register */
#define P15_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003AF08u)

/** \\brief  24, Port Input Register */
#define P15_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003AF24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P15_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003AF10u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P15_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003AF1Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P15_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003AF14u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P15_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003AF18u)

/** \\brief  B4, Port LVDS Pad Control Register 5 */
#define P15_LPCR5  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR5 *)0xF003AFB4u)

/** \\brief  B8, Port LVDS Pad Control Register 6 */
#define P15_LPCR6  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR6 *)0xF003AFB8u)

/** \\brief  94, Port Output Modification Clear Register */
#define P15_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003AF94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P15_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003AF80u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P15_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003AF8Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P15_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003AF84u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P15_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003AF88u)

/** \\brief  4, Port Output Modification Register */
#define P15_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003AF04u)

/** \\brief  90, Port Output Modification Set Register */
#define P15_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003AF90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P15_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003AF70u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P15_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003AF7Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P15_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003AF74u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P15_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003AF78u)

/** \\brief  0, Port Output Register */
#define P15_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003AF00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P15_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003AF64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P15_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003AF60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P15_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003AF40u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P15_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003AF44u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P20
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P20_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003B4FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P20_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003B4F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P20_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003B450u)

/** \\brief  8, Port Identification Register */
#define P20_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003B408u)

/** \\brief  24, Port Input Register */
#define P20_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003B424u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P20_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003B410u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P20_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003B41Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P20_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003B414u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P20_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003B418u)

/** \\brief  94, Port Output Modification Clear Register */
#define P20_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003B494u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P20_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003B480u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P20_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003B48Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P20_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003B484u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P20_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003B488u)

/** \\brief  4, Port Output Modification Register */
#define P20_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003B404u)

/** \\brief  90, Port Output Modification Set Register */
#define P20_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003B490u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P20_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003B470u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P20_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003B47Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P20_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003B474u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P20_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003B478u)

/** \\brief  0, Port Output Register */
#define P20_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003B400u)

/** \\brief  64, Port Pin Controller Select Register */
#define P20_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003B464u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P20_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003B460u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P20_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003B440u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P20_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003B444u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P21
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P21_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003B5FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P21_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003B5F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P21_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003B550u)

/** \\brief  8, Port Identification Register */
#define P21_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003B508u)

/** \\brief  24, Port Input Register */
#define P21_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003B524u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P21_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003B510u)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P21_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003B514u)

/** \\brief  A0, Port LVDS Pad Control Register 0 */
#define P21_LPCR0  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR0 *)0xF003B5A0u)

/** \\brief  A4, Port LVDS Pad Control Register 1 */
#define P21_LPCR1  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR1 *)0xF003B5A4u)

/** \\brief  A8, Port LVDS Pad Control Register 2 */
#define P21_LPCR2  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR2 *)0xF003B5A8u)

/** \\brief  94, Port Output Modification Clear Register */
#define P21_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003B594u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P21_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003B580u)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P21_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003B584u)

/** \\brief  4, Port Output Modification Register */
#define P21_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003B504u)

/** \\brief  90, Port Output Modification Set Register */
#define P21_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003B590u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P21_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003B570u)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P21_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003B574u)

/** \\brief  0, Port Output Register */
#define P21_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003B500u)

/** \\brief  64, Port Pin Controller Select Register */
#define P21_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003B564u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P21_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003B560u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P21_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003B540u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P22
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P22_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003B6FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P22_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003B6F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P22_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003B650u)

/** \\brief  8, Port Identification Register */
#define P22_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003B608u)

/** \\brief  24, Port Input Register */
#define P22_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003B624u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P22_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003B610u)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P22_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003B614u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P22_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003B618u)

/** \\brief  A0, Port LVDS Pad Control Register 0 */
#define P22_LPCR0  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR0 *)0xF003B6A0u)

/** \\brief  A4, Port LVDS Pad Control Register 1 */
#define P22_LPCR1  /*lint --e(923)*/ (*(volatile Ifx_P_LPCR1 *)0xF003B6A4u)

/** \\brief  94, Port Output Modification Clear Register */
#define P22_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003B694u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P22_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003B680u)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P22_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003B684u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P22_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003B688u)

/** \\brief  4, Port Output Modification Register */
#define P22_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003B604u)

/** \\brief  90, Port Output Modification Set Register */
#define P22_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003B690u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P22_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003B670u)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P22_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003B674u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P22_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003B678u)

/** \\brief  0, Port Output Register */
#define P22_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003B600u)

/** \\brief  64, Port Pin Controller Select Register */
#define P22_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003B664u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P22_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003B660u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P22_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003B640u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P22_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003B644u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P23
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P23_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003B7FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P23_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003B7F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P23_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003B750u)

/** \\brief  8, Port Identification Register */
#define P23_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003B708u)

/** \\brief  24, Port Input Register */
#define P23_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003B724u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P23_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003B710u)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P23_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003B714u)

/** \\brief  94, Port Output Modification Clear Register */
#define P23_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003B794u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P23_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003B780u)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P23_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003B784u)

/** \\brief  4, Port Output Modification Register */
#define P23_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003B704u)

/** \\brief  90, Port Output Modification Set Register */
#define P23_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003B790u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P23_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003B770u)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P23_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003B774u)

/** \\brief  0, Port Output Register */
#define P23_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003B700u)

/** \\brief  64, Port Pin Controller Select Register */
#define P23_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003B764u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P23_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003B760u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P23_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003B740u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P24
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P24_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003B8FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P24_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003B8F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P24_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003B850u)

/** \\brief  8, Port Identification Register */
#define P24_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003B808u)

/** \\brief  24, Port Input Register */
#define P24_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003B824u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P24_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003B810u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P24_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003B81Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P24_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003B814u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P24_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003B818u)

/** \\brief  94, Port Output Modification Clear Register */
#define P24_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003B894u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P24_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003B880u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P24_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003B88Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P24_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003B884u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P24_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003B888u)

/** \\brief  4, Port Output Modification Register */
#define P24_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003B804u)

/** \\brief  90, Port Output Modification Set Register */
#define P24_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003B890u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P24_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003B870u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P24_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003B87Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P24_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003B874u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P24_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003B878u)

/** \\brief  0, Port Output Register */
#define P24_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003B800u)

/** \\brief  64, Port Pin Controller Select Register */
#define P24_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003B864u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P24_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003B860u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P24_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003B840u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P24_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003B844u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P25
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P25_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003B9FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P25_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003B9F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P25_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003B950u)

/** \\brief  8, Port Identification Register */
#define P25_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003B908u)

/** \\brief  24, Port Input Register */
#define P25_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003B924u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P25_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003B910u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P25_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003B91Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P25_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003B914u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P25_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003B918u)

/** \\brief  94, Port Output Modification Clear Register */
#define P25_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003B994u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P25_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003B980u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P25_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003B98Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P25_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003B984u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P25_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003B988u)

/** \\brief  4, Port Output Modification Register */
#define P25_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003B904u)

/** \\brief  90, Port Output Modification Set Register */
#define P25_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003B990u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P25_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003B970u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P25_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003B97Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P25_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003B974u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P25_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003B978u)

/** \\brief  0, Port Output Register */
#define P25_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003B900u)

/** \\brief  64, Port Pin Controller Select Register */
#define P25_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003B964u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P25_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003B960u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P25_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003B940u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P25_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003B944u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P26
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P26_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003BAFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P26_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003BAF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P26_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003BA50u)

/** \\brief  8, Port Identification Register */
#define P26_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003BA08u)

/** \\brief  24, Port Input Register */
#define P26_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003BA24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P26_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003BA10u)

/** \\brief  94, Port Output Modification Clear Register */
#define P26_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003BA94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P26_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003BA80u)

/** \\brief  4, Port Output Modification Register */
#define P26_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003BA04u)

/** \\brief  90, Port Output Modification Set Register */
#define P26_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003BA90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P26_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003BA70u)

/** \\brief  0, Port Output Register */
#define P26_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003BA00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P26_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003BA64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P26_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003BA60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P26_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003BA40u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P30
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P30_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003BEFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P30_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003BEF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P30_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003BE50u)

/** \\brief  8, Port Identification Register */
#define P30_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003BE08u)

/** \\brief  24, Port Input Register */
#define P30_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003BE24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P30_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003BE10u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P30_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003BE1Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P30_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003BE14u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P30_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003BE18u)

/** \\brief  94, Port Output Modification Clear Register */
#define P30_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003BE94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P30_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003BE80u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P30_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003BE8Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P30_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003BE84u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P30_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003BE88u)

/** \\brief  4, Port Output Modification Register */
#define P30_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003BE04u)

/** \\brief  90, Port Output Modification Set Register */
#define P30_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003BE90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P30_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003BE70u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P30_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003BE7Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P30_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003BE74u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P30_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003BE78u)

/** \\brief  0, Port Output Register */
#define P30_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003BE00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P30_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003BE64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P30_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003BE60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P30_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003BE40u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P30_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003BE44u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P31
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P31_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003BFFCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P31_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003BFF8u)

/** \\brief  50, Port Emergency Stop Register */
#define P31_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003BF50u)

/** \\brief  8, Port Identification Register */
#define P31_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003BF08u)

/** \\brief  24, Port Input Register */
#define P31_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003BF24u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P31_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003BF10u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P31_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003BF1Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P31_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003BF14u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P31_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003BF18u)

/** \\brief  94, Port Output Modification Clear Register */
#define P31_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003BF94u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P31_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003BF80u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P31_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003BF8Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P31_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003BF84u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P31_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003BF88u)

/** \\brief  4, Port Output Modification Register */
#define P31_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003BF04u)

/** \\brief  90, Port Output Modification Set Register */
#define P31_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003BF90u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P31_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003BF70u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P31_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003BF7Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P31_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003BF74u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P31_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003BF78u)

/** \\brief  0, Port Output Register */
#define P31_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003BF00u)

/** \\brief  64, Port Pin Controller Select Register */
#define P31_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003BF64u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P31_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003BF60u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P31_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003BF40u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P31_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003BF44u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P32
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P32_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003C0FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P32_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003C0F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P32_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003C050u)

/** \\brief  8, Port Identification Register */
#define P32_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003C008u)

/** \\brief  24, Port Input Register */
#define P32_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003C024u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P32_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003C010u)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P32_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003C014u)

/** \\brief  94, Port Output Modification Clear Register */
#define P32_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003C094u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P32_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003C080u)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P32_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003C084u)

/** \\brief  4, Port Output Modification Register */
#define P32_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003C004u)

/** \\brief  90, Port Output Modification Set Register */
#define P32_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003C090u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P32_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003C070u)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P32_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003C074u)

/** \\brief  0, Port Output Register */
#define P32_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003C000u)

/** \\brief  64, Port Pin Controller Select Register */
#define P32_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003C064u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P32_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003C060u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P32_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003C040u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P33
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P33_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003C1FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P33_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003C1F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P33_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003C150u)

/** \\brief  8, Port Identification Register */
#define P33_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003C108u)

/** \\brief  24, Port Input Register */
#define P33_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003C124u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P33_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003C110u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P33_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003C11Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P33_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003C114u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P33_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003C118u)

/** \\brief  94, Port Output Modification Clear Register */
#define P33_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003C194u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P33_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003C180u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P33_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003C18Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P33_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003C184u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P33_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003C188u)

/** \\brief  4, Port Output Modification Register */
#define P33_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003C104u)

/** \\brief  90, Port Output Modification Set Register */
#define P33_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003C190u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P33_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003C170u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P33_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003C17Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P33_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003C174u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P33_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003C178u)

/** \\brief  0, Port Output Register */
#define P33_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003C100u)

/** \\brief  64, Port Pin Controller Select Register */
#define P33_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003C164u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P33_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003C160u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P33_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003C140u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P33_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003C144u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P34
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P34_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003C2FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P34_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003C2F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P34_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003C250u)

/** \\brief  8, Port Identification Register */
#define P34_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003C208u)

/** \\brief  24, Port Input Register */
#define P34_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003C224u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P34_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003C210u)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P34_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003C214u)

/** \\brief  94, Port Output Modification Clear Register */
#define P34_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003C294u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P34_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003C280u)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P34_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003C284u)

/** \\brief  4, Port Output Modification Register */
#define P34_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003C204u)

/** \\brief  90, Port Output Modification Set Register */
#define P34_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003C290u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P34_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003C270u)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P34_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003C274u)

/** \\brief  0, Port Output Register */
#define P34_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003C200u)

/** \\brief  64, Port Pin Controller Select Register */
#define P34_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003C264u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P34_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003C260u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P34_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003C240u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P40
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P40_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003C8FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P40_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003C8F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P40_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003C850u)

/** \\brief  8, Port Identification Register */
#define P40_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003C808u)

/** \\brief  24, Port Input Register */
#define P40_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003C824u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P40_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003C810u)

/** \\brief  1C, Port Input/Output Control Register 12 */
#define P40_IOCR12 /*lint --e(923)*/ (*(volatile Ifx_P_IOCR12 *)0xF003C81Cu)

/** \\brief  14, Port Input/Output Control Register 4 */
#define P40_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003C814u)

/** \\brief  18, Port Input/Output Control Register 8 */
#define P40_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003C818u)

/** \\brief  94, Port Output Modification Clear Register */
#define P40_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003C894u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P40_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003C880u)

/** \\brief  8C, Port Output Modification Clear Register 12 */
#define P40_OMCR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMCR12 *)0xF003C88Cu)

/** \\brief  84, Port Output Modification Clear Register 4 */
#define P40_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003C884u)

/** \\brief  88, Port Output Modification Clear Register 8 */
#define P40_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003C888u)

/** \\brief  4, Port Output Modification Register */
#define P40_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003C804u)

/** \\brief  90, Port Output Modification Set Register */
#define P40_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003C890u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P40_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003C870u)

/** \\brief  7C, Port Output Modification Set Register 12 */
#define P40_OMSR12 /*lint --e(923)*/ (*(volatile Ifx_P_OMSR12 *)0xF003C87Cu)

/** \\brief  74, Port Output Modification Set Register 4 */
#define P40_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003C874u)

/** \\brief  78, Port Output Modification Set Register 8 */
#define P40_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003C878u)

/** \\brief  0, Port Output Register */
#define P40_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003C800u)

/** \\brief  64, Port Pin Controller Select Register */
#define P40_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003C864u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P40_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003C860u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P40_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003C840u)

/** \\brief  44, Port Pad Driver Mode Register 1 */
#define P40_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003C844u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Port_Cfg_P41
 * \{  */

/** \\brief  FC, Port Access Enable Register 0 */
#define P41_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN0 *)0xF003C9FCu)

/** \\brief  F8, Port Access Enable Register 1 */
#define P41_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_P_ACCEN1 *)0xF003C9F8u)

/** \\brief  50, Port Emergency Stop Register */
#define P41_ESR    /*lint --e(923)*/ (*(volatile Ifx_P_ESR *)0xF003C950u)

/** \\brief  8, Port Identification Register */
#define P41_ID     /*lint --e(923)*/ (*(volatile Ifx_P_ID *)0xF003C908u)

/** \\brief  24, Port Input Register */
#define P41_IN     /*lint --e(923)*/ (*(volatile Ifx_P_IN *)0xF003C924u)

/** \\brief  10, Port Input/Output Control Register 0 */
#define P41_IOCR0  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR0 *)0xF003C910u)

#define P41_IOCR4  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR4 *)0xF003C914u)
#define P41_IOCR8  /*lint --e(923)*/ (*(volatile Ifx_P_IOCR8 *)0xF003C918u)
/** \\brief  94, Port Output Modification Clear Register */
#define P41_OMCR   /*lint --e(923)*/ (*(volatile Ifx_P_OMCR *)0xF003C994u)

/** \\brief  80, Port Output Modification Clear Register 0 */
#define P41_OMCR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR0 *)0xF003C980u)

#define P41_OMCR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR4 *)0xF003C984u)
#define P41_OMCR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMCR8 *)0xF003C988u)
/** \\brief  4, Port Output Modification Register */
#define P41_OMR    /*lint --e(923)*/ (*(volatile Ifx_P_OMR *)0xF003C904u)

/** \\brief  90, Port Output Modification Set Register */
#define P41_OMSR   /*lint --e(923)*/ (*(volatile Ifx_P_OMSR *)0xF003C990u)

/** \\brief  70, Port Output Modification Set Register 0 */
#define P41_OMSR0  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR0 *)0xF003C970u)

#define P41_OMSR4  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR4 *)0xF003C974u)
#define P41_OMSR8  /*lint --e(923)*/ (*(volatile Ifx_P_OMSR8 *)0xF003C978u)
/** \\brief  0, Port Output Register */
#define P41_OUT    /*lint --e(923)*/ (*(volatile Ifx_P_OUT *)0xF003C900u)

/** \\brief  64, Port Pin Controller Select Register */
#define P41_PCSR   /*lint --e(923)*/ (*(volatile Ifx_P_PCSR *)0xF003C964u)

/** \\brief  60, Port Pin Function Decision Control Register */
#define P41_PDISC  /*lint --e(923)*/ (*(volatile Ifx_P_PDISC *)0xF003C960u)

/** \\brief  40, Port Pad Driver Mode Register 0 */
#define P41_PDR0   /*lint --e(923)*/ (*(volatile Ifx_P_PDR0 *)0xF003C940u)
#define P41_PDR1   /*lint --e(923)*/ (*(volatile Ifx_P_PDR1 *)0xF003C944u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPORT_REG_H */
