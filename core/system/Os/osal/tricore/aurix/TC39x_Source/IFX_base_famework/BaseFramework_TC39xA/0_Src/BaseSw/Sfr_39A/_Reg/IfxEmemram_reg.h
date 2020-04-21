/**
 * \file IfxEmem_ram_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:02 GMT
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
 * \defgroup IfxLld_Emem_ram_Registers_Cfg Emem_ram address
 * \ingroup IfxLld_Emem_ram_Registers
 * 
 * \defgroup IfxLld_Emem_ram_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Emem_ram_Registers_Cfg
 *
 * \defgroup IfxLld_Emem_ram_Registers_Cfg_Ememram0 2-EMEMRAM0
 * \ingroup IfxLld_Emem_ram_Registers_Cfg
 *
 * \defgroup IfxLld_Emem_ram_Registers_Cfg_Ememram1 2-EMEMRAM1
 * \ingroup IfxLld_Emem_ram_Registers_Cfg
 *
 * \defgroup IfxLld_Emem_ram_Registers_Cfg_Ememram2 2-EMEMRAM2
 * \ingroup IfxLld_Emem_ram_Registers_Cfg
 *
 * \defgroup IfxLld_Emem_ram_Registers_Cfg_Ememram3 2-EMEMRAM3
 * \ingroup IfxLld_Emem_ram_Registers_Cfg
 *
 *
 */
#ifndef IFXEMEM_RAM_REG_H
#define IFXEMEM_RAM_REG_H 1
/******************************************************************************/
#include "IfxEmemram_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Emem_ram_Cfg_BaseAddress
 * \{  */

/** \brief EMEM_RAM object */
#define MODULE_EMEMRAM0 /*lint --e(923)*/ ((*(Ifx_EMEM_RAM*)0x99000000u))
#define MODULE_EMEMRAM1 /*lint --e(923)*/ ((*(Ifx_EMEM_RAM*)0x99100000u))
#define MODULE_EMEMRAM2 /*lint --e(923)*/ ((*(Ifx_EMEM_RAM*)0x99200000u))
#define MODULE_EMEMRAM3 /*lint --e(923)*/ ((*(Ifx_EMEM_RAM*)0x99300000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Emem_ram_Cfg_Ememram0
 * \{  */
/** \brief 0, EMEM Clock Control Register */
#define EMEMRAM0_CLC /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_CLC*)0xFB000000u)

/** \brief 8, EMEM Module ID Register */
#define EMEMRAM0_MODID /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MODID*)0xFB000008u)

/** \brief 10, EMEM Access Enable Register 0 */
#define EMEMRAM0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN0*)0xFB000010u)

/** \brief 14, EMEM Access Enable Register 1 */
#define EMEMRAM0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN1*)0xFB000014u)

/** \brief 20, EMEM Memory Control Register */
#define EMEMRAM0_MEMCON /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MEMCON*)0xFB000020u)

/** \brief 24, EMEM Safety Control Register */
#define EMEMRAM0_SCTRL /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_SCTRL*)0xFB000024u)

/** \brief 50, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB000050u)
/** Alias (User Manual Name) for EMEMRAM0_RGN0_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN0_LA.
*/
#define EMEMRAM0_RGNLA0 (EMEMRAM0_RGN0_LA)

/** \brief 54, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB000054u)
/** Alias (User Manual Name) for EMEMRAM0_RGN0_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN0_UA.
*/
#define EMEMRAM0_RGNUA0 (EMEMRAM0_RGN0_UA)

/** \brief 58, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB000058u)
/** Alias (User Manual Name) for EMEMRAM0_RGN0_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN0_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA0 (EMEMRAM0_RGN0_ACCENWA)

/** \brief 5C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB00005Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGN0_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN0_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB0 (EMEMRAM0_RGN0_ACCENWB)

/** \brief 60, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB000060u)
/** Alias (User Manual Name) for EMEMRAM0_RGN1_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN1_LA.
*/
#define EMEMRAM0_RGNLA1 (EMEMRAM0_RGN1_LA)

/** \brief 64, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB000064u)
/** Alias (User Manual Name) for EMEMRAM0_RGN1_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN1_UA.
*/
#define EMEMRAM0_RGNUA1 (EMEMRAM0_RGN1_UA)

/** \brief 68, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB000068u)
/** Alias (User Manual Name) for EMEMRAM0_RGN1_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN1_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA1 (EMEMRAM0_RGN1_ACCENWA)

/** \brief 6C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB00006Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGN1_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN1_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB1 (EMEMRAM0_RGN1_ACCENWB)

/** \brief 70, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB000070u)
/** Alias (User Manual Name) for EMEMRAM0_RGN2_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN2_LA.
*/
#define EMEMRAM0_RGNLA2 (EMEMRAM0_RGN2_LA)

/** \brief 74, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB000074u)
/** Alias (User Manual Name) for EMEMRAM0_RGN2_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN2_UA.
*/
#define EMEMRAM0_RGNUA2 (EMEMRAM0_RGN2_UA)

/** \brief 78, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB000078u)
/** Alias (User Manual Name) for EMEMRAM0_RGN2_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN2_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA2 (EMEMRAM0_RGN2_ACCENWA)

/** \brief 7C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB00007Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGN2_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN2_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB2 (EMEMRAM0_RGN2_ACCENWB)

/** \brief 80, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB000080u)
/** Alias (User Manual Name) for EMEMRAM0_RGN3_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN3_LA.
*/
#define EMEMRAM0_RGNLA3 (EMEMRAM0_RGN3_LA)

/** \brief 84, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB000084u)
/** Alias (User Manual Name) for EMEMRAM0_RGN3_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN3_UA.
*/
#define EMEMRAM0_RGNUA3 (EMEMRAM0_RGN3_UA)

/** \brief 88, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB000088u)
/** Alias (User Manual Name) for EMEMRAM0_RGN3_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN3_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA3 (EMEMRAM0_RGN3_ACCENWA)

/** \brief 8C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB00008Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGN3_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN3_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB3 (EMEMRAM0_RGN3_ACCENWB)

/** \brief 90, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB000090u)
/** Alias (User Manual Name) for EMEMRAM0_RGN4_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN4_LA.
*/
#define EMEMRAM0_RGNLA4 (EMEMRAM0_RGN4_LA)

/** \brief 94, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB000094u)
/** Alias (User Manual Name) for EMEMRAM0_RGN4_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN4_UA.
*/
#define EMEMRAM0_RGNUA4 (EMEMRAM0_RGN4_UA)

/** \brief 98, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB000098u)
/** Alias (User Manual Name) for EMEMRAM0_RGN4_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN4_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA4 (EMEMRAM0_RGN4_ACCENWA)

/** \brief 9C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB00009Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGN4_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN4_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB4 (EMEMRAM0_RGN4_ACCENWB)

/** \brief A0, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0000A0u)
/** Alias (User Manual Name) for EMEMRAM0_RGN5_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN5_LA.
*/
#define EMEMRAM0_RGNLA5 (EMEMRAM0_RGN5_LA)

/** \brief A4, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0000A4u)
/** Alias (User Manual Name) for EMEMRAM0_RGN5_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN5_UA.
*/
#define EMEMRAM0_RGNUA5 (EMEMRAM0_RGN5_UA)

/** \brief A8, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0000A8u)
/** Alias (User Manual Name) for EMEMRAM0_RGN5_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN5_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA5 (EMEMRAM0_RGN5_ACCENWA)

/** \brief AC, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0000ACu)
/** Alias (User Manual Name) for EMEMRAM0_RGN5_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN5_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB5 (EMEMRAM0_RGN5_ACCENWB)

/** \brief B0, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0000B0u)
/** Alias (User Manual Name) for EMEMRAM0_RGN6_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN6_LA.
*/
#define EMEMRAM0_RGNLA6 (EMEMRAM0_RGN6_LA)

/** \brief B4, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0000B4u)
/** Alias (User Manual Name) for EMEMRAM0_RGN6_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN6_UA.
*/
#define EMEMRAM0_RGNUA6 (EMEMRAM0_RGN6_UA)

/** \brief B8, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0000B8u)
/** Alias (User Manual Name) for EMEMRAM0_RGN6_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN6_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA6 (EMEMRAM0_RGN6_ACCENWA)

/** \brief BC, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0000BCu)
/** Alias (User Manual Name) for EMEMRAM0_RGN6_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN6_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB6 (EMEMRAM0_RGN6_ACCENWB)

/** \brief C0, EMEM Region Lower Address Register */
#define EMEMRAM0_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0000C0u)
/** Alias (User Manual Name) for EMEMRAM0_RGN7_LA.
* To use register names with standard convension, please use EMEMRAM0_RGN7_LA.
*/
#define EMEMRAM0_RGNLA7 (EMEMRAM0_RGN7_LA)

/** \brief C4, EMEM Region Upper Address Register */
#define EMEMRAM0_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0000C4u)
/** Alias (User Manual Name) for EMEMRAM0_RGN7_UA.
* To use register names with standard convension, please use EMEMRAM0_RGN7_UA.
*/
#define EMEMRAM0_RGNUA7 (EMEMRAM0_RGN7_UA)

/** \brief C8, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0000C8u)
/** Alias (User Manual Name) for EMEMRAM0_RGN7_ACCENWA.
* To use register names with standard convension, please use EMEMRAM0_RGN7_ACCENWA.
*/
#define EMEMRAM0_RGNACCENWA7 (EMEMRAM0_RGN7_ACCENWA)

/** \brief CC, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0000CCu)
/** Alias (User Manual Name) for EMEMRAM0_RGN7_ACCENWB.
* To use register names with standard convension, please use EMEMRAM0_RGN7_ACCENWB.
*/
#define EMEMRAM0_RGNACCENWB7 (EMEMRAM0_RGN7_ACCENWB)

/** \brief D8, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0000D8u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN0_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN0_RA.
*/
#define EMEMRAM0_RGNACCENRA0 (EMEMRAM0_RGNACCEN0_RA)

/** \brief DC, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0000DCu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN0_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN0_RB.
*/
#define EMEMRAM0_RGNACCENWRB0 (EMEMRAM0_RGNACCEN0_RB)

/** \brief E8, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0000E8u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN1_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN1_RA.
*/
#define EMEMRAM0_RGNACCENRA1 (EMEMRAM0_RGNACCEN1_RA)

/** \brief EC, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0000ECu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN1_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN1_RB.
*/
#define EMEMRAM0_RGNACCENWRB1 (EMEMRAM0_RGNACCEN1_RB)

/** \brief F8, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0000F8u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN2_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN2_RA.
*/
#define EMEMRAM0_RGNACCENRA2 (EMEMRAM0_RGNACCEN2_RA)

/** \brief FC, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0000FCu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN2_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN2_RB.
*/
#define EMEMRAM0_RGNACCENWRB2 (EMEMRAM0_RGNACCEN2_RB)

/** \brief 108, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB000108u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN3_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN3_RA.
*/
#define EMEMRAM0_RGNACCENRA3 (EMEMRAM0_RGNACCEN3_RA)

/** \brief 10C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB00010Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN3_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN3_RB.
*/
#define EMEMRAM0_RGNACCENWRB3 (EMEMRAM0_RGNACCEN3_RB)

/** \brief 118, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB000118u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN4_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN4_RA.
*/
#define EMEMRAM0_RGNACCENRA4 (EMEMRAM0_RGNACCEN4_RA)

/** \brief 11C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB00011Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN4_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN4_RB.
*/
#define EMEMRAM0_RGNACCENWRB4 (EMEMRAM0_RGNACCEN4_RB)

/** \brief 128, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB000128u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN5_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN5_RA.
*/
#define EMEMRAM0_RGNACCENRA5 (EMEMRAM0_RGNACCEN5_RA)

/** \brief 12C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB00012Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN5_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN5_RB.
*/
#define EMEMRAM0_RGNACCENWRB5 (EMEMRAM0_RGNACCEN5_RB)

/** \brief 138, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB000138u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN6_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN6_RA.
*/
#define EMEMRAM0_RGNACCENRA6 (EMEMRAM0_RGNACCEN6_RA)

/** \brief 13C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB00013Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN6_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN6_RB.
*/
#define EMEMRAM0_RGNACCENWRB6 (EMEMRAM0_RGNACCEN6_RB)

/** \brief 148, EMEM Region Access Enable Register 0 */
#define EMEMRAM0_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB000148u)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN7_RA.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN7_RA.
*/
#define EMEMRAM0_RGNACCENRA7 (EMEMRAM0_RGNACCEN7_RA)

/** \brief 14C, EMEM Region Access Enable Register 1 */
#define EMEMRAM0_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB00014Cu)
/** Alias (User Manual Name) for EMEMRAM0_RGNACCEN7_RB.
* To use register names with standard convension, please use EMEMRAM0_RGNACCEN7_RB.
*/
#define EMEMRAM0_RGNACCENWRB7 (EMEMRAM0_RGNACCEN7_RB)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Emem_ram_Cfg_Ememram1
 * \{  */
/** \brief 0, EMEM Clock Control Register */
#define EMEMRAM1_CLC /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_CLC*)0xFB010000u)

/** \brief 8, EMEM Module ID Register */
#define EMEMRAM1_MODID /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MODID*)0xFB010008u)

/** \brief 10, EMEM Access Enable Register 0 */
#define EMEMRAM1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN0*)0xFB010010u)

/** \brief 14, EMEM Access Enable Register 1 */
#define EMEMRAM1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN1*)0xFB010014u)

/** \brief 20, EMEM Memory Control Register */
#define EMEMRAM1_MEMCON /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MEMCON*)0xFB010020u)

/** \brief 24, EMEM Safety Control Register */
#define EMEMRAM1_SCTRL /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_SCTRL*)0xFB010024u)

/** \brief 50, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB010050u)
/** Alias (User Manual Name) for EMEMRAM1_RGN0_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN0_LA.
*/
#define EMEMRAM1_RGNLA0 (EMEMRAM1_RGN0_LA)

/** \brief 54, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB010054u)
/** Alias (User Manual Name) for EMEMRAM1_RGN0_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN0_UA.
*/
#define EMEMRAM1_RGNUA0 (EMEMRAM1_RGN0_UA)

/** \brief 58, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB010058u)
/** Alias (User Manual Name) for EMEMRAM1_RGN0_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN0_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA0 (EMEMRAM1_RGN0_ACCENWA)

/** \brief 5C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB01005Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGN0_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN0_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB0 (EMEMRAM1_RGN0_ACCENWB)

/** \brief 60, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB010060u)
/** Alias (User Manual Name) for EMEMRAM1_RGN1_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN1_LA.
*/
#define EMEMRAM1_RGNLA1 (EMEMRAM1_RGN1_LA)

/** \brief 64, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB010064u)
/** Alias (User Manual Name) for EMEMRAM1_RGN1_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN1_UA.
*/
#define EMEMRAM1_RGNUA1 (EMEMRAM1_RGN1_UA)

/** \brief 68, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB010068u)
/** Alias (User Manual Name) for EMEMRAM1_RGN1_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN1_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA1 (EMEMRAM1_RGN1_ACCENWA)

/** \brief 6C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB01006Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGN1_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN1_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB1 (EMEMRAM1_RGN1_ACCENWB)

/** \brief 70, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB010070u)
/** Alias (User Manual Name) for EMEMRAM1_RGN2_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN2_LA.
*/
#define EMEMRAM1_RGNLA2 (EMEMRAM1_RGN2_LA)

/** \brief 74, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB010074u)
/** Alias (User Manual Name) for EMEMRAM1_RGN2_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN2_UA.
*/
#define EMEMRAM1_RGNUA2 (EMEMRAM1_RGN2_UA)

/** \brief 78, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB010078u)
/** Alias (User Manual Name) for EMEMRAM1_RGN2_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN2_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA2 (EMEMRAM1_RGN2_ACCENWA)

/** \brief 7C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB01007Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGN2_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN2_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB2 (EMEMRAM1_RGN2_ACCENWB)

/** \brief 80, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB010080u)
/** Alias (User Manual Name) for EMEMRAM1_RGN3_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN3_LA.
*/
#define EMEMRAM1_RGNLA3 (EMEMRAM1_RGN3_LA)

/** \brief 84, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB010084u)
/** Alias (User Manual Name) for EMEMRAM1_RGN3_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN3_UA.
*/
#define EMEMRAM1_RGNUA3 (EMEMRAM1_RGN3_UA)

/** \brief 88, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB010088u)
/** Alias (User Manual Name) for EMEMRAM1_RGN3_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN3_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA3 (EMEMRAM1_RGN3_ACCENWA)

/** \brief 8C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB01008Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGN3_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN3_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB3 (EMEMRAM1_RGN3_ACCENWB)

/** \brief 90, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB010090u)
/** Alias (User Manual Name) for EMEMRAM1_RGN4_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN4_LA.
*/
#define EMEMRAM1_RGNLA4 (EMEMRAM1_RGN4_LA)

/** \brief 94, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB010094u)
/** Alias (User Manual Name) for EMEMRAM1_RGN4_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN4_UA.
*/
#define EMEMRAM1_RGNUA4 (EMEMRAM1_RGN4_UA)

/** \brief 98, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB010098u)
/** Alias (User Manual Name) for EMEMRAM1_RGN4_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN4_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA4 (EMEMRAM1_RGN4_ACCENWA)

/** \brief 9C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB01009Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGN4_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN4_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB4 (EMEMRAM1_RGN4_ACCENWB)

/** \brief A0, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0100A0u)
/** Alias (User Manual Name) for EMEMRAM1_RGN5_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN5_LA.
*/
#define EMEMRAM1_RGNLA5 (EMEMRAM1_RGN5_LA)

/** \brief A4, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0100A4u)
/** Alias (User Manual Name) for EMEMRAM1_RGN5_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN5_UA.
*/
#define EMEMRAM1_RGNUA5 (EMEMRAM1_RGN5_UA)

/** \brief A8, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0100A8u)
/** Alias (User Manual Name) for EMEMRAM1_RGN5_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN5_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA5 (EMEMRAM1_RGN5_ACCENWA)

/** \brief AC, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0100ACu)
/** Alias (User Manual Name) for EMEMRAM1_RGN5_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN5_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB5 (EMEMRAM1_RGN5_ACCENWB)

/** \brief B0, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0100B0u)
/** Alias (User Manual Name) for EMEMRAM1_RGN6_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN6_LA.
*/
#define EMEMRAM1_RGNLA6 (EMEMRAM1_RGN6_LA)

/** \brief B4, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0100B4u)
/** Alias (User Manual Name) for EMEMRAM1_RGN6_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN6_UA.
*/
#define EMEMRAM1_RGNUA6 (EMEMRAM1_RGN6_UA)

/** \brief B8, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0100B8u)
/** Alias (User Manual Name) for EMEMRAM1_RGN6_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN6_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA6 (EMEMRAM1_RGN6_ACCENWA)

/** \brief BC, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0100BCu)
/** Alias (User Manual Name) for EMEMRAM1_RGN6_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN6_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB6 (EMEMRAM1_RGN6_ACCENWB)

/** \brief C0, EMEM Region Lower Address Register */
#define EMEMRAM1_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0100C0u)
/** Alias (User Manual Name) for EMEMRAM1_RGN7_LA.
* To use register names with standard convension, please use EMEMRAM1_RGN7_LA.
*/
#define EMEMRAM1_RGNLA7 (EMEMRAM1_RGN7_LA)

/** \brief C4, EMEM Region Upper Address Register */
#define EMEMRAM1_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0100C4u)
/** Alias (User Manual Name) for EMEMRAM1_RGN7_UA.
* To use register names with standard convension, please use EMEMRAM1_RGN7_UA.
*/
#define EMEMRAM1_RGNUA7 (EMEMRAM1_RGN7_UA)

/** \brief C8, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0100C8u)
/** Alias (User Manual Name) for EMEMRAM1_RGN7_ACCENWA.
* To use register names with standard convension, please use EMEMRAM1_RGN7_ACCENWA.
*/
#define EMEMRAM1_RGNACCENWA7 (EMEMRAM1_RGN7_ACCENWA)

/** \brief CC, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0100CCu)
/** Alias (User Manual Name) for EMEMRAM1_RGN7_ACCENWB.
* To use register names with standard convension, please use EMEMRAM1_RGN7_ACCENWB.
*/
#define EMEMRAM1_RGNACCENWB7 (EMEMRAM1_RGN7_ACCENWB)

/** \brief D8, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0100D8u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN0_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN0_RA.
*/
#define EMEMRAM1_RGNACCENRA0 (EMEMRAM1_RGNACCEN0_RA)

/** \brief DC, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0100DCu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN0_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN0_RB.
*/
#define EMEMRAM1_RGNACCENWRB0 (EMEMRAM1_RGNACCEN0_RB)

/** \brief E8, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0100E8u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN1_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN1_RA.
*/
#define EMEMRAM1_RGNACCENRA1 (EMEMRAM1_RGNACCEN1_RA)

/** \brief EC, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0100ECu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN1_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN1_RB.
*/
#define EMEMRAM1_RGNACCENWRB1 (EMEMRAM1_RGNACCEN1_RB)

/** \brief F8, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0100F8u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN2_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN2_RA.
*/
#define EMEMRAM1_RGNACCENRA2 (EMEMRAM1_RGNACCEN2_RA)

/** \brief FC, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0100FCu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN2_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN2_RB.
*/
#define EMEMRAM1_RGNACCENWRB2 (EMEMRAM1_RGNACCEN2_RB)

/** \brief 108, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB010108u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN3_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN3_RA.
*/
#define EMEMRAM1_RGNACCENRA3 (EMEMRAM1_RGNACCEN3_RA)

/** \brief 10C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB01010Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN3_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN3_RB.
*/
#define EMEMRAM1_RGNACCENWRB3 (EMEMRAM1_RGNACCEN3_RB)

/** \brief 118, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB010118u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN4_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN4_RA.
*/
#define EMEMRAM1_RGNACCENRA4 (EMEMRAM1_RGNACCEN4_RA)

/** \brief 11C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB01011Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN4_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN4_RB.
*/
#define EMEMRAM1_RGNACCENWRB4 (EMEMRAM1_RGNACCEN4_RB)

/** \brief 128, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB010128u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN5_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN5_RA.
*/
#define EMEMRAM1_RGNACCENRA5 (EMEMRAM1_RGNACCEN5_RA)

/** \brief 12C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB01012Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN5_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN5_RB.
*/
#define EMEMRAM1_RGNACCENWRB5 (EMEMRAM1_RGNACCEN5_RB)

/** \brief 138, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB010138u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN6_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN6_RA.
*/
#define EMEMRAM1_RGNACCENRA6 (EMEMRAM1_RGNACCEN6_RA)

/** \brief 13C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB01013Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN6_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN6_RB.
*/
#define EMEMRAM1_RGNACCENWRB6 (EMEMRAM1_RGNACCEN6_RB)

/** \brief 148, EMEM Region Access Enable Register 0 */
#define EMEMRAM1_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB010148u)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN7_RA.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN7_RA.
*/
#define EMEMRAM1_RGNACCENRA7 (EMEMRAM1_RGNACCEN7_RA)

/** \brief 14C, EMEM Region Access Enable Register 1 */
#define EMEMRAM1_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB01014Cu)
/** Alias (User Manual Name) for EMEMRAM1_RGNACCEN7_RB.
* To use register names with standard convension, please use EMEMRAM1_RGNACCEN7_RB.
*/
#define EMEMRAM1_RGNACCENWRB7 (EMEMRAM1_RGNACCEN7_RB)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Emem_ram_Cfg_Ememram2
 * \{  */
/** \brief 0, EMEM Clock Control Register */
#define EMEMRAM2_CLC /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_CLC*)0xFB020000u)

/** \brief 8, EMEM Module ID Register */
#define EMEMRAM2_MODID /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MODID*)0xFB020008u)

/** \brief 10, EMEM Access Enable Register 0 */
#define EMEMRAM2_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN0*)0xFB020010u)

/** \brief 14, EMEM Access Enable Register 1 */
#define EMEMRAM2_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN1*)0xFB020014u)

/** \brief 20, EMEM Memory Control Register */
#define EMEMRAM2_MEMCON /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MEMCON*)0xFB020020u)

/** \brief 24, EMEM Safety Control Register */
#define EMEMRAM2_SCTRL /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_SCTRL*)0xFB020024u)

/** \brief 50, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB020050u)
/** Alias (User Manual Name) for EMEMRAM2_RGN0_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN0_LA.
*/
#define EMEMRAM2_RGNLA0 (EMEMRAM2_RGN0_LA)

/** \brief 54, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB020054u)
/** Alias (User Manual Name) for EMEMRAM2_RGN0_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN0_UA.
*/
#define EMEMRAM2_RGNUA0 (EMEMRAM2_RGN0_UA)

/** \brief 58, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB020058u)
/** Alias (User Manual Name) for EMEMRAM2_RGN0_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN0_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA0 (EMEMRAM2_RGN0_ACCENWA)

/** \brief 5C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB02005Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGN0_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN0_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB0 (EMEMRAM2_RGN0_ACCENWB)

/** \brief 60, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB020060u)
/** Alias (User Manual Name) for EMEMRAM2_RGN1_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN1_LA.
*/
#define EMEMRAM2_RGNLA1 (EMEMRAM2_RGN1_LA)

/** \brief 64, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB020064u)
/** Alias (User Manual Name) for EMEMRAM2_RGN1_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN1_UA.
*/
#define EMEMRAM2_RGNUA1 (EMEMRAM2_RGN1_UA)

/** \brief 68, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB020068u)
/** Alias (User Manual Name) for EMEMRAM2_RGN1_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN1_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA1 (EMEMRAM2_RGN1_ACCENWA)

/** \brief 6C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB02006Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGN1_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN1_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB1 (EMEMRAM2_RGN1_ACCENWB)

/** \brief 70, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB020070u)
/** Alias (User Manual Name) for EMEMRAM2_RGN2_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN2_LA.
*/
#define EMEMRAM2_RGNLA2 (EMEMRAM2_RGN2_LA)

/** \brief 74, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB020074u)
/** Alias (User Manual Name) for EMEMRAM2_RGN2_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN2_UA.
*/
#define EMEMRAM2_RGNUA2 (EMEMRAM2_RGN2_UA)

/** \brief 78, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB020078u)
/** Alias (User Manual Name) for EMEMRAM2_RGN2_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN2_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA2 (EMEMRAM2_RGN2_ACCENWA)

/** \brief 7C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB02007Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGN2_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN2_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB2 (EMEMRAM2_RGN2_ACCENWB)

/** \brief 80, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB020080u)
/** Alias (User Manual Name) for EMEMRAM2_RGN3_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN3_LA.
*/
#define EMEMRAM2_RGNLA3 (EMEMRAM2_RGN3_LA)

/** \brief 84, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB020084u)
/** Alias (User Manual Name) for EMEMRAM2_RGN3_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN3_UA.
*/
#define EMEMRAM2_RGNUA3 (EMEMRAM2_RGN3_UA)

/** \brief 88, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB020088u)
/** Alias (User Manual Name) for EMEMRAM2_RGN3_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN3_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA3 (EMEMRAM2_RGN3_ACCENWA)

/** \brief 8C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB02008Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGN3_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN3_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB3 (EMEMRAM2_RGN3_ACCENWB)

/** \brief 90, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB020090u)
/** Alias (User Manual Name) for EMEMRAM2_RGN4_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN4_LA.
*/
#define EMEMRAM2_RGNLA4 (EMEMRAM2_RGN4_LA)

/** \brief 94, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB020094u)
/** Alias (User Manual Name) for EMEMRAM2_RGN4_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN4_UA.
*/
#define EMEMRAM2_RGNUA4 (EMEMRAM2_RGN4_UA)

/** \brief 98, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB020098u)
/** Alias (User Manual Name) for EMEMRAM2_RGN4_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN4_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA4 (EMEMRAM2_RGN4_ACCENWA)

/** \brief 9C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB02009Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGN4_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN4_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB4 (EMEMRAM2_RGN4_ACCENWB)

/** \brief A0, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0200A0u)
/** Alias (User Manual Name) for EMEMRAM2_RGN5_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN5_LA.
*/
#define EMEMRAM2_RGNLA5 (EMEMRAM2_RGN5_LA)

/** \brief A4, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0200A4u)
/** Alias (User Manual Name) for EMEMRAM2_RGN5_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN5_UA.
*/
#define EMEMRAM2_RGNUA5 (EMEMRAM2_RGN5_UA)

/** \brief A8, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0200A8u)
/** Alias (User Manual Name) for EMEMRAM2_RGN5_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN5_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA5 (EMEMRAM2_RGN5_ACCENWA)

/** \brief AC, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0200ACu)
/** Alias (User Manual Name) for EMEMRAM2_RGN5_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN5_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB5 (EMEMRAM2_RGN5_ACCENWB)

/** \brief B0, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0200B0u)
/** Alias (User Manual Name) for EMEMRAM2_RGN6_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN6_LA.
*/
#define EMEMRAM2_RGNLA6 (EMEMRAM2_RGN6_LA)

/** \brief B4, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0200B4u)
/** Alias (User Manual Name) for EMEMRAM2_RGN6_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN6_UA.
*/
#define EMEMRAM2_RGNUA6 (EMEMRAM2_RGN6_UA)

/** \brief B8, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0200B8u)
/** Alias (User Manual Name) for EMEMRAM2_RGN6_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN6_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA6 (EMEMRAM2_RGN6_ACCENWA)

/** \brief BC, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0200BCu)
/** Alias (User Manual Name) for EMEMRAM2_RGN6_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN6_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB6 (EMEMRAM2_RGN6_ACCENWB)

/** \brief C0, EMEM Region Lower Address Register */
#define EMEMRAM2_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0200C0u)
/** Alias (User Manual Name) for EMEMRAM2_RGN7_LA.
* To use register names with standard convension, please use EMEMRAM2_RGN7_LA.
*/
#define EMEMRAM2_RGNLA7 (EMEMRAM2_RGN7_LA)

/** \brief C4, EMEM Region Upper Address Register */
#define EMEMRAM2_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0200C4u)
/** Alias (User Manual Name) for EMEMRAM2_RGN7_UA.
* To use register names with standard convension, please use EMEMRAM2_RGN7_UA.
*/
#define EMEMRAM2_RGNUA7 (EMEMRAM2_RGN7_UA)

/** \brief C8, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0200C8u)
/** Alias (User Manual Name) for EMEMRAM2_RGN7_ACCENWA.
* To use register names with standard convension, please use EMEMRAM2_RGN7_ACCENWA.
*/
#define EMEMRAM2_RGNACCENWA7 (EMEMRAM2_RGN7_ACCENWA)

/** \brief CC, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0200CCu)
/** Alias (User Manual Name) for EMEMRAM2_RGN7_ACCENWB.
* To use register names with standard convension, please use EMEMRAM2_RGN7_ACCENWB.
*/
#define EMEMRAM2_RGNACCENWB7 (EMEMRAM2_RGN7_ACCENWB)

/** \brief D8, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0200D8u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN0_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN0_RA.
*/
#define EMEMRAM2_RGNACCENRA0 (EMEMRAM2_RGNACCEN0_RA)

/** \brief DC, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0200DCu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN0_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN0_RB.
*/
#define EMEMRAM2_RGNACCENWRB0 (EMEMRAM2_RGNACCEN0_RB)

/** \brief E8, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0200E8u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN1_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN1_RA.
*/
#define EMEMRAM2_RGNACCENRA1 (EMEMRAM2_RGNACCEN1_RA)

/** \brief EC, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0200ECu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN1_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN1_RB.
*/
#define EMEMRAM2_RGNACCENWRB1 (EMEMRAM2_RGNACCEN1_RB)

/** \brief F8, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0200F8u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN2_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN2_RA.
*/
#define EMEMRAM2_RGNACCENRA2 (EMEMRAM2_RGNACCEN2_RA)

/** \brief FC, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0200FCu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN2_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN2_RB.
*/
#define EMEMRAM2_RGNACCENWRB2 (EMEMRAM2_RGNACCEN2_RB)

/** \brief 108, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB020108u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN3_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN3_RA.
*/
#define EMEMRAM2_RGNACCENRA3 (EMEMRAM2_RGNACCEN3_RA)

/** \brief 10C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB02010Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN3_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN3_RB.
*/
#define EMEMRAM2_RGNACCENWRB3 (EMEMRAM2_RGNACCEN3_RB)

/** \brief 118, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB020118u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN4_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN4_RA.
*/
#define EMEMRAM2_RGNACCENRA4 (EMEMRAM2_RGNACCEN4_RA)

/** \brief 11C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB02011Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN4_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN4_RB.
*/
#define EMEMRAM2_RGNACCENWRB4 (EMEMRAM2_RGNACCEN4_RB)

/** \brief 128, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB020128u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN5_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN5_RA.
*/
#define EMEMRAM2_RGNACCENRA5 (EMEMRAM2_RGNACCEN5_RA)

/** \brief 12C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB02012Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN5_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN5_RB.
*/
#define EMEMRAM2_RGNACCENWRB5 (EMEMRAM2_RGNACCEN5_RB)

/** \brief 138, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB020138u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN6_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN6_RA.
*/
#define EMEMRAM2_RGNACCENRA6 (EMEMRAM2_RGNACCEN6_RA)

/** \brief 13C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB02013Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN6_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN6_RB.
*/
#define EMEMRAM2_RGNACCENWRB6 (EMEMRAM2_RGNACCEN6_RB)

/** \brief 148, EMEM Region Access Enable Register 0 */
#define EMEMRAM2_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB020148u)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN7_RA.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN7_RA.
*/
#define EMEMRAM2_RGNACCENRA7 (EMEMRAM2_RGNACCEN7_RA)

/** \brief 14C, EMEM Region Access Enable Register 1 */
#define EMEMRAM2_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB02014Cu)
/** Alias (User Manual Name) for EMEMRAM2_RGNACCEN7_RB.
* To use register names with standard convension, please use EMEMRAM2_RGNACCEN7_RB.
*/
#define EMEMRAM2_RGNACCENWRB7 (EMEMRAM2_RGNACCEN7_RB)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Emem_ram_Cfg_Ememram3
 * \{  */
/** \brief 0, EMEM Clock Control Register */
#define EMEMRAM3_CLC /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_CLC*)0xFB030000u)

/** \brief 8, EMEM Module ID Register */
#define EMEMRAM3_MODID /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MODID*)0xFB030008u)

/** \brief 10, EMEM Access Enable Register 0 */
#define EMEMRAM3_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN0*)0xFB030010u)

/** \brief 14, EMEM Access Enable Register 1 */
#define EMEMRAM3_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_ACCEN1*)0xFB030014u)

/** \brief 20, EMEM Memory Control Register */
#define EMEMRAM3_MEMCON /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_MEMCON*)0xFB030020u)

/** \brief 24, EMEM Safety Control Register */
#define EMEMRAM3_SCTRL /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_SCTRL*)0xFB030024u)

/** \brief 50, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB030050u)
/** Alias (User Manual Name) for EMEMRAM3_RGN0_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN0_LA.
*/
#define EMEMRAM3_RGNLA0 (EMEMRAM3_RGN0_LA)

/** \brief 54, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB030054u)
/** Alias (User Manual Name) for EMEMRAM3_RGN0_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN0_UA.
*/
#define EMEMRAM3_RGNUA0 (EMEMRAM3_RGN0_UA)

/** \brief 58, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB030058u)
/** Alias (User Manual Name) for EMEMRAM3_RGN0_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN0_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA0 (EMEMRAM3_RGN0_ACCENWA)

/** \brief 5C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB03005Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGN0_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN0_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB0 (EMEMRAM3_RGN0_ACCENWB)

/** \brief 60, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB030060u)
/** Alias (User Manual Name) for EMEMRAM3_RGN1_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN1_LA.
*/
#define EMEMRAM3_RGNLA1 (EMEMRAM3_RGN1_LA)

/** \brief 64, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB030064u)
/** Alias (User Manual Name) for EMEMRAM3_RGN1_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN1_UA.
*/
#define EMEMRAM3_RGNUA1 (EMEMRAM3_RGN1_UA)

/** \brief 68, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB030068u)
/** Alias (User Manual Name) for EMEMRAM3_RGN1_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN1_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA1 (EMEMRAM3_RGN1_ACCENWA)

/** \brief 6C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB03006Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGN1_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN1_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB1 (EMEMRAM3_RGN1_ACCENWB)

/** \brief 70, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB030070u)
/** Alias (User Manual Name) for EMEMRAM3_RGN2_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN2_LA.
*/
#define EMEMRAM3_RGNLA2 (EMEMRAM3_RGN2_LA)

/** \brief 74, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB030074u)
/** Alias (User Manual Name) for EMEMRAM3_RGN2_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN2_UA.
*/
#define EMEMRAM3_RGNUA2 (EMEMRAM3_RGN2_UA)

/** \brief 78, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB030078u)
/** Alias (User Manual Name) for EMEMRAM3_RGN2_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN2_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA2 (EMEMRAM3_RGN2_ACCENWA)

/** \brief 7C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB03007Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGN2_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN2_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB2 (EMEMRAM3_RGN2_ACCENWB)

/** \brief 80, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB030080u)
/** Alias (User Manual Name) for EMEMRAM3_RGN3_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN3_LA.
*/
#define EMEMRAM3_RGNLA3 (EMEMRAM3_RGN3_LA)

/** \brief 84, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB030084u)
/** Alias (User Manual Name) for EMEMRAM3_RGN3_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN3_UA.
*/
#define EMEMRAM3_RGNUA3 (EMEMRAM3_RGN3_UA)

/** \brief 88, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB030088u)
/** Alias (User Manual Name) for EMEMRAM3_RGN3_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN3_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA3 (EMEMRAM3_RGN3_ACCENWA)

/** \brief 8C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB03008Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGN3_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN3_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB3 (EMEMRAM3_RGN3_ACCENWB)

/** \brief 90, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB030090u)
/** Alias (User Manual Name) for EMEMRAM3_RGN4_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN4_LA.
*/
#define EMEMRAM3_RGNLA4 (EMEMRAM3_RGN4_LA)

/** \brief 94, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB030094u)
/** Alias (User Manual Name) for EMEMRAM3_RGN4_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN4_UA.
*/
#define EMEMRAM3_RGNUA4 (EMEMRAM3_RGN4_UA)

/** \brief 98, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB030098u)
/** Alias (User Manual Name) for EMEMRAM3_RGN4_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN4_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA4 (EMEMRAM3_RGN4_ACCENWA)

/** \brief 9C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB03009Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGN4_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN4_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB4 (EMEMRAM3_RGN4_ACCENWB)

/** \brief A0, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0300A0u)
/** Alias (User Manual Name) for EMEMRAM3_RGN5_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN5_LA.
*/
#define EMEMRAM3_RGNLA5 (EMEMRAM3_RGN5_LA)

/** \brief A4, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0300A4u)
/** Alias (User Manual Name) for EMEMRAM3_RGN5_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN5_UA.
*/
#define EMEMRAM3_RGNUA5 (EMEMRAM3_RGN5_UA)

/** \brief A8, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0300A8u)
/** Alias (User Manual Name) for EMEMRAM3_RGN5_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN5_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA5 (EMEMRAM3_RGN5_ACCENWA)

/** \brief AC, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0300ACu)
/** Alias (User Manual Name) for EMEMRAM3_RGN5_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN5_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB5 (EMEMRAM3_RGN5_ACCENWB)

/** \brief B0, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0300B0u)
/** Alias (User Manual Name) for EMEMRAM3_RGN6_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN6_LA.
*/
#define EMEMRAM3_RGNLA6 (EMEMRAM3_RGN6_LA)

/** \brief B4, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0300B4u)
/** Alias (User Manual Name) for EMEMRAM3_RGN6_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN6_UA.
*/
#define EMEMRAM3_RGNUA6 (EMEMRAM3_RGN6_UA)

/** \brief B8, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0300B8u)
/** Alias (User Manual Name) for EMEMRAM3_RGN6_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN6_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA6 (EMEMRAM3_RGN6_ACCENWA)

/** \brief BC, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0300BCu)
/** Alias (User Manual Name) for EMEMRAM3_RGN6_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN6_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB6 (EMEMRAM3_RGN6_ACCENWB)

/** \brief C0, EMEM Region Lower Address Register */
#define EMEMRAM3_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_LA*)0xFB0300C0u)
/** Alias (User Manual Name) for EMEMRAM3_RGN7_LA.
* To use register names with standard convension, please use EMEMRAM3_RGN7_LA.
*/
#define EMEMRAM3_RGNLA7 (EMEMRAM3_RGN7_LA)

/** \brief C4, EMEM Region Upper Address Register */
#define EMEMRAM3_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_UA*)0xFB0300C4u)
/** Alias (User Manual Name) for EMEMRAM3_RGN7_UA.
* To use register names with standard convension, please use EMEMRAM3_RGN7_UA.
*/
#define EMEMRAM3_RGNUA7 (EMEMRAM3_RGN7_UA)

/** \brief C8, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWA*)0xFB0300C8u)
/** Alias (User Manual Name) for EMEMRAM3_RGN7_ACCENWA.
* To use register names with standard convension, please use EMEMRAM3_RGN7_ACCENWA.
*/
#define EMEMRAM3_RGNACCENWA7 (EMEMRAM3_RGN7_ACCENWA)

/** \brief CC, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGN_ACCENWB*)0xFB0300CCu)
/** Alias (User Manual Name) for EMEMRAM3_RGN7_ACCENWB.
* To use register names with standard convension, please use EMEMRAM3_RGN7_ACCENWB.
*/
#define EMEMRAM3_RGNACCENWB7 (EMEMRAM3_RGN7_ACCENWB)

/** \brief D8, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0300D8u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN0_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN0_RA.
*/
#define EMEMRAM3_RGNACCENRA0 (EMEMRAM3_RGNACCEN0_RA)

/** \brief DC, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0300DCu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN0_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN0_RB.
*/
#define EMEMRAM3_RGNACCENWRB0 (EMEMRAM3_RGNACCEN0_RB)

/** \brief E8, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0300E8u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN1_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN1_RA.
*/
#define EMEMRAM3_RGNACCENRA1 (EMEMRAM3_RGNACCEN1_RA)

/** \brief EC, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0300ECu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN1_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN1_RB.
*/
#define EMEMRAM3_RGNACCENWRB1 (EMEMRAM3_RGNACCEN1_RB)

/** \brief F8, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB0300F8u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN2_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN2_RA.
*/
#define EMEMRAM3_RGNACCENRA2 (EMEMRAM3_RGNACCEN2_RA)

/** \brief FC, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB0300FCu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN2_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN2_RB.
*/
#define EMEMRAM3_RGNACCENWRB2 (EMEMRAM3_RGNACCEN2_RB)

/** \brief 108, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB030108u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN3_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN3_RA.
*/
#define EMEMRAM3_RGNACCENRA3 (EMEMRAM3_RGNACCEN3_RA)

/** \brief 10C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB03010Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN3_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN3_RB.
*/
#define EMEMRAM3_RGNACCENWRB3 (EMEMRAM3_RGNACCEN3_RB)

/** \brief 118, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB030118u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN4_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN4_RA.
*/
#define EMEMRAM3_RGNACCENRA4 (EMEMRAM3_RGNACCEN4_RA)

/** \brief 11C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB03011Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN4_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN4_RB.
*/
#define EMEMRAM3_RGNACCENWRB4 (EMEMRAM3_RGNACCEN4_RB)

/** \brief 128, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB030128u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN5_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN5_RA.
*/
#define EMEMRAM3_RGNACCENRA5 (EMEMRAM3_RGNACCEN5_RA)

/** \brief 12C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB03012Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN5_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN5_RB.
*/
#define EMEMRAM3_RGNACCENWRB5 (EMEMRAM3_RGNACCEN5_RB)

/** \brief 138, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB030138u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN6_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN6_RA.
*/
#define EMEMRAM3_RGNACCENRA6 (EMEMRAM3_RGNACCEN6_RA)

/** \brief 13C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB03013Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN6_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN6_RB.
*/
#define EMEMRAM3_RGNACCENWRB6 (EMEMRAM3_RGNACCEN6_RB)

/** \brief 148, EMEM Region Access Enable Register 0 */
#define EMEMRAM3_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RA*)0xFB030148u)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN7_RA.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN7_RA.
*/
#define EMEMRAM3_RGNACCENRA7 (EMEMRAM3_RGNACCEN7_RA)

/** \brief 14C, EMEM Region Access Enable Register 1 */
#define EMEMRAM3_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_EMEM_RAM_RGNACCEN_RB*)0xFB03014Cu)
/** Alias (User Manual Name) for EMEMRAM3_RGNACCEN7_RB.
* To use register names with standard convension, please use EMEMRAM3_RGNACCEN7_RB.
*/
#define EMEMRAM3_RGNACCENWRB7 (EMEMRAM3_RGNACCEN7_RB)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEMEM_RAM_REG_H */
