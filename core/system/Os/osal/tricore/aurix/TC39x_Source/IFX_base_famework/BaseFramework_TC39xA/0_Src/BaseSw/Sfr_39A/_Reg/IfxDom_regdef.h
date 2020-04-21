/**
 * \file IfxDom_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:16:04 GMT
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
 * \defgroup IfxLld_Dom_Registers DomRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Dom_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Dom_Registers
 * 
 * \defgroup IfxLld_Dom_Registers_union Register unions
 * \ingroup IfxLld_Dom_Registers
 * 
 * \defgroup IfxLld_Dom_Registers_struct Memory map
 * \ingroup IfxLld_Dom_Registers
 */
#ifndef IFXDOM_REGDEF_H
#define IFXDOM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Dom_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_DOM_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
} Ifx_DOM_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_DOM_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_DOM_ACCEN1_Bits;

/** \brief Bridge Control Register */
typedef struct _Ifx_DOM_BRCON_Bits
{
    Ifx_UReg_32Bit OLDAEN:1;          /**< \brief [0:0] Online Data Acquisition Enable - OLDAEN (rw) */
    Ifx_UReg_32Bit reserved_1:5;      /**< \brief [5:1] \internal Reserved */
    Ifx_UReg_32Bit FREQDISF:1;        /**< \brief [6:6] Disable Fast Request Feature for SPB to SRI Transactions - FREQDISF (rw) */
    Ifx_UReg_32Bit reserved_7:2;      /**< \brief [8:7] \internal Reserved */
    Ifx_UReg_32Bit NODELTR:1;         /**< \brief [9:9] No Deferred Transactions - NODELTR (rw) */
    Ifx_UReg_32Bit NORMW:1;           /**< \brief [10:10] No deferred RMW transactions - NORMW (rw) */
    Ifx_UReg_32Bit reserved_11:2;     /**< \brief [12:11] \internal Reserved */
    Ifx_UReg_32Bit MAX_WS:7;          /**< \brief [19:13] SPB Max Wait States - MAX_WS (rw) */
    Ifx_UReg_32Bit RETRY_CNT:4;       /**< \brief [23:20] Retry SPB Count - RETRY_CNT (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_DOM_BRCON_Bits;

/** \brief Identification Register */
typedef struct _Ifx_DOM_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_DOM_ID_Bits;

/** \brief Protocol Error Status Register */
typedef struct _Ifx_DOM_PESTAT_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit PESCI0:1;          /**< \brief [16:16] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI1:1;          /**< \brief [17:17] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI2:1;          /**< \brief [18:18] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI3:1;          /**< \brief [19:19] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI4:1;          /**< \brief [20:20] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI5:1;          /**< \brief [21:21] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI6:1;          /**< \brief [22:22] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI7:1;          /**< \brief [23:23] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI8:1;          /**< \brief [24:24] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI9:1;          /**< \brief [25:25] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI10:1;         /**< \brief [26:26] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI11:1;         /**< \brief [27:27] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI12:1;         /**< \brief [28:28] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI13:1;         /**< \brief [29:29] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI14:1;         /**< \brief [30:30] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
    Ifx_UReg_32Bit PESCI15:1;         /**< \brief [31:31] Protocol Error status of SCI${n} - PESCI${n} (rwh) */
} Ifx_DOM_PESTAT_Bits;

/** \brief SCI ${i} Error Capture Register */
typedef struct _Ifx_DOM_SCICTRL_ERR_Bits
{
    Ifx_UReg_32Bit RD:1;              /**< \brief [0:0] Read Status - RD (rh) */
    Ifx_UReg_32Bit WR:1;              /**< \brief [1:1] Write Status - WR (rh) */
    Ifx_UReg_32Bit SVM:1;             /**< \brief [2:2] Supervisor Mode Status - SVM (rh) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit OPC:4;             /**< \brief [7:4] Operation Code - OPC (rh) */
    Ifx_UReg_32Bit TR_ID:8;           /**< \brief [15:8] Transaction ID - TR_ID (rh) */
    Ifx_UReg_32Bit ADDR_EDC:8;        /**< \brief [23:16] Address Phase Error Detection Information - ADDR_EDC (rh) */
    Ifx_UReg_32Bit MCI_SBS:8;         /**< \brief [31:24] MCI Sideband Signals [7:0] - MCI_SBS (rh) */
} Ifx_DOM_SCICTRL_ERR_Bits;

/** \brief SCI ${i} Error Address Capture Register */
typedef struct _Ifx_DOM_SCICTRL_ERRADDR_Bits
{
    Ifx_UReg_32Bit ADDR:32;           /**< \brief [31:0] Transaction Address - ADDR (rh) */
} Ifx_DOM_SCICTRL_ERRADDR_Bits;

/** \brief Protocol Error Control Register ${i} */
typedef struct _Ifx_DOM_SCICTRL_PECON_Bits
{
    Ifx_UReg_32Bit PEEN:1;            /**< \brief [0:0] Protocol Error Enable - PEEN (rw) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit SETPE:1;           /**< \brief [2:2] Set Protocol Error - SETPE (rwh) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit PEACK:1;           /**< \brief [4:4] Protocol Error Acknowledge - PEACK (rwh) */
    Ifx_UReg_32Bit reserved_5:27;     /**< \brief [31:5] \internal Reserved */
} Ifx_DOM_SCICTRL_PECON_Bits;

/** \brief SCI ${i} Arbiter Priority Register */
typedef struct _Ifx_DOM_SCICTRL_PRIORITY_Bits
{
    Ifx_UReg_32Bit MCI_P0:1;          /**< \brief [0:0] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit MCI_P1:1;          /**< \brief [1:1] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit MCI_P2:1;          /**< \brief [2:2] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit MCI_P3:1;          /**< \brief [3:3] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit MCI_P4:1;          /**< \brief [4:4] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit MCI_P5:1;          /**< \brief [5:5] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit MCI_P6:1;          /**< \brief [6:6] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit MCI_P7:1;          /**< \brief [7:7] MCI${n} Priority - MCI${n}_P (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit HPRS:3;            /**< \brief [18:16] High Priority Round Share - HPRS (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_DOM_SCICTRL_PRIORITY_Bits;

/** \brief Transaction ID Enable Register */
typedef struct _Ifx_DOM_TIDEN_Bits
{
    Ifx_UReg_32Bit ENSCI0:1;          /**< \brief [0:0] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI1:1;          /**< \brief [1:1] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI2:1;          /**< \brief [2:2] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI3:1;          /**< \brief [3:3] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI4:1;          /**< \brief [4:4] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI5:1;          /**< \brief [5:5] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI6:1;          /**< \brief [6:6] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI7:1;          /**< \brief [7:7] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI8:1;          /**< \brief [8:8] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI9:1;          /**< \brief [9:9] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI10:1;         /**< \brief [10:10] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI11:1;         /**< \brief [11:11] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI12:1;         /**< \brief [12:12] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI13:1;         /**< \brief [13:13] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI14:1;         /**< \brief [14:14] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENSCI15:1;         /**< \brief [15:15] E${n}able Transaction ID Error from SCIn - ENSCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI0:1;          /**< \brief [16:16] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI1:1;          /**< \brief [17:17] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI2:1;          /**< \brief [18:18] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI3:1;          /**< \brief [19:19] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI4:1;          /**< \brief [20:20] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI5:1;          /**< \brief [21:21] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI6:1;          /**< \brief [22:22] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit ENMCI7:1;          /**< \brief [23:23] E${n}able Transaction ID Error from MCIn - ENMCI${n} (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_DOM_TIDEN_Bits;

/** \brief Transaction ID Status Register */
typedef struct _Ifx_DOM_TIDSTAT_Bits
{
    Ifx_UReg_32Bit TIDSCI0:1;         /**< \brief [0:0] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI1:1;         /**< \brief [1:1] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI2:1;         /**< \brief [2:2] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI3:1;         /**< \brief [3:3] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI4:1;         /**< \brief [4:4] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI5:1;         /**< \brief [5:5] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI6:1;         /**< \brief [6:6] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI7:1;         /**< \brief [7:7] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI8:1;         /**< \brief [8:8] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI9:1;         /**< \brief [9:9] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI10:1;        /**< \brief [10:10] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI11:1;        /**< \brief [11:11] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI12:1;        /**< \brief [12:12] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI13:1;        /**< \brief [13:13] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI14:1;        /**< \brief [14:14] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDSCI15:1;        /**< \brief [15:15] Tra${n}saction ID Error from SCIn Status - TIDSCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI0:1;         /**< \brief [16:16] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI1:1;         /**< \brief [17:17] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI2:1;         /**< \brief [18:18] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI3:1;         /**< \brief [19:19] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI4:1;         /**< \brief [20:20] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI5:1;         /**< \brief [21:21] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI6:1;         /**< \brief [22:22] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit TIDMCI7:1;         /**< \brief [23:23] Tra${n}saction ID Error from MCIn Status - TIDMCI${n} (rwh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_DOM_TIDSTAT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_dom_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_DOM_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_DOM_ACCEN1;

/** \brief Bridge Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_BRCON_Bits B;             /**< \brief Bitfield access */
} Ifx_DOM_BRCON;

/** \brief Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_DOM_ID;

/** \brief Protocol Error Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_PESTAT_Bits B;            /**< \brief Bitfield access */
} Ifx_DOM_PESTAT;

/** \brief SCI ${i} Error Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_SCICTRL_ERR_Bits B;       /**< \brief Bitfield access */
} Ifx_DOM_SCICTRL_ERR;

/** \brief SCI ${i} Error Address Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_SCICTRL_ERRADDR_Bits B;    /**< \brief Bitfield access */
} Ifx_DOM_SCICTRL_ERRADDR;

/** \brief Protocol Error Control Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_SCICTRL_PECON_Bits B;     /**< \brief Bitfield access */
} Ifx_DOM_SCICTRL_PECON;

/** \brief SCI ${i} Arbiter Priority Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_SCICTRL_PRIORITY_Bits B;    /**< \brief Bitfield access */
} Ifx_DOM_SCICTRL_PRIORITY;

/** \brief Transaction ID Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_TIDEN_Bits B;             /**< \brief Bitfield access */
} Ifx_DOM_TIDEN;

/** \brief Transaction ID Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_DOM_TIDSTAT_Bits B;           /**< \brief Bitfield access */
} Ifx_DOM_TIDSTAT;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dom_SCICTRL_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SCICTRL object */
typedef volatile struct _Ifx_DOM_SCICTRL
{
       Ifx_DOM_SCICTRL_PECON               PECON;                  /**< \brief 0, Protocol Error Control Register ${i}*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_DOM_SCICTRL_PRIORITY            PRIORITY;               /**< \brief 8, SCI ${i} Arbiter Priority Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_DOM_SCICTRL_ERRADDR             ERRADDR;                /**< \brief 10, SCI ${i} Error Address Capture Register*/
       Ifx_UReg_8Bit                       reserved_14[4];         /**< \brief 14, \internal Reserved */
       Ifx_DOM_SCICTRL_ERR                 ERR;                    /**< \brief 18, SCI ${i} Error Capture Register*/
       Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, \internal Reserved */
} Ifx_DOM_SCICTRL;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxLld_Dom_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief DOM object */
typedef volatile struct _Ifx_DOM
{
       Ifx_DOM_SCICTRL                     SCICTRL[16];            /**< \brief 0, */
       Ifx_UReg_8Bit                       reserved_200[520];      /**< \brief 200, \internal Reserved */
       Ifx_DOM_ID                          ID;                     /**< \brief 408, Identification Register*/
       Ifx_UReg_8Bit                       reserved_40C[4];        /**< \brief 40C, \internal Reserved */
       Ifx_DOM_PESTAT                      PESTAT;                 /**< \brief 410, Protocol Error Status Register*/
       Ifx_UReg_8Bit                       reserved_414[4];        /**< \brief 414, \internal Reserved */
       Ifx_DOM_TIDSTAT                     TIDSTAT;                /**< \brief 418, Transaction ID Status Register*/
       Ifx_UReg_8Bit                       reserved_41C[4];        /**< \brief 41C, \internal Reserved */
       Ifx_DOM_TIDEN                       TIDEN;                  /**< \brief 420, Transaction ID Enable Register*/
       Ifx_UReg_8Bit                       reserved_424[12];       /**< \brief 424, \internal Reserved */
       Ifx_DOM_BRCON                       BRCON;                  /**< \brief 430, */
       Ifx_UReg_8Bit                       reserved_434[188];      /**< \brief 434, \internal Reserved */
       Ifx_DOM_ACCEN0                      ACCEN0;                 /**< \brief 4F0, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_4F4[4];        /**< \brief 4F4, \internal Reserved */
       Ifx_DOM_ACCEN1                      ACCEN1;                 /**< \brief 4F8, Access Enable Register 1*/
       Ifx_UReg_8Bit                       reserved_4FC[64259];    /**< \brief 4FC, \internal Reserved */
} Ifx_DOM;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXDOM_REGDEF_H */
