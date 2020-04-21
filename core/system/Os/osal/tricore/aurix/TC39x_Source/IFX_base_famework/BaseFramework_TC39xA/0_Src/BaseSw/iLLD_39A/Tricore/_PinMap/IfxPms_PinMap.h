/**
 * \file IfxPms_PinMap.h
 * \brief PMS I/O map
 * \ingroup IfxLld_Pms
 *
 * \version iLLD_1_0_0_12_0
 * \copyright Copyright (c) 2013 Infineon Technologies AG. All rights reserved.
 *
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
 * \defgroup IfxLld_Pms_pinmap PMS Pin Mapping
 * \ingroup IfxLld_Pms
 */

#ifndef IFXPMS_PINMAP_H
#define IFXPMS_PINMAP_H

#include <_Reg/IfxPms_reg.h>
#include <_Impl/IfxPms_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Pms_pinmap
 * \{ */

/** \brief Wakeup pin mapping structure */
typedef const struct
{
    Ifx_PMS*          module;    /**< \brief Base address */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    Ifx_RxSel         select;    /**< \brief Input multiplexer value */
} IfxPms_Wkp_In;

/** \brief DCDC Sync pin mapping structure */
typedef const struct
{
    Ifx_PMS*          module;    /**< \brief Base address */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    IfxPort_OutputIdx select;    /**< \brief Port control code */
} IfxPms_Dcdcsync_Out;

IFX_EXTERN IfxPms_Dcdcsync_Out IfxPms_DCDCSYNC_P32_2_OUT;  /**< \brief sync from DCDC */
IFX_EXTERN IfxPms_Dcdcsync_Out IfxPms_DCDCSYNC_P32_4_OUT;  /**< \brief sync from DCDC */
IFX_EXTERN IfxPms_Wkp_In IfxPms_PINAWKP_P14_1_IN;  /**< \brief  */
IFX_EXTERN IfxPms_Wkp_In IfxPms_PINBWKP_P33_12_IN;  /**< \brief  */

/** \brief Table dimensions */
#define IFXPMS_PINMAP_NUM_MODULES 1
#define IFXPMS_PINMAP_DCDCSYNC_OUT_NUM_ITEMS 2
#define IFXPMS_PINMAP_WKP_IN_NUM_ITEMS 2


/** \brief IfxPms_Dcdcsync_Out table */
IFX_EXTERN const IfxPms_Dcdcsync_Out *IfxPms_Dcdcsync_Out_pinTable[IFXPMS_PINMAP_NUM_MODULES][IFXPMS_PINMAP_DCDCSYNC_OUT_NUM_ITEMS];

/** \brief IfxPms_Wkp_In table */
IFX_EXTERN const IfxPms_Wkp_In *IfxPms_Wkp_In_pinTable[IFXPMS_PINMAP_NUM_MODULES][IFXPMS_PINMAP_WKP_IN_NUM_ITEMS];

/** \} */

#endif /* IFXPMS_PINMAP_H */
