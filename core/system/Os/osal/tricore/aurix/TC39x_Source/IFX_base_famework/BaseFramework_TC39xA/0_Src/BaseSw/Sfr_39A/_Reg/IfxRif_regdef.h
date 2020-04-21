/**
 * \file IfxRif_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:14:45 GMT
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
 * \defgroup IfxLld_Rif_Registers RifRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Rif_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Rif_Registers
 * 
 * \defgroup IfxLld_Rif_Registers_union Register unions
 * \ingroup IfxLld_Rif_Registers
 * 
 * \defgroup IfxLld_Rif_Registers_struct Memory map
 * \ingroup IfxLld_Rif_Registers
 */
#ifndef IFXRIF_REGDEF_H
#define IFXRIF_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Rif_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_RIF_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${y} - EN${y} (rw) */
} Ifx_RIF_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_RIF_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_RIF_ACCEN1_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_RIF_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_RIF_CLC_Bits;

/** \brief Debug Data Register 0 */
typedef struct _Ifx_RIF_DBG0_Bits
{
    Ifx_UReg_32Bit DD1:16;            /**< \brief [15:0] Debug Data First Sample - DD1 (rh) */
    Ifx_UReg_32Bit DD2:16;            /**< \brief [31:16] Debug Data Second Sample - DD2 (rh) */
} Ifx_RIF_DBG0_Bits;

/** \brief Debug Data Register 1 */
typedef struct _Ifx_RIF_DBG1_Bits
{
    Ifx_UReg_32Bit DD3:16;            /**< \brief [15:0] Debug Data Third Sample - DD3 (rh) */
    Ifx_UReg_32Bit DD4:16;            /**< \brief [31:16] Debug Data Fourh Sample - DD4 (rh) */
} Ifx_RIF_DBG1_Bits;

/** \brief Debug Delay Register 0 */
typedef struct _Ifx_RIF_DBGDLY0_Bits
{
    Ifx_UReg_32Bit FDLY0:3;           /**< \brief [2:0] Frame Signal Delay Line RX0 - FDLY0 (r) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit CDLY0:3;           /**< \brief [6:4] Clock Signal Delay Line RX0 - CDLY0 (r) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit DDLY0:3;           /**< \brief [10:8] Data Signal Delay Line RX0 - DDLY0 (r) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit FDLY1:3;           /**< \brief [14:12] Frame Signal Delay Line RX1 - FDLY1 (r) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit CDLY1:3;           /**< \brief [18:16] Clock Signal Delay Line RX1 - CDLY1 (r) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit DDLY1:3;           /**< \brief [22:20] Data Signal Delay Line RX1 - DDLY1 (r) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_RIF_DBGDLY0_Bits;

/** \brief Debug Delay Register 1 */
typedef struct _Ifx_RIF_DBGDLY1_Bits
{
    Ifx_UReg_32Bit FDLY2:3;           /**< \brief [2:0] Frame Signal Delay Line RX2 - FDLY2 (r) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit CDLY2:3;           /**< \brief [6:4] Clock Signal Delay Line RX2 - CDLY2 (r) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit DDLY2:3;           /**< \brief [10:8] Data Signal Delay Line RX2 - DDLY2 (r) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit FDLY3:3;           /**< \brief [14:12] Frame Signal Delay Line RX3 - FDLY3 (r) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit CDLY3:3;           /**< \brief [18:16] Clock Signal Delay Line RX3 - CDLY3 (r) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit DDLY3:3;           /**< \brief [22:20] Data Signal Delay Line RX3 - DDLY3 (r) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit BMDLY0:3;          /**< \brief [26:24] Bist Mode Delay Line 0 - BMDLY0 (r) */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit BMDLY1:3;          /**< \brief [30:28] Bist Mode Delay Line 1 - BMDLY1 (r) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_RIF_DBGDLY1_Bits;

/** \brief Data Formatting Unit Register */
typedef struct _Ifx_RIF_DFU_Bits
{
    Ifx_UReg_32Bit DF:1;              /**< \brief [0:0] Data Format - DF (rw) */
    Ifx_UReg_32Bit DA:1;              /**< \brief [1:1] Data Alignment - DA (rw) */
    Ifx_UReg_32Bit MSB:1;             /**< \brief [2:2] Shift Direction MSB / LSB First - MSB (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_RIF_DFU_Bits;

/** \brief Data Memory Interface Register */
typedef struct _Ifx_RIF_DMI_Bits
{
    Ifx_UReg_32Bit ENF0:1;            /**< \brief [0:0] Enable FIFO0 - ENF0 (rw) */
    Ifx_UReg_32Bit ENF1:1;            /**< \brief [1:1] Enable FIFO1 - ENF1 (rw) */
    Ifx_UReg_32Bit ENF2:1;            /**< \brief [2:2] Enable FIFO2 - ENF2 (rw) */
    Ifx_UReg_32Bit ENF3:1;            /**< \brief [3:3] Enable FIFO3 - ENF3 (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_RIF_DMI_Bits;

/** \brief External Serial Interface Register */
typedef struct _Ifx_RIF_ESI_Bits
{
    Ifx_UReg_32Bit CP:1;              /**< \brief [0:0] Clock Polarity - CP (rw) */
    Ifx_UReg_32Bit FP:1;              /**< \brief [1:1] Frame Polarity - FP (rw) */
    Ifx_UReg_32Bit DP0:1;             /**< \brief [2:2] Data Polarity for Lane 0 - DP0 (rw) */
    Ifx_UReg_32Bit DP1:1;             /**< \brief [3:3] Data Polarity for Lane 1 - DP1 (rw) */
    Ifx_UReg_32Bit DP2:1;             /**< \brief [4:4] Data Polarity for Lane 2 - DP2 (rw) */
    Ifx_UReg_32Bit DP3:1;             /**< \brief [5:5] Data Polarity for Lane 3 - DP3 (rw) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit CALEN:1;           /**< \brief [16:16] Calibration Enable - CALEN (w) */
    Ifx_UReg_32Bit CALBSY:1;          /**< \brief [17:17] Calibration Busy - CALBSY (rh) */
    Ifx_UReg_32Bit CALSTAT:1;         /**< \brief [18:18] Calibration Status - CALSTAT (r) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_RIF_ESI_Bits;

/** \brief Flags Clear Register */
typedef struct _Ifx_RIF_FLAGSCL_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit CALC:1;            /**< \brief [16:16] Calibration End Flag Clear - CALC (w) */
    Ifx_UReg_32Bit FWC:1;             /**< \brief [17:17] Frame Watchdog Flag Clear - FWC (w) */
    Ifx_UReg_32Bit REC:1;             /**< \brief [18:18] Ramp End Clear - REC (w) */
    Ifx_UReg_32Bit CEC:1;             /**< \brief [19:19] Chirp End Clear - CEC (w) */
    Ifx_UReg_32Bit CRCC0:1;           /**< \brief [20:20] CRC Error Flag Clear 0 - CRCC0 (w) */
    Ifx_UReg_32Bit CRCC1:1;           /**< \brief [21:21] CRC Error Flag Clear 1 - CRCC1 (w) */
    Ifx_UReg_32Bit CRCC2:1;           /**< \brief [22:22] CRC Error Flag Clear 2 - CRCC2 (w) */
    Ifx_UReg_32Bit CRCC3:1;           /**< \brief [23:23] CRC Error Flag Clear 3 - CRCC3 (w) */
    Ifx_UReg_32Bit R1EC:1;            /**< \brief [24:24] RAMP1 Error Flag Clear - R1EC (w) */
    Ifx_UReg_32Bit C1EC:1;            /**< \brief [25:25] CHIRP1 Error Flag Clear - C1EC (w) */
    Ifx_UReg_32Bit R1SC:1;            /**< \brief [26:26] RAMP1 Start Flag Clear - R1SC (w) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_RIF_FLAGSCL_Bits;

/** \brief Flags Set Register */
typedef struct _Ifx_RIF_FLAGSSET_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit CALS:1;            /**< \brief [16:16] Calibration End Flag Set - CALS (w) */
    Ifx_UReg_32Bit FWS:1;             /**< \brief [17:17] Frame Watchdog Flag Set - FWS (w) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [18:18] Ramp End Set - RES (w) */
    Ifx_UReg_32Bit CES:1;             /**< \brief [19:19] Chirp End Set - CES (w) */
    Ifx_UReg_32Bit CRCS0:1;           /**< \brief [20:20] CRC Error Flag Set 0 - CRCS0 (w) */
    Ifx_UReg_32Bit CRCS1:1;           /**< \brief [21:21] CRC Error Flag Set 1 - CRCS1 (w) */
    Ifx_UReg_32Bit CRCS2:1;           /**< \brief [22:22] CRC Error Flag Set 2 - CRCS2 (w) */
    Ifx_UReg_32Bit CRCS3:1;           /**< \brief [23:23] CRC Error Flag Set 3 - CRCS3 (w) */
    Ifx_UReg_32Bit R1ES:1;            /**< \brief [24:24] RAMP1 Error Flag Set 3 - R1ES (w) */
    Ifx_UReg_32Bit C1ES:1;            /**< \brief [25:25] CHIRP1 Error Flag Set 3 - C1ES (w) */
    Ifx_UReg_32Bit R1SS:1;            /**< \brief [26:26] RAMP1 Start Set - R1SS (w) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_RIF_FLAGSSET_Bits;

/** \brief FIFO and Lane Management Register */
typedef struct _Ifx_RIF_FLM_Bits
{
    Ifx_UReg_32Bit MODE:1;            /**< \brief [0:0] FLM Mode - MODE (rw) */
    Ifx_UReg_32Bit FSWP:1;            /**< \brief [1:1] Full Swap - FSWP (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit CRCEN:1;           /**< \brief [8:8] CRC Enable - CRCEN (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_RIF_FLM_Bits;

/** \brief Frame Watchdog Register */
typedef struct _Ifx_RIF_FWDG_Bits
{
    Ifx_UReg_32Bit THRESHOLD:10;      /**< \brief [9:0] Frame Watchdog Threshold - THRESHOLD (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_RIF_FWDG_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_RIF_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUMBER:16;      /**< \brief [31:16] Module Number Value - MODNUMBER (r) */
} Ifx_RIF_ID_Bits;

/** \brief Interrupt Control Register */
typedef struct _Ifx_RIF_INTCON_Bits
{
    Ifx_UReg_32Bit CALE:1;            /**< \brief [0:0] Calibration End Interrupt Enable - CALE (rw) */
    Ifx_UReg_32Bit FWE:1;             /**< \brief [1:1] Frame Watchdog Enable - FWE (rw) */
    Ifx_UReg_32Bit REE:1;             /**< \brief [2:2] Ramp End Enable - REE (rw) */
    Ifx_UReg_32Bit CEE:1;             /**< \brief [3:3] Chirp End Enable - CEE (rw) */
    Ifx_UReg_32Bit CRCE0:1;           /**< \brief [4:4] CRC Error Flag Enable 0 - CRCE0 (rw) */
    Ifx_UReg_32Bit CRCE1:1;           /**< \brief [5:5] CRC Error Flag Enable 1 - CRCE1 (rw) */
    Ifx_UReg_32Bit CRCE2:1;           /**< \brief [6:6] CRC Error Flag Enable 2 - CRCE2 (rw) */
    Ifx_UReg_32Bit CRCE3:1;           /**< \brief [7:7] CRC Error Flag Enable 3 - CRCE3 (rw) */
    Ifx_UReg_32Bit R1EE:1;            /**< \brief [8:8] RAMP1 Error Enable - R1EE (rw) */
    Ifx_UReg_32Bit C1EE:1;            /**< \brief [9:9] CHIRP1 Error Enable - C1EE (rw) */
    Ifx_UReg_32Bit R1SE:1;            /**< \brief [10:10] RAMP1 Start Enable - R1SE (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit CALF:1;            /**< \brief [16:16] Calibration End Interrupt Flag - CALF (r) */
    Ifx_UReg_32Bit FWF:1;             /**< \brief [17:17] Frame Watchdog Interrupt Flag - FWF (r) */
    Ifx_UReg_32Bit REF:1;             /**< \brief [18:18] Ramp End Flag - REF (r) */
    Ifx_UReg_32Bit CEF:1;             /**< \brief [19:19] Chirp End Flag - CEF (r) */
    Ifx_UReg_32Bit CRCF0:1;           /**< \brief [20:20] CRC Error Flag 0 - CRCF0 (r) */
    Ifx_UReg_32Bit CRCF1:1;           /**< \brief [21:21] CRC Error Flag 1 - CRCF1 (r) */
    Ifx_UReg_32Bit CRCF2:1;           /**< \brief [22:22] CRC Error Flag 2 - CRCF2 (r) */
    Ifx_UReg_32Bit CRCF3:1;           /**< \brief [23:23] CRC Error Flag 3 - CRCF3 (r) */
    Ifx_UReg_32Bit R1EF:1;            /**< \brief [24:24] RAMP1 Error Flag - R1EF (r) */
    Ifx_UReg_32Bit C1EF:1;            /**< \brief [25:25] CHIRP1 Error Flag - C1EF (r) */
    Ifx_UReg_32Bit R1SF:1;            /**< \brief [26:26] RAMP1 Start Flag - R1SF (r) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_RIF_INTCON_Bits;

/** \brief Internal Parallel Interface Register */
typedef struct _Ifx_RIF_IPI_Bits
{
    Ifx_UReg_32Bit DL:2;              /**< \brief [1:0] Data Length - DL (rw) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit PFP:1;             /**< \brief [3:3] Parallel Frame Polarity - PFP (rw) */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit EN0:1;             /**< \brief [16:16] Enable Deserializer 0 - EN0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [17:17] Enable Deserializer 1 - EN1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [18:18] Enable Deserializer 2 - EN2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [19:19] Enable Deserializer 3 - EN3 (rw) */
    Ifx_UReg_32Bit reserved_20:11;    /**< \brief [30:20] \internal Reserved */
    Ifx_UReg_32Bit SDDV:1;            /**< \brief [31:31] SRIF Debug Data Valid - SDDV (rh) */
} Ifx_RIF_IPI_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_RIF_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_RIF_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_RIF_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_RIF_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_RIF_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_RIF_KRSTCLR_Bits;

/** \brief LVDS Control Register 0 */
typedef struct _Ifx_RIF_LVDSCON0_Bits
{
    Ifx_UReg_32Bit FRAME:8;           /**< \brief [7:0] Frame LVDS Pad Control - FRAME (rw) */
    Ifx_UReg_32Bit CLK:8;             /**< \brief [15:8] CLOCK LVDS Pad Control - CLK (rw) */
    Ifx_UReg_32Bit DATA0:8;           /**< \brief [23:16] DATA0 LVDS Pad Control - DATA0 (rw) */
    Ifx_UReg_32Bit DATA1:8;           /**< \brief [31:24] DATA1 LVDS Pad Control - DATA1 (rw) */
} Ifx_RIF_LVDSCON0_Bits;

/** \brief LVDS Control Register 1 */
typedef struct _Ifx_RIF_LVDSCON1_Bits
{
    Ifx_UReg_32Bit DATA2:8;           /**< \brief [7:0] DATA2 LVDS Pad Control - DATA2 (rw) */
    Ifx_UReg_32Bit DATA3:8;           /**< \brief [15:8] DATA3 LVDS Pad Control - DATA3 (rw) */
    Ifx_UReg_32Bit MISC:3;            /**< \brief [18:16] Miscellaneous Common LVDS Pad Control - MISC (rw) */
    Ifx_UReg_32Bit RTERM:3;           /**< \brief [21:19] Termination Resistor Trimming - RTERM (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit PWRDN:1;           /**< \brief [24:24] LVDS Bias Distributor Power Down - PWRDN (rw) */
    Ifx_UReg_32Bit LVDS5VEN:1;        /**< \brief [25:25] Enable 5V Mode for LVDS Bias Distributor - LVDS5VEN (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_RIF_LVDSCON1_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_RIF_OCS_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Set for OTGB0/1 - TGS (rw) */
    Ifx_UReg_32Bit TGB:1;             /**< \brief [2:2] OTGB0/1 Bus Select - TGB (rw) */
    Ifx_UReg_32Bit TG_P:1;            /**< \brief [3:3] TGS, TGB Write Protection - TG_P (w) */
    Ifx_UReg_32Bit reserved_4:20;     /**< \brief [23:4] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_RIF_OCS_Bits;

/** \brief Radar State Machine Register 0 */
typedef struct _Ifx_RIF_RSM0_Bits
{
    Ifx_UReg_32Bit R1:4;              /**< \brief [3:0] Ramp 1 Phase in Number of Samples - R1 (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit R3:4;              /**< \brief [11:8] Ramp 3 Phase in Number of Samples - R3 (rw) */
    Ifx_UReg_32Bit WAIT:4;            /**< \brief [15:12] Wait Phase in Number of Samples - WAIT (rw) */
    Ifx_UReg_32Bit PAUSE:4;           /**< \brief [19:16] Pause Phase infPREperiods - PAUSE (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit PRE:6;             /**< \brief [29:24] Prescaler - PRE (rw) */
    Ifx_UReg_32Bit LCKSTP:1;          /**< \brief [30:30] Lockstep Enable Bit - LCKSTP (rw) */
    Ifx_UReg_32Bit INTADC:1;          /**< \brief [31:31] Internal ADC Enable Bit - INTADC (rw) */
} Ifx_RIF_RSM0_Bits;

/** \brief Radar State Machine Register 1 */
typedef struct _Ifx_RIF_RSM1_Bits
{
    Ifx_UReg_32Bit RAMPS:11;          /**< \brief [10:0] Number of Ramps per Chirp - RAMPS (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit C1SEL:2;           /**< \brief [13:12] Select Bit for CHIRP1 Signal - C1SEL (rw) */
    Ifx_UReg_32Bit R1SEL:2;           /**< \brief [15:14] Select Bit for RAMP1 Signal - R1SEL (rw) */
    Ifx_UReg_32Bit CURRAMP:12;        /**< \brief [27:16] Number of Current Ramp - CURRAMP (r) */
    Ifx_UReg_32Bit C1POL:1;           /**< \brief [28:28] Polarity of CHIRP1 Signal - C1POL (rw) */
    Ifx_UReg_32Bit R1POL:1;           /**< \brief [29:29] Polarity of RAMP1 Signal - R1POL (rw) */
    Ifx_UReg_32Bit C1EN:1;            /**< \brief [30:30] Enable for CHIRP1 Signal - C1EN (rw) */
    Ifx_UReg_32Bit R1EN:1;            /**< \brief [31:31] Enable for RAMP1 Signal - R1EN (rw) */
} Ifx_RIF_RSM1_Bits;

/** \brief Radar State Machine Register 2 */
typedef struct _Ifx_RIF_RSM2_Bits
{
    Ifx_UReg_32Bit SAMPLES:11;        /**< \brief [10:0] Number of Valid Data Samples - SAMPLES (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit CURSAMPLE:12;      /**< \brief [27:16] Number of the Current Valid Data Sample - CURSAMPLE (r) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_RIF_RSM2_Bits;

/** \brief Radar State Machine 2 Capture Register */
typedef struct _Ifx_RIF_RSM2CAP_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit ENDSAMPLE:12;      /**< \brief [27:16] Value of the Current Sample at the End of the Ramp - ENDSAMPLE (r) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_RIF_RSM2CAP_Bits;

/** \brief SRIF Override Configuration Register */
typedef struct _Ifx_RIF_SRIFOVRCFG_Bits
{
    Ifx_UReg_32Bit SKMR:2;            /**< \brief [1:0] Skew Management Ratio - SKMR (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_RIF_SRIFOVRCFG_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_rif_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_RIF_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_RIF_ACCEN1;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_RIF_CLC;

/** \brief Debug Data Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_DBG0_Bits B;              /**< \brief Bitfield access */
} Ifx_RIF_DBG0;

/** \brief Debug Data Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_DBG1_Bits B;              /**< \brief Bitfield access */
} Ifx_RIF_DBG1;

/** \brief Debug Delay Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_DBGDLY0_Bits B;           /**< \brief Bitfield access */
} Ifx_RIF_DBGDLY0;

/** \brief Debug Delay Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_DBGDLY1_Bits B;           /**< \brief Bitfield access */
} Ifx_RIF_DBGDLY1;

/** \brief Data Formatting Unit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_DFU_Bits B;               /**< \brief Bitfield access */
} Ifx_RIF_DFU;

/** \brief Data Memory Interface Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_DMI_Bits B;               /**< \brief Bitfield access */
} Ifx_RIF_DMI;

/** \brief External Serial Interface Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_ESI_Bits B;               /**< \brief Bitfield access */
} Ifx_RIF_ESI;

/** \brief Flags Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_FLAGSCL_Bits B;           /**< \brief Bitfield access */
} Ifx_RIF_FLAGSCL;

/** \brief Flags Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_FLAGSSET_Bits B;          /**< \brief Bitfield access */
} Ifx_RIF_FLAGSSET;

/** \brief FIFO and Lane Management Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_FLM_Bits B;               /**< \brief Bitfield access */
} Ifx_RIF_FLM;

/** \brief Frame Watchdog Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_FWDG_Bits B;              /**< \brief Bitfield access */
} Ifx_RIF_FWDG;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_RIF_ID;

/** \brief Interrupt Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_INTCON_Bits B;            /**< \brief Bitfield access */
} Ifx_RIF_INTCON;

/** \brief Internal Parallel Interface Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_IPI_Bits B;               /**< \brief Bitfield access */
} Ifx_RIF_IPI;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_RIF_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_RIF_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_RIF_KRSTCLR;

/** \brief LVDS Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_LVDSCON0_Bits B;          /**< \brief Bitfield access */
} Ifx_RIF_LVDSCON0;

/** \brief LVDS Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_LVDSCON1_Bits B;          /**< \brief Bitfield access */
} Ifx_RIF_LVDSCON1;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_OCS_Bits B;               /**< \brief Bitfield access */
} Ifx_RIF_OCS;

/** \brief Radar State Machine Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_RSM0_Bits B;              /**< \brief Bitfield access */
} Ifx_RIF_RSM0;

/** \brief Radar State Machine Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_RSM1_Bits B;              /**< \brief Bitfield access */
} Ifx_RIF_RSM1;

/** \brief Radar State Machine Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_RSM2_Bits B;              /**< \brief Bitfield access */
} Ifx_RIF_RSM2;

/** \brief Radar State Machine 2 Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_RSM2CAP_Bits B;           /**< \brief Bitfield access */
} Ifx_RIF_RSM2CAP;

/** \brief SRIF Override Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_RIF_SRIFOVRCFG_Bits B;        /**< \brief Bitfield access */
} Ifx_RIF_SRIFOVRCFG;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Rif_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief RIF object */
typedef volatile struct _Ifx_RIF
{
       Ifx_RIF_CLC                         CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_RIF_ID                          ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_RIF_ESI                         ESI;                    /**< \brief 10, External Serial Interface Register*/
       Ifx_RIF_IPI                         IPI;                    /**< \brief 14, Internal Parallel Interface Register*/
       Ifx_RIF_FLM                         FLM;                    /**< \brief 18, FIFO and Lane Management Register*/
       Ifx_RIF_DMI                         DMI;                    /**< \brief 1C, Data Memory Interface Register*/
       Ifx_RIF_RSM0                        RSM0;                   /**< \brief 20, Radar State Machine Register 0*/
       Ifx_RIF_RSM1                        RSM1;                   /**< \brief 24, Radar State Machine Register 1*/
       Ifx_RIF_RSM2                        RSM2;                   /**< \brief 28, Radar State Machine Register 2*/
       Ifx_RIF_INTCON                      INTCON;                 /**< \brief 2C, Interrupt Control Register*/
       Ifx_RIF_FLAGSSET                    FLAGSSET;               /**< \brief 30, Flags Set Register*/
       Ifx_RIF_FLAGSCL                     FLAGSCL;                /**< \brief 34, Flags Clear Register*/
       Ifx_RIF_FWDG                        FWDG;                   /**< \brief 38, Frame Watchdog Register*/
       Ifx_RIF_DFU                         DFU;                    /**< \brief 3C, Data Formatting Unit Register*/
       Ifx_RIF_SRIFOVRCFG                  SRIFOVRCFG;             /**< \brief 40, SRIF Override Configuration Register*/
       Ifx_RIF_RSM2CAP                     RSM2CAP;                /**< \brief 44, Radar State Machine 2 Capture Register*/
       Ifx_UReg_8Bit                       reserved_48[4];         /**< \brief 48, \internal Reserved  */
       Ifx_RIF_LVDSCON0                    LVDSCON0;               /**< \brief 4C, LVDS Control Register 0*/
       Ifx_RIF_LVDSCON1                    LVDSCON1;               /**< \brief 50, LVDS Control Register 1*/
       Ifx_RIF_DBGDLY0                     DBGDLY0;                /**< \brief 54, Debug Delay Register 0*/
       Ifx_RIF_DBGDLY1                     DBGDLY1;                /**< \brief 58, Debug Delay Register 1*/
       Ifx_UReg_8Bit                       reserved_5C[36];        /**< \brief 5C, \internal Reserved */
       Ifx_RIF_DBG0                        DBG0;                   /**< \brief 80, Debug Data Register 0*/
       Ifx_RIF_DBG1                        DBG1;                   /**< \brief 84, Debug Data Register 1*/
       Ifx_UReg_8Bit                       reserved_88[96];        /**< \brief 88, \internal Reserved */
       Ifx_RIF_OCS                         OCS;                    /**< \brief E8, OCDS Control and Status*/
       Ifx_RIF_KRSTCLR                     KRSTCLR;                /**< \brief EC, Kernel Reset Status Clear Register*/
       Ifx_RIF_KRST1                       KRST1;                  /**< \brief F0, Kernel Reset Register 1*/
       Ifx_RIF_KRST0                       KRST0;                  /**< \brief F4, Kernel Reset Register 0*/
       Ifx_RIF_ACCEN1                      ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_RIF_ACCEN0                      ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_100[256];      /**< \brief 100, \internal Reserved */
} Ifx_RIF;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXRIF_REGDEF_H */
