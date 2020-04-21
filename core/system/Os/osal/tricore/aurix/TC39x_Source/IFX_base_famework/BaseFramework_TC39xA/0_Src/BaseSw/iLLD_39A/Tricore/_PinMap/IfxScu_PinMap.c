/**
 * \file IfxScu_PinMap.c
 * \brief SCU I/O map
 * \ingroup IfxLld_Scu
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
 */

#include "IfxScu_PinMap.h"

IfxScu_Emgstop_In IfxScu_EMGSTOPA_P33_8_IN = {&MODULE_SCU, {&MODULE_P33, 8}, Ifx_RxSel_a};
IfxScu_Emgstop_In IfxScu_EMGSTOPB_P21_2_IN = {&MODULE_SCU, {&MODULE_P21, 2}, Ifx_RxSel_b};
IfxScu_Extclk_Out IfxScu_EXTCLK0_P00_15_OUT = {&MODULE_SCU, {&MODULE_P00,15}, IfxPort_OutputIdx_alt4};
IfxScu_Extclk_Out IfxScu_EXTCLK0_P23_1_OUT = {&MODULE_SCU, {&MODULE_P23, 1}, IfxPort_OutputIdx_alt6};
IfxScu_Extclk_Out IfxScu_EXTCLK1_P00_13_OUT = {&MODULE_SCU, {&MODULE_P00,13}, IfxPort_OutputIdx_alt4};
IfxScu_Extclk_Out IfxScu_EXTCLK1_P11_12_OUT = {&MODULE_SCU, {&MODULE_P11,12}, IfxPort_OutputIdx_alt6};
IfxScu_Extclk_Out IfxScu_EXTCLK1_P32_4_OUT = {&MODULE_SCU, {&MODULE_P32, 4}, IfxPort_OutputIdx_alt6};
IfxScu_Hwcfg_In IfxScu_HWCFG1_P14_5_IN = {&MODULE_SCU, {&MODULE_P14, 5}};
IfxScu_Hwcfg_In IfxScu_HWCFG2_P14_2_IN = {&MODULE_SCU, {&MODULE_P14, 2}};
IfxScu_Hwcfg_In IfxScu_HWCFG3_P14_3_IN = {&MODULE_SCU, {&MODULE_P14, 3}};
IfxScu_Hwcfg_In IfxScu_HWCFG4_P10_5_IN = {&MODULE_SCU, {&MODULE_P10, 5}};
IfxScu_Hwcfg_In IfxScu_HWCFG5_P10_6_IN = {&MODULE_SCU, {&MODULE_P10, 6}};
IfxScu_Hwcfg_In IfxScu_HWCFG6_P14_4_IN = {&MODULE_SCU, {&MODULE_P14, 4}};
IfxScu_Req_In IfxScu_REQ0A_P15_4_IN = {&MODULE_SCU, 0, {&MODULE_P15, 4}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ0C_P10_7_IN = {&MODULE_SCU, 0, {&MODULE_P10, 7}, Ifx_RxSel_c};
IfxScu_Req_In IfxScu_REQ1A_P14_3_IN = {&MODULE_SCU, 1, {&MODULE_P14, 3}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ1C_P10_8_IN = {&MODULE_SCU, 1, {&MODULE_P10, 8}, Ifx_RxSel_c};
IfxScu_Req_In IfxScu_REQ2A_P10_2_IN = {&MODULE_SCU, 2, {&MODULE_P10, 2}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ2B_P02_1_IN = {&MODULE_SCU, 2, {&MODULE_P02, 1}, Ifx_RxSel_b};
IfxScu_Req_In IfxScu_REQ2C_P00_4_IN = {&MODULE_SCU, 2, {&MODULE_P00, 4}, Ifx_RxSel_c};
IfxScu_Req_In IfxScu_REQ3A_P10_3_IN = {&MODULE_SCU, 3, {&MODULE_P10, 3}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ3B_P14_1_IN = {&MODULE_SCU, 3, {&MODULE_P14, 1}, Ifx_RxSel_b};
IfxScu_Req_In IfxScu_REQ3C_P02_0_IN = {&MODULE_SCU, 3, {&MODULE_P02, 0}, Ifx_RxSel_c};
IfxScu_Req_In IfxScu_REQ4A_P33_7_IN = {&MODULE_SCU, 4, {&MODULE_P33, 7}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ4D_P15_5_IN = {&MODULE_SCU, 4, {&MODULE_P15, 5}, Ifx_RxSel_d};
IfxScu_Req_In IfxScu_REQ5A_P15_8_IN = {&MODULE_SCU, 5, {&MODULE_P15, 8}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ6A_P20_0_IN = {&MODULE_SCU, 6, {&MODULE_P20, 0}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ6D_P11_10_IN = {&MODULE_SCU, 6, {&MODULE_P11,10}, Ifx_RxSel_d};
IfxScu_Req_In IfxScu_REQ7A_P20_9_IN = {&MODULE_SCU, 7, {&MODULE_P20, 9}, Ifx_RxSel_a};
IfxScu_Req_In IfxScu_REQ7C_P15_1_IN = {&MODULE_SCU, 7, {&MODULE_P15, 1}, Ifx_RxSel_c};


const IfxScu_Emgstop_In *IfxScu_Emgstop_In_pinTable[IFXSCU_PINMAP_NUM_MODULES][IFXSCU_PINMAP_EMGSTOP_IN_NUM_ITEMS] = {
    {
        &IfxScu_EMGSTOPA_P33_8_IN,
        &IfxScu_EMGSTOPB_P21_2_IN
    }
};

const IfxScu_Extclk_Out *IfxScu_Extclk_Out_pinTable[IFXSCU_PINMAP_NUM_MODULES][IFXSCU_PINMAP_EXTCLK_OUT_NUM_ITEMS] = {
    {
        &IfxScu_EXTCLK1_P00_13_OUT,
        &IfxScu_EXTCLK0_P00_15_OUT,
        &IfxScu_EXTCLK1_P11_12_OUT,
        &IfxScu_EXTCLK0_P23_1_OUT,
        &IfxScu_EXTCLK1_P32_4_OUT
    }
};

const IfxScu_Hwcfg_In *IfxScu_Hwcfg_In_pinTable[IFXSCU_PINMAP_NUM_MODULES][IFXSCU_PINMAP_HWCFG_IN_NUM_ITEMS] = {
    {
        &IfxScu_HWCFG2_P14_2_IN,
        &IfxScu_HWCFG3_P14_3_IN,
        &IfxScu_HWCFG6_P14_4_IN,
        &IfxScu_HWCFG1_P14_5_IN,
        &IfxScu_HWCFG4_P10_5_IN,
        &IfxScu_HWCFG5_P10_6_IN
    }
};

const IfxScu_Req_In *IfxScu_Req_In_pinTable[IFXSCU_PINMAP_NUM_MODULES][IFXSCU_PINMAP_NUM_REQUESTS][IFXSCU_PINMAP_REQ_IN_NUM_ITEMS] = {
    {
        {
            &IfxScu_REQ0A_P15_4_IN,
            NULL_PTR,
            &IfxScu_REQ0C_P10_7_IN,
            NULL_PTR
        },
        {
            &IfxScu_REQ1A_P14_3_IN,
            NULL_PTR,
            &IfxScu_REQ1C_P10_8_IN,
            NULL_PTR
        },
        {
            &IfxScu_REQ2A_P10_2_IN,
            &IfxScu_REQ2B_P02_1_IN,
            &IfxScu_REQ2C_P00_4_IN,
            NULL_PTR
        },
        {
            &IfxScu_REQ3A_P10_3_IN,
            &IfxScu_REQ3B_P14_1_IN,
            &IfxScu_REQ3C_P02_0_IN,
            NULL_PTR
        },
        {
            &IfxScu_REQ4A_P33_7_IN,
            NULL_PTR,
            NULL_PTR,
            &IfxScu_REQ4D_P15_5_IN
        },
        {
            &IfxScu_REQ5A_P15_8_IN,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxScu_REQ6A_P20_0_IN,
            NULL_PTR,
            NULL_PTR,
            &IfxScu_REQ6D_P11_10_IN
        },
        {
            &IfxScu_REQ7A_P20_9_IN,
            NULL_PTR,
            &IfxScu_REQ7C_P15_1_IN,
            NULL_PTR
        }
    }
};
