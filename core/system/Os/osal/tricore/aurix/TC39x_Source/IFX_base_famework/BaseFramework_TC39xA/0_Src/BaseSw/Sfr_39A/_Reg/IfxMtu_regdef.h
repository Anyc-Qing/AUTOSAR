/**
 * \file IfxMtu_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:27 GMT
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
 * \defgroup IfxLld_Mtu_Registers MtuRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Mtu_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Mtu_Registers
 * 
 * \defgroup IfxLld_Mtu_Registers_union Register unions
 * \ingroup IfxLld_Mtu_Registers
 * 
 * \defgroup IfxLld_Mtu_Registers_struct Memory map
 * \ingroup IfxLld_Mtu_Registers
 */
#ifndef IFXMTU_REGDEF_H
#define IFXMTU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Mtu_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_MTU_ACCEN0_Bits
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
} Ifx_MTU_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_MTU_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_MTU_ACCEN1_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_MTU_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit RESVD:1;           /**< \brief [2:2] Resvd - Resvd (rw) */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MTU_CLC_Bits;

/** \brief Identification Register */
typedef struct _Ifx_MTU_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUMBER:16;      /**< \brief [31:16] Module Number - MODNUMBER (r) */
} Ifx_MTU_ID_Bits;

/** \brief Configuration Register 0 */
typedef struct _Ifx_MTU_MC_CONFIG0_Bits
{
    Ifx_Strict_16Bit ACCSTYPE:8;        /**< \brief [7:0] Access type - ACCSTYPE (rw) */
    Ifx_Strict_16Bit reserved_8:4;      /**< \brief [11:8] \internal Reserved */
    Ifx_Strict_16Bit NUMACCS:4;         /**< \brief [15:12] Number of accesses per address - NUMACCS (rw) */
} Ifx_MTU_MC_CONFIG0_Bits;

/** \brief Configuration Register 1 */
typedef struct _Ifx_MTU_MC_CONFIG1_Bits
{
    Ifx_Strict_16Bit ACCSPAT:8;         /**< \brief [7:0] Access pattern - ACCSPAT (rw) */
    Ifx_Strict_16Bit SELFASTB:4;        /**< \brief [11:8] Select Fast Bit - SELFASTB (rw) */
    Ifx_Strict_16Bit AG_MOD:4;          /**< \brief [15:12] Address Generator Mode - AG_MOD (rw) */
} Ifx_MTU_MC_CONFIG1_Bits;

/** \brief Memory ECC Detection Register */
typedef struct _Ifx_MTU_MC_ECCD_Bits
{
    Ifx_Strict_16Bit SERR:1;            /**< \brief [0:0] Error Detected - SERR (rwh) */
    Ifx_Strict_16Bit CERR:1;            /**< \brief [1:1] Correctable Error Detected - CERR (rwh) */
    Ifx_Strict_16Bit UERR:1;            /**< \brief [2:2] Uncorrectable Error Detected - UERR (rwh) */
    Ifx_Strict_16Bit AERR:1;            /**< \brief [3:3] Address Error Detected - AERR (rwh) */
    Ifx_Strict_16Bit TRC:1;             /**< \brief [4:4] Tracking Clear - TRC (w) */
    Ifx_Strict_16Bit VAL:5;             /**< \brief [9:5] Valid Bits - VAL (rh) */
    Ifx_Strict_16Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_Strict_16Bit reserved_11:4;     /**< \brief [14:11] \internal Reserved */
    Ifx_Strict_16Bit EOV:1;             /**< \brief [15:15] Error Overflow - EOV (rh) */
} Ifx_MTU_MC_ECCD_Bits;

/** \brief ECC Safety Register */
typedef struct _Ifx_MTU_MC_ECCS_Bits
{
    Ifx_Strict_16Bit CENE:1;            /**< \brief [0:0] Correctable Error Notification Enable - CENE (rw) */
    Ifx_Strict_16Bit UENE:1;            /**< \brief [1:1] Uncorrectable Error Notification Enable - UENE (rw) */
    Ifx_Strict_16Bit AENE:1;            /**< \brief [2:2] Address Error Notification Enable - AENE (rw) */
    Ifx_Strict_16Bit ECE:1;             /**< \brief [3:3] Error Correction Enable - ECE (rw) */
    Ifx_Strict_16Bit TRE:1;             /**< \brief [4:4] Tracking Enable - TRE (rw) */
    Ifx_Strict_16Bit BFLE:1;            /**< \brief [5:5] Bit Flip Enable - BFLE (rw) */
    Ifx_Strict_16Bit SFLE:2;            /**< \brief [7:6] Signature Bit Flip Enables - SFLE (rw) */
    Ifx_Strict_16Bit ECCMAP:2;          /**< \brief [9:8] ECC Bit Mapping Mode - ECCMAP (rw) */
    Ifx_Strict_16Bit TC_TWR_SEL:1;      /**< \brief [10:10] TriCore Tower Select - TC_TWR_SEL (rw) */
    Ifx_Strict_16Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
} Ifx_MTU_MC_ECCS_Bits;

/** \brief Error Information Register ${x} */
typedef struct _Ifx_MTU_MC_ERRINFO_Bits
{
    Ifx_Strict_16Bit CERR:1;            /**< \brief [0:0] Correctable Error Detected - CERR (rh) */
    Ifx_Strict_16Bit UERR:1;            /**< \brief [1:1] Uncorrectable Error Detected - UERR (rh) */
    Ifx_Strict_16Bit AERR:1;            /**< \brief [2:2] Address Error Detected - AERR (rh) */
    Ifx_Strict_16Bit reserved_3:13;     /**< \brief [15:3] \internal Reserved */
} Ifx_MTU_MC_ERRINFO_Bits;

/** \brief Error Tracking Register ${x} */
typedef struct _Ifx_MTU_MC_ETRR_Bits
{
    Ifx_Strict_16Bit ADDR:13;           /**< \brief [12:0] Address of Error(i) - ADDR (rh) */
    Ifx_Strict_16Bit MBI:3;             /**< \brief [15:13] Memory Block Index of Error(i) - MBI (rh) */
} Ifx_MTU_MC_ETRR_Bits;

/** \brief MBIST Control Register */
typedef struct _Ifx_MTU_MC_MCONTROL_Bits
{
    Ifx_Strict_16Bit START:1;           /**< \brief [0:0] START - START (rw) */
    Ifx_Strict_16Bit RESUME:1;          /**< \brief [1:1] Resume failed test - RESUME (rwh) */
    Ifx_Strict_16Bit ESTF:1;            /**< \brief [2:2] Enable Sticky Fail Bit - ESTF (rw) */
    Ifx_Strict_16Bit DIR:1;             /**< \brief [3:3] Direction Select - DIR (rw) */
    Ifx_Strict_16Bit DINIT:1;           /**< \brief [4:4] Data Initialization Enable - DINIT (rw) */
    Ifx_Strict_16Bit RCADR:1;           /**< \brief [5:5] Fast Row / Fast Column Addressing Scheme Select - RCADR (rw) */
    Ifx_Strict_16Bit ROWTOG:1;          /**< \brief [6:6] Row toggling - ROWTOG (rw) */
    Ifx_Strict_16Bit BITTOG:1;          /**< \brief [7:7] Bit toggling - BITTOG (rw) */
    Ifx_Strict_16Bit GP_BASE:1;         /**< \brief [8:8] Galpat Base - GP_BASE (rw) */
    Ifx_Strict_16Bit FAILDMP:1;         /**< \brief [9:9] Fail bitmap dump - FAILDMP (rw) */
    Ifx_Strict_16Bit EN_DESCR:1;        /**< \brief [10:10] Enable De-Scrambling - EN_DESCR (rw) */
    Ifx_Strict_16Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_Strict_16Bit INITRED:1;         /**< \brief [12:12] Initialize Redundancy Settings - INITRED (rw) */
    Ifx_Strict_16Bit LDRED:1;           /**< \brief [13:13] Load Redundancy - LDRED (rw) */
    Ifx_Strict_16Bit USERED:1;          /**< \brief [14:14] Use Redundancy - USERED (rw) */
    Ifx_Strict_16Bit SRAM_CLR:1;        /**< \brief [15:15] Clear the SRAM - SRAM_CLR (rw) */
} Ifx_MTU_MC_MCONTROL_Bits;

/** \brief Status Register */
typedef struct _Ifx_MTU_MC_MSTATUS_Bits
{
    Ifx_Strict_16Bit DONE:1;            /**< \brief [0:0] DONE - DONE (rh) */
    Ifx_Strict_16Bit FAIL:1;            /**< \brief [1:1] FAIL - FAIL (rh) */
    Ifx_Strict_16Bit FDA:1;             /**< \brief [2:2] Fail Dump Available - FDA (rh) */
    Ifx_Strict_16Bit SFAIL:1;           /**< \brief [3:3] Sticky Fail Bit - SFAIL (rh) */
    Ifx_Strict_16Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
} Ifx_MTU_MC_MSTATUS_Bits;

/** \brief Range Register, single address mode */
typedef struct _Ifx_MTU_MC_RANGE_Bits
{
    Ifx_Strict_16Bit ADDR:14;           /**< \brief [13:0] Address - ADDR (rw) */
    Ifx_Strict_16Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_Strict_16Bit RAEN:1;            /**< \brief [15:15] Range Enable - RAEN (rw) */
} Ifx_MTU_MC_RANGE_Bits;


/** \brief Read Data and Bit Flip Register ${y} */
typedef struct _Ifx_MTU_MC_RDBFL_Bits
{
    Ifx_Strict_16Bit WDATA:16;          /**< \brief [15:0] Word Data - WDATA (rwh) */
} Ifx_MTU_MC_RDBFL_Bits;

/** \brief Revision ID Register */
typedef struct _Ifx_MTU_MC_REVID_Bits
{
    Ifx_Strict_16Bit REV_ID:16;         /**< \brief [15:0] Revision Identifier - REV_ID (r) */
} Ifx_MTU_MC_REVID_Bits;

/** \brief Memory MBISTEnable Register 0 */
typedef struct _Ifx_MTU_MEMDONE0_Bits
{
    Ifx_UReg_32Bit CPU0_DMEM_DONE:1;    /**< \brief [0:0] CPU0 DMEM Test Done Status - CPU0_DMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU0_DTAG_DONE:1;    /**< \brief [1:1] CPU0 DTAG Test Done Status - CPU0_DTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU0_PMEM_DONE:1;    /**< \brief [2:2] CPU0 PMEM Test Done Status - CPU0_PMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU0_PTAG_DONE:1;    /**< \brief [3:3] CPU0 PTAG Test Done Status - CPU0_PTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU2PCEN:1;        /**< \brief [4:4] CPU2 TC1.6P PCACHE MBIST Controller Memory Enable (TC2Dx and A-Step only) - CPU2PCEN (rwh) */
    Ifx_UReg_32Bit CPU1_DMEM_DONE:1;    /**< \brief [5:5] CPU1 DMEM Test Done Status - CPU1_DMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU1_DTAG_DONE:1;    /**< \brief [6:6] CPU1 DTAG Test Done Status - CPU1_DTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU1_PMEM_DONE:1;    /**< \brief [7:7] CPU1 PMEM Test Done Status - CPU1_PMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU1_PTAG_DONE:1;    /**< \brief [8:8] CPU1 PTAG Test Done Status - CPU1_PTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU1_DLMU_STBY_DONE:1;    /**< \brief [9:9] CPU1 STANDBY DLMU Test Done Status - CPU1_DLMU_STBY_DONE (rh) */
    Ifx_UReg_32Bit CPU2_DMEM_DONE:1;    /**< \brief [10:10] CPU2 DMEM Test Done Status - CPU2_DMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU2_DTAG_DONE:1;    /**< \brief [11:11] CPU2 DTAG Test Done Status - CPU2_DTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU2_PMEM_DONE:1;    /**< \brief [12:12] CPU2 PMEM Test Done Status - CPU2_PMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU2_PTAG_DONE:1;    /**< \brief [13:13] CPU2 PTAG Test Done Status - CPU2_PTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU2_DLMU_DONE:1;    /**< \brief [14:14] CPU2 DLMU memory Test Done Status - CPU2_DLMU_DONE (rh) */
    Ifx_UReg_32Bit CPU0PCEN:1;        /**< \brief [15:15] CPU0 PCACHE MBIST Controller Memory Enable (TC2Dx and A-Step Only) - CPU0PCEN (rwh) */
    Ifx_UReg_32Bit CPU3_DTAG_DONE:1;    /**< \brief [16:16] CPU3 DTAG Test Done Status - CPU3_DTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU3_PMEM_DONE:1;    /**< \brief [17:17] CPU3 PMEM Test Done Status - CPU3_PMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU3_PTAG_DONE:1;    /**< \brief [18:18] CPU3 PTAG Test Done Status - CPU3_PTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU1PCEN:1;        /**< \brief [19:19] CPU1 TC1.6E (TC2Dx Only ) PCACHE MBIST Controller Memory Enable - CPU1PCEN (rwh) */
    Ifx_UReg_32Bit CPU1PSEN:1;        /**< \brief [20:20] CPU1 TC1.6E (TC2Dx Only) PSPR MBIST Controller Memory Enable - CPU1PSEN (rwh) */
    Ifx_UReg_32Bit CPU1PTEN:1;        /**< \brief [21:21] CPU1 TC1.6E (TC2Dx Only) PTAG MBIST Controller Memory Enable - CPU1PTEN (rwh) */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit CPU4_PTAG_DONE:1;    /**< \brief [23:23] CPU4 PTAG Test Done Status - CPU4_PTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU4_DLMU_DONE:1;    /**< \brief [24:24] CPU4 DLMU memory Test Done Status - CPU4_DLMU_DONE (rh) */
    Ifx_UReg_32Bit CPU5_DMEM_DONE:1;    /**< \brief [25:25] CPU5 DMEM Test Done Status - CPU5_DMEM_DONE (rh) */
    Ifx_UReg_32Bit CPU5_DTAG_DONE:1;    /**< \brief [26:26] CPU5 DTAG Test Done Status - CPU5_DTAG_DONE (rh) */
    Ifx_UReg_32Bit CPU5_PMEM_DONE:1;    /**< \brief [27:27] CPU5 PMEM Test Done Status - CPU5_PMEM_DONE (rh) */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_MTU_MEMDONE0_Bits;

/** \brief Memory Test Done Status Register 1 */
typedef struct _Ifx_MTU_MEMDONE1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:4;      /**< \brief [5:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit SADMA_DONE:1;      /**< \brief [9:9] SADMA Test Done Status - SADMA_DONE (rh) */
    Ifx_UReg_32Bit MINI_MCDS_DONE:1;    /**< \brief [10:10] MINI MCDS memory Test Done Status - MINI_MCDS_DONE (rh) */
    Ifx_UReg_32Bit MCDS_DONE:1;       /**< \brief [11:11] MCDS memory Test Done Status - MCDS_DONE (rh) */
    Ifx_UReg_32Bit EMEM0_DONE:1;      /**< \brief [12:12] EMEM0 Test Done Status - EMEM0_DONE (rh) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit EMEM2_DONE:1;      /**< \brief [14:14] EMEM2 Test Done Status - EMEM2_DONE (rh) */
    Ifx_UReg_32Bit EMEM3_DONE:1;      /**< \brief [15:15] EMEM3 Test Done Status - EMEM3_DONE (rh) */
    Ifx_UReg_32Bit EMEM_XTM_DONE:1;    /**< \brief [16:16] EMEM XTM memory Test Done Status - EMEM_XTM_DONE (rh) */
    Ifx_UReg_32Bit SPU_BUFFER0_DONE:1;    /**< \brief [17:17] SPU BUFFER0 Test Done Status - SPU_BUFFER0_DONE (rh) */
    Ifx_UReg_32Bit SPU_BUFFER1_DONE:1;    /**< \brief [18:18] SPU BUFFER1 Test Done Status - SPU_BUFFER1_DONE (rh) */
    Ifx_UReg_32Bit SPU_CONFIG0_DONE:1;    /**< \brief [19:19] SPU CONFIG0 memory Test Done Status - SPU_CONFIG0_DONE (rh) */
    Ifx_UReg_32Bit SPU_CONFIG1_DONE:1;    /**< \brief [20:20] SPU CONFIG1 memory Test Done Status - SPU_CONFIG1_DONE (rh) */
    Ifx_UReg_32Bit GTM_FIFO_DONE:1;    /**< \brief [21:21] GTM FIFO memory Test Done Status - GTM_FIFO_DONE (rh) */
    Ifx_UReg_32Bit GTM_MCS0SLOW_DONE:1;    /**< \brief [22:22] GTM MCS0 SLOW memory Test Done Status - GTM_MCS0SLOW_DONE (rh) */
    Ifx_UReg_32Bit GTM_MCS0FAST_DONE:1;    /**< \brief [23:23] GTM MCS0 FAST memory Test Done Status - GTM_MCS0FAST_DONE (rh) */
    Ifx_UReg_32Bit GTM_MCS1SLOW_DONE:1;    /**< \brief [24:24] GTM MCS1 SLOW memory Test Done Status - GTM_MCS1SLOW_DONE (rh) */
    Ifx_UReg_32Bit GTM_MCS1FAST_DONE:1;    /**< \brief [25:25] GTM MCS1 FAST memory Test Done Status - GTM_MCS1FAST_DONE (rh) */
    Ifx_UReg_32Bit GTM_DPLL1A_DONE:1;    /**< \brief [26:26] GTM DPLL1A memory Test Done Status - GTM_DPLL1A_DONE (rh) */
    Ifx_UReg_32Bit GTM_DPLL1BC_DONE:1;    /**< \brief [27:27] GTM DPLL1BC memory Test Done Status - GTM_DPLL1BC_DONE (rh) */
    Ifx_UReg_32Bit GTM_DPLL2_DONE:1;    /**< \brief [28:28] GTM DPLL2 memory Test Done Status - GTM_DPLL2_DONE (rh) */
    Ifx_UReg_32Bit ETHERMAC_DONE:1;    /**< \brief [29:29] ETHERMAC memory Test Done Status - ETHERMAC_DONE (rh) */
    Ifx_UReg_32Bit MCAN10_DONE:1;     /**< \brief [30:30] MCAN10 memory Test Done Status - MCAN10_DONE (rh) */
    Ifx_UReg_32Bit MCAN11_DONE:1;     /**< \brief [31:31] MCAN11 memory Test Done Status - MCAN11_DONE (rh) */
} Ifx_MTU_MEMDONE1_Bits;

/** \brief Memory Test Done Status Register 2 */
typedef struct _Ifx_MTU_MEMDONE2_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit ERAY_OBF0_DONE:1;    /**< \brief [2:2] ERAY OBF0 Test Done Status - ERAY_OBF0_DONE (rh) */
    Ifx_UReg_32Bit ERAY_OBF1_DONE:1;    /**< \brief [3:3] ERAY OBF1 Test Done Status - ERAY_OBF1_DONE (rh) */
    Ifx_UReg_32Bit ERAY_TBF_IBF0_DONE:1;    /**< \brief [4:4] ERAY TBF IBF0 memory Test Done Status - ERAY_TBF_IBF0_DONE (rh) */
    Ifx_UReg_32Bit ERAY_TBF_IBF1_DONE:1;    /**< \brief [5:5] ERAY TBF IBF1 memory Test Done Status - ERAY_TBF_IBF1_DONE (rh) */
    Ifx_UReg_32Bit ERAY_MBF0_DONE:1;    /**< \brief [6:6] ERAY MBF0 memory Test Done Status - ERAY_MBF0_DONE (rh) */
    Ifx_UReg_32Bit ERAY_MBF1_DONE:1;    /**< \brief [7:7] ERAY MBF1 memory Test Done Status - ERAY_MBF1_DONE (rh) */
    Ifx_UReg_32Bit reserved_8:1;    /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;    /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;    /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;    /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;    /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit SCR_XRAM_DONE:1;    /**< \brief [13:13] SCR XRAM Test Done Status - SCR_XRAM_DONE (rh) */
    Ifx_UReg_32Bit SCR_RAMINT_DONE:1;    /**< \brief [14:14] SCR Internal RAM Test Done Status - SCR_RAMINT_DONE (rh) */
    Ifx_UReg_32Bit CIF_JPEG1_4_DONE:1;    /**< \brief [15:15] CIF JPEG_1_4 memoryTest Done Status - CIF_JPEG1_4_DONE (rh) */
    Ifx_UReg_32Bit CIF_JPEG3_DONE:1;    /**< \brief [16:16] CIF JPEG3 memoryTest Done Status - CIF_JPEG3_DONE (rh) */
    Ifx_UReg_32Bit CIF_DONE:1;        /**< \brief [17:17] CIF memoryTest Done Status - CIF_DONE (rh) */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit HSPDM_RAM_DONE:1;    /**< \brief [21:21] HDSPDM RAM Test Done Status - HSPDM_RAM_DONE (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit SPU_FFT00_RAM_DONE:1;    /**< \brief [24:24] SPU FFT00 RAM Test Done Status - SPU_FFT00_RAM_DONE (rh) */
    Ifx_UReg_32Bit SPU_FFT01_RAM_DONE:1;    /**< \brief [25:25] SPU FFT01 RAM Test Done Status - SPU_FFT01_RAM_DONE (rh) */
    Ifx_UReg_32Bit SPU_FFT10_RAM_DONE:1;    /**< \brief [26:26] SPU FFT10 RAM Test Done Status - SPU_FFT10_RAM_DONE (rh) */
    Ifx_UReg_32Bit SPU_FFT11_RAM_DONE:1;    /**< \brief [27:27] SPU FFT11 RAM Test Done Status - SPU_FFT11_RAM_DONE (rh) */
    Ifx_UReg_32Bit SPU_FFT20_RAM_DONE:1;    /**< \brief [28:28] SPU FFT20 RAM Test Done Status - SPU_FFT20_RAM_DONE (rh) */
    Ifx_UReg_32Bit SPU_FFT21_RAM_DONE:1;    /**< \brief [29:29] SPU FFT21 RAM Test Done Status - SPU_FFT21_RAM_DONE (rh) */
    Ifx_UReg_32Bit SPU_FFT30_RAM_DONE:1;    /**< \brief [30:30] SPU FFT30 RAM Test Done Status - SPU_FFT30_RAM_DONE (rh) */
    Ifx_UReg_32Bit SPU_FFT31_RAM_DONE:1;    /**< \brief [31:31] SPU FFT31 RAM Test Done Status - SPU_FFT31_RAM_DONE (rh) */
} Ifx_MTU_MEMDONE2_Bits;

/** \brief Memory Test FDA Status Register 0 */
typedef struct _Ifx_MTU_MEMFDA0_Bits
{
    Ifx_UReg_32Bit CPU0_DMEM_FDA:1;    /**< \brief [0:0] CPU0 DMEM Test FDA Status - CPU0_DMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU0_DTAG_FDA:1;    /**< \brief [1:1] CPU0 DTAG Test FDA Status - CPU0_DTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU0_PMEM_FDA:1;    /**< \brief [2:2] CPU0 PMEM Test FDA Status - CPU0_PMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU0_PTAG_FDA:1;    /**< \brief [3:3] CPU0 PTAG Test FDA Status - CPU0_PTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU2PCEN:1;        /**< \brief [4:4] CPU2 TC1.6P PCACHE MBIST Controller Memory Enable (TC2Dx and A-Step only) - CPU2PCEN (rwh) */
    Ifx_UReg_32Bit CPU1_DMEM_FDA:1;    /**< \brief [5:5] CPU1 DMEM Test FDA Status - CPU1_DMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU1_DTAG_FDA:1;    /**< \brief [6:6] CPU1 DTAG Test FDA Status - CPU1_DTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU1_PMEM_FDA:1;    /**< \brief [7:7] CPU1 PMEM Test FDA Status - CPU1_PMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU1_PTAG_FDA:1;    /**< \brief [8:8] CPU1 PTAG Test FDA Status - CPU1_PTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU1_DLMU_STBY_FDA:1;    /**< \brief [9:9] CPU1 STANDBY DLMU Test FDA Status - CPU1_DLMU_STBY_FDA (rh) */
    Ifx_UReg_32Bit CPU2_DMEM_FDA:1;    /**< \brief [10:10] CPU2 DMEM Test FDA Status - CPU2_DMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU2_DTAG_FDA:1;    /**< \brief [11:11] CPU2 DTAG Test FDA Status - CPU2_DTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU2_PMEM_FDA:1;    /**< \brief [12:12] CPU2 PMEM Test FDA Status - CPU2_PMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU2_PTAG_FDA:1;    /**< \brief [13:13] CPU2 PTAG Test FDA Status - CPU2_PTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU2_DLMU_FDA:1;    /**< \brief [14:14] CPU2 DLMU memory Test FDA Status - CPU2_DLMU_FDA (rh) */
    Ifx_UReg_32Bit CPU0PCEN:1;        /**< \brief [15:15] CPU0 PCACHE MBIST Controller Memory Enable (TC2Dx and A-Step Only) - CPU0PCEN (rwh) */
    Ifx_UReg_32Bit CPU3_DTAG_FDA:1;    /**< \brief [16:16] CPU3 DTAG Test FDA Status - CPU3_DTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU3_PMEM_FDA:1;    /**< \brief [17:17] CPU3 PMEM Test FDA Status - CPU3_PMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU3_PTAG_FDA:1;    /**< \brief [18:18] CPU3 PTAG Test FDA Status - CPU3_PTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU1PCEN:1;        /**< \brief [19:19] CPU1 TC1.6E (TC2Dx Only ) PCACHE MBIST Controller Memory Enable - CPU1PCEN (rwh) */
    Ifx_UReg_32Bit CPU1PSEN:1;        /**< \brief [20:20] CPU1 TC1.6E (TC2Dx Only) PSPR MBIST Controller Memory Enable - CPU1PSEN (rwh) */
    Ifx_UReg_32Bit CPU1PTEN:1;        /**< \brief [21:21] CPU1 TC1.6E (TC2Dx Only) PTAG MBIST Controller Memory Enable - CPU1PTEN (rwh) */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit CPU4_PTAG_FDA:1;    /**< \brief [23:23] CPU4 PTAG Test FDA Status - CPU4_PTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU4_DLMU_FDA:1;    /**< \brief [24:24] CPU4 DLMU memory Test FDA Status - CPU4_DLMU_FDA (rh) */
    Ifx_UReg_32Bit CPU5_DMEM_FDA:1;    /**< \brief [25:25] CPU5 DMEM Test FDA Status - CPU5_DMEM_FDA (rh) */
    Ifx_UReg_32Bit CPU5_DTAG_FDA:1;    /**< \brief [26:26] CPU5 DTAG Test FDA Status - CPU5_DTAG_FDA (rh) */
    Ifx_UReg_32Bit CPU5_PMEM_FDA:1;    /**< \brief [27:27] CPU5 PMEM Test FDA Status - CPU5_PMEM_FDA (rh) */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_MTU_MEMFDA0_Bits;

/** \brief Memory Test FDA Status Register 1 */
typedef struct _Ifx_MTU_MEMFDA1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:4;      /**< \brief [5:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit SADMA_FDA:1;       /**< \brief [9:9] SADMA Test FDA Status - SADMA_FDA (rh) */
    Ifx_UReg_32Bit MINI_MCDS_FDA:1;    /**< \brief [10:10] MINI MCDS memory Test FDA Status - MINI_MCDS_FDA (rh) */
    Ifx_UReg_32Bit MCDS_FDA:1;        /**< \brief [11:11] MCDS memory Test FDA Status - MCDS_FDA (rh) */
    Ifx_UReg_32Bit EMEM0_FDA:1;       /**< \brief [12:12] EMEM0 Test FDA Status - EMEM0_FDA (rh) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit EMEM2_FDA:1;       /**< \brief [14:14] EMEM2 Test FDA Status - EMEM2_FDA (rh) */
    Ifx_UReg_32Bit EMEM3_FDA:1;       /**< \brief [15:15] EMEM3 Test FDA Status - EMEM3_FDA (rh) */
    Ifx_UReg_32Bit EMEM_XTM_FDA:1;    /**< \brief [16:16] EMEM XTM memory Test FDA Status - EMEM_XTM_FDA (rh) */
    Ifx_UReg_32Bit SPU_BUFFER0_FDA:1;    /**< \brief [17:17] SPU BUFFER0 Test FDA Status - SPU_BUFFER0_FDA (rh) */
    Ifx_UReg_32Bit SPU_BUFFER1_FDA:1;    /**< \brief [18:18] SPU BUFFER1 Test FDA Status - SPU_BUFFER1_FDA (rh) */
    Ifx_UReg_32Bit SPU_CONFIG0_FDA:1;    /**< \brief [19:19] SPU CONFIG0 memory Test FDA Status - SPU_CONFIG0_FDA (rh) */
    Ifx_UReg_32Bit SPU_CONFIG1_FDA:1;    /**< \brief [20:20] SPU CONFIG1 memory Test FDA Status - SPU_CONFIG1_FDA (rh) */
    Ifx_UReg_32Bit GTM_FIFO_FDA:1;    /**< \brief [21:21] GTM FIFO memory Test FDA Status - GTM_FIFO_FDA (rh) */
    Ifx_UReg_32Bit GTM_MCS0SLOW_FDA:1;    /**< \brief [22:22] GTM MCS0 SLOW memory Test FDA Status - GTM_MCS0SLOW_FDA (rh) */
    Ifx_UReg_32Bit GTM_MCS0FAST_FDA:1;    /**< \brief [23:23] GTM MCS0 FAST memory Test FDA Status - GTM_MCS0FAST_FDA (rh) */
    Ifx_UReg_32Bit GTM_MCS1SLOW_FDA:1;    /**< \brief [24:24] GTM MCS1 SLOW memory Test FDA Status - GTM_MCS1SLOW_FDA (rh) */
    Ifx_UReg_32Bit GTM_MCS1FAST_FDA:1;    /**< \brief [25:25] GTM MCS1 FAST memory Test FDA Status - GTM_MCS1FAST_FDA (rh) */
    Ifx_UReg_32Bit GTM_DPLL1A_FDA:1;    /**< \brief [26:26] GTM DPLL1A memory Test FDA Status - GTM_DPLL1A_FDA (rh) */
    Ifx_UReg_32Bit GTM_DPLL1BC_FDA:1;    /**< \brief [27:27] GTM DPLL1BC memory Test FDA Status - GTM_DPLL1BC_FDA (rh) */
    Ifx_UReg_32Bit GTM_DPLL2_FDA:1;    /**< \brief [28:28] GTM DPLL2 memory Test FDA Status - GTM_DPLL2_FDA (rh) */
    Ifx_UReg_32Bit ETHERMAC_FDA:1;    /**< \brief [29:29] ETHERMAC memory Test FDA Status - ETHERMAC_FDA (rh) */
    Ifx_UReg_32Bit MCAN10_FDA:1;      /**< \brief [30:30] MCAN10 memory Test FDA Status - MCAN10_FDA (rh) */
    Ifx_UReg_32Bit MCAN11_FDA:1;      /**< \brief [31:31] MCAN11 memory Test FDA Status - MCAN11_FDA (rh) */
} Ifx_MTU_MEMFDA1_Bits;

/** \brief Memory Test FDA Status Register 2 */
typedef struct _Ifx_MTU_MEMFDA2_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit ERAY_OBF1_FDA:1;    /**< \brief [3:3] ERAY OBF1 Test FDA Status - ERAY_OBF1_FDA (rh) */
    Ifx_UReg_32Bit ERAY_TBF_IBF0_FDA:1;    /**< \brief [4:4] ERAY TBF IBF0 memory Test FDA Status - ERAY_TBF_IBF0_FDA (rh) */
    Ifx_UReg_32Bit ERAY_TBF_IBF1_FDA:1;    /**< \brief [5:5] ERAY TBF IBF1 memory Test FDA Status - ERAY_TBF_IBF1_FDA (rh) */
    Ifx_UReg_32Bit ERAY_MBF0_FDA:1;    /**< \brief [6:6] ERAY MBF0 memory Test FDA Status - ERAY_MBF0_FDA (rh) */
    Ifx_UReg_32Bit ERAY_MBF1_FDA:1;    /**< \brief [7:7] ERAY MBF1 memory Test FDA Status - ERAY_MBF1_FDA (rh) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;     /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;    /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit SCR_XRAM_FDA:1;    /**< \brief [13:13] SCR XRAM Test FDA Status - SCR_XRAM_FDA (rh) */
    Ifx_UReg_32Bit SCR_RAMINT_FDA:1;    /**< \brief [14:14] SCR Internal RAM Test FDA Status - SCR_RAMINT_FDA (rh) */
    Ifx_UReg_32Bit CIF_JPEG1_4_FDA:1;    /**< \brief [15:15] CIF JPEG_1_4 memoryTest FDA Status - CIF_JPEG1_4_FDA (rh) */
    Ifx_UReg_32Bit CIF_JPEG3_FDA:1;    /**< \brief [16:16] CIF JPEG3 memoryTest FDA Status - CIF_JPEG3_FDA (rh) */
    Ifx_UReg_32Bit CIF_FDA:1;         /**< \brief [17:17] CIF memoryTest FDA Status - CIF_FDA (rh) */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit HSPDM_RAM_FDA:1;    /**< \brief [21:21] HDSPDM RAM Test FDA Status - HSPDM_RAM_FDA (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit SPU_FFT00_RAM_FDA:1;    /**< \brief [24:24] SPU FFT00 RAM Test FDA Status - SPU_FFT00_RAM_FDA (rh) */
    Ifx_UReg_32Bit SPU_FFT01_RAM_FDA:1;    /**< \brief [25:25] SPU FFT01 RAM Test FDA Status - SPU_FFT01_RAM_FDA (rh) */
    Ifx_UReg_32Bit SPU_FFT10_RAM_FDA:1;    /**< \brief [26:26] SPU FFT10 RAM Test FDA Status - SPU_FFT10_RAM_FDA (rh) */
    Ifx_UReg_32Bit SPU_FFT11_RAM_FDA:1;    /**< \brief [27:27] SPU FFT11 RAM Test FDA Status - SPU_FFT11_RAM_FDA (rh) */
    Ifx_UReg_32Bit SPU_FFT20_RAM_FDA:1;    /**< \brief [28:28] SPU FFT20 RAM Test FDA Status - SPU_FFT20_RAM_FDA (rh) */
    Ifx_UReg_32Bit SPU_FFT21_RAM_FDA:1;    /**< \brief [29:29] SPU FFT21 RAM Test FDA Status - SPU_FFT21_RAM_FDA (rh) */
    Ifx_UReg_32Bit SPU_FFT30_RAM_FDA:1;    /**< \brief [30:30] SPU FFT30 RAM Test FDA Status - SPU_FFT30_RAM_FDA (rh) */
    Ifx_UReg_32Bit SPU_FFT31_RAM_FDA:1;    /**< \brief [31:31] SPU FFT31 RAM Test FDA Status - SPU_FFT31_RAM_FDA (rh) */
} Ifx_MTU_MEMFDA2_Bits;

/** \brief Memory Mapping Enable Register */
typedef struct _Ifx_MTU_MEMMAP_Bits
{
    Ifx_UReg_32Bit CPU0_DCMAP:1;      /**< \brief [0:0] CPU0 DCache Mapping - CPU0_DCMAP (rwh) */
    Ifx_UReg_32Bit CPU0_DTMAP:1;      /**< \brief [1:1] CPU0 DTAG Mapping - CPU0_DTMAP (rh) */
    Ifx_UReg_32Bit CPU0_PCMAP:1;      /**< \brief [2:2] CPU0 PCACHE Mapping - CPU0_PCMAP (rwh) */
    Ifx_UReg_32Bit CPU0_PTMAP:1;      /**< \brief [3:3] CPU0 PTAG Mapping - CPU0_PTMAP (rh) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit CPU1_DCMAP:1;      /**< \brief [5:5] CPU1 DCache Mapping - CPU1_DCMAP (rwh) */
    Ifx_UReg_32Bit CPU1_DTMAP:1;      /**< \brief [6:6] CPU1 DTAG Mapping - CPU1_DTMAP (rh) */
    Ifx_UReg_32Bit CPU1_PCMAP:1;      /**< \brief [7:7] CPU1 PCACHE Mapping - CPU1_PCMAP (rwh) */
    Ifx_UReg_32Bit CPU1_PTMAP:1;      /**< \brief [8:8] CPU1 PTAG Mapping - CPU1_PTMAP (rh) */
    Ifx_UReg_32Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit CPU2_DCMAP:1;      /**< \brief [10:10] CPU2 DCache Mapping - CPU2_DCMAP (rwh) */
    Ifx_UReg_32Bit CPU2_DTMAP:1;      /**< \brief [11:11] CPU2 DTAG Mapping - CPU2_DTMAP (rh) */
    Ifx_UReg_32Bit CPU2_PCMAP:1;      /**< \brief [12:12] CPU2 PCACHE Mapping - CPU2_PCMAP (rwh) */
    Ifx_UReg_32Bit CPU2_PTMAP:1;      /**< \brief [13:13] CPU2 PTAG Mapping - CPU2_PTMAP (rh) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit CPU3_DCMAP:1;      /**< \brief [15:15] CPU3 DCache Mapping - CPU3_DCMAP (rwh) */
    Ifx_UReg_32Bit CPU3_DTMAP:1;      /**< \brief [16:16] CPU3 DTAG Mapping - CPU3_DTMAP (rh) */
    Ifx_UReg_32Bit CPU3_PCMAP:1;      /**< \brief [17:17] CPU3 PCACHE Mapping - CPU3_PCMAP (rwh) */
    Ifx_UReg_32Bit CPU3_PTMAP:1;      /**< \brief [18:18] CPU3 PTAG Mapping - CPU3_PTMAP (rh) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit CPU4_DCMAP:1;      /**< \brief [20:20] CPU4 DCache Mapping - CPU4_DCMAP (rwh) */
    Ifx_UReg_32Bit CPU4_DTMAP:1;      /**< \brief [21:21] CPU4 DTAG Mapping - CPU4_DTMAP (rh) */
    Ifx_UReg_32Bit CPU4_PCMAP:1;      /**< \brief [22:22] CPU4 PCACHE Mapping - CPU4_PCMAP (rwh) */
    Ifx_UReg_32Bit CPU4_PTMAP:1;      /**< \brief [23:23] CPU4 PTAG Mapping - CPU4_PTMAP (rh) */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit CPU5_DCMAP:1;      /**< \brief [25:25] CPU5 DCache Mapping - CPU5_DCMAP (rwh) */
    Ifx_UReg_32Bit CPU5_DTMAP:1;      /**< \brief [26:26] CPU5 DTAG Mapping - CPU5_DTMAP (rh) */
    Ifx_UReg_32Bit CPU5_PCMAP:1;      /**< \brief [27:27] CPU5 PCACHE Mapping - CPU5_PCMAP (rwh) */
    Ifx_UReg_32Bit CPU5_PTMAP:1;      /**< \brief [28:28] CPU5 PTAG Mapping - CPU5_PTMAP (rh) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_MTU_MEMMAP_Bits;

/** \brief Memory Status Register 0 */
typedef struct _Ifx_MTU_MEMSTAT0_Bits
{
    Ifx_UReg_32Bit CPU0_DMEM_AIU:1;    /**< \brief [0:0] CPU0 DMEM Partial AutoInitialize of Cache Partition Underway - CPU0_DMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU0_DTAG_AIU:1;    /**< \brief [1:1] CPU0 DTAG MBIST AutoInitialize Underway - CPU0_DTAG_AIU (rh) */
    Ifx_UReg_32Bit CPU0_PMEM_AIU:1;    /**< \brief [2:2] CPU0 PMEM Partial AutoInitialize of Cache Partition Underway - CPU0_PMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU0_PTAG_AIU:1;    /**< \brief [3:3] CPU0 PTAG MBIST AutoInitialize Underway - CPU0_PTAG_AIU (rh) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit CPU1_DMEM_AIU:1;    /**< \brief [5:5] CPU1 DMEM Partial AutoInitialize of Cache Partition Underway - CPU1_DMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU1_DTAG_AIU:1;    /**< \brief [6:6] CPU1 DTAG MBIST AutoInitialize Underway - CPU1_DTAG_AIU (rh) */
    Ifx_UReg_32Bit CPU1_PMEM_AIU:1;    /**< \brief [7:7] CPU1 PMEM Partial AutoInitialize of Cache Partition Underway - CPU1_PMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU1_PTAG_AIU:1;    /**< \brief [8:8] CPU1 PTAG MBIST AutoInitialize Underway - CPU1_PTAG_AIU (rh) */
    Ifx_UReg_32Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit CPU2_DMEM_AIU:1;    /**< \brief [10:10] CPU2 DMEM Partial AutoInitialize of Cache Partition Underway - CPU2_DMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU2_DTAG_AIU:1;    /**< \brief [11:11] CPU2 DTAG MBIST AutoInitialize Underway - CPU2_DTAG_AIU (rh) */
    Ifx_UReg_32Bit CPU2_PMEM_AIU:1;    /**< \brief [12:12] CPU2 PMEM Partial AutoInitialize of Cache Partition Underway - CPU2_PMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU2_PTAG_AIU:1;    /**< \brief [13:13] CPU2 PTAG MBIST AutoInitialize Underway - CPU2_PTAG_AIU (rh) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit CPU3_DMEM_AIU:1;    /**< \brief [15:15] CPU3 DMEM Partial AutoInitialize of Cache Partition Underway - CPU3_DMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU3_DTAG_AIU:1;    /**< \brief [16:16] CPU3 DTAG MBIST AutoInitialize Underway - CPU3_DTAG_AIU (rh) */
    Ifx_UReg_32Bit CPU3_PMEM_AIU:1;    /**< \brief [17:17] CPU3 PMEM Partial AutoInitialize of Cache Partition Underway - CPU3_PMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU3_PTAG_AIU:1;    /**< \brief [18:18] CPU3 PTAG MBIST AutoInitialize Underway - CPU3_PTAG_AIU (rh) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit CPU4_DMEM_AIU:1;    /**< \brief [20:20] CPU4 DMEM Partial AutoInitialize of Cache Partition Underway - CPU4_DMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU4_DTAG_AIU:1;    /**< \brief [21:21] CPU4 DTAG MBIST AutoInitialize Underway - CPU4_DTAG_AIU (rh) */
    Ifx_UReg_32Bit CPU4_PMEM_AIU:1;    /**< \brief [22:22] CPU4 PMEM Partial AutoInitialize of Cache Partition Underway - CPU4_PMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU4_PTAG_AIU:1;    /**< \brief [23:23] CPU4 PTAG MBIST AutoInitialize Underway - CPU4_PTAG_AIU (rh) */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit CPU5_DMEM_AIU:1;    /**< \brief [25:25] CPU5 DMEM Partial AutoInitialize of Cache Partition Underway - CPU5_DMEM_AIU (rh) */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit CPU5_PMEM_AIU:1;    /**< \brief [27:27] CPU5 PMEM Partial AutoInitialize of Cache Partition Underway - CPU5_PMEM_AIU (rh) */
    Ifx_UReg_32Bit CPU5_PTAG_AIU:1;    /**< \brief [28:28] CPU5 PTAG MBIST AutoInitialize Underway - CPU5_PTAG_AIU (rh) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_MTU_MEMSTAT0_Bits;

/** \brief Memory Status Register 1 */
typedef struct _Ifx_MTU_MEMSTAT1_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;         /**< \brief [8:8] \internal Reserved  */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_MTU_MEMSTAT1_Bits;

/** \brief Memory Status Register 2 */
typedef struct _Ifx_MTU_MEMSTAT2_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;    /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;     /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;    /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_MTU_MEMSTAT2_Bits;

/** \brief Memory MBISTEnable Register 0 */
typedef struct _Ifx_MTU_MEMTEST0_Bits
{
    Ifx_UReg_32Bit CPU0_DMEM_EN:1;    /**< \brief [0:0] CPU0 DMEM SSH instance Enable - CPU0_DMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU0_DTAG_EN:1;    /**< \brief [1:1] CPU0 DTAG SSH instance Enable - CPU0_DTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU0_PMEM_EN:1;    /**< \brief [2:2] CPU0 PMEM SSH instance Enable - CPU0_PMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU0_PTAG_EN:1;    /**< \brief [3:3] CPU0 PTAG SSH instance Enable - CPU0_PTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU2PCEN:1;        /**< \brief [4:4] CPU2 TC1.6P PCACHE MBIST Controller Memory Enable (TC2Dx and A-Step only) - CPU2PCEN (rwh) */
    Ifx_UReg_32Bit CPU1_DMEM_EN:1;    /**< \brief [5:5] CPU1 DMEM SSH instance Enable - CPU1_DMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU1_DTAG_EN:1;    /**< \brief [6:6] CPU1 DTAG SSH instance Enable - CPU1_DTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU1_PMEM_EN:1;    /**< \brief [7:7] CPU1 PMEM SSH instance Enable - CPU1_PMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU1_PTAG_EN:1;    /**< \brief [8:8] CPU1 PTAG SSH instance Enable - CPU1_PTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU1_DLMU_STBY_EN:1;    /**< \brief [9:9] CPU1 STANDBY DLMU SSH instance Enable - CPU1_DLMU_STBY_EN (rwh) */
    Ifx_UReg_32Bit CPU2_DMEM_EN:1;    /**< \brief [10:10] CPU2 DMEM SSH instance Enable - CPU2_DMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU2_DTAG_EN:1;    /**< \brief [11:11] CPU2 DTAG SSH instance Enable - CPU2_DTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU2_PMEM_EN:1;    /**< \brief [12:12] CPU2 PMEM SSH instance Enable - CPU2_PMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU2_PTAG_EN:1;    /**< \brief [13:13] CPU2 PTAG SSH instance Enable - CPU2_PTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU2_DLMU_EN:1;    /**< \brief [14:14] CPU2 DLMU memory SSH instance Enable - CPU2_DLMU_EN (rwh) */
    Ifx_UReg_32Bit CPU0PCEN:1;        /**< \brief [15:15] CPU0 PCACHE MBIST Controller Memory Enable (TC2Dx and A-Step Only) - CPU0PCEN (rwh) */
    Ifx_UReg_32Bit CPU3_DTAG_EN:1;    /**< \brief [16:16] CPU3 DTAG SSH instance Enable - CPU3_DTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU3_PMEM_EN:1;    /**< \brief [17:17] CPU3 PMEM SSH instance Enable - CPU3_PMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU3_PTAG_EN:1;    /**< \brief [18:18] CPU3 PTAG SSH instance Enable - CPU3_PTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU1PCEN:1;        /**< \brief [19:19] CPU1 TC1.6E (TC2Dx Only ) PCACHE MBIST Controller Memory Enable - CPU1PCEN (rwh) */
    Ifx_UReg_32Bit CPU1PSEN:1;        /**< \brief [20:20] CPU1 TC1.6E (TC2Dx Only) PSPR MBIST Controller Memory Enable - CPU1PSEN (rwh) */
    Ifx_UReg_32Bit CPU1PTEN:1;        /**< \brief [21:21] CPU1 TC1.6E (TC2Dx Only) PTAG MBIST Controller Memory Enable - CPU1PTEN (rwh) */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit CPU4_PTAG_EN:1;    /**< \brief [23:23] CPU4 PTAG SSH instance Enable - CPU4_PTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU4_DLMU_EN:1;    /**< \brief [24:24] CPU4 DLMU memory SSH instance Enable - CPU4_DLMU_EN (rwh) */
    Ifx_UReg_32Bit CPU5_DMEM_EN:1;    /**< \brief [25:25] CPU5 DMEM SSH instance Enable - CPU5_DMEM_EN (rwh) */
    Ifx_UReg_32Bit CPU5_DTAG_EN:1;    /**< \brief [26:26] CPU5 DTAG SSH instance Enable - CPU5_DTAG_EN (rwh) */
    Ifx_UReg_32Bit CPU5_PMEM_EN:1;    /**< \brief [27:27] CPU5 PMEM SSH instance Enable - CPU5_PMEM_EN (rwh) */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_MTU_MEMTEST0_Bits;

/** \brief Memory MBISTEnable Register 1 */
typedef struct _Ifx_MTU_MEMTEST1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:4;      /**< \brief [5:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved  */
    Ifx_UReg_32Bit SADMA_EN:1;        /**< \brief [9:9] SADMA SSH instance Enable - SADMA_EN (rwh) */
    Ifx_UReg_32Bit MINI_MCDS_EN:1;    /**< \brief [10:10] MINI MCDS memory SSH instance Enable - MINI_MCDS_EN (rwh) */
    Ifx_UReg_32Bit MCDS_EN:1;         /**< \brief [11:11] MCDS memory SSH instance Enable - MCDS_EN (rwh) */
    Ifx_UReg_32Bit EMEM0_EN:1;        /**< \brief [12:12] EMEM0 SSH instance Enable - EMEM0_EN (rwh) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit EMEM2_EN:1;        /**< \brief [14:14] EMEM2 SSH instance Enable - EMEM2_EN (rwh) */
    Ifx_UReg_32Bit EMEM3_EN:1;        /**< \brief [15:15] EMEM3 SSH instance Enable - EMEM3_EN (rwh) */
    Ifx_UReg_32Bit EMEM_XTM_EN:1;     /**< \brief [16:16] EMEM XTM memory SSH instance Enable - EMEM_XTM_EN (rwh) */
    Ifx_UReg_32Bit SPU_BUFFER0_EN:1;    /**< \brief [17:17] SPU BUFFER0 SSH instance Enable - SPU_BUFFER0_EN (rwh) */
    Ifx_UReg_32Bit SPU_BUFFER1_EN:1;    /**< \brief [18:18] SPU BUFFER1 SSH instance Enable - SPU_BUFFER1_EN (rwh) */
    Ifx_UReg_32Bit SPU_CONFIG0_EN:1;    /**< \brief [19:19] SPU CONFIG0 memory SSH instance Enable - SPU_CONFIG0_EN (rwh) */
    Ifx_UReg_32Bit SPU_CONFIG1_EN:1;    /**< \brief [20:20] SPU CONFIG1 memory SSH instance Enable - SPU_CONFIG1_EN (rwh) */
    Ifx_UReg_32Bit GTM_FIFO_EN:1;     /**< \brief [21:21] GTM FIFO memory SSH instance Enable - GTM_FIFO_EN (rwh) */
    Ifx_UReg_32Bit GTM_MCS0SLOW_EN:1;    /**< \brief [22:22] GTM MCS0 SLOW memory SSH instance Enable - GTM_MCS0SLOW_EN (rwh) */
    Ifx_UReg_32Bit GTM_MCS0FAST_EN:1;    /**< \brief [23:23] GTM MCS0 FAST memory SSH instance Enable - GTM_MCS0FAST_EN (rwh) */
    Ifx_UReg_32Bit GTM_MCS1SLOW_EN:1;    /**< \brief [24:24] GTM MCS1 SLOW memory SSH instance Enable - GTM_MCS1SLOW_EN (rwh) */
    Ifx_UReg_32Bit GTM_MCS1FAST_EN:1;    /**< \brief [25:25] GTM MCS1 FAST memory SSH instance Enable - GTM_MCS1FAST_EN (rwh) */
    Ifx_UReg_32Bit GTM_DPLL1A_EN:1;    /**< \brief [26:26] GTM DPLL1A memory SSH instance Enable - GTM_DPLL1A_EN (rwh) */
    Ifx_UReg_32Bit GTM_DPLL1BC_EN:1;    /**< \brief [27:27] GTM DPLL1BC memory SSH instance Enable - GTM_DPLL1BC_EN (rwh) */
    Ifx_UReg_32Bit GTM_DPLL2_EN:1;    /**< \brief [28:28] GTM DPLL2 memory SSH instance Enable - GTM_DPLL2_EN (rwh) */
    Ifx_UReg_32Bit ETHERMAC_EN:1;     /**< \brief [29:29] ETHERMAC memory SSH instance Enable - ETHERMAC_EN (rwh) */
    Ifx_UReg_32Bit MCAN10_EN:1;       /**< \brief [30:30] MCAN10 memory SSH instance Enable - MCAN10_EN (rwh) */
    Ifx_UReg_32Bit MCAN11_EN:1;       /**< \brief [31:31] MCAN11 memory SSH instance Enable - MCAN11_EN (rwh) */
} Ifx_MTU_MEMTEST1_Bits;

/** \brief Memory MBISTEnable Register 2 */
typedef struct _Ifx_MTU_MEMTEST2_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit ERAY_OBF0_EN:1;    /**< \brief [2:2] ERAY OBF0 SSH instance Enable - ERAY_OBF0_EN (rwh) */
    Ifx_UReg_32Bit ERAY_OBF1_EN:1;    /**< \brief [3:3] ERAY OBF1 SSH instance Enable - ERAY_OBF1_EN (rwh) */
    Ifx_UReg_32Bit ERAY_TBF_IBF0_EN:1;    /**< \brief [4:4] ERAY TBF IBF0 memory SSH instance Enable - ERAY_TBF_IBF0_EN (rwh) */
    Ifx_UReg_32Bit ERAY_TBF_IBF1_EN:1;    /**< \brief [5:5] ERAY TBF IBF1 memory SSH instance Enable - ERAY_TBF_IBF1_EN (rwh) */
    Ifx_UReg_32Bit ERAY_MBF0_EN:1;    /**< \brief [6:6] ERAY MBF0 memory SSH instance Enable - ERAY_MBF0_EN (rwh) */
    Ifx_UReg_32Bit ERAY_MBF1_EN:1;    /**< \brief [7:7] ERAY MBF1 memory SSH instance Enable - ERAY_MBF1_EN (rwh) */
    Ifx_UReg_32Bit reserved_8:1;    /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;      /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;      /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit SCR_XRAM_EN:1;     /**< \brief [13:13] SCR XRAM SSH instance Enable - SCR_XRAM_EN (rwh) */
    Ifx_UReg_32Bit SCR_RAMINT_EN:1;    /**< \brief [14:14] SCR Internal RAM SSH instance Enable - SCR_RAMINT_EN (rwh) */
    Ifx_UReg_32Bit CIF_JPEG1_4_EN:1;    /**< \brief [15:15] CIF JPEG_1_4 memorySSH instance Enable - CIF_JPEG1_4_EN (rwh) */
    Ifx_UReg_32Bit CIF_JPEG3_EN:1;    /**< \brief [16:16] CIF JPEG3 memorySSH instance Enable - CIF_JPEG3_EN (rwh) */
    Ifx_UReg_32Bit CIF_EN:1;          /**< \brief [17:17] CIF memorySSH instance Enable - CIF_EN (rwh) */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit HSPDM_RAM_EN:1;    /**< \brief [21:21] HDSPDM RAM SSH instance Enable - HSPDM_RAM_EN (rwh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit SPU_FFT00_RAM_EN:1;    /**< \brief [24:24] SPU FFT00 RAM SSH instance Enable - SPU_FFT00_RAM_EN (rwh) */
    Ifx_UReg_32Bit SPU_FFT01_RAM_EN:1;    /**< \brief [25:25] SPU FFT01 RAM SSH instance Enable - SPU_FFT01_RAM_EN (rwh) */
    Ifx_UReg_32Bit SPU_FFT10_RAM_EN:1;    /**< \brief [26:26] SPU FFT10 RAM SSH instance Enable - SPU_FFT10_RAM_EN (rwh) */
    Ifx_UReg_32Bit SPU_FFT11_RAM_EN:1;    /**< \brief [27:27] SPU FFT11 RAM SSH instance Enable - SPU_FFT11_RAM_EN (rwh) */
    Ifx_UReg_32Bit SPU_FFT20_RAM_EN:1;    /**< \brief [28:28] SPU FFT20 RAM SSH instance Enable - SPU_FFT20_RAM_EN (rwh) */
    Ifx_UReg_32Bit SPU_FFT21_RAM_EN:1;    /**< \brief [29:29] SPU FFT21 RAM SSH instance Enable - SPU_FFT21_RAM_EN (rwh) */
    Ifx_UReg_32Bit SPU_FFT30_RAM_EN:1;    /**< \brief [30:30] SPU FFT30 RAM SSH instance Enable - SPU_FFT30_RAM_EN (rwh) */
    Ifx_UReg_32Bit SPU_FFT31_RAM_EN:1;    /**< \brief [31:31] SPU FFT31 RAM SSH instance Enable - SPU_FFT31_RAM_EN (rwh) */
} Ifx_MTU_MEMTEST2_Bits;

/** \brief Reserved Register */
typedef struct _Ifx_MTU_RES0_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_MTU_RES0_Bits;

/** \brief Reserved Register */
typedef struct _Ifx_MTU_RES1_Bits
{
    Ifx_UReg_32Bit reserved_0:3;      /**< \brief [2:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_MTU_RES1_Bits;

/** \brief Reserved Register */
typedef struct _Ifx_MTU_RES2_Bits
{
    Ifx_UReg_32Bit reserved_0:7;      /**< \brief [6:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_MTU_RES2_Bits;

/** \brief Reserved Register */
typedef struct _Ifx_MTU_RES3_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_MTU_RES3_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_mtu_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_MTU_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_MTU_ACCEN1;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_MTU_CLC;

/** \brief Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_MTU_ID;

/** \brief Configuration Register 0   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_CONFIG0_Bits B;        /**< \brief Bitfield access */
} Ifx_MTU_MC_CONFIG0;

/** \brief Configuration Register 1   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_CONFIG1_Bits B;        /**< \brief Bitfield access */
} Ifx_MTU_MC_CONFIG1;

/** \brief Memory ECC Detection Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_ECCD_Bits B;           /**< \brief Bitfield access */
} Ifx_MTU_MC_ECCD;

/** \brief ECC Safety Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_ECCS_Bits B;           /**< \brief Bitfield access */
} Ifx_MTU_MC_ECCS;

/** \brief Error Information Register ${x}   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_ERRINFO_Bits B;        /**< \brief Bitfield access */
} Ifx_MTU_MC_ERRINFO;

/** \brief Error Tracking Register ${x}   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_ETRR_Bits B;           /**< \brief Bitfield access */
} Ifx_MTU_MC_ETRR;

/** \brief MBIST Control Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_MCONTROL_Bits B;       /**< \brief Bitfield access */
} Ifx_MTU_MC_MCONTROL;

/** \brief Status Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_MSTATUS_Bits B;        /**< \brief Bitfield access */
} Ifx_MTU_MC_MSTATUS;

/** \brief Range Register, single address mode   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_RANGE_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MC_RANGE;

/** \brief Read Data and Bit Flip Register ${y}   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_RDBFL_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MC_RDBFL;

/** \brief Revision ID Register   */
typedef union
{
    Ifx_UReg_16Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_16Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MC_REVID_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MC_REVID;

/** \brief Memory MBISTEnable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMDONE0_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMDONE0;

/** \brief Memory Test Done Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMDONE1_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMDONE1;

/** \brief Memory Test Done Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMDONE2_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMDONE2;

/** \brief Memory Test FDA Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMFDA0_Bits B;           /**< \brief Bitfield access */
} Ifx_MTU_MEMFDA0;

/** \brief Memory Test FDA Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMFDA1_Bits B;           /**< \brief Bitfield access */
} Ifx_MTU_MEMFDA1;

/** \brief Memory Test FDA Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMFDA2_Bits B;           /**< \brief Bitfield access */
} Ifx_MTU_MEMFDA2;

/** \brief Memory Mapping Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMMAP_Bits B;            /**< \brief Bitfield access */
} Ifx_MTU_MEMMAP;

/** \brief Memory Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMSTAT0_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMSTAT0;

/** \brief Memory Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMSTAT1_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMSTAT1;

/** \brief Memory Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMSTAT2_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMSTAT2;

/** \brief Memory MBISTEnable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMTEST0_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMTEST0;

/** \brief Memory MBISTEnable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMTEST1_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMTEST1;

/** \brief Memory MBISTEnable Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_MEMTEST2_Bits B;          /**< \brief Bitfield access */
} Ifx_MTU_MEMTEST2;

/** \brief Reserved Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_RES0_Bits B;              /**< \brief Bitfield access */
} Ifx_MTU_RES0;

/** \brief Reserved Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_RES1_Bits B;              /**< \brief Bitfield access */
} Ifx_MTU_RES1;

/** \brief Reserved Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_RES2_Bits B;              /**< \brief Bitfield access */
} Ifx_MTU_RES2;

/** \brief Reserved Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MTU_RES3_Bits B;              /**< \brief Bitfield access */
} Ifx_MTU_RES3;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Mtu_MC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MC object */
/** \brief  MC object */

typedef volatile struct _Ifx_MTU_MC
{
       Ifx_MTU_MC_CONFIG0                  CONFIG0;                /**< \brief 0, Configuration Register 0*/
       Ifx_MTU_MC_CONFIG1                  CONFIG1;                /**< \brief 2, Configuration Register 1*/
       Ifx_MTU_MC_MCONTROL                 MCONTROL;               /**< \brief 4, MBIST Control Register*/
       Ifx_MTU_MC_MSTATUS                  MSTATUS;                /**< \brief 6, Status Register*/
       Ifx_MTU_MC_RANGE                    RANGE;                  /**< \brief 8, Range Register, single address mode*/
       Ifx_UReg_8Bit                       reserved_A[2];          /**< \brief A, \internal Reserved */
       Ifx_MTU_MC_REVID                    REVID;                  /**< \brief C, Revision ID Register*/
       Ifx_MTU_MC_ECCS                     ECCS;                   /**< \brief E, ECC Safety Register*/
       Ifx_MTU_MC_ECCD                     ECCD;                   /**< \brief 10, Memory ECC Detection Register*/
       Ifx_MTU_MC_ETRR                     ETRR[5];                /**< \brief 12, Error Tracking Register ${x}*/
       Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, \internal Reserved */
       Ifx_UReg_8Bit                       reserved_20[64];        /**< \brief 20, \internal Reserved */
       Ifx_MTU_MC_RDBFL                    RDBFL[67];              /**< \brief 60, Read Data and Bit Flip Register ${y}*/
       Ifx_UReg_8Bit                       reserved_E6[12];        /**< \brief E6, \internal Reserved */
       Ifx_MTU_MC_ERRINFO                  ERRINFO[5];             /**< \brief F2, Error Information Register ${x}*/
	   Ifx_UReg_8Bit                       reserved_FC[4]; 
} Ifx_MTU_MC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxLld_Mtu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief MTU object */
typedef volatile struct _Ifx_MTU
{
       Ifx_MTU_CLC                         CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_MTU_ID                          ID;                     /**< \brief 8, Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_MTU_MEMTEST0                    MEMTEST0;               /**< \brief 10, Memory MBISTEnable Register 0*/
       Ifx_MTU_MEMTEST1                    MEMTEST1;               /**< \brief 14, Memory MBISTEnable Register 1*/
       Ifx_MTU_MEMTEST2                    MEMTEST2;               /**< \brief 18, Memory MBISTEnable Register 2*/
       Ifx_MTU_MEMMAP                      MEMMAP;                 /**< \brief 1C, Memory Mapping Enable Register*/
       Ifx_UReg_8Bit                       reserved_28[24];         /**< \brief 28, \internal Reserved */
       Ifx_MTU_MEMSTAT0                    MEMSTAT0;               /**< \brief 38, Memory Status Register 0*/
       Ifx_MTU_MEMSTAT1                    MEMSTAT1;               /**< \brief 3C, Memory Status Register 1*/
       Ifx_MTU_MEMSTAT2                    MEMSTAT2;               /**< \brief 40, Memory Status Register 2*/
       Ifx_UReg_8Bit                       reserved_44[12];        /**< \brief 44, \internal Reserved */
       Ifx_MTU_MEMDONE0                    MEMDONE0;               /**< \brief 50, Memory MBISTEnable Register 0*/
       Ifx_MTU_MEMDONE1                    MEMDONE1;               /**< \brief 54, Memory Test Done Status Register 1*/
       Ifx_MTU_MEMDONE2                    MEMDONE2;               /**< \brief 58, Memory Test Done Status Register 2*/
       Ifx_UReg_8Bit                       reserved_5C[4];         /**< \brief 5C, \internal Reserved */
       Ifx_MTU_MEMFDA0                     MEMFDA0;                /**< \brief 60, Memory Test FDA Status Register 0*/
       Ifx_MTU_MEMFDA1                     MEMFDA1;                /**< \brief 64, Memory Test FDA Status Register 1*/
       Ifx_MTU_MEMFDA2                     MEMFDA2;                /**< \brief 68, Memory Test FDA Status Register 2*/
       Ifx_UReg_8Bit                       reserved_6C[140];        /**< \brief 6C, \internal Reserved */
       Ifx_MTU_ACCEN1                      ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_MTU_ACCEN0                      ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_100[3840];     /**< \brief 100, \internal Reserved */
       Ifx_MTU_MC                          MC[96];                 /**< \brief 1000, */
       Ifx_UReg_8Bit                       reserved_6FFC[36868];    /**< \brief 6FFC, \internal Reserved */
} Ifx_MTU;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMTU_REGDEF_H */
