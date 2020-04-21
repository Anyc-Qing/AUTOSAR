/**
 * \file IfxEmem_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:40 GMT
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
 * \defgroup IfxLld_Emem_Registers EmemRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Emem_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Emem_Registers
 * 
 * \defgroup IfxLld_Emem_Registers_union Register unions
 * \ingroup IfxLld_Emem_Registers
 * 
 * \defgroup IfxLld_Emem_Registers_struct Memory map
 * \ingroup IfxLld_Emem_Registers
 */
#ifndef IFXEMEM_REGDEF_H
#define IFXEMEM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Emem_Bitfields
 * \{  */
/** \brief Clock Control Register */
typedef struct _Ifx_EMEM_CLC_Bits
{
    Ifx_Strict_32Bit DISR:1;            /**< \brief [0:0] Disable Request Bit - DISR (rw) */
    Ifx_Strict_32Bit DISS:1;            /**< \brief [1:1] Disable Status Bit - DISS (rh) */
    Ifx_Strict_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_EMEM_CLC_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_EMEM_ID_Bits
{
    Ifx_Strict_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_Strict_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_Strict_32Bit MOD_NUM:16;        /**< \brief [31:16] Module Number - MOD_NUM (r) */
} Ifx_EMEM_ID_Bits;

/** \brief Standby RAM Control Register */
typedef struct _Ifx_EMEM_SBRCTR_Bits
{
    Ifx_Strict_32Bit STBLOCK:1;         /**< \brief [0:0] Standby Lock Flag - STBLOCK (rh) */
    Ifx_Strict_32Bit STBULK:3;          /**< \brief [3:1] Unlock Standby Lock Flag - STBULK (w) */
    Ifx_Strict_32Bit STBSLK:4;          /**< \brief [7:4] Set Standby Lock Flag - STBSLK (w) */
    Ifx_Strict_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_Strict_32Bit STBPON:1;          /**< \brief [16:16] Standby Power On - STBPON (rh) */
    Ifx_Strict_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_EMEM_SBRCTR_Bits;

/** \brief Tile Control Common Memory Register */
typedef struct _Ifx_EMEM_TILECC_Bits
{
    Ifx_Strict_32Bit TCM0:1;            /**< \brief [0:0] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM1:1;            /**< \brief [1:1] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM2:1;            /**< \brief [2:2] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM3:1;            /**< \brief [3:3] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM4:1;            /**< \brief [4:4] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM5:1;            /**< \brief [5:5] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM6:1;            /**< \brief [6:6] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM7:1;            /**< \brief [7:7] Common Memory TCM Tile ${x} Control - TCM${x} (rw) */
    Ifx_Strict_32Bit XCM0:1;            /**< \brief [8:8] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit XCM1:1;            /**< \brief [9:9] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit XCM2:1;            /**< \brief [10:10] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit XCM3:1;            /**< \brief [11:11] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit XCM4:1;            /**< \brief [12:12] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit XCM5:1;            /**< \brief [13:13] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit XCM6:1;            /**< \brief [14:14] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit XCM7:1;            /**< \brief [15:15] Common Memory XCM Tile ${x} Control - XCM${x} (rw) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EMEM_TILECC_Bits;

/** \brief Tile Configuration Register */
typedef struct _Ifx_EMEM_TILECONFIG_Bits
{
    Ifx_Strict_32Bit TCM0:2;            /**< \brief [1:0] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit TCM1:2;            /**< \brief [3:2] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit TCM2:2;            /**< \brief [5:4] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit TCM3:2;            /**< \brief [7:6] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit TCM4:2;            /**< \brief [9:8] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit TCM5:2;            /**< \brief [11:10] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit TCM6:2;            /**< \brief [13:12] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit TCM7:2;            /**< \brief [15:14] TCM Tile ${x} Assignment Change - TCM${x} (w) */
    Ifx_Strict_32Bit XCM0:2;            /**< \brief [17:16] XCM Tile ${x} Assignment Change - XCM${x} (w) */
    Ifx_Strict_32Bit XCM1:2;            /**< \brief [19:18] XCM Tile ${x} Assignment Change - XCM${x} (w) */
    Ifx_Strict_32Bit XCM2:2;            /**< \brief [21:20] XCM Tile ${x} Assignment Change - XCM${x} (w) */
    Ifx_Strict_32Bit XCM3:2;            /**< \brief [23:22] XCM Tile ${x} Assignment Change - XCM${x} (w) */
    Ifx_Strict_32Bit XCM4:2;            /**< \brief [25:24] XCM Tile ${x} Assignment Change - XCM${x} (w) */
    Ifx_Strict_32Bit XCM5:2;            /**< \brief [27:26] XCM Tile ${x} Assignment Change - XCM${x} (w) */
    Ifx_Strict_32Bit XCM6:2;            /**< \brief [29:28] XCM Tile ${x} Assignment Change - XCM${x} (w) */
    Ifx_Strict_32Bit XCM7:2;            /**< \brief [31:30] XCM Tile ${x} Assignment Change - XCM${x} (w) */
} Ifx_EMEM_TILECONFIG_Bits;

/** \brief Tile Control Trace Memory Register */
typedef struct _Ifx_EMEM_TILECT_Bits
{
    Ifx_Strict_32Bit TCM0:1;            /**< \brief [0:0] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM1:1;            /**< \brief [1:1] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM2:1;            /**< \brief [2:2] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM3:1;            /**< \brief [3:3] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM4:1;            /**< \brief [4:4] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM5:1;            /**< \brief [5:5] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM6:1;            /**< \brief [6:6] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit TCM7:1;            /**< \brief [7:7] Trace Memory TCM Tile ${x} Control Bit - TCM${x} (rw) */
    Ifx_Strict_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_Strict_32Bit XTM0:1;            /**< \brief [16:16] Trace Memory XTM Tile ${x} Control Bit - XTM${x} (rw) */
    Ifx_Strict_32Bit XTM1:1;            /**< \brief [17:17] Trace Memory XTM Tile ${x} Control Bit - XTM${x} (rw) */
    Ifx_Strict_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_EMEM_TILECT_Bits;

/** \brief Tile Status Register */
typedef struct _Ifx_EMEM_TILESTATE_Bits
{
    Ifx_Strict_32Bit TCM0:2;            /**< \brief [1:0] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit TCM1:2;            /**< \brief [3:2] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit TCM2:2;            /**< \brief [5:4] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit TCM3:2;            /**< \brief [7:6] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit TCM4:2;            /**< \brief [9:8] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit TCM5:2;            /**< \brief [11:10] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit TCM6:2;            /**< \brief [13:12] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit TCM7:2;            /**< \brief [15:14] Assignment of TCM Tile ${x} - TCM${x} (rh) */
    Ifx_Strict_32Bit XCM0:2;            /**< \brief [17:16] Assignment of XCM Tile ${x} - XCM${x} (rh) */
    Ifx_Strict_32Bit XCM1:2;            /**< \brief [19:18] Assignment of XCM Tile ${x} - XCM${x} (rh) */
    Ifx_Strict_32Bit XCM2:2;            /**< \brief [21:20] Assignment of XCM Tile ${x} - XCM${x} (rh) */
    Ifx_Strict_32Bit XCM3:2;            /**< \brief [23:22] Assignment of XCM Tile ${x} - XCM${x} (rh) */
    Ifx_Strict_32Bit XCM4:2;            /**< \brief [25:24] Assignment of XCM Tile ${x} - XCM${x} (rh) */
    Ifx_Strict_32Bit XCM5:2;            /**< \brief [27:26] Assignment of XCM Tile ${x} - XCM${x} (rh) */
    Ifx_Strict_32Bit XCM6:2;            /**< \brief [29:28] Assignment of XCM Tile ${x} - XCM${x} (rh) */
    Ifx_Strict_32Bit XCM7:2;            /**< \brief [31:30] Assignment of XCM Tile ${x} - XCM${x} (rh) */
} Ifx_EMEM_TILESTATE_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_emem_union
 * \{   */
/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_EMEM_CLC;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_EMEM_ID;

/** \brief Standby RAM Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_SBRCTR_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_SBRCTR;

/** \brief Tile Control Common Memory Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILECC_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_TILECC;

/** \brief Tile Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILECONFIG_Bits B;       /**< \brief Bitfield access */
} Ifx_EMEM_TILECONFIG;

/** \brief Tile Control Trace Memory Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILECT_Bits B;           /**< \brief Bitfield access */
} Ifx_EMEM_TILECT;

/** \brief Tile Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_TILESTATE_Bits B;        /**< \brief Bitfield access */
} Ifx_EMEM_TILESTATE;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Emem_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief EMEM object */
typedef volatile struct _Ifx_EMEM
{
       Ifx_EMEM_CLC                        CLC;                    /**< \brief 40C06000, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_40C06004[4];    /**< \brief 40C06004, \internal Reserved */
       Ifx_EMEM_ID                         ID;                     /**< \brief 40C06008, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_40C0600C[20];    /**< \brief 40C0600C, \internal Reserved */
       Ifx_EMEM_TILECONFIG                 TILECONFIG;             /**< \brief 40C06020, Tile Configuration Register*/
       Ifx_EMEM_TILECC                     TILECC;                 /**< \brief 40C06024, Tile Control Common Memory Register*/
       Ifx_EMEM_TILECT                     TILECT;                 /**< \brief 40C06028, Tile Control Trace Memory Register*/
       Ifx_EMEM_TILESTATE                  TILESTATE;              /**< \brief 40C0602C, Tile Status Register*/
       Ifx_UReg_8Bit                       reserved_40C06030[4];    /**< \brief 40C06030, \internal Reserved */
       Ifx_EMEM_SBRCTR                     SBRCTR;                 /**< \brief 40C06034, Standby RAM Control Register*/
} Ifx_EMEM;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEMEM_REGDEF_H */
