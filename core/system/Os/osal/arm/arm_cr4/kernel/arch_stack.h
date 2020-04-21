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


#ifndef ARCH_STACK_H_
#define ARCH_STACK_H_

#define SC_PATTERN		0xde		/* Small context */
#define LC_PATTERN		0xad		/* Large context */

/* Minimum alignment req */
#define ARCH_ALIGN		4

/* Small context (task swap==function call) */
#define SAVE_NVGPR(_x,_y)
#define RESTORE_NVGPR(_x,_y)

/* Save volatile regs, NOT preserved by function calls */
#define SAVE_VGPR(_x,_y)
#define RESTORE_VGPR(_x,_y)

/* Large context (interrupt) */
#define SAVE_ALL_GPR(_x,_y)
#define RESTORE_ALL_GPR(_x,_y)


#if defined(CFG_HW_FLOAT)
// d registers are 64bit
// d8-d15+FPSCR
#define FLOAT_SC_SIZE		((8*8)+4)
// d0-d15+FPSCR
#define FLOAT_LC_SIZE		((8*16)+4)
#else
#define FLOAT_SC_SIZE		0
#define FLOAT_LC_SIZE		0
#endif

// NVREGS: r0+r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11+r12+lr = 14*4 = 56
#define NVGPR_SIZE		56
// SP + context
#define C_SIZE			8
#define VGPR_LR_OFF		(C_SIZE+NVGPR_SIZE+FLOAT_SC_SIZE-4)
#define C_CONTEXT_OFFS  4
#define C_SP_OFF 		0
#define SC_SIZE			(NVGPR_SIZE+C_SIZE+FLOAT_SC_SIZE)
/*
 * FULL_PATTERN is used indicate that a full register context is on the stack.
 * FUNC_PATTERN indicates that a function register context is  on the stack
 */
#define ISR_SPE_PATTERN		0x12
#define FUNC_SPE_PATTERN	0x32
#define ISR_PATTERN			0xde
#define FUNC_PATTERN		0xad

#if !defined(_ASSEMBLER_)

typedef struct {
#if defined(CFG_HW_FLOAT)
    uint8 f[FLOAT_LC_SIZE];
#endif
    uint32 r0;
    uint32 r1;
    uint32 r2;

    uint32 r3;
    uint32 r4;
    uint32 r5;
    uint32 r6;

    uint32 r7;
    uint32 r8;
    uint32 r9;
    uint32 r10;

    uint32 r11;
    uint32 r12;		/* REG_SAVE */
    uint32 lr;		/* REG_SAVE, lr */
    uint32 pc;		/* rfeia + next address */
    uint32 psr;
} Os_IsrFrameType;


#endif /* !defined(_ASSEMLBER_) */
#endif /* ARCH_STACK_H_ */
