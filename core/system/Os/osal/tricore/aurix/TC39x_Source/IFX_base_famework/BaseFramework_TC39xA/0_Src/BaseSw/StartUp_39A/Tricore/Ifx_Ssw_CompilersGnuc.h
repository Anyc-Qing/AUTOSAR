/*
 * Ifx_Ssw_CompilersGnuc.h
 *
 *  Created on: 23.06.2016
 *      Author: abbi
 */

#ifndef IFX_SSW_COMPILERSGNUC_H_
#define IFX_SSW_COMPILERSGNUC_H_

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "machine/intrinsics.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/*Linker definitions which are specific to Gnuc */
/* IFX_CFG_USE_COMPILER_DEFAULT_LINKER shall be defined in Ifx_Cfg.h
 * to use the default compiler linker varaibles and startup */
#ifndef IFX_CFG_USE_COMPILER_DEFAULT_LINKER

/*Start: Common definitions ********************************************** */
#define IFX_SSW_COMMON_LINKER_SYMBOLS()                                       \
    extern unsigned int __A0_MEM[];     /**< center of A0 addressable area */ \
    extern unsigned int __A1_MEM[];     /**< center of A1 addressable area */ \
    extern unsigned int __A8_MEM[];     /**< center of A8 addressable area */ \
    extern unsigned int __A9_MEM[];     /**< center of A9 addressable area */

/*End: Common definitions ************************************************ */

/*Start: Core 0 definitions ********************************************** */

/*C extern defintions */
#define IFX_SSW_CORE_LINKER_SYMBOLS(cpu)                                        \
    extern unsigned int __USTACK##cpu[];      /**< user stack end */            \
    extern unsigned int __ISTACK##cpu[];      /**< interrupt stack end */       \
    extern unsigned int __INTTAB_CPU##cpu[];  /**< Interrupt vector table */    \
    extern unsigned int __TRAPTAB_CPU##cpu[]; /**< trap table */                \
    extern unsigned int __CSA##cpu[];         /**< context save area 1 begin */ \
    extern unsigned int __CSA##cpu##_END[];   /**< context save area 1 begin */

#define __USTACK(cpu)      __USTACK##cpu
#define __ISTACK(cpu)      __ISTACK##cpu
#define __INTTAB_CPU(cpu)  __INTTAB_CPU##cpu
#define __TRAPTAB_CPU(cpu) __TRAPTAB_CPU##cpu
#define __CSA(cpu)         __CSA##cpu
#define __CSA_END(cpu)     __CSA##cpu##_END

/*Wrapper macros for the tool specific definitions */
#if defined(IFX_USE_SW_MANAGED_INT)
#define __INTTAB(cpu)      ((unsigned int)__INTTAB_CPU##cpu | (unsigned int)0x1FE0)
#else
#define __INTTAB(cpu)      __INTTAB_CPU##cpu
#endif /*defined(IFX_USE_SW_MANAGED_INT) */

#define __TRAPTAB(cpu)     __TRAPTAB_CPU##cpu

#define __SDATA1(cpu)      __A0_MEM
#define __SDATA2(cpu)      __A1_MEM
#define __SDATA3(cpu)      __A8_MEM
#define __SDATA4(cpu)      __A9_MEM

#endif /*#ifndef IFX_CFG_USE_COMPILER_DEFAULT_LINKER*/


#define IFX_SSW_INLINE         static inline __attribute__ ((always_inline))

#define IFX_SSW_NULL_PTR ((void*)0x0U)

/******************************************************************************/
/*--------------------------------   Typedefs  -------------------------------*/
/******************************************************************************/
typedef volatile union
{
	unsigned int       *ucPtr;
	unsigned int       *usPtr;
	unsigned int       *uiPtr;
    unsigned long long *ullPtr;
} Ifx_Ssw_CTablePtr;

/******************************************************************************/
/*----------------------------   GNU Intrinsics  -----------------------------*/
/******************************************************************************/

#define Ifx_Ssw_MTCR(reg, val)   __mtcr(reg, val);

#define Ifx_Ssw_MFCR(reg)   __mfcr(reg);

IFX_SSW_INLINE void Ifx_Ssw_NOP(void)
{
    __asm__ volatile ("nop" : : : "memory");
}

IFX_SSW_INLINE void Ifx_Ssw_DSYNC(void)
{
    __asm__ volatile ("dsync" : : : "memory");
}

IFX_SSW_INLINE void Ifx_Ssw_ISYNC(void)
{
    __asm__ volatile ("isync" : : : "memory");
}

IFX_SSW_INLINE unsigned int Ifx_Ssw_MINU(unsigned int a, unsigned int b)
{
	unsigned int res;
    __asm__ volatile ("min.u %0, %1, %2": "=d" (res) : "d" (a), "d" (b));
    return res;
}

#define Ifx_Ssw_CLZ(a) __builtin_clz(a)

#define Ifx_Ssw___setAddressReg(aReg, val) \
{__asm__ volatile ("movh.a\t %"#aReg", hi:("#val")\n\tlea\t %"#aReg",[%"#aReg"] lo:("#val")"); }

#define Ifx_Ssw_setAddressReg(regNum, val)  Ifx_Ssw___setAddressReg(regNum, val)

IFX_SSW_INLINE void Ifx_Ssw_moveToDataParam0(unsigned int var)
{
	__asm__ volatile ("mov\t %%d2, %0"::"d"(var));
}

IFX_SSW_INLINE unsigned int Ifx_Ssw_getDataParam0(void)
{
	unsigned int var;
	__asm__ volatile (" mov\t %0, %%d2":"=d"(var));
	return var;
}

IFX_SSW_INLINE void Ifx_Ssw_jumpToFunction(void(*fun)(void))
{
	__asm__ volatile ("ji %0"::"a"(fun));
}

IFX_SSW_INLINE void Ifx_Ssw_jumpToFunctionWithLink(void *fun)
{
	__asm__ volatile ("jli %0"::"a"(fun));
}

IFX_SSW_INLINE void Ifx_Ssw_jumpBackToLink(void)
{
	__asm__ volatile ("ji %a11");
}

extern unsigned int __clear_table[];  /**< clear table entry */
extern unsigned int __copy_table[];   /**< copy table entry */

IFX_SSW_INLINE void Ifx_Ssw_C_InitInline(void)
{
	Ifx_Ssw_CTablePtr pBlockDest, pBlockSrc;
	unsigned int      uiLength, uiCnt;
	unsigned int      *pTable;
    /* clear table */
    pTable = (unsigned int *)&__clear_table;

    while (pTable)
    {
        pBlockDest.uiPtr = (unsigned int *)*pTable++;
        uiLength         = *pTable++;

        /* we are finished when length == -1 */
        if (uiLength == 0xFFFFFFFF)
        {
            break;
        }

        uiCnt = uiLength / 8;

        while (uiCnt--)
        {
            *pBlockDest.ullPtr++ = 0;
        }

        if (uiLength & 0x4)
        {
            *pBlockDest.uiPtr++ = 0;
        }

        if (uiLength & 0x2)
        {
            *pBlockDest.usPtr++ = 0;
        }

        if (uiLength & 0x1)
        {
            *pBlockDest.ucPtr = 0;
        }
    }

    /* copy table */
    pTable = (unsigned int *)&__copy_table;

    while (pTable)
    {
        pBlockSrc.uiPtr  = (unsigned int *)*pTable++;
        pBlockDest.uiPtr = (unsigned int *)*pTable++;
        uiLength         = *pTable++;

        /* we are finished when length == -1 */
        if (uiLength == 0xFFFFFFFF)
        {
            break;
        }

        uiCnt = uiLength / 8;

        while (uiCnt--)
        {
            *pBlockDest.ullPtr++ = *pBlockSrc.ullPtr++;
        }

        if (uiLength & 0x4)
        {
            *pBlockDest.uiPtr++ = *pBlockSrc.uiPtr++;
        }

        if (uiLength & 0x2)
        {
            *pBlockDest.usPtr++ = *pBlockSrc.usPtr++;
        }

        if (uiLength & 0x1)
        {
            *pBlockDest.ucPtr = *pBlockSrc.ucPtr;
        }
    }
}



#endif /* IFX_SSW_COMPILERSGNUC_H_ */
