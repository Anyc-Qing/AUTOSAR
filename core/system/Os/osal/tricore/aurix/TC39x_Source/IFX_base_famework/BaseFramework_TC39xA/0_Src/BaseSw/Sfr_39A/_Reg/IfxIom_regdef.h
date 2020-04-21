/**
 * \file IfxIom_regdef.h
 * \brief
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2016-01-22 16:12:49 GMT
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
 * \defgroup IfxLld_Iom_Registers IomRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Iom_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Iom_Registers
 * 
 * \defgroup IfxLld_Iom_Registers_union Register unions
 * \ingroup IfxLld_Iom_Registers
 * 
 * \defgroup IfxLld_Iom_Registers_struct Memory map
 * \ingroup IfxLld_Iom_Registers
 */
#ifndef IFXIOM_REGDEF_H
#define IFXIOM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Iom_Bitfields
 * \{  */
/** \brief IOM Access Enable Register 0 */
typedef struct _Ifx_IOM_ACCEN0_Bits
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
} Ifx_IOM_ACCEN0_Bits;

/** \brief IOM Access Enable Register 1 */
typedef struct _Ifx_IOM_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_IOM_ACCEN1_Bits;

/** \brief IOM Clock Control Register */
typedef struct _Ifx_IOM_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit RMC:8;             /**< \brief [15:8] 8-bit Clock Divider Value in RUN Mode - RMC (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_IOM_CLC_Bits;

/** \brief IOM Event Combiner Module Counter Configuration Register */
typedef struct _Ifx_IOM_ECMCCFG_Bits
{
    Ifx_UReg_32Bit SELC0:4;           /**< \brief [3:0] Event Channel Select - SELC0,SELC1,SELC2,SELC3 (rw) */
    Ifx_UReg_32Bit THRC0:4;           /**< \brief [7:4] Channel Event Counter Threshold - THRC0,THCR1,THCR2,THCR3 (rw) */
    Ifx_UReg_32Bit SELC1:4;           /**< \brief [11:8] Event Channel Select - SELC0,SELC1,SELC2,SELC3 (rw) */
    Ifx_UReg_32Bit THCR1:4;           /**< \brief [15:12] Channel Event Counter Threshold - THRC0,THCR1,THCR2,THCR3 (rw) */
    Ifx_UReg_32Bit SELC2:4;           /**< \brief [19:16] Event Channel Select - SELC0,SELC1,SELC2,SELC3 (rw) */
    Ifx_UReg_32Bit THCR2:4;           /**< \brief [23:20] Channel Event Counter Threshold - THRC0,THCR1,THCR2,THCR3 (rw) */
    Ifx_UReg_32Bit SELC3:4;           /**< \brief [27:24] Event Channel Select - SELC0,SELC1,SELC2,SELC3 (rw) */
    Ifx_UReg_32Bit THCR3:4;           /**< \brief [31:28] Channel Event Counter Threshold - THRC0,THCR1,THCR2,THCR3 (rw) */
} Ifx_IOM_ECMCCFG_Bits;

/** \brief IOM Event Combiner Module Event Trigger History Register 0 */
typedef struct _Ifx_IOM_ECMETH0_Bits
{
    Ifx_UReg_32Bit ETA0:1;            /**< \brief [0:0] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA1:1;            /**< \brief [1:1] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA2:1;            /**< \brief [2:2] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA3:1;            /**< \brief [3:3] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA4:1;            /**< \brief [4:4] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA5:1;            /**< \brief [5:5] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA6:1;            /**< \brief [6:6] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA7:1;            /**< \brief [7:7] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA8:1;            /**< \brief [8:8] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA9:1;            /**< \brief [9:9] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA10:1;           /**< \brief [10:10] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA11:1;           /**< \brief [11:11] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA12:1;           /**< \brief [12:12] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA13:1;           /**< \brief [13:13] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA14:1;           /**< \brief [14:14] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETA15:1;           /**< \brief [15:15] LAM 0-15 Eve${n}t Trigger Activity (last) - ETA${n} (rwh) */
    Ifx_UReg_32Bit ETB0:1;            /**< \brief [16:16] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB1:1;            /**< \brief [17:17] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB2:1;            /**< \brief [18:18] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB3:1;            /**< \brief [19:19] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB4:1;            /**< \brief [20:20] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB5:1;            /**< \brief [21:21] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB6:1;            /**< \brief [22:22] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB7:1;            /**< \brief [23:23] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB8:1;            /**< \brief [24:24] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB9:1;            /**< \brief [25:25] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB10:1;           /**< \brief [26:26] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB11:1;           /**< \brief [27:27] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB12:1;           /**< \brief [28:28] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB13:1;           /**< \brief [29:29] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB14:1;           /**< \brief [30:30] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
    Ifx_UReg_32Bit ETB15:1;           /**< \brief [31:31] LAM 0-15 Eve${n}t Trigger Activity (previous ETA0-15) - ETB${n} (rwh) */
} Ifx_IOM_ECMETH0_Bits;

/** \brief IOM Event Combiner Module Event Trigger History Register 1 */
typedef struct _Ifx_IOM_ECMETH1_Bits
{
    Ifx_UReg_32Bit ETC0:1;            /**< \brief [0:0] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC1:1;            /**< \brief [1:1] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC2:1;            /**< \brief [2:2] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC3:1;            /**< \brief [3:3] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC4:1;            /**< \brief [4:4] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC5:1;            /**< \brief [5:5] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC6:1;            /**< \brief [6:6] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC7:1;            /**< \brief [7:7] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC8:1;            /**< \brief [8:8] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC9:1;            /**< \brief [9:9] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC10:1;           /**< \brief [10:10] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC11:1;           /**< \brief [11:11] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC12:1;           /**< \brief [12:12] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC13:1;           /**< \brief [13:13] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC14:1;           /**< \brief [14:14] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETC15:1;           /**< \brief [15:15] LAM 0-15 Eve${n}t Trigger Activity (previous ETB0-15) - ETC${n} (rwh) */
    Ifx_UReg_32Bit ETD0:1;            /**< \brief [16:16] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD1:1;            /**< \brief [17:17] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD2:1;            /**< \brief [18:18] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD3:1;            /**< \brief [19:19] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD4:1;            /**< \brief [20:20] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD5:1;            /**< \brief [21:21] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD6:1;            /**< \brief [22:22] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD7:1;            /**< \brief [23:23] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD8:1;            /**< \brief [24:24] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD9:1;            /**< \brief [25:25] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD10:1;           /**< \brief [26:26] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD11:1;           /**< \brief [27:27] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD12:1;           /**< \brief [28:28] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD13:1;           /**< \brief [29:29] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD14:1;           /**< \brief [30:30] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
    Ifx_UReg_32Bit ETD15:1;           /**< \brief [31:31] LAM 0-15 Eve${n}t Trigger Activity (previous ETC0-15) - ETD${n} (rwh) */
} Ifx_IOM_ECMETH1_Bits;

/** \brief IOM Event Combiner Module Global Event Selection Register */
typedef struct _Ifx_IOM_ECMSELR_Bits
{
    Ifx_UReg_32Bit CES0:1;            /**< \brief [0:0] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES1:1;            /**< \brief [1:1] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES2:1;            /**< \brief [2:2] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES3:1;            /**< \brief [3:3] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES4:1;            /**< \brief [4:4] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES5:1;            /**< \brief [5:5] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES6:1;            /**< \brief [6:6] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES7:1;            /**< \brief [7:7] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES8:1;            /**< \brief [8:8] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES9:1;            /**< \brief [9:9] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES10:1;           /**< \brief [10:10] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES11:1;           /**< \brief [11:11] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES12:1;           /**< \brief [12:12] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES13:1;           /**< \brief [13:13] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES14:1;           /**< \brief [14:14] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CES15:1;           /**< \brief [15:15] Eve${n}t Combiner Selection - CES${n} (rw) */
    Ifx_UReg_32Bit CTS0:1;            /**< \brief [16:16] Accumulated (Cou${n}ted) Event Combiner Selection - CTS${n} (rw) */
    Ifx_UReg_32Bit CTS1:1;            /**< \brief [17:17] Accumulated (Cou${n}ted) Event Combiner Selection - CTS${n} (rw) */
    Ifx_UReg_32Bit CTS2:1;            /**< \brief [18:18] Accumulated (Cou${n}ted) Event Combiner Selection - CTS${n} (rw) */
    Ifx_UReg_32Bit CTS3:1;            /**< \brief [19:19] Accumulated (Cou${n}ted) Event Combiner Selection - CTS${n} (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_IOM_ECMSELR_Bits;

/** \brief IOM Filter and Prescaler Cell Control Register${k} */
typedef struct _Ifx_IOM_FPCCTR_Bits
{
    Ifx_UReg_32Bit CMP:16;            /**< \brief [15:0] Threshold Value of Filter & Prescaler Cell k - CMP (rw) */
    Ifx_UReg_32Bit MOD:3;             /**< \brief [18:16] Operation Mode Selection for Filter & Prescaler Cell k - MOD (rw) */
    Ifx_UReg_32Bit ISM:2;             /**< \brief [20:19] Monitor Input Signal Selection for Filter & Prescaler Cell k - ISM (rw) */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit RTG:1;             /**< \brief [22:22] Reset Timer behaviour for Filter & Prescaler Cell k on Glitch - RTG (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit ISR:3;             /**< \brief [26:24] Reference Input Signal Selection for Filter & Prescaler Cell k - ISR (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_IOM_FPCCTR_Bits;

/** \brief IOM Filter and Prescaler Cells Rising & Falling Edge Status Register */
typedef struct _Ifx_IOM_FPCESR_Bits
{
    Ifx_UReg_32Bit FEG0:1;            /**< \brief [0:0] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG1:1;            /**< \brief [1:1] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG2:1;            /**< \brief [2:2] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG3:1;            /**< \brief [3:3] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG4:1;            /**< \brief [4:4] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG5:1;            /**< \brief [5:5] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG6:1;            /**< \brief [6:6] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG7:1;            /**< \brief [7:7] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG8:1;            /**< \brief [8:8] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG9:1;            /**< \brief [9:9] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG10:1;           /**< \brief [10:10] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG11:1;           /**< \brief [11:11] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG12:1;           /**< \brief [12:12] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG13:1;           /**< \brief [13:13] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG14:1;           /**< \brief [14:14] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit FEG15:1;           /**< \brief [15:15] Falling Edge Glitch Flag for FPC${k} - FEG${k} (rwh) */
    Ifx_UReg_32Bit REG0:1;            /**< \brief [16:16] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG1:1;            /**< \brief [17:17] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG2:1;            /**< \brief [18:18] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG3:1;            /**< \brief [19:19] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG4:1;            /**< \brief [20:20] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG5:1;            /**< \brief [21:21] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG6:1;            /**< \brief [22:22] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG7:1;            /**< \brief [23:23] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG8:1;            /**< \brief [24:24] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG9:1;            /**< \brief [25:25] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG10:1;           /**< \brief [26:26] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG11:1;           /**< \brief [27:27] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG12:1;           /**< \brief [28:28] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG13:1;           /**< \brief [29:29] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG14:1;           /**< \brief [30:30] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
    Ifx_UReg_32Bit REG15:1;           /**< \brief [31:31] Rising Edge Glitch Flag for FPC${k} - REG${k} (rwh) */
} Ifx_IOM_FPCESR_Bits;

/** \brief IOM Filter and Prescaler Cell ${k}Timer Registerk */
typedef struct _Ifx_IOM_FPCTIM_Bits
{
    Ifx_UReg_32Bit TIM:16;            /**< \brief [15:0] Timer Value of Filter and Prescaler Cell k - TIM (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_IOM_FPCTIM_Bits;

/** \brief IOM GTM Input EXOR Combiner Selection Register */
typedef struct _Ifx_IOM_GTMEXR_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] GTM input 0 selection for EXOR combiner - EN0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] GTM input 1 selection for EXOR combiner - EN1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] GTM input 2 selection for EXOR combiner - EN2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] GTM input 3 selection for EXOR combiner - EN3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] GTM input 4 selection for EXOR combiner - EN4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] GTM input 5 selection for EXOR combiner - EN5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] GTM input 6 selection for EXOR combiner - EN6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] GTM input 7 selection for EXOR combiner - EN7 (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_IOM_GTMEXR_Bits;

/** \brief IOM Identification Register */
typedef struct _Ifx_IOM_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Number Value - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUM:16;        /**< \brief [31:16] Module Number Value - MOD_NUM (r) */
} Ifx_IOM_ID_Bits;

/** \brief IOM Kernel Reset Register 0 */
typedef struct _Ifx_IOM_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_IOM_KRST0_Bits;

/** \brief IOM Kernel Reset Register 1 */
typedef struct _Ifx_IOM_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_IOM_KRST1_Bits;

/** \brief IOM Kernel Reset Status Clear Register */
typedef struct _Ifx_IOM_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_IOM_KRSTCLR_Bits;

/** \brief IOM Logic Analyzer Module Configuration Register${m} */
typedef struct _Ifx_IOM_LAMCFG_Bits
{
    Ifx_UReg_32Bit IVR:1;             /**< \brief [0:0] Invert Reference LAM block m - IVR (rw) */
    Ifx_UReg_32Bit IVM:1;             /**< \brief [1:1] Invert Monitor LAM block m - IVM (rw) */
    Ifx_UReg_32Bit MOS:1;             /**< \brief [2:2] Monitor Source Select LAM block m - MOS (rw) */
    Ifx_UReg_32Bit RMS:1;             /**< \brief [3:3] Runmode Select LAM block m - RMS (rw) */
    Ifx_UReg_32Bit EWS:1;             /**< \brief [4:4] Event Window Select LAM block m - EWS (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit EDS:4;             /**< \brief [11:8] Event Window Active Edge Selection LAM block m - EDS (rw) */
    Ifx_UReg_32Bit IVW:1;             /**< \brief [12:12] Invert Event Window LAM block m - IVW (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit MCS:4;             /**< \brief [19:16] Monitor Input Signal Selection LAM block m - MCS (rw) */
    Ifx_UReg_32Bit RCS:4;             /**< \brief [23:20] Reference Input Signal Selection LAM block m - RCS (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_IOM_LAMCFG_Bits;

/** \brief IOM Logic Analyzer Module Event Window Count Status Register${m} */
typedef struct _Ifx_IOM_LAMEWC_Bits
{
    Ifx_UReg_32Bit CNT:24;            /**< \brief [23:0] Event Window Count Value LAM block m - CNT (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_IOM_LAMEWC_Bits;

/** \brief IOM Logic Analyzer Module Event Window Configuration Register${m} */
typedef struct _Ifx_IOM_LAMEWS_Bits
{
    Ifx_UReg_32Bit THR:24;            /**< \brief [23:0] Event Window Count Threshold - THR (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_IOM_LAMEWS_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_iom_union
 * \{   */
/** \brief IOM Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_ACCEN0;

/** \brief IOM Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_ACCEN1;

/** \brief IOM Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_IOM_CLC;

/** \brief IOM Event Combiner Module Counter Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_ECMCCFG_Bits B;           /**< \brief Bitfield access */
} Ifx_IOM_ECMCCFG;

/** \brief IOM Event Combiner Module Event Trigger History Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_ECMETH0_Bits B;           /**< \brief Bitfield access */
} Ifx_IOM_ECMETH0;

/** \brief IOM Event Combiner Module Event Trigger History Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_ECMETH1_Bits B;           /**< \brief Bitfield access */
} Ifx_IOM_ECMETH1;

/** \brief IOM Event Combiner Module Global Event Selection Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_ECMSELR_Bits B;           /**< \brief Bitfield access */
} Ifx_IOM_ECMSELR;

/** \brief IOM Filter and Prescaler Cell Control Register${k}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_FPCCTR_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_FPCCTR;

/** \brief IOM Filter and Prescaler Cells Rising & Falling Edge Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_FPCESR_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_FPCESR;

/** \brief IOM Filter and Prescaler Cell ${k}Timer Registerk   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_FPCTIM_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_FPCTIM;

/** \brief IOM GTM Input EXOR Combiner Selection Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_GTMEXR_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_GTMEXR;

/** \brief IOM Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_IOM_ID;

/** \brief IOM Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_IOM_KRST0;

/** \brief IOM Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_IOM_KRST1;

/** \brief IOM Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_IOM_KRSTCLR;

/** \brief IOM Logic Analyzer Module Configuration Register${m}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_LAMCFG_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_LAMCFG;

/** \brief IOM Logic Analyzer Module Event Window Count Status Register${m}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_LAMEWC_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_LAMEWC;

/** \brief IOM Logic Analyzer Module Event Window Configuration Register${m}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_IOM_LAMEWS_Bits B;            /**< \brief Bitfield access */
} Ifx_IOM_LAMEWS;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Iom_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief IOM object */
typedef volatile struct _Ifx_IOM
{
       Ifx_IOM_CLC                         CLC;                    /**< \brief 0, IOM Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_IOM_ID                          ID;                     /**< \brief 8, IOM Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[16];         /**< \brief C, \internal Reserved */
       Ifx_IOM_KRSTCLR                     KRSTCLR;                /**< \brief 1C, IOM Kernel Reset Status Clear Register*/
       Ifx_IOM_KRST1                       KRST1;                  /**< \brief 20, IOM Kernel Reset Register 1*/
       Ifx_IOM_KRST0                       KRST0;                  /**< \brief 24, IOM Kernel Reset Register 0*/
       Ifx_IOM_ACCEN1                      ACCEN1;                 /**< \brief 28, IOM Access Enable Register 1*/
       Ifx_IOM_ACCEN0                      ACCEN0;                 /**< \brief 2C, IOM Access Enable Register 0*/
       Ifx_IOM_ECMCCFG                     ECMCCFG;                /**< \brief 30, IOM Event Combiner Module Counter Configuration Register*/
       Ifx_IOM_ECMSELR                     ECMSELR;                /**< \brief 34, IOM Event Combiner Module Global Event Selection Register*/
       Ifx_IOM_ECMETH0                     ECMETH0;                /**< \brief 38, IOM Event Combiner Module Event Trigger History Register 0*/
       Ifx_IOM_ECMETH1                     ECMETH1;                /**< \brief 3C, IOM Event Combiner Module Event Trigger History Register 1*/
       Ifx_IOM_GTMEXR                      GTMEXR;                 /**< \brief 40, IOM GTM Input EXOR Combiner Selection Register*/
       Ifx_UReg_8Bit                       reserved_44[52];        /**< \brief 44, \internal Reserved */
       Ifx_IOM_FPCESR                      FPCESR;                 /**< \brief 78, IOM Filter and Prescaler Cells Rising & Falling Edge Status Register*/
       Ifx_UReg_8Bit                       reserved_7C[4];         /**< \brief 7C, \internal Reserved */
       Ifx_IOM_FPCCTR                      FPCCTR[16];             /**< \brief 80, IOM Filter and Prescaler Cell Control Register${k}*/
       Ifx_IOM_FPCTIM                      FPCTIM[16];             /**< \brief C0, IOM Filter and Prescaler Cell ${k}Timer Registerk*/
       Ifx_IOM_LAMEWC                      LAMEWC[16];             /**< \brief 100, IOM Logic Analyzer Module Event Window Count Status Register${m}*/
       Ifx_UReg_8Bit                       reserved_140[64];       /**< \brief 140, \internal Reserved */
       Ifx_IOM_LAMCFG                      LAMCFG[16];             /**< \brief 180, IOM Logic Analyzer Module Configuration Register${m}*/
       Ifx_IOM_LAMEWS                      LAMEWS[16];             /**< \brief 1C0, IOM Logic Analyzer Module Event Window Configuration Register${m}*/
} Ifx_IOM;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXIOM_REGDEF_H */
