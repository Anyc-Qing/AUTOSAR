/**
 * \file IfxCpu_cfg.h
 * \brief CPU on-chip implementation data
 * \ingroup IfxLld_Cpu
 *
 * \version iLLD_1_0_0_12_0
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
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
 * \defgroup IfxLld_Cpu CPU
 * \ingroup IfxLld
 * \defgroup IfxLld_Cpu_Impl Implementation
 * \ingroup IfxLld_Cpu
 * \defgroup IfxLld_Cpu_Std Standard Driver
 * \ingroup IfxLld_Cpu
 */

#ifndef IFXCPU_CFG_H
#define IFXCPU_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "IfxCpu_reg.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief CPU count
 */
#define IFXCPU_NUM_MODULES            (6)

/** \brief Segment number of cachable flash region
 */
#define IFXCPU_CACHABLE_FLASH_SEGMENT (8)

/** \brief Segment number of cachable LMU region
 */
#define IFXCPU_CACHABLE_LMU_SEGMENT   (9)

/** \brief all cores (coreIDs) mask
 */
#define IFXCPU_ALLCORE_DONE           (0x5F)

/******************************************************************************/
/*-------------------------------Enumerations---------------------------------*/
/******************************************************************************/

/** \brief Halt status
 */
typedef enum
{
    IfxCpu_DBGST_HALT_run  = 0,
    IfxCpu_DBGST_HALT_halt = 1
} IfxCpu_DBGST_HALT;

/** \brief Power management status
 */
typedef enum
{
    IfxCpu_PMCSR_PMST_normalMode         = 1,
    IfxCpu_PMCSR_PMST_idleModeRequest    = 2,
    IfxCpu_PMCSR_PMST_idleMode           = 3,
    IfxCpu_PMCSR_PMST_sleepModeRequest   = 4,
    IfxCpu_PMCSR_PMST_standbyModeRequest = 6
} IfxCpu_PMCSR_PMST;

/** \brief List of the available CPU resources
 */
typedef enum
{
    IfxCpu_ResourceCpu_0 = 0,  /**< \brief CPU 0 */
    IfxCpu_ResourceCpu_1 = 1,  /**< \brief CPU 1 */
    IfxCpu_ResourceCpu_2 = 2,  /**< \brief CPU 2 */
    IfxCpu_ResourceCpu_3 = 3,  /**< \brief CPU 3 */
    IfxCpu_ResourceCpu_4 = 4,  /**< \brief CPU 4 */
    IfxCpu_ResourceCpu_5 = 5,  /**< \brief CPU 5 */
    IfxCpu_ResourceCpu_none    /**< \brief None of the CPU */
} IfxCpu_ResourceCpu;

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/

IFX_EXTERN IFX_CONST IfxModule_IndexMap IfxCpu_cfg_indexMap[IFXCPU_NUM_MODULES];

#endif /* IFXCPU_CFG_H */
