/**************************************************************************//**
 * @file     cmsis_ghs.h
 * @brief    Functions taken from CMSIS Cortex-M Core Function/Instruction
 * 			 Header File because ghs is not a part of cmsis.
 * @version  V4.20
 * @date     18. August 2015
 ******************************************************************************/
/* Copyright (c) 2009 - 2015 ARM LIMITED

   All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
   - Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   - Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.
   - Neither the name of ARM nor the names of its contributors may be used
     to endorse or promote products derived from this software without
     specific prior written permission.
   *
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
   ---------------------------------------------------------------------------*/
/* __get_PRIMASK */
/** \brief  Get Priority Mask

	This function returns the current state of the priority mask bit from the Priority Mask Register.

	\return               Priority Mask value
*/
 __STATIC_INLINE uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}

/* __set_PRIMASK */
/** \brief  Set Priority Mask

	This function assigns the given value to the Priority Mask Register.

	\param [in]    priMask  Priority Mask
*/
 __STATIC_INLINE void __set_PRIMASK(uint32_t priMask)
{
  __ASM volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}

/* __disable_irq */
/** \brief  Disable IRQ Interrupts

	This function disables IRQ interrupts by setting the I-bit in the CPSR.
	Can only be executed in Privileged modes.
*/
__STATIC_INLINE void __disable_irq(void)
{
	__ASM volatile ("cpsid i" : : : "memory");
}

/* __enable_irq */
/** \brief  Enable IRQ Interrupts

	This function enables IRQ interrupts by clearing the I-bit in the CPSR.
	Can only be executed in Privileged modes.
*/
__STATIC_INLINE void __enable_irq(void)
{
	__ASM volatile ("cpsie i" : : : "memory");
}

/* __DSB */
/** \brief  Data Synchronization Barrier

    This function acts as a special kind of Data Memory Barrier.
    It completes when all explicit memory accesses before this instruction complete.
 */
__STATIC_INLINE void __DSB(void)
{
  __ASM volatile ("dsb 0xF":::"memory");
}
/* __NOP */
/** \brief  No Operation

    No Operation does nothing. This instruction can be used for code alignment purposes.
 */
__STATIC_INLINE void __NOP(void)
{
  __ASM volatile ("nop");
}

/* __set_PSP */
/** \brief  Set Process Stack Pointer

    This function assigns the given value to the Process Stack Pointer (PSP).

    \param [in]    topOfProcStack  Process Stack Pointer value to set
 */
__STATIC_INLINE void __set_PSP(uint32_t topOfProcStack)
{
	  __ASM volatile ("msr psp, %0 \n" : "=r" (topOfProcStack) );
}

/* __get_PSP */
/** \brief  Get Process Stack Pointer

    This function returns the current value of the Process Stack Pointer (PSP).

    \return               PSP Register value
 */
__STATIC_INLINE uint32_t __get_PSP(void)
{
  register uint32_t result;

  __ASM volatile ("MRS %0, psp\n"  : "=r" (result) );
  return(result);
}
