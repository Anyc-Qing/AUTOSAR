/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

#include <stdint.h>
#include "Std_Types.h"
#include "os_i.h"
#include "IfxCpu.h"
#include "Ifx_reg.h"
#include "tc2xx.h"
#include "arch_offset.h"

#if defined(CFG_TC3XX)
#define SBCU0_ECON SBCU_ECON;
#define SBCU0_EADD SBCU_EADD;
#endif

uint32 Trap_MMU( uint32 tin, uint32 instAddr );
uint32 Trap_InstructionErrors( uint32 tin, uint32 instAddr );
uint32 Trap_ContextManagement( uint32 tin, uint32 instAddr );
uint32 Trap_SystemBusAndPeripheralErrors( uint32 tin, uint32 instAddr );
uint32 Trap_AssertionTraps( uint32 tin, uint32 instAddr );
uint32 Trap_NMI( uint32 tin,  uint32 instAddr );
uint32 Trap_InternalProtection( uint32 tin, uint32 instAddr );

#if ((OS_SC1 == STD_ON) || (OS_SC2 == STD_ON))
uint32 Trap_SystemCall( uint32 tin, uint32 instAddr );
#endif

/**
 *
 * @param tin
 *
 * TIN
 * 0 VAF Synch. HW Virtual Address Fill.
 * 1 VAP Synch. HW Virtual Address Protection.
 */
uint32 Trap_MMU( uint32 tin , uint32 instAddr) {
    return TC2xx_HandleTrap(tin , TRAP_0_MMU, instAddr);
}

/**
 *
 * @param tin
 *
 * TIN
 * 1 PRIV Synch. HW Privileged Instruction. Page 6-8
 * 2 MPR Synch. HW Memory Protection Read. Page 6-8
 * 3 MPW Synch. HW Memory Protection Write. Page 6-9
 * 4 MPX Synch. HW Memory Protection Execution. Page 6-9
 * 5 MPP Synch. HW Memory Protection Peripheral Access. Page 6-9
 * 6 MPN Synch. HW Memory Protection Null Address. Page 6-9
 * 7 GRWP Synch. HW Global Register Write Protection. Page 6-9
 */
uint32 Trap_InternalProtection( uint32 tin, uint32 instAddr ){
    return TC2xx_HandleTrap(tin , TRAP_1_INTERNAL_PROTECTION, instAddr);
}

/**
 *
 * @param tin
 *
 * TIN
 * 1 IOPC Synch. HW Illegal Opcode. Page 6-9
 * 2 UOPC Synch. HW Unimplemented Opcode. Page 6-9
 * 3 OPD Synch. HW Invalid Operand specification. Page 6-10
 * 4 ALN Synch. HW Data Address Alignment. Page 6-10
 * 5 MEM Synch. HW Invalid Local Memory Address. Page 6-10
 */
uint32 Trap_InstructionErrors( uint32 tin, uint32 instAddr ){

    return TC2xx_HandleTrap(tin , TRAP_2_INST_ERROR, instAddr);
}

/**
 *
 * @param tin
 *
 * TIN
 * 1 FCD Synch. HW Free Context List Depletion (FCX = LCX). Page 6-11
 * 2 CDO Synch. HW Call Depth Overflow. Page 6-12
 * 3 CDU Synch. HW Call Depth Underflow. Page 6-12
 * 4 FCU Synch. HW Free Context List Underflow (FCX = 0). Page 6-12
 * 5 CSU Synch. HW Call Stack Underflow (PCX = 0). Page 6-12
 * 6 CTYP Synch. HW Context Type (PCXI.UL wrong). Page 6-12
 * 7 NEST Synch. HW Nesting Error: RFE with non-zero call depth. Page 6-13
 */
uint32 Trap_ContextManagement( uint32 tin, uint32 instAddr ){
    return TC2xx_HandleTrap(tin , TRAP_3_CONTEXT_MGNT, instAddr);
}
/**
 *
 * @param tin
 *
 * TIN
 * 1 PSE Synch. HW Program Fetch Synchronous Error. Page 6-13
 * 2 DSE Synch. HW Data Access Synchronous Error. Page 6-13
 * 3 DAE Asynch. HW Data Access Asynchronous Error. Page 6-13
 * 4 CAE Asynch HW Coprocessor Trap Asynchronous Error.TriCore 1.6 Page 6-14
 * 5 PIE Synch HW Program Memory Integrity Error. Page 6-14
 * 6 DIE Asynch HW Data Memory Integrity Error. TriCore 1.6 Page 6-14
 * 7 TAE Asynch HW Temporal Asynchronous Error  Page 6-14
 */
uint32 Trap_SystemBusAndPeripheralErrors( uint32 tin, uint32 instAddr ){
    return TC2xx_HandleTrap(tin , TRAP_4_SYSBUS_PERIPHERAL, instAddr);
}


/**
 *
 * @param tin
 *
 * TIN
 * 1 OVF Synch. SW Arithmetic Overflow. Page 6-15
 * 2 SOVF Synch. SW Sticky Arithmetic Overflow. Page 6-15
 */
uint32 Trap_AssertionTraps( uint32 tin, uint32 instAddr ){
    return TC2xx_HandleTrap(tin , TRAP_5_ASSERTION, instAddr);
}


/**
 *
 * @param tin
 *
 * TIN
 * SYS Synch. SW System Call. Page 6-15
 */
#if ((OS_SC1 == STD_ON) || (OS_SC2 == STD_ON)) //  this function is written in assembly file for SC3 and SC4
uint32 Trap_SystemCall( uint32 tin, uint32 instAddr ){
    return TC2xx_HandleTrap(tin , TRAP_6_SYSCALL, instAddr);
}
#endif

/**
 *
 * @param tin
 *
 * TIN
 * 0 NMI Asynch. HW Non-Maskable Interrupt. Page 6-15
 */
uint32 Trap_NMI( uint32 tin, uint32 instAddr ){
    return TC2xx_HandleTrap(tin , TRAP_7_NMI, instAddr);
}
