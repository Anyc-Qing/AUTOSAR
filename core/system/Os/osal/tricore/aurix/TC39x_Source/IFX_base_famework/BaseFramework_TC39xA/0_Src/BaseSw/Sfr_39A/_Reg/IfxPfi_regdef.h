/**
 * \file IfxPfi_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: PFI_AURIXTC3XX_its_MCSFR.xml
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
 * \defgroup IfxLld_Pfi Pfi
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Pfi_Bitfields Bitfields
 * \ingroup IfxLld_Pfi
 * 
 * \defgroup IfxLld_Pfi_union Union
 * \ingroup IfxLld_Pfi
 * 
 * \defgroup IfxLld_Pfi_struct Struct
 * \ingroup IfxLld_Pfi
 * 
 */
#ifndef IFXPFI_REGDEF_H
#define IFXPFI_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Bitfields
 * \{  */

/** \brief  DBAB Record */
typedef struct _Ifx_PFI_DBABRECORD_Bits
{
    unsigned int reserved_0:5;              /**< \brief \internal Reserved */
    unsigned int ADDR:23;                   /**< \brief [27:5] Address (rh) */
    unsigned int reserved_28:3;             /**< \brief \internal Reserved */
    unsigned int VLD:1;                     /**< \brief [31:31] Valid (rh) */
} Ifx_PFI_DBABRECORD_Bits;

/** \brief  ECC Read Register */
typedef struct _Ifx_PFI_ECCR_Bits
{
    unsigned int RCODE:22;                  /**< \brief [21:0] Error Correction Read Code (rh) */
    unsigned int RED:2;                     /**< \brief [23:22] Redundant Bits (rh) */
    unsigned int reserved_24:8;             /**< \brief \internal Reserved */
} Ifx_PFI_ECCR_Bits;

/** \brief  ECC Status Register */
typedef struct _Ifx_PFI_ECCS_Bits
{
    unsigned int ERR1:1;                    /**< \brief [0:0] Read Access Single Bit ECC Error (rh) */
    unsigned int ERR2:1;                    /**< \brief [1:1] Read Access Double Bit ECC Error (rh) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int ERRM:1;                    /**< \brief [3:3] Read Access Multi-bit ECC Error (rh) */
    unsigned int ERRA:1;                    /**< \brief [4:4] Read Access ECC Error Within the Address (rh) */
    unsigned int ALL0:1;                    /**< \brief [5:5] Read Access All Zeros (rh) */
    unsigned int ALL1:1;                    /**< \brief [6:6] All Ones (rh) */
    unsigned int ERRANY:1;                  /**< \brief [7:7] Any Read Access ECC Error (rh) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int AER1:1;                    /**< \brief [16:16] Accumulated Single Bit ECC Errors (rh) */
    unsigned int AER2:1;                    /**< \brief [17:17] Accumulated Double Bit ECC Errors (rh) */
    unsigned int reserved_18:1;             /**< \brief \internal Reserved */
    unsigned int AERM:1;                    /**< \brief [19:19] Accumulated Multi-bit ECC Errors (rh) */
    unsigned int ARRA:1;                    /**< \brief [20:20] Accumulated ECC Error Within the Address (rh) */
    unsigned int AAL0:1;                    /**< \brief [21:21] Accumulated All Zeros (rh) */
    unsigned int AAL1:1;                    /**< \brief [22:22] Accumulated All Ones (rh) */
    unsigned int AERANY:1;                  /**< \brief [23:23] Accumulated Any Read Access ECC Error (rh) */
    unsigned int reserved_24:8;             /**< \brief \internal Reserved */
} Ifx_PFI_ECCS_Bits;

/** \brief  MBAB Record */
typedef struct _Ifx_PFI_MBABRECORD_Bits
{
    unsigned int reserved_0:5;              /**< \brief \internal Reserved */
    unsigned int ADDR:23;                   /**< \brief [27:5] Address (rh) */
    unsigned int reserved_28:3;             /**< \brief \internal Reserved */
    unsigned int VLD:1;                     /**< \brief [31:31] Valid (rh) */
} Ifx_PFI_MBABRECORD_Bits;

/** \brief  SBAB Record */
typedef struct _Ifx_PFI_SBABRECORD_Bits
{
    unsigned int reserved_0:5;              /**< \brief \internal Reserved */
    unsigned int ADDR:23;                   /**< \brief [27:5] Address (rh) */
    unsigned int reserved_28:3;             /**< \brief \internal Reserved */
    unsigned int VLD:1;                     /**< \brief [31:31] Valid (rh) */
} Ifx_PFI_SBABRECORD_Bits;

/** \brief  ZBAB Record */
typedef struct _Ifx_PFI_ZBABRECORD_Bits
{
    unsigned int reserved_0:5;              /**< \brief \internal Reserved */
    unsigned int ADDR:23;                   /**< \brief [27:5] Address (rh) */
    unsigned int reserved_28:3;             /**< \brief \internal Reserved */
    unsigned int VLD:1;                     /**< \brief [31:31] Valid (rh) */
} Ifx_PFI_ZBABRECORD_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_union
 * \{  */

/** \brief  DBAB Record */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_PFI_DBABRECORD_Bits B;              /**< \brief Bitfield access */
} Ifx_PFI_DBABRECORD;

/** \brief  ECC Read Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_PFI_ECCR_Bits B;                    /**< \brief Bitfield access */
} Ifx_PFI_ECCR;

/** \brief  ECC Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_PFI_ECCS_Bits B;                    /**< \brief Bitfield access */
} Ifx_PFI_ECCS;

/** \brief  MBAB Record */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_PFI_MBABRECORD_Bits B;              /**< \brief Bitfield access */
} Ifx_PFI_MBABRECORD;

/** \brief  SBAB Record */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_PFI_SBABRECORD_Bits B;              /**< \brief Bitfield access */
} Ifx_PFI_SBABRECORD;

/** \brief  ZBAB Record */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_PFI_ZBABRECORD_Bits B;              /**< \brief Bitfield access */
} Ifx_PFI_ZBABRECORD;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \brief  DBAB */
typedef volatile struct _Ifx_PFI_DBAB
{
    Ifx_PFI_DBABRECORD DBABRECORD;          /**< \brief 0, DBAB Record  */
    unsigned char reserved_4[28];           /**< \brief 4, \internal Reserved */
} Ifx_PFI_DBAB;

/** \brief  MBAB */
typedef volatile struct _Ifx_PFI_MBAB
{
    Ifx_PFI_MBABRECORD MBABRECORD;          /**< \brief 0, MBAB Record  */
} Ifx_PFI_MBAB;

/** \brief  SBAB */
typedef volatile struct _Ifx_PFI_SBAB
{
    Ifx_PFI_SBABRECORD SBABRECORD;          /**< \brief 0, SBAB Record  */
    unsigned char reserved_4[28];           /**< \brief 4, \internal Reserved */
} Ifx_PFI_SBAB;


/** \brief  ZBAB */
typedef volatile struct _Ifx_PFI_ZBAB
{
    Ifx_PFI_ZBABRECORD ZBABRECORD;          /**< \brief 0, ZBAB Record  */
    unsigned char reserved_4[28];           /**< \brief 4, \internal Reserved */
} Ifx_PFI_ZBAB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  PFI object */
typedef volatile struct _Ifx_PFI
{
    Ifx_PFI_ECCR ECCR;                      /**< \brief 0, ECC Read Register */
    unsigned char reserved_4[28];           /**< \brief 4, \internal Reserved */
    Ifx_PFI_ECCS ECCS;                      /**< \brief 20, ECC Status Register */
    unsigned char reserved_24[8156];        /**< \brief 24, \internal Reserved */
    Ifx_PFI_SBAB SBAB[17];                  /**< \brief 2000, SBAB */
    unsigned char reserved_2220[7648];      /**< \brief 2220, \internal Reserved */
    Ifx_PFI_DBAB DBAB[2];                   /**< \brief 4000, DBAB */
    unsigned char reserved_4040[16320];     /**< \brief 4040, \internal Reserved */
    Ifx_PFI_MBAB MBAB[1];                   /**< \brief 8000, MBAB */
    unsigned char reserved_8004[16380];     /**< \brief 8004, \internal Reserved */
    Ifx_PFI_ZBAB ZBAB[4];                   /**< \brief C000, ZBAB */
    unsigned char reserved_C080[28608];     /**< \brief C080, \internal Reserved */
    unsigned char reserved_13040[4];        /**< \brief 13040, \internal Reserved */
    unsigned char reserved_13044[184252];   /**< \brief 13044, \internal Reserved */
    unsigned char reserved_40044[8192];    /**< \brief 40000, \internal Reserved */
    unsigned char reserved_42000[256];     /**< \brief 42000, \internal Reserved */
    unsigned char reserved_42100[3840];     /**< \brief 42100, \internal Reserved */
    unsigned char reserved_43000[4];        /**< \brief 43000, \internal Reserved */
    unsigned char reserved_43004[28];       /**< \brief 43004, \internal Reserved */
    unsigned char reserved_43020[4];        /**< \brief 43020, \internal Reserved  */
    unsigned char reserved_43024[60];       /**< \brief 43024, \internal Reserved */
    unsigned char reserved_43060[4];        /**< \brief 43060, \internal Reserved  */
    unsigned char reserved_43064[249756];   /**< \brief 43064, \internal Reserved */
} Ifx_PFI;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPFI_REGDEF_H */
