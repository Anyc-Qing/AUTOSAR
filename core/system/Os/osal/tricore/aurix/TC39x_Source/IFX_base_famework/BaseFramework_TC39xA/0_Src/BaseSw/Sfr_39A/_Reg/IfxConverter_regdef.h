/**
 * \file IfxConverter_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:42 GMT
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
 * \defgroup IfxLld_Converter_Registers ConverterRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Converter_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Converter_Registers
 * 
 * \defgroup IfxLld_Converter_Registers_union Register unions
 * \ingroup IfxLld_Converter_Registers
 * 
 * \defgroup IfxLld_Converter_Registers_struct Memory map
 * \ingroup IfxLld_Converter_Registers
 */
#ifndef IFXCONVERTER_REGDEF_H
#define IFXCONVERTER_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Converter_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_CONVERTER_ACCEN0_Bits
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
} Ifx_CONVERTER_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_CONVERTER_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_CONVERTER_ACCEN1_Bits;

/** \brief Converter Control Block Control Register */
typedef struct _Ifx_CONVERTER_CCCTRL_Bits
{
    Ifx_UReg_32Bit reserved_0:28;     /**< \brief [27:0] \internal Reserved */
    Ifx_UReg_32Bit TC:4;              /**< \brief [31:28] Test Control - TC (rw) */
} Ifx_CONVERTER_CCCTRL_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_CONVERTER_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (r) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CONVERTER_CLC_Bits;

/** \brief Flags Register */
typedef struct _Ifx_CONVERTER_FLAGS_Bits
{
    Ifx_UReg_32Bit SHOR:1;            /**< \brief [0:0] Shift Register Overrun - SHOR (rh) */
    Ifx_UReg_32Bit SHUR:1;            /**< \brief [1:1] Shift Register Underrun - SHUR (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CONVERTER_FLAGS_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_CONVERTER_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number - MOD_NUMBER (r) */
} Ifx_CONVERTER_ID_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_CONVERTER_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CONVERTER_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_CONVERTER_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CONVERTER_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_CONVERTER_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CONVERTER_KRSTCLR_Bits;

/** \brief Maximum Value Register */
typedef struct _Ifx_CONVERTER_MAX_Bits
{
    Ifx_UReg_32Bit MAXVALUE:28;       /**< \brief [27:0] Ramp Generator Maxvalue - MAXVALUE (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CONVERTER_MAX_Bits;

/** \brief Minimum Value Register */
typedef struct _Ifx_CONVERTER_MIN_Bits
{
    Ifx_UReg_32Bit MINVALUE:28;       /**< \brief [27:0] Ramp Generator Minvalue - MINVALUE (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CONVERTER_MIN_Bits;

/** \brief Miscellaneous Control Register */
typedef struct _Ifx_CONVERTER_MISC_Bits
{
    Ifx_UReg_32Bit WAIT:16;           /**< \brief [15:0] Ramp Generator Wait Time - WAIT (rw) */
    Ifx_UReg_32Bit STAY:1;            /**< \brief [16:16] Ramp Generator Operation Control - STAY (rw) */
    Ifx_UReg_32Bit SWGK:5;            /**< \brief [21:17] Sinewave Generator Frequency - SWGK (rw) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_CONVERTER_MISC_Bits;

/** \brief OCDS Control and Status Register */
typedef struct _Ifx_CONVERTER_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CONVERTER_OCS_Bits;

/** \brief Phase Synchronizer Configuration Register */
typedef struct _Ifx_CONVERTER_PHSCFG_Bits
{
    Ifx_UReg_32Bit PHSDIV:4;          /**< \brief [3:0] Phase Synchronizer Divider - PHSDIV (rw) */
    Ifx_UReg_32Bit reserved_4:11;     /**< \brief [14:4] \internal Reserved */
    Ifx_UReg_32Bit PDWC:1;            /**< \brief [15:15] Write Control for Phase Sync. Divider - PDWC (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CONVERTER_PHSCFG_Bits;

/** \brief P/I Regulator Configuration Register */
typedef struct _Ifx_CONVERTER_PICFG_Bits
{
    Ifx_UReg_32Bit PVALUE:8;          /**< \brief [7:0] P-Parameter for the P-I Regulator - PVALUE (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit IVALUE:8;          /**< \brief [23:16] I-Parameter for the P-I Regulator - IVALUE (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CONVERTER_PICFG_Bits;

/** \brief Sinewave Gen. Config. Register, A-Factor */
typedef struct _Ifx_CONVERTER_SGCFGA_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit SWGA:16;           /**< \brief [31:16] Sinewave Generator Amplitude - SWGA (rw) */
} Ifx_CONVERTER_SGCFGA_Bits;

/** \brief Sinewave Gen. Config. Register, K-Factor */
typedef struct _Ifx_CONVERTER_SGCFGK_Bits
{
    Ifx_UReg_32Bit SWGK:32;           /**< \brief [31:0] Sinewave Generator Frequency - SWGK (rw) */
} Ifx_CONVERTER_SGCFGK_Bits;

/** \brief Shift Register */
typedef struct _Ifx_CONVERTER_SHIFT_Bits
{
    Ifx_UReg_32Bit SHPAT:32;          /**< \brief [31:0] Shift Register Pattern - SHPAT (rw) */
} Ifx_CONVERTER_SHIFT_Bits;

/** \brief Slope Configuration Register */
typedef struct _Ifx_CONVERTER_SLOPE_Bits
{
    Ifx_UReg_32Bit SLOPEVALUE:22;     /**< \brief [21:0] Ramp Generator Slope - SLOPEVALUE (rw) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_CONVERTER_SLOPE_Bits;

/** \brief Test Configuration Register */
typedef struct _Ifx_CONVERTER_TESTCFG_Bits
{
    Ifx_UReg_32Bit SINEN:1;           /**< \brief [0:0] Sinewave Generator Enable - SINEN (rw) */
    Ifx_UReg_32Bit SHIFTEN:1;         /**< \brief [1:1] Shift Register Enable - SHIFTEN (rw) */
    Ifx_UReg_32Bit RAMPEN:1;          /**< \brief [2:2] Ramp Generator Enable - RAMPEN (rw) */
    Ifx_UReg_32Bit CTRLEN:1;          /**< \brief [3:3] PI Regulator Enable - CTRLEN (rw) */
    Ifx_UReg_32Bit PPEN:1;            /**< \brief [4:4] Push-Pull Enable - PPEN (rw) */
    Ifx_UReg_32Bit PPDCAP:1;          /**< \brief [5:5] Push-Pull Double Capacitor Select - PPDCAP (rw) */
    Ifx_UReg_32Bit PPPROG:4;          /**< \brief [9:6] Push-Pull Programming - PPPROG (rw) */
    Ifx_UReg_32Bit PPSCC:2;           /**< \brief [11:10] Push-Pull Switched Capacitance Clock Select - PPSCC (rw) */
    Ifx_UReg_32Bit FROMTB:1;          /**< \brief [12:12] PI Regulator Input Select - FROMTB (rw) */
    Ifx_UReg_32Bit ONEAHALF:1;        /**< \brief [13:13] Sigma-Delta Generator Output Format - ONEAHALF (rw) */
    Ifx_UReg_32Bit BLOCKSEL:6;        /**< \brief [19:14] PI Regulator Input Handshake Select - BLOCKSEL (rw) */
    Ifx_UReg_32Bit PPTEST:1;          /**< \brief [20:20] Push-Pull Test - PPTEST (rw) */
    Ifx_UReg_32Bit PPFDN:1;           /**< \brief [21:21] Push-Pull Force Down - PPFDN (rw) */
    Ifx_UReg_32Bit PPFUP:1;           /**< \brief [22:22] Push-Pull Force Up - PPFUP (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit CLKASYN:1;         /**< \brief [24:24] Clock Synchronizer: Unsynchronized Clock Generation - CLKASYN (rw) */
    Ifx_UReg_32Bit CLKDEL:3;          /**< \brief [27:25] Clock Synchronizer: Analog Clock Synchronization Delay - CLKDEL (rw) */
    Ifx_UReg_32Bit CLKDIV:3;          /**< \brief [30:28] Clock Synchronizer: Modulator Clock Period - CLKDIV (rw) */
    Ifx_UReg_32Bit CLKEN:1;           /**< \brief [31:31] Clock Synchronizer: Clock Enable - CLKEN (rw) */
} Ifx_CONVERTER_TESTCFG_Bits;

/** \brief Voltage Regulator Configuration Register */
typedef struct _Ifx_CONVERTER_VRCFG_Bits
{
    Ifx_UReg_32Bit BDON:2;            /**< \brief [1:0] Bias Distributor and Supply Monitoring Enable - BDON (rw) */
    Ifx_UReg_32Bit SUPLEV:2;          /**< \brief [3:2] Supply Voltage Level - SUPLEV (rw) */
    Ifx_UReg_32Bit ITRIM:3;           /**< \brief [6:4] Trim Value for Reference Current - ITRIM (rw) */
    Ifx_UReg_32Bit BGMON:1;           /**< \brief [7:7] Enable Bandgap Monitoring - BGMON (rw) */
    Ifx_UReg_32Bit IREFSEL:1;         /**< \brief [8:8] Bandgap Select for IREF Current - IREFSEL (rw) */
    Ifx_UReg_32Bit VREFSEL:1;         /**< \brief [9:9] Bandgap Select for VREF Current - VREFSEL (rw) */
    Ifx_UReg_32Bit reserved_10:5;     /**< \brief [14:10] \internal Reserved */
    Ifx_UReg_32Bit VRWC:1;            /**< \brief [15:15] Write Control for Voltage Regulator Control - VRWC (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CONVERTER_VRCFG_Bits;

/** \brief Voltage Regulator Status Register */
typedef struct _Ifx_CONVERTER_VRSTAT_Bits
{
    Ifx_UReg_32Bit BGOK:1;            /**< \brief [0:0] Bandgap Monitoring Status Flag - BGOK (rh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CONVERTER_VRSTAT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_converter_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_ACCEN0_Bits B;      /**< \brief Bitfield access */
} Ifx_CONVERTER_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_ACCEN1_Bits B;      /**< \brief Bitfield access */
} Ifx_CONVERTER_ACCEN1;

/** \brief Converter Control Block Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_CCCTRL_Bits B;      /**< \brief Bitfield access */
} Ifx_CONVERTER_CCCTRL;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_CLC_Bits B;         /**< \brief Bitfield access */
} Ifx_CONVERTER_CLC;

/** \brief Flags Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_FLAGS_Bits B;       /**< \brief Bitfield access */
} Ifx_CONVERTER_FLAGS;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_ID_Bits B;          /**< \brief Bitfield access */
} Ifx_CONVERTER_ID;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_KRST0_Bits B;       /**< \brief Bitfield access */
} Ifx_CONVERTER_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_KRST1_Bits B;       /**< \brief Bitfield access */
} Ifx_CONVERTER_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_KRSTCLR_Bits B;     /**< \brief Bitfield access */
} Ifx_CONVERTER_KRSTCLR;

/** \brief Maximum Value Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_MAX_Bits B;         /**< \brief Bitfield access */
} Ifx_CONVERTER_MAX;

/** \brief Minimum Value Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_MIN_Bits B;         /**< \brief Bitfield access */
} Ifx_CONVERTER_MIN;

/** \brief Miscellaneous Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_MISC_Bits B;        /**< \brief Bitfield access */
} Ifx_CONVERTER_MISC;

/** \brief OCDS Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_OCS_Bits B;         /**< \brief Bitfield access */
} Ifx_CONVERTER_OCS;

/** \brief Phase Synchronizer Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_PHSCFG_Bits B;      /**< \brief Bitfield access */
} Ifx_CONVERTER_PHSCFG;

/** \brief P/I Regulator Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_PICFG_Bits B;       /**< \brief Bitfield access */
} Ifx_CONVERTER_PICFG;

/** \brief Sinewave Gen. Config. Register, A-Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_SGCFGA_Bits B;      /**< \brief Bitfield access */
} Ifx_CONVERTER_SGCFGA;

/** \brief Sinewave Gen. Config. Register, K-Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_SGCFGK_Bits B;      /**< \brief Bitfield access */
} Ifx_CONVERTER_SGCFGK;

/** \brief Shift Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_SHIFT_Bits B;       /**< \brief Bitfield access */
} Ifx_CONVERTER_SHIFT;

/** \brief Slope Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_SLOPE_Bits B;       /**< \brief Bitfield access */
} Ifx_CONVERTER_SLOPE;

/** \brief Test Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_TESTCFG_Bits B;     /**< \brief Bitfield access */
} Ifx_CONVERTER_TESTCFG;

/** \brief Voltage Regulator Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_VRCFG_Bits B;       /**< \brief Bitfield access */
} Ifx_CONVERTER_VRCFG;

/** \brief Voltage Regulator Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CONVERTER_VRSTAT_Bits B;      /**< \brief Bitfield access */
} Ifx_CONVERTER_VRSTAT;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Converter_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief CONVERTER object */
typedef volatile struct _Ifx_CONVERTER
{
       Ifx_CONVERTER_CLC                   CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_CONVERTER_ID                    ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[28];         /**< \brief C, \internal Reserved */
       Ifx_CONVERTER_OCS                   OCS;                    /**< \brief 28, OCDS Control and Status Register*/
       Ifx_CONVERTER_KRSTCLR               KRSTCLR;                /**< \brief 2C, Kernel Reset Status Clear Register*/
       Ifx_CONVERTER_KRST1                 KRST1;                  /**< \brief 30, Kernel Reset Register 1*/
       Ifx_CONVERTER_KRST0                 KRST0;                  /**< \brief 34, Kernel Reset Register 0*/
       Ifx_CONVERTER_ACCEN1                ACCEN1;                 /**< \brief 38, Access Enable Register 1*/
       Ifx_CONVERTER_ACCEN0                ACCEN0;                 /**< \brief 3C, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_40[60];        /**< \brief 40, \internal Reserved */
       Ifx_CONVERTER_CCCTRL                CCCTRL;                 /**< \brief 7C, Converter Control Block Control Register*/
       Ifx_CONVERTER_PHSCFG                PHSCFG;                 /**< \brief 80, Phase Synchronizer Configuration Register*/
       Ifx_UReg_8Bit                       reserved_84[28];        /**< \brief 84, \internal Reserved */
       Ifx_CONVERTER_VRCFG                 VRCFG;                  /**< \brief A0, Voltage Regulator Configuration Register*/
       Ifx_CONVERTER_VRSTAT                VRSTAT;                 /**< \brief A4, Voltage Regulator Status Register*/
       Ifx_UReg_8Bit                       reserved_A8[24];        /**< \brief A8, \internal Reserved */
       Ifx_CONVERTER_PICFG                 PICFG;                  /**< \brief C0, P/I Regulator Configuration Register*/
       Ifx_CONVERTER_SGCFGA                SGCFGA;                 /**< \brief C4, Sinewave Gen. Config. Register, A-Factor*/
       Ifx_CONVERTER_SGCFGK                SGCFGK;                 /**< \brief C8, Sinewave Gen. Config. Register, K-Factor*/
       Ifx_CONVERTER_SLOPE                 SLOPE;                  /**< \brief CC, Slope Configuration Register*/
       Ifx_CONVERTER_MIN                   MIN;                    /**< \brief D0, Minimum Value Register*/
       Ifx_CONVERTER_MAX                   MAX;                    /**< \brief D4, Maximum Value Register*/
       Ifx_CONVERTER_SHIFT                 SHIFT;                  /**< \brief D8, Shift Register*/
       Ifx_CONVERTER_TESTCFG               TESTCFG;                /**< \brief DC, Test Configuration Register*/
       Ifx_CONVERTER_FLAGS                 FLAGS;                  /**< \brief E0, Flags Register*/
       Ifx_CONVERTER_MISC                  MISC;                   /**< \brief E4, Miscellaneous Control Register*/
       Ifx_UReg_8Bit                       reserved_E8[65303];     /**< \brief E8, \internal Reserved */
} Ifx_CONVERTER;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCONVERTER_REGDEF_H */
