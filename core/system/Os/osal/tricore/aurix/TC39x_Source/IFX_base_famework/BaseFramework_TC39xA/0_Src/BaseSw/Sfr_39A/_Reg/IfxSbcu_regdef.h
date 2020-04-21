/**
 * \file IfxSbcu_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:59 GMT
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
 * \defgroup IfxLld_Sbcu_Registers SbcuRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Sbcu_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Sbcu_Registers
 * 
 * \defgroup IfxLld_Sbcu_Registers_union Register unions
 * \ingroup IfxLld_Sbcu_Registers
 * 
 * \defgroup IfxLld_Sbcu_Registers_struct Memory map
 * \ingroup IfxLld_Sbcu_Registers
 */
#ifndef IFXSBCU_REGDEF_H
#define IFXSBCU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Sbcu_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_SBCU_ACCEN0_Bits
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
} Ifx_SBCU_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_SBCU_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SBCU_ACCEN1_Bits;

/** \brief SBCU EDC Alarm Clear Register ${x} */
typedef struct _Ifx_SBCU_ALCLR_Bits
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
} Ifx_SBCU_ALCLR_Bits;

/** \brief SBCU EDC Alarm Control Register */
typedef struct _Ifx_SBCU_ALCTRL_Bits
{
    Ifx_UReg_32Bit ALOV:1;            /**< \brief [0:0] Alarm Overflow - ALOV (rh) */
    Ifx_UReg_32Bit ALOVCLR:1;         /**< \brief [1:1] Alarm Overflow Clear - ALOVCLR (w) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SBCU_ALCTRL_Bits;

/** \brief SBCU EDC Alarm Status Register 0 */
typedef struct _Ifx_SBCU_ALSTAT0_Bits
{
    Ifx_UReg_32Bit SBCU_S:1;          /**< \brief [0:0] Alarm SBCU Slave Interface - SBCU_S (rh) */
    Ifx_UReg_32Bit CERBERUS_S:1;      /**< \brief [1:1] Alarm CERBERUS Slave Interface - CERBERUS_S (rh) */
    Ifx_UReg_32Bit IR_S:1;            /**< \brief [2:2] Alarm Interrupt Router (IR) Slave Interface - IR_S (rh) */
    Ifx_UReg_32Bit SFI_F2S_S:1;       /**< \brief [3:3] Alarm FPI to SRI Bridge Slave Interface - SFI_F2S_S (rh) */
    Ifx_UReg_32Bit SCU_S:1;           /**< \brief [4:4] Alarm SCU Slave Interface - SCU_S (rh) */
    Ifx_UReg_32Bit SMU_S:1;           /**< \brief [5:5] Alarm SMU Slave Interface - SMU_S (rh) */
    Ifx_UReg_32Bit PMC_S:1;           /**< \brief [6:6] Alarm PMC Slave Interface Slave Interface - PMC_S (rh) */
    Ifx_UReg_32Bit MTU_S:1;           /**< \brief [7:7] Alarm MTU - MTU_S (rh) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:1;     /**< \brief [16:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_25:1;     /**< \brief [25:25] \internal Reserved */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SBCU_ALSTAT0_Bits;

/** \brief SBCU EDC Alarm Status Register 1 */
typedef struct _Ifx_SBCU_ALSTAT1_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit EVADC_S:1;         /**< \brief [9:9] Alarm EVADC - EVADC_S (rh) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:1;     /**< \brief [16:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_25:1;     /**< \brief [25:25] \internal Reserved */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SBCU_ALSTAT1_Bits;

/** \brief SBCU EDC Alarm Status Register 2 */
typedef struct _Ifx_SBCU_ALSTAT2_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:1;     /**< \brief [16:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_25:1;     /**< \brief [25:25] \internal Reserved */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit SBCU_M:1;          /**< \brief [31:31] Alarm SBCU Master (Reset Driver) - SBCU_M (rh) */
} Ifx_SBCU_ALSTAT2_Bits;

/** \brief SBCU EDC Alarm Status Register 3 */
typedef struct _Ifx_SBCU_ALSTAT3_Bits
{
    Ifx_UReg_32Bit A_EN:1;            /**< \brief [0:0] Alarm Address Phase (A_EN_N, Master) - A_EN (rh) */
    Ifx_UReg_32Bit ABORT_EN:1;        /**< \brief [1:1] Alarm Data Phase (ABORT_EN_N, Master) - ABORT_EN (rh) */
    Ifx_UReg_32Bit ACK_EN:1;          /**< \brief [2:2] Alarm Data Phase (ACK_EN_N, Default Master and Slave) - ACK_EN (rh) */
    Ifx_UReg_32Bit D_EN:1;            /**< \brief [3:3] Alarm Data Enables (D_EN_N, all Masters and Slaves) - D_EN (rh) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:1;      /**< \brief [9:9] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit SFI_S2F:1;         /**< \brief [16:16] Alarm SRI to FPI Bridge Master Interface (DMA / CERBERUS) - SFI_S2F (rh) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit CPU0_M:1;          /**< \brief [22:22] Alarm CPU0 Master Interface - CPU0_M (rh) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:1;     /**< \brief [24:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_25:1;     /**< \brief [25:25] \internal Reserved */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SBCU_ALSTAT3_Bits;

/** \brief SBCU Control Register */
typedef struct _Ifx_SBCU_CON_Bits
{
    Ifx_UReg_32Bit TOUT:16;           /**< \brief [15:0] SBCU Bus Time-Out Value - TOUT (rw) */
    Ifx_UReg_32Bit DBG:1;             /**< \brief [16:16] SBCU Debug Trace Enable - DBG (rw) */
    Ifx_UReg_32Bit reserved_17:2;     /**< \brief [18:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit SPC:8;             /**< \brief [31:24] Starvation Period Control - SPC (rw) */
} Ifx_SBCU_CON_Bits;

/** \brief SBCU Debug Address 1 Register */
typedef struct _Ifx_SBCU_DBADR1_Bits
{
    Ifx_UReg_32Bit ADR1:32;           /**< \brief [31:0] Debug Trigger Address 1 - ADR1 (rw) */
} Ifx_SBCU_DBADR1_Bits;

/** \brief SBCU Debug Address 2 Register */
typedef struct _Ifx_SBCU_DBADR2_Bits
{
    Ifx_UReg_32Bit ADR2:32;           /**< \brief [31:0] Debug Trigger Address 2 - ADR2 (rw) */
} Ifx_SBCU_DBADR2_Bits;

/** \brief SBCU Debug Trapped Address Register */
typedef struct _Ifx_SBCU_DBADRT_Bits
{
    Ifx_UReg_32Bit FPIADR:32;         /**< \brief [31:0] FPI Bus Address Status - FPIADR (rh) */
} Ifx_SBCU_DBADRT_Bits;

/** \brief SBCU Debug Bus Operation Signals Register */
typedef struct _Ifx_SBCU_DBBOS_Bits
{
    Ifx_UReg_32Bit OPC:4;             /**< \brief [3:0] Opcode for Signal Status Debug Trigger - OPC (rw) */
    Ifx_UReg_32Bit SVM:1;             /**< \brief [4:4] SVM Signal for Status Debug Trigger - SVM (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit WR:1;              /**< \brief [8:8] Write Signal for Status Debug Trigger - WR (rw) */
    Ifx_UReg_32Bit reserved_9:3;      /**< \brief [11:9] \internal Reserved */
    Ifx_UReg_32Bit RD:1;              /**< \brief [12:12] Write Signal for Status Debug Trigger - RD (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_SBCU_DBBOS_Bits;

/** \brief SBCU Debug Trapped Bus Operation Signals Register */
typedef struct _Ifx_SBCU_DBBOST_Bits
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
} Ifx_SBCU_DBBOST_Bits;

/** \brief SBCU Debug Control Register */
typedef struct _Ifx_SBCU_DBCNTL_Bits
{
    Ifx_UReg_32Bit EO:1;              /**< \brief [0:0] Status of SBCU Debug Support Enable - EO (r) */
    Ifx_UReg_32Bit OA:1;              /**< \brief [1:1] Status of SBCU Breakpoint Logic - OA (rh) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit RA:1;              /**< \brief [4:4] Rearm SBCU Breakpoint Logic - RA (w) */
    Ifx_UReg_32Bit HSMTRTREN:2;       /**< \brief [6:5] Status of HSM Transaction Trace Logic - HSMTRTREN (r) */
    Ifx_UReg_32Bit HSMDBGEN:1;        /**< \brief [7:7] Status of HSM Debug Mode - HSMDBGEN (r) */
    Ifx_UReg_32Bit reserved_8:4;      /**< \brief [11:8] \internal Reserved */
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
} Ifx_SBCU_DBCNTL_Bits;

/** \brief SBCU Debug Data Status Register */
typedef struct _Ifx_SBCU_DBDAT_Bits
{
    Ifx_UReg_32Bit FPIDATA:32;        /**< \brief [31:0] FPI Bus Data Status - FPIDATA (rh) */
} Ifx_SBCU_DBDAT_Bits;

/** \brief SBCU Debug Trapped Master Register */
typedef struct _Ifx_SBCU_DBGNTT_Bits
{
    Ifx_UReg_32Bit SFI_S2F:1;         /**< \brief [0:0] SRI to FPI Bridge FPI Bus Master Status (DMA / Cerberus) - SFI_S2F (rwh) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit SDMMC:1;           /**< \brief [2:2] SDMMC FPI Bus Master Status - SDMMC (rwh) */
    Ifx_UReg_32Bit HSSL0:1;           /**< \brief [3:3] HSSL 0 FPI Bus Master Status - HSSL0 (rwh) */
    Ifx_UReg_32Bit HSSL1:1;           /**< \brief [4:4] HSSL 1 FPI Bus Master Status - HSSL1 (rwh) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit CPU0:1;            /**< \brief [6:6] CPU0 FPI Bus Master Status - CPU0 (rwh) */
    Ifx_UReg_32Bit CPU1:1;            /**< \brief [7:7] CPU1 FPI Bus Master Status - CPU1 (rwh) */
    Ifx_UReg_32Bit CPU2:1;            /**< \brief [8:8] CPU2 FPI Bus Master Status - CPU2 (rwh) */
    Ifx_UReg_32Bit CPU3:1;            /**< \brief [9:9] CPU3 FPI Bus Master Status - CPU3 (rwh) */
    Ifx_UReg_32Bit CPU4:1;            /**< \brief [10:10] CPU1 FPI Bus Master Status - CPU4 (rwh) */
    Ifx_UReg_32Bit CPU5:1;            /**< \brief [11:11] CPU5 FPI Bus Master Status - CPU5 (rwh) */
    Ifx_UReg_32Bit HSMRMI:1;          /**< \brief [12:12] HSM Register FPI Bus Master Interface Status - HSMRMI (rwh) */
    Ifx_UReg_32Bit HSMCMI:1;          /**< \brief [13:13] HSM Cache FPI Bus Master Interface Status - HSMCMI (rwh) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:1;     /**< \brief [16:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SBCU_DBGNTT_Bits;

/** \brief SBCU Debug Grant Mask Register */
typedef struct _Ifx_SBCU_DBGRNT_Bits
{
    Ifx_UReg_32Bit SFI_S2F:1;         /**< \brief [0:0] SRI to FPI Bridge Trigger Enable(Cerberus / DMA) - SFI_S2F (rw) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit SDMMC:1;           /**< \brief [2:2] SDMMC Trigger Enable - SDMMC (rw) */
    Ifx_UReg_32Bit HSSL0:1;           /**< \brief [3:3] HSSL0 Trigger Enable - HSSL0 (rw) */
    Ifx_UReg_32Bit HSSL1:1;           /**< \brief [4:4] HSSL1 Trigger Enable - HSSL1 (rw) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit CPU0:1;            /**< \brief [6:6] CPU0 Grant Trigger Enable - CPU0 (rw) */
    Ifx_UReg_32Bit CPU1:1;            /**< \brief [7:7] CPU1 Grant Trigger Enable - CPU1 (rw) */
    Ifx_UReg_32Bit CPU2:1;            /**< \brief [8:8] CPU2 Grant Trigger Enable - CPU2 (rw) */
    Ifx_UReg_32Bit CPU3:1;            /**< \brief [9:9] CPU3 Grant Trigger Enable - CPU3 (rw) */
    Ifx_UReg_32Bit CPU4:1;            /**< \brief [10:10] CPU4 Grant Trigger Enable - CPU4 (rw) */
    Ifx_UReg_32Bit CPU5:1;            /**< \brief [11:11] CPU5 Grant Trigger Enable - CPU5 (rw) */
    Ifx_UReg_32Bit HSMRMI:1;          /**< \brief [12:12] HSM Register Master Interface Grant Trigger Enable - HSMRMI (rw) */
    Ifx_UReg_32Bit HSMCMI:1;          /**< \brief [13:13] HSM Cache Master Interface Grant Trigger Enable - HSMCMI (rw) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SBCU_DBGRNT_Bits;

/** \brief SBCU Error Address Capture Register */
typedef struct _Ifx_SBCU_EADD_Bits
{
    Ifx_UReg_32Bit FPIADR:32;         /**< \brief [31:0] Captured FPI Bus Address - FPIADR (rwh) */
} Ifx_SBCU_EADD_Bits;

/** \brief SBCU Error Control Capture Register */
typedef struct _Ifx_SBCU_ECON_Bits
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
} Ifx_SBCU_ECON_Bits;

/** \brief SBCU Error Data Capture Register */
typedef struct _Ifx_SBCU_EDAT_Bits
{
    Ifx_UReg_32Bit FPIDAT:32;         /**< \brief [31:0] Captured FPI Bus Data - FPIDAT (rwh) */
} Ifx_SBCU_EDAT_Bits;

/** \brief FPI Error Generation Control Register */
typedef struct _Ifx_SBCU_FEGEN_Bits
{
    Ifx_UReg_32Bit SEDM:3;            /**< \brief [2:0] SEDM (Slave Encoder) - SEDM (rw) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit MEDM:3;            /**< \brief [10:8] MEDM (Master Encoder) Type of Error - MEDM (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit EN:3;              /**< \brief [18:16] Enable Signal Type of Error - EN (rw) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit BCU:2;             /**< \brief [25:24] BCU Type of Error - BCU (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SBCU_FEGEN_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_SBCU_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_NUMBER:8;      /**< \brief [15:8] Module Number Value - MOD_NUMBER (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SBCU_ID_Bits;

/** \brief Arbiter Priority Register High */
typedef struct _Ifx_SBCU_PRIOH_Bits
{
    Ifx_UReg_32Bit CPU2:4;            /**< \brief [3:0] CPU2 Priority - CPU2 (rw) */
    Ifx_UReg_32Bit CPU3:4;            /**< \brief [7:4] CPU3 Priority - CPU3 (rw) */
    Ifx_UReg_32Bit CPU4:4;            /**< \brief [11:8] CPU4 Priority - CPU4 (rw) */
    Ifx_UReg_32Bit CPU5:4;            /**< \brief [15:12] CPU5 Priority - CPU5 (rw) */
    Ifx_UReg_32Bit HSMRMI:4;          /**< \brief [19:16] HSMRMI Priority - HSMRMI (rw) */
    Ifx_UReg_32Bit HSMCMI:4;          /**< \brief [23:20] HSMCMI Priority - HSMCMI (rw) */
    Ifx_UReg_32Bit RESERVED14:4;      /**< \brief [27:24] \internal Reserved */
    Ifx_UReg_32Bit RESERVED15:4;      /**< \brief [31:28] \internal Reserved */
} Ifx_SBCU_PRIOH_Bits;

/** \brief Arbiter Priority Register Low */
typedef struct _Ifx_SBCU_PRIOL_Bits
{
    Ifx_UReg_32Bit SFI_S2F:4;         /**< \brief [3:0] SRI 2 FPI Bridge (SFI) Priority (DMA / Ceberus) - SFI_S2F (rw) */
    Ifx_UReg_32Bit RESERVED1:4;       /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit SDMMC:4;           /**< \brief [11:8] SDMMC Priority - SDMMC (rw) */
    Ifx_UReg_32Bit HSSL0:4;           /**< \brief [15:12] HSSL0 Priority - HSSL0 (rw) */
    Ifx_UReg_32Bit HSSL1:4;           /**< \brief [19:16] HSSL1 Priority - HSSL1 (rw) */
    Ifx_UReg_32Bit RESERVED5:4;       /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit CPU0:4;            /**< \brief [27:24] CPU0 Priority - CPU0 (rw) */
    Ifx_UReg_32Bit CPU1:4;            /**< \brief [31:28] CPU1 Priority - CPU1 (rw) */
} Ifx_SBCU_PRIOL_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_sbcu_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_ACCEN1;

/** \brief SBCU EDC Alarm Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ALCLR_Bits B;            /**< \brief Bitfield access */
} Ifx_SBCU_ALCLR;

/** \brief SBCU EDC Alarm Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ALCTRL_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_ALCTRL;

/** \brief SBCU EDC Alarm Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ALSTAT0_Bits B;          /**< \brief Bitfield access */
} Ifx_SBCU_ALSTAT0;

/** \brief SBCU EDC Alarm Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ALSTAT1_Bits B;          /**< \brief Bitfield access */
} Ifx_SBCU_ALSTAT1;

/** \brief SBCU EDC Alarm Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ALSTAT2_Bits B;          /**< \brief Bitfield access */
} Ifx_SBCU_ALSTAT2;

/** \brief SBCU EDC Alarm Status Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ALSTAT3_Bits B;          /**< \brief Bitfield access */
} Ifx_SBCU_ALSTAT3;

/** \brief SBCU Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_CON_Bits B;              /**< \brief Bitfield access */
} Ifx_SBCU_CON;

/** \brief SBCU Debug Address 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBADR1_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_DBADR1;

/** \brief SBCU Debug Address 2 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBADR2_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_DBADR2;

/** \brief SBCU Debug Trapped Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBADRT_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_DBADRT;

/** \brief SBCU Debug Bus Operation Signals Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBBOS_Bits B;            /**< \brief Bitfield access */
} Ifx_SBCU_DBBOS;

/** \brief SBCU Debug Trapped Bus Operation Signals Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBBOST_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_DBBOST;

/** \brief SBCU Debug Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBCNTL_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_DBCNTL;

/** \brief SBCU Debug Data Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBDAT_Bits B;            /**< \brief Bitfield access */
} Ifx_SBCU_DBDAT;

/** \brief SBCU Debug Trapped Master Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBGNTT_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_DBGNTT;

/** \brief SBCU Debug Grant Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_DBGRNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SBCU_DBGRNT;

/** \brief SBCU Error Address Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_EADD_Bits B;             /**< \brief Bitfield access */
} Ifx_SBCU_EADD;

/** \brief SBCU Error Control Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ECON_Bits B;             /**< \brief Bitfield access */
} Ifx_SBCU_ECON;

/** \brief SBCU Error Data Capture Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_EDAT_Bits B;             /**< \brief Bitfield access */
} Ifx_SBCU_EDAT;

/** \brief FPI Error Generation Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_FEGEN_Bits B;            /**< \brief Bitfield access */
} Ifx_SBCU_FEGEN;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_SBCU_ID;

/** \brief Arbiter Priority Register High   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_PRIOH_Bits B;            /**< \brief Bitfield access */
} Ifx_SBCU_PRIOH;

/** \brief Arbiter Priority Register Low   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SBCU_PRIOL_Bits B;            /**< \brief Bitfield access */
} Ifx_SBCU_PRIOL;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Sbcu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief SBCU object */
typedef volatile struct _Ifx_SBCU
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_SBCU_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_SBCU_CON                        CON;                    /**< \brief 10, SBCU Control Register*/
       Ifx_SBCU_PRIOH                      PRIOH;                  /**< \brief 14, Arbiter Priority Register High*/
       Ifx_SBCU_PRIOL                      PRIOL;                  /**< \brief 18, Arbiter Priority Register Low*/
       Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, \internal Reserved */
       Ifx_SBCU_ECON                       ECON;                   /**< \brief 20, SBCU Error Control Capture Register*/
       Ifx_SBCU_EADD                       EADD;                   /**< \brief 24, SBCU Error Address Capture Register*/
       Ifx_SBCU_EDAT                       EDAT;                   /**< \brief 28, SBCU Error Data Capture Register*/
       Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, \internal Reserved */
       Ifx_SBCU_DBCNTL                     DBCNTL;                 /**< \brief 30, SBCU Debug Control Register*/
       Ifx_SBCU_DBGRNT                     DBGRNT;                 /**< \brief 34, SBCU Debug Grant Mask Register*/
       Ifx_SBCU_DBADR1                     DBADR1;                 /**< \brief 38, SBCU Debug Address 1 Register*/
       Ifx_SBCU_DBADR2                     DBADR2;                 /**< \brief 3C, SBCU Debug Address 2 Register*/
       Ifx_SBCU_DBBOS                      DBBOS;                  /**< \brief 40, SBCU Debug Bus Operation Signals Register*/
       Ifx_SBCU_DBGNTT                     DBGNTT;                 /**< \brief 44, SBCU Debug Trapped Master Register*/
       Ifx_SBCU_DBADRT                     DBADRT;                 /**< \brief 48, SBCU Debug Trapped Address Register*/
       Ifx_SBCU_DBBOST                     DBBOST;                 /**< \brief 4C, SBCU Debug Trapped Bus Operation Signals Register*/
       Ifx_SBCU_DBDAT                      DBDAT;                  /**< \brief 50, SBCU Debug Data Status Register*/
       Ifx_UReg_8Bit                       reserved_54[12];        /**< \brief 54, \internal Reserved */
       Ifx_SBCU_ALSTAT0                    ALSTAT0;                /**< \brief 60, SBCU EDC Alarm Status Register 0*/
       Ifx_SBCU_ALSTAT1                    ALSTAT1;                /**< \brief 64, SBCU EDC Alarm Status Register 1*/
       Ifx_SBCU_ALSTAT2                    ALSTAT2;                /**< \brief 68, SBCU EDC Alarm Status Register 2*/
       Ifx_SBCU_ALSTAT3                    ALSTAT3;                /**< \brief 6C, SBCU EDC Alarm Status Register 3*/
       Ifx_SBCU_ALCLR                      ALCLR[4];               /**< \brief 70, SBCU EDC Alarm Clear Register ${x}*/
       Ifx_SBCU_ALCTRL                     ALCTRL;                 /**< \brief 80, SBCU EDC Alarm Control Register*/
       Ifx_SBCU_FEGEN                      FEGEN;                  /**< \brief 84, FPI Error Generation Control Register*/
       Ifx_UReg_8Bit                       reserved_88[112];       /**< \brief 88, \internal Reserved */
       Ifx_SBCU_ACCEN1                     ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_SBCU_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
} Ifx_SBCU;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSBCU_REGDEF_H */
