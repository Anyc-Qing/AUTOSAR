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

/* ----------------------------[includes]------------------------------------*/

#include "Std_Types.h"
#if defined(USE_KERNEL)
#include "arc.h"
#endif
#include "irq_types.h"
#include "core_cr4.h"
#include "asm_arm.h"

/* ----------------------------[private define]------------------------------*/
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/

/* Exceptions testing is not automated in curent unit testing suite and therefore this part of code is excluded from coverage report
 */
/*lint -e527 MISRA:HARDWARE_ACCESS:Something with the HW:[MISRA 2012 Rule 2.1, required]*/
struct ExcAbort {
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
    uint32 r12;
    uint32 lr;
    uint32 lr_abt;
    uint32 sp_abt;

};


/* ----------------------------[private function prototypes]-----------------*/

void Mcu_Arc_HandleException( uint32 type, struct ExcAbort *sP );

/* ----------------------------[private variables]---------------------------*/

/* ----------------------------[private functions]---------------------------*/

/* ----------------------------[public functions]----------------------------*/

extern uint32_t Cpu_ExceptionHandler(uint32_t exceptionVector);

#if defined(CFG_DEBUG_EXCEPTIONS)

/**
 * Function to extract stacked registers
 *
 * @param stackPtr
 */
/* @CODECOV:OTHER_TEST_EXIST: Tests for exception handling should be done on integration level */
static void debugException( uint32_t type , struct ExcAbort *sP )
{
    uint32 ifar;
    uint32 ifsr;
    uint32 dfar;
    uint32 dfsr;

    switch(type) {
    case EXC_PREFETCH_ABORT:
        /* Prefetch abort */

        /* IFAR holds the faulting address of a Prefetch Abort exception */
        ifar = CoreGetIFAR();

        /*  PMSAv7 IFSR encodings
         * IFSR[3:0]
         *  0001  - Alignment fault
         *  0000  - Background fault, MPU
         *  1101  - Permission fault, MPU
         *  0010  - Debug event
         *  1000  - Synchronous external abort
         *  etc.
         * */
        ifsr = CoreGetIFSR();

        (void)ifar;
        (void)ifsr;

        /* Enter endless loop to help debug exception */
        while(1) {
        	/* Do nothing */
        };

        break;
    case EXC_DATA_ABORT:
        /* Data abort */

        dfar = CoreGetDFAR();

        /*   PMSAv7 DFSR encodings
         * DFSR[10,3:0]
         *  00001  - Alignment fault
         *  00000  - Background fault, MPU
         *  01101  - Permission fault, MPU
         *  00010  - Debug event
         *  01000  - Synchronous external abort
         *  10110  - Asynchronous external abort
         *  etc.
         *
         *    |           |           |
         * |12|11|10| 9| 8| 7| 6| 5| 4| 3| 2| 1| 0|
         *  E  W   F                    F  F  F  F
         *  X  N   S                    S  S  S  S
         *  T  R  [4]                  [3][2][1][0]
         * */
        dfsr = CoreGetDFSR();

        (void)dfar;
        (void)dfsr;

        /* Enter endless loop to help debug exception */
        while(1) {
        	/* Do nothing */
        };

        break;
    default:
        /* We should not get here for the other modes */

    	/* Enter endless loop to help debug exception */
        while(1) {
        	/* Do nothing */
        };
        break;
    }

    /* Enter endless loop to help debug exception */
    while(1) {
    	/* Do nothing */
    };
}
#endif

/**
 * Gets the instruction length of instructions at an address.
 *
 * @param instrAddr
 * @return
 */
/* @CODECOV:OTHER_TEST_EXIST: Tests for exception handling should be done on integration level */
static uint32 adjustReturnAddr( uint32 instrAddr ) {

    uint16 fh = ((uint16)(instrAddr > UINT16_MAX));

    /*
     * From TRM:
     * The Thumb instruction stream is a sequence of halfword-aligned halfwords.
     * Each Thumb instruction is either a single 16-bit halfword in that stream,
     * or a 32-bit instruction consisting of two consecutive halfwords in that stream.
     * If the value of bits[15:11] of the halfword being decoded is one of the following,
     * the halfword is the first halfword of a 32-bit instruction:
     *  - 0b11101
     *  - 0b11110
     *  - 0b11111.
     * Otherwise, the halfword is a 16-bit instruction.
     */

    fh = fh & 0xf800U;
    if( (fh == 0xe800U) || (fh == 0xf000U) || (fh == 0xf800U) ) {
        instrAddr += 4;     /* 32-bit */
    } else {
        instrAddr += 2;     /* 16-bit */
    }

    return instrAddr;
}



/**
 * Calls higher level functions to handle the exception.
 *
 * @param exception The exception number
 * @param spr       The SPR number
 * @return
 */
/* @CODECOV:OTHER_TEST_EXIST: Tests for exception handling should be done on integration level */ /* @CODECOV:OTHER_TEST_EXIST: Tests for exception handling should be done on integration level */
static void handleException( uint32 exception, struct ExcAbort *sP ) {
    uint32_t rv;

    rv = Cpu_ExceptionHandler( exception );
    if( rv & EXC_NOT_HANDLED ) {
        /* The exception was not handled */
        Os_Arc_Panic(exception,NULL_PTR);
        /* we don't get back here */
    }

    if( rv & EXC_ADJUST_ADDR ) {

        sP->lr_abt = adjustReturnAddr( sP->lr_abt );
    }
}

/**
 * Called from handler
 *
 * @param type
 * @param stackPtr
 */
/* @CODECOV:OTHER_TEST_EXIST: Tests for exception handling should be done on integration level */
void Mcu_Arc_HandleException( uint32 type, struct ExcAbort *sP )
{
#if defined(CFG_DEBUG_EXCEPTIONS)
    debugException(type,sP);
#else
    handleException(type, sP);
#endif
}

