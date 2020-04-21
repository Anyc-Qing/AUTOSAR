/**
 * \file IfxEbcu_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:48 GMT
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
 * \defgroup IfxLld_Ebcu_Registers EbcuRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Ebcu_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Ebcu_Registers
 * 
 * \defgroup IfxLld_Ebcu_Registers_union Register unions
 * \ingroup IfxLld_Ebcu_Registers
 * 
 * \defgroup IfxLld_Ebcu_Registers_struct Memory map
 * \ingroup IfxLld_Ebcu_Registers
 */
#ifndef IFXEBCU_REGDEF_H
#define IFXEBCU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_EBCU_ACCEN0_Bits
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
} Ifx_EBCU_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_EBCU_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_EBCU_ACCEN1_Bits;

/** \brief EBCU EDC Alarm Clear Register ${x} */
typedef struct _Ifx_EBCU_ALCLR_Bits
{
    Ifx_UReg_32Bit CLR0:1;            /**< \brief [0:0] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR1:1;            /**< \brief [1:1] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR2:1;            /**< \brief [2:2] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR3:1;            /**< \brief [3:3] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR4:1;            /**< \brief [4:4] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR5:1;            /**< \brief [5:5] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR6:1;            /**< \brief [6:6] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR7:1;            /**< \brief [7:7] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR8:1;            /**< \brief [8:8] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR9:1;            /**< \brief [9:9] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR10:1;           /**< \brief [10:10] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR11:1;           /**< \brief [11:11] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR12:1;           /**< \brief [12:12] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR13:1;           /**< \brief [13:13] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR14:1;           /**< \brief [14:14] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR15:1;           /**< \brief [15:15] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR16:1;           /**< \brief [16:16] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR17:1;           /**< \brief [17:17] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR18:1;           /**< \brief [18:18] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR19:1;           /**< \brief [19:19] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR20:1;           /**< \brief [20:20] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR21:1;           /**< \brief [21:21] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR22:1;           /**< \brief [22:22] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR23:1;           /**< \brief [23:23] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR24:1;           /**< \brief [24:24] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR25:1;           /**< \brief [25:25] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR26:1;           /**< \brief [26:26] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR27:1;           /**< \brief [27:27] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR28:1;           /**< \brief [28:28] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR29:1;           /**< \brief [29:29] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR30:1;           /**< \brief [30:30] Alarm ${y} - CLR${y} (w) */
    Ifx_UReg_32Bit CLR31:1;           /**< \brief [31:31] Alarm ${y} - CLR${y} (w) */
} Ifx_EBCU_ALCLR_Bits;

/** \brief EBCU EDC Alarm Control Register */
typedef struct _Ifx_EBCU_ALCTRL_Bits
{
    Ifx_UReg_32Bit ALOV:1;            /**< \brief [0:0] Alarm Overflow - ALOV (rh) */
    Ifx_UReg_32Bit ALOVCLR:1;         /**< \brief [1:1] Alarm Overflow Clear - ALOVCLR (w) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_EBCU_ALCTRL_Bits;

/** \brief SBCU EDC Alarm Status Register 0 */
typedef struct _Ifx_EBCU_ALSTAT_Bits
{
    Ifx_UReg_32Bit AL0:1;            /**< \brief [0:0] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL1:1;            /**< \brief [1:1] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL2:1;            /**< \brief [2:2] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL3:1;            /**< \brief [3:3] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL4:1;            /**< \brief [4:4] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL5:1;            /**< \brief [5:5] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL6:1;            /**< \brief [6:6] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL7:1;            /**< \brief [7:7] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL8:1;            /**< \brief [8:8] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL9:1;            /**< \brief [9:9] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL10:1;           /**< \brief [10:10] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL11:1;           /**< \brief [11:11] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL12:1;           /**< \brief [12:12] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL13:1;           /**< \brief [13:13] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL14:1;           /**< \brief [14:14] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL15:1;           /**< \brief [15:15] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL16:1;           /**< \brief [16:16] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL17:1;           /**< \brief [17:17] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL18:1;           /**< \brief [18:18] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL19:1;           /**< \brief [19:19] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL20:1;           /**< \brief [20:20] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL21:1;           /**< \brief [21:21] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL22:1;           /**< \brief [22:22] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL23:1;           /**< \brief [23:23] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL24:1;           /**< \brief [24:24] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL25:1;           /**< \brief [25:25] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL26:1;           /**< \brief [26:26] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL27:1;           /**< \brief [27:27] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL28:1;           /**< \brief [28:28] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL29:1;           /**< \brief [29:29] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL30:1;           /**< \brief [30:30] Alarm ${y} (w) */
    Ifx_UReg_32Bit AL31:1;           /**< \brief [31:31] Alarm ${y} (w) */
} Ifx_EBCU_ALSTAT_Bits;

/** \brief EBCU Control Register */
typedef struct _Ifx_EBCU_CON_Bits
{
    Ifx_UReg_32Bit TOUT:16;           /**< \brief [15:0] EBCU Bus Time-Out Value - TOUT (rw) */
    Ifx_UReg_32Bit DBG:1;             /**< \brief [16:16] EBCU Debug Trace Enable - DBG (rw) */
    Ifx_UReg_32Bit reserved_17:2;     /**< \brief [18:17] \internal Reserved */
    Ifx_UReg_32Bit ONE:1;             /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit SPC:8;             /**< \brief [31:24] Starvation Period Control - SPC (rw) */
} Ifx_EBCU_CON_Bits;

/** \brief EBCU Debug Address 1 Register */
typedef struct _Ifx_EBCU_DBADR1_Bits
{
    Ifx_UReg_32Bit ADR1:32;           /**< \brief [31:0] Debug Trigger Address 1 - ADR1 (rw) */
} Ifx_EBCU_DBADR1_Bits;

/** \brief EBCU Debug Address 2 Register */
typedef struct _Ifx_EBCU_DBADR2_Bits
{
    Ifx_UReg_32Bit ADR2:32;           /**< \brief [31:0] Debug Trigger Address 2 - ADR2 (rw) */
} Ifx_EBCU_DBADR2_Bits;

/** \brief EBCU Debug Trapped Address Register */
typedef struct _Ifx_EBCU_DBADRT_Bits
{
    Ifx_UReg_32Bit FPIADR:32;         /**< \brief [31:0] FPI Bus Address Status - FPIADR (rh) */
} Ifx_EBCU_DBADRT_Bits;

/** \brief EBCU Debug Bus Operation Signals Register */
typedef struct _Ifx_EBCU_DBBOS_Bits
{
    Ifx_UReg_32Bit OPC:4;             /**< \brief [3:0] Opcode for Signal Status Debug Trigger - OPC (rw) */
    Ifx_UReg_32Bit SVM:1;             /**< \brief [4:4] SVM Signal for Status Debug Trigger - SVM (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit WR:1;              /**< \brief [8:8] Write Signal for Status Debug Trigger - WR (rw) */
    Ifx_UReg_32Bit reserved_9:3;      /**< \brief [11:9] \internal Reserved */
    Ifx_UReg_32Bit RD:1;              /**< \brief [12:12] Write Signal for Status Debug Trigger - RD (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_EBCU_DBBOS_Bits;

/** \brief EBCU Debug Trapped Bus Operation Signals Register */
typedef struct _Ifx_EBCU_DBBOST_Bits
{
    Ifx_UReg_32Bit FPIOPC:4;          /**< \brief [3:0] FPI Bus Opcode Status - FPIOPC (rh) */
    Ifx_UReg_32Bit FPISVM:1;          /**< \brief [4:4] FPI Bus Supervisor Mode Status - FPISVM (rh) */
    Ifx_UReg_32Bit FPIACK:2;          /**< \brief [6:5] FPI Bus Acknowledge Status - FPIACK (rh) */
    Ifx_UReg_32Bit FPIRDY:1;          /**< \brief [7:7] FPI Bus Ready Status - FPIRDY (rh) */
    Ifx_UReg_32Bit FPIWR:1;           /**< \brief [8:8] FPI Bus Write Indication Status - FPIWR (rh) */
    Ifx_UReg_32Bit FPIRST:2;          /**< \brief [10:9] FPI Bus Reset Status - FPIRST (rh) */
    Ifx_UReg_32Bit FPIOPS:1;          /**< \brief [11:11] FPI Bus OCDS Suspend Status - FPIOPS (rh) */
    Ifx_UReg_32Bit FPIRD:1;           /**< \brief [12:12] FPI Bus Read Indication Status - FPIRD (rh) */
    Ifx_UReg_32Bit FPIABORT:1;        /**< \brief [13:13] FPI Bus Abort Status - FPIABORT (rh) */
    Ifx_UReg_32Bit FPITOUT:1;         /**< \brief [14:14] FPI Bus Time-out Status - FPITOUT (rh) */
    Ifx_UReg_32Bit ENDINIT:1;         /**< \brief [15:15] FPI Bus Endinit Status - ENDINIT (rh) */
    Ifx_UReg_32Bit FPITAG:6;          /**< \brief [21:16] FPI Bus Master TAG Status - FPITAG (rh) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_EBCU_DBBOST_Bits;

/** \brief EBCU Debug Control Register */
typedef struct _Ifx_EBCU_DBCNTL_Bits
{
    Ifx_UReg_32Bit EO:1;              /**< \brief [0:0] Status of EBCU Debug Support Enable - EO (r) */
    Ifx_UReg_32Bit OA:1;              /**< \brief [1:1] Status of EBCU Breakpoint Logic - OA (rh) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit RA:1;              /**< \brief [4:4] Rearm EBCU Breakpoint Logic - RA (w) */
    Ifx_UReg_32Bit reserved_5:7;      /**< \brief [11:5] \internal Reserved */
    Ifx_UReg_32Bit CONCOM0:1;         /**< \brief [12:12] Grant and Address Trigger Relation - CONCOM0 (rw) */
    Ifx_UReg_32Bit CONCOM1:1;         /**< \brief [13:13] Address 1 and Address 2 Trigger Relation - CONCOM1 (rw) */
    Ifx_UReg_32Bit CONCOM2:1;         /**< \brief [14:14] Address and Signal Trigger Relation - CONCOM2 (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit ONG:1;             /**< \brief [16:16] Grant Trigger Enable - ONG (rw) */
    Ifx_UReg_32Bit reserved_17:3;     /**< \brief [19:17] \internal Reserved */
    Ifx_UReg_32Bit ONA1:2;            /**< \brief [21:20] Address 1 Trigger Control - ONA1 (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit ONA2:2;            /**< \brief [25:24] Address 2 Trigger Control - ONA2 (rw) */
    Ifx_UReg_32Bit reserved_26:2;     /**< \brief [27:26] \internal Reserved */
    Ifx_UReg_32Bit ONBOS0:1;          /**< \brief [28:28] Opcode Signal Status Trigger Condition - ONBOS0 (rw) */
    Ifx_UReg_32Bit ONBOS1:1;          /**< \brief [29:29] Supervisor Mode Signal Trigger Condition - ONBOS1 (rw) */
    Ifx_UReg_32Bit ONBOS2:1;          /**< \brief [30:30] Write Signal Trigger Condition - ONBOS2 (rw) */
    Ifx_UReg_32Bit ONBOS3:1;          /**< \brief [31:31] Read Signal Trigger Condition - ONBOS3 (rw) */
} Ifx_EBCU_DBCNTL_Bits;

/** \brief EBCU Debug Data Status Register */
typedef struct _Ifx_EBCU_DBDAT_Bits
{
    Ifx_UReg_32Bit FPIDATA:32;        /**< \brief [31:0] FPI Bus Data Status - FPIDATA (rh) */
} Ifx_EBCU_DBDAT_Bits;

/** \brief EBCU Debug Trapped Master Register */
typedef struct _Ifx_EBCU_DBGNTT_Bits
{
    Ifx_UReg_32Bit CIF:1;          /**< \brief [0:0] CIF FPI Bus Master Status - CIF (rwh) */
    Ifx_UReg_32Bit reserved_1:2;      /**< \brief [2:1] \internal Reserved */
    Ifx_UReg_32Bit IOC32E:1;          /**< \brief [3:3] IOC32E FPI Bus Master Status - IOC32E (rwh) */
    Ifx_UReg_32Bit IOC32P:1;          /**< \brief [4:4] IOC32P High Priority Trigger Enable - IOC32P (rh) */	
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit SFI_S2F:1;         /**< \brief [6:6] SFI_S2F FPI Bus Master Status - SFI_S2F (rwh) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit DMACHNR:8;         /**< \brief [23:16] DMA-FPI Channel Grant Status (rw) */
    Ifx_UReg_32Bit reserved_24:8;    /**< \brief [31:24] \internal Reserved */
} Ifx_EBCU_DBGNTT_Bits;

/** \brief EBCU Debug Grant Mask Register */
typedef struct _Ifx_EBCU_DBGRNT_Bits
{
    Ifx_UReg_32Bit CIF:1;             /**< \brief [0:0] CIF FPI Bus Master Status - CIF (rwh) */
    Ifx_UReg_32Bit reserved_1:2;      /**< \brief [2:1] \internal Reserved */
    Ifx_UReg_32Bit IOC32E:1;          /**< \brief [3:3] IOC32E Grant Trigger Enable, Medium Priority - IOC32E (rh) */
    Ifx_UReg_32Bit IOC32P:1;          /**< \brief [4:4] IOC32P High Priority Trigger Enable - IOC32P (rh) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit SFI_S2F:1;         /**< \brief [6:6] SFI_S2F Grant Trigger Enable - SFI_S2F (rh) */
    Ifx_UReg_32Bit reserved_7:25;     /**< \brief [31:7] \internal Reserved */
} Ifx_EBCU_DBGRNT_Bits;

/** \brief EBCU Error Address Capture Register */
typedef struct _Ifx_EBCU_EADD_Bits
{
    Ifx_UReg_32Bit FPIADR:32;         /**< \brief [31:0] Captured FPI Bus Address - FPIADR (rwh) */
} Ifx_EBCU_EADD_Bits;

/** \brief EBCU Error Control Capture Register */
typedef struct _Ifx_EBCU_ECON_Bits
{
    Ifx_UReg_32Bit ERRCNT:14;         /**< \brief [13:0] FPI Bus Error Counter - ERRCNT (rwh) */
    Ifx_UReg_32Bit TOUT:1;            /**< \brief [14:14] State of FPI Bus Time-Out Signal - TOUT (rwh) */
    Ifx_UReg_32Bit RDY:1;             /**< \brief [15:15] State of FPI Bus Ready Signal - RDY (rwh) */
    Ifx_UReg_32Bit ABT:1;             /**< \brief [16:16] State of FPI Bus Abort Signal - ABT (rwh) */
    Ifx_UReg_32Bit ACK:2;             /**< \brief [18:17] State of FPI Bus Acknowledge Signals - ACK (rwh) */
    Ifx_UReg_32Bit SVM:1;             /**< \brief [19:19] State of FPI Bus Supervisor Mode Signal - SVM (rwh) */
    Ifx_UReg_32Bit WRN:1;             /**< \brief [20:20] State of FPI Bus Write Signal - WRN (rwh) */
    Ifx_UReg_32Bit RDN:1;             /**< \brief [21:21] State of FPI Bus Read Signal - RDN (rwh) */
    Ifx_UReg_32Bit TAG:6;             /**< \brief [27:22] FPI Bus Master Tag Number Signals - TAG (rwh) */
    Ifx_UReg_32Bit OPC:4;             /**< \brief [31:28] FPI Bus Operation Code Signals - OPC (rwh) */
} Ifx_EBCU_ECON_Bits;

/** \brief EBCU Error Data Capture Register */
typedef struct _Ifx_EBCU_EDAT_Bits
{
    Ifx_UReg_32Bit FPIDAT:32;         /**< \brief [31:0] Captured FPI Bus Data - FPIDAT (rwh) */
} Ifx_EBCU_EDAT_Bits;

/** \brief EBCU FPI Error Generation Control Register */
typedef struct _Ifx_EBCU_FEGEN_Bits
{
    Ifx_UReg_32Bit SEDM:3;            /**< \brief [2:0] SEDM (Slave Encoder) - SEDM (rw) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit MEDM:3;            /**< \brief [10:8] MEDM (Master Encoder) Type of Error - MEDM (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit EN:3;              /**< \brief [18:16] Enable Signal Type of Error - EN (rw) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit BCU:2;             /**< \brief [25:24] BCU Type of Error - BCU (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_EBCU_FEGEN_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_EBCU_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_NUMBER:8;      /**< \brief [15:8] Module Number Value - MOD_NUMBER (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EBCU_ID_Bits;

/** \brief EBCU Arbiter Priority Register High */
typedef struct _Ifx_EBCU_PRIOH_Bits
{
    Ifx_UReg_32Bit RESERVED8:4;       /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit RESERVED9:4;       /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit RESERVED10:4;      /**< \brief [11:8] \internal Reserved */
    Ifx_UReg_32Bit RESERVED11:4;      /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit RESERVED12:4;      /**< \brief [19:16] \internal Reserved */
    Ifx_UReg_32Bit RESERVED13:4;      /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit RESERVED14:4;      /**< \brief [27:24] \internal Reserved */
    Ifx_UReg_32Bit RESERVED15:4;      /**< \brief [31:28] \internal Reserved */
} Ifx_EBCU_PRIOH_Bits;

/** \brief EBCU Arbiter Priority Register Low */
typedef struct _Ifx_EBCU_PRIOL_Bits
{
    Ifx_UReg_32Bit CIF:4;             /**< \brief [3:0] CIF FPI Bus Master Status - CIF (rwh) */
    Ifx_UReg_32Bit RESERVED1:4;       /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit RESERVED2:4;       /**< \brief [11:8] \internal Reserved */
    Ifx_UReg_32Bit IOC32E:4;          /**< \brief [15:12] IOC32E Priority - IOC32E (rw) */
    Ifx_UReg_32Bit IOC32P:4;          /**< \brief [19:16] IOC32P Priority - IOC32P (rw) */
    Ifx_UReg_32Bit RESERVED5:4;       /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit SFI_S2F:4;         /**< \brief [27:24] SFI Bridge SRI2FPI Priority - SFI_S2F (rw) */
    Ifx_UReg_32Bit RESERVED7:4;       /**< \brief [31:28] \internal Reserved */
} Ifx_EBCU_PRIOL_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_ebcu_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_ACCEN1;

/** \brief EBCU EDC Alarm Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_ALCLR_Bits B;            /**< \brief Bitfield access */
} Ifx_EBCU_ALCLR;

/** \brief EBCU EDC Alarm Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_ALCTRL_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_ALCTRL;

/** \brief SBCU EDC Alarm Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_ALSTAT_Bits B;          /**< \brief Bitfield access */
} Ifx_EBCU_ALSTAT;

/** \brief EBCU Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_CON_Bits B;              /**< \brief Bitfield access */
} Ifx_EBCU_CON;

/** \brief EBCU Debug Address 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBADR1_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_DBADR1;

/** \brief EBCU Debug Address 2 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBADR2_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_DBADR2;

/** \brief EBCU Debug Trapped Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBADRT_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_DBADRT;

/** \brief EBCU Debug Bus Operation Signals Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBBOS_Bits B;            /**< \brief Bitfield access */
} Ifx_EBCU_DBBOS;

/** \brief EBCU Debug Trapped Bus Operation Signals Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBBOST_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_DBBOST;

/** \brief EBCU Debug Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBCNTL_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_DBCNTL;

/** \brief EBCU Debug Data Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBDAT_Bits B;            /**< \brief Bitfield access */
} Ifx_EBCU_DBDAT;

/** \brief EBCU Debug Trapped Master Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBGNTT_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_DBGNTT;

/** \brief EBCU Debug Grant Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_DBGRNT_Bits B;           /**< \brief Bitfield access */
} Ifx_EBCU_DBGRNT;

/** \brief EBCU Error Address Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_EADD_Bits B;             /**< \brief Bitfield access */
} Ifx_EBCU_EADD;

/** \brief EBCU Error Control Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_ECON_Bits B;             /**< \brief Bitfield access */
} Ifx_EBCU_ECON;

/** \brief EBCU Error Data Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_EDAT_Bits B;             /**< \brief Bitfield access */
} Ifx_EBCU_EDAT;

/** \brief EBCU FPI Error Generation Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_FEGEN_Bits B;            /**< \brief Bitfield access */
} Ifx_EBCU_FEGEN;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_EBCU_ID;

/** \brief EBCU Arbiter Priority Register High   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_PRIOH_Bits B;            /**< \brief Bitfield access */
} Ifx_EBCU_PRIOH;

/** \brief EBCU Arbiter Priority Register Low   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EBCU_PRIOL_Bits B;            /**< \brief Bitfield access */
} Ifx_EBCU_PRIOL;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief EBCU object */
typedef volatile struct _Ifx_EBCU
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_EBCU_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_EBCU_CON                        CON;                    /**< \brief 10, EBCU Control Register*/
       Ifx_EBCU_PRIOH                      PRIOH;                  /**< \brief 14, EBCU Arbiter Priority Register High*/
       Ifx_EBCU_PRIOL                      PRIOL;                  /**< \brief 18, EBCU Arbiter Priority Register Low*/
       Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, \internal Reserved */
       Ifx_EBCU_ECON                       ECON;                   /**< \brief 20, EBCU Error Control Capture Register*/
       Ifx_EBCU_EADD                       EADD;                   /**< \brief 24, EBCU Error Address Capture Register*/
       Ifx_EBCU_EDAT                       EDAT;                   /**< \brief 28, EBCU Error Data Capture Register*/
       Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, \internal Reserved */
       Ifx_EBCU_DBCNTL                     DBCNTL;                 /**< \brief 30, EBCU Debug Control Register*/
       Ifx_EBCU_DBGRNT                     DBGRNT;                 /**< \brief 34, EBCU Debug Grant Mask Register*/
       Ifx_EBCU_DBADR1                     DBADR1;                 /**< \brief 38, EBCU Debug Address 1 Register*/
       Ifx_EBCU_DBADR2                     DBADR2;                 /**< \brief 3C, EBCU Debug Address 2 Register*/
       Ifx_EBCU_DBBOS                      DBBOS;                  /**< \brief 40, EBCU Debug Bus Operation Signals Register*/
       Ifx_EBCU_DBGNTT                     DBGNTT;                 /**< \brief 44, EBCU Debug Trapped Master Register*/
       Ifx_EBCU_DBADRT                     DBADRT;                 /**< \brief 48, EBCU Debug Trapped Address Register*/
       Ifx_EBCU_DBBOST                     DBBOST;                 /**< \brief 4C, EBCU Debug Trapped Bus Operation Signals Register*/
       Ifx_EBCU_DBDAT                      DBDAT;                  /**< \brief 50, EBCU Debug Data Status Register*/
       Ifx_UReg_8Bit                       reserved_54[12];        /**< \brief 54, \internal Reserved */
       Ifx_EBCU_ALSTAT                    ALSTAT[4];               /**< \brief 60, SBCU EDC Alarm Status Register */
       Ifx_EBCU_ALCLR                      ALCLR[4];               /**< \brief 70, EBCU EDC Alarm Clear Register ${x}*/
       Ifx_EBCU_ALCTRL                     ALCTRL;                 /**< \brief 80, EBCU EDC Alarm Control Register*/
       Ifx_EBCU_FEGEN                      FEGEN;                  /**< \brief 84, EBCU FPI Error Generation Control Register*/
       Ifx_UReg_8Bit                       reserved_88[112];       /**< \brief 88, \internal Reserved */
       Ifx_EBCU_ACCEN1                     ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_EBCU_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
} Ifx_EBCU;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBCU_REGDEF_H */
