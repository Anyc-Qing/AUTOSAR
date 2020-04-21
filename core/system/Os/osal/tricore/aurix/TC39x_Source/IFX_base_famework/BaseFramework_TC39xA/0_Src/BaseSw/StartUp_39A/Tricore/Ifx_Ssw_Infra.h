/*
 * IfxCpu_Ssw_Infra.h
 *
 *  Created on: 18.06.2016
 *      Author: abbi
 */
#ifndef IFX_SSW_INFRA_H_
#define IFX_SSW_INFRA_H_

#include "Ifx_Ssw_Compilers.h"
#include "IfxScu_reg.h"
#include "IfxCpu_reg.h"
#include "IfxScu_bf.h"
#include "IfxCpu_bf.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief PowerOn Reset Mask
 */
#define IFX_SSW_POWERONRESET_MASK                           \
    ((IFX_SCU_RSTSTAT_STBYR_MSK << IFX_SCU_RSTSTAT_STBYR_OFF) | \
     (IFX_SCU_RSTSTAT_SWD_MSK << IFX_SCU_RSTSTAT_SWD_OFF) |     \
     (IFX_SCU_RSTSTAT_EVR33_MSK << IFX_SCU_RSTSTAT_EVR33_OFF) | \
     (IFX_SCU_RSTSTAT_EVRC_MSK << IFX_SCU_RSTSTAT_EVRC_OFF) |   \
     (IFX_SCU_RSTSTAT_CB1_MSK << IFX_SCU_RSTSTAT_CB1_OFF) |     \
     (IFX_SCU_RSTSTAT_CB0_MSK << IFX_SCU_RSTSTAT_CB0_OFF) |     \
     (IFX_SCU_RSTSTAT_PORST_MSK << IFX_SCU_RSTSTAT_PORST_OFF))

/** \brief Application Reset Mask
 */
#define IFX_SSW_APPLICATIONRESET_MASK                     \
    ((IFX_SCU_RSTSTAT_SW_MSK << IFX_SCU_RSTSTAT_SW_OFF) |     \
     (IFX_SCU_RSTSTAT_STM5_MSK << IFX_SCU_RSTSTAT_STM5_OFF) | \
     (IFX_SCU_RSTSTAT_STM4_MSK << IFX_SCU_RSTSTAT_STM4_OFF) | \
     (IFX_SCU_RSTSTAT_STM2_MSK << IFX_SCU_RSTSTAT_STM2_OFF) | \
     (IFX_SCU_RSTSTAT_STM1_MSK << IFX_SCU_RSTSTAT_STM1_OFF) | \
     (IFX_SCU_RSTSTAT_STM0_MSK << IFX_SCU_RSTSTAT_STM0_OFF) | \
     (IFX_SCU_RSTSTAT_SMU_MSK << IFX_SCU_RSTSTAT_SMU_OFF) |   \
     (IFX_SCU_RSTSTAT_ESR1_MSK << IFX_SCU_RSTSTAT_ESR1_OFF) | \
     (IFX_SCU_RSTSTAT_ESR0_MSK << IFX_SCU_RSTSTAT_ESR0_OFF))

#ifndef IFX_SCU_STARTCPU_WAIT_TIME_IN_SECONDS
#define IFX_SCU_STARTCPU_WAIT_TIME_IN_SECONDS (0.1)
#endif

#ifndef IFX_CFG_SSW_EVR_OSC_FREQUENCY
#define IFX_CFG_SSW_EVR_OSC_FREQUENCY (100000000.0)
#endif

#ifndef IFX_CFG_SSW_SYSCLK_PIN_FREQUENCY
#define IFX_CFG_SSW_SYSCLK_PIN_FREQUENCY (20000000.0)
#endif

#ifndef IFX_CFG_SSW_XTAL_FREQUENCY
#define IFX_CFG_SSW_XTAL_FREQUENCY (IFX_CFG_SCU_XTAL_FREQUENCY)
#endif


/******************************************************************************/
/*-------------------------Infrastructure Functions---------------------------*/
/******************************************************************************/
extern unsigned short Ifx_Ssw_getCpuWatchdogPassword(Ifx_SCU_WDTCPU *watchdog);
extern unsigned short Ifx_Ssw_getSafetyWatchdogPassword(void);
extern void Ifx_Ssw_clearCpuEndinit(Ifx_SCU_WDTCPU *watchdog, unsigned short password);
extern void Ifx_Ssw_setCpuEndinit(Ifx_SCU_WDTCPU *watchdog, unsigned short password);
extern void Ifx_Ssw_clearSafetyEndinit(unsigned short password);
extern void Ifx_Ssw_setSafetyEndinit(unsigned short password);
extern void Ifx_Ssw_disableCpuWatchdog(Ifx_SCU_WDTCPU *watchdog, unsigned short password);
extern void Ifx_Ssw_enableCpuWatchdog(Ifx_SCU_WDTCPU *watchdog, unsigned short password);
extern void Ifx_Ssw_disableSafetyWatchdog(unsigned short password);
extern void Ifx_Ssw_enableSafetyWatchdog(unsigned short password);
extern void Ifx_Ssw_startCore(Ifx_CPU *cpu, unsigned int programCounter);
extern void Ifx_Ssw_setCpu0Idle(void);
extern void Ifx_Ssw_C_Init(void);
extern float Ifx_Ssw_getStmFrequency(void);

/*Endinit Functions*/
IFX_SSW_INLINE unsigned short Ifx_Ssw_getGlobalSafetyEndinitPasswordInline(void)
{
    /* Read Password from CON0 register
     * !!! NOTE: !!! when read bottom six bit of password are inverted so we have
     * to toggle them before returning password */

	unsigned short password = MODULE_SCU.SEICON0.B.EPW ^ 0x003F;
    return password;
}

IFX_SSW_INLINE void Ifx_Ssw_clearGlobalSafetyEndinitInline(unsigned short password)
{
    /* Clear EndInit Watch-dog*/
    MODULE_SCU.SEICON0.U = (0xFFFCU << 16U) | (password << IFX_SCU_SEICON0_EPW_OFF);

    Ifx_Ssw_NOP();
}

IFX_SSW_INLINE void Ifx_Ssw_setGlobalSafetyEndinitInline(unsigned short password)
{
    /* Set EndInit Watch-dog*/
    MODULE_SCU.SEICON0.U = (0xFFFCU << 16U) | (password << IFX_SCU_SEICON0_EPW_OFF) | (1 << IFX_SCU_SEICON0_ENDINIT_OFF);

    Ifx_Ssw_NOP();
}

IFX_SSW_INLINE unsigned short Ifx_Ssw_getCpuWatchdogPasswordInline(Ifx_SCU_WDTCPU *watchdog)
{
	unsigned short password;

    /* Read Password from CON0 register
     * !!! NOTE: !!! when read bottom six bit of password are inverted so we have
     * to toggle them before returning password */
    password  = watchdog->CON0.B.PW;
    password ^= 0x003F;

    return password;
}

IFX_SSW_INLINE unsigned short Ifx_Ssw_getSafetyWatchdogPasswordInline(void)
{
	unsigned short        password;
    Ifx_SCU_WDTS *watchdog = &MODULE_SCU.WDTS;

    /* Read Password from Safety WDT CON0 register
     * !!! NOTE: !!! when read bottom six bit of password are inverted so we have
     * to toggle them before returning password */
    password  = watchdog->CON0.B.PW;
    password ^= 0x003F;

    return password;
}

IFX_SSW_INLINE void Ifx_Ssw_clearCpuEndinitInline(Ifx_SCU_WDTCPU *watchdog, unsigned short password)
{
	if (watchdog->CON0.B.LCK)
    {
        /* see Table 1 (Password Access Bit Pattern Requirements) */
    	watchdog->CON0.U = (1 << IFX_SCU_WDTCPU_CON0_ENDINIT_OFF) |
    	    			    (0 << IFX_SCU_WDTCPU_CON0_LCK_OFF) |
    	    			    (password << IFX_SCU_WDTCPU_CON0_PW_OFF) |
    	    			    (watchdog->CON0.B.REL << IFX_SCU_WDTCPU_CON0_REL_OFF);
    }

    /* Clear ENDINT and set LCK bit in Config_0 register */
	watchdog->CON0.U = (0 << IFX_SCU_WDTCPU_CON0_ENDINIT_OFF) |
	    			    (1 << IFX_SCU_WDTCPU_CON0_LCK_OFF) |
	    			    (password << IFX_SCU_WDTCPU_CON0_PW_OFF) |
	    			    (watchdog->CON0.B.REL << IFX_SCU_WDTCPU_CON0_REL_OFF);

    /* Wait for a clock cycle */
    Ifx_Ssw_NOP();
}

IFX_SSW_INLINE void Ifx_Ssw_clearSafetyEndinitInline(unsigned short password)
{
	if (SCU_WDTS_CON0.B.LCK)
    {
        /* see Table 1 (Password Access Bit Pattern Requirements) */
    	SCU_WDTS_CON0.U = (1 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
			               (0 << IFX_SCU_WDTS_CON0_LCK_OFF) |
			               (password << IFX_SCU_WDTS_CON0_PW_OFF) |
   	    			       (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);
    }

    /* Clear ENDINT and set LCK bit in Config_0 register */
    SCU_WDTS_CON0.U = (0 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
    			      (1 << IFX_SCU_WDTS_CON0_LCK_OFF) |
    			      (password << IFX_SCU_WDTS_CON0_PW_OFF) |
       	    		  (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);

    /* Wait for a clock cycle */
    Ifx_Ssw_NOP();
}

IFX_SSW_INLINE void Ifx_Ssw_setCpuEndinitInline(Ifx_SCU_WDTCPU *watchdog, unsigned short password)
{
	if (watchdog->CON0.B.LCK)
	{
	    /* see Table 1 (Pass.word Access Bit Pattern Requirements) */
		watchdog->CON0.U = (1 << IFX_SCU_WDTCPU_CON0_ENDINIT_OFF) |
		    			    (0 << IFX_SCU_WDTCPU_CON0_LCK_OFF) |
		    			    (password << IFX_SCU_WDTCPU_CON0_PW_OFF) |
	   	    			    (watchdog->CON0.B.REL << IFX_SCU_WDTCPU_CON0_REL_OFF);
	}
	/* Set ENDINT and set LCK bit in Config_0 register */
	watchdog->CON0.U = (1 << IFX_SCU_WDTCPU_CON0_ENDINIT_OFF) |
			    	   (1 << IFX_SCU_WDTCPU_CON0_LCK_OFF) |
			    	   (password << IFX_SCU_WDTCPU_CON0_PW_OFF) |
		   	    	   (watchdog->CON0.B.REL << IFX_SCU_WDTCPU_CON0_REL_OFF);

    /* Wait for a clock cycle */
    Ifx_Ssw_NOP();
}


IFX_SSW_INLINE void Ifx_Ssw_setSafetyEndinitInline(unsigned short password)
{
	if (SCU_WDTS_CON0.B.LCK)
    {
        /* see Table 1 (Password Access Bit Pattern Requirements) */
    	SCU_WDTS_CON0.U = (1 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
			               (0 << IFX_SCU_WDTS_CON0_LCK_OFF) |
			               (password << IFX_SCU_WDTS_CON0_PW_OFF) |
	   	    			   (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);
    }

    /* Set ENDINT and set LCK bit in Config_0 register */
	SCU_WDTS_CON0.U = (1 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
				      (1 << IFX_SCU_WDTS_CON0_LCK_OFF) |
				      (password << IFX_SCU_WDTS_CON0_PW_OFF) |
		   	    	  (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);

    /* Wait for a clock cycle */
    Ifx_Ssw_NOP();
}

/*Add options to eliminate usage of stack pointers unnecessarily*/
#if defined(__GNUC__)
#pragma GCC optimize ("-O2")
#endif

IFX_SSW_INLINE unsigned char Ifx_Ssw_isApplicationReset(void)
{
	unsigned char returnVal;
	unsigned int tempValue= SCU_RSTSTAT.U;

    if ((tempValue & IFX_SSW_POWERONRESET_MASK) > 0)
    {
        returnVal = 0;
    }
    else if ((tempValue & IFX_SSW_APPLICATIONRESET_MASK) > 0)   // CB3 TP HSMA ??
    {
        // get the bit which is set at RSTSTAT (assumption: RSTSTAT register was cleared before and only one bit can be set)
        tempValue = tempValue & IFX_SSW_APPLICATIONRESET_MASK;
        tempValue = (SCU_RSTCON.U >> (31U - Ifx_Ssw_CLZ(tempValue))) & 3U;

        if (tempValue == 2)
        {
            returnVal = 1;
        }
        else
        {
            returnVal = 0;
        }
    }
    else if ((tempValue & (IFX_SCU_RSTSTAT_CB3_MSK << IFX_SCU_RSTSTAT_CB3_OFF)))
    {
        // CB3 reset is not configurable and is always application reset
        returnVal = 1;
    }
    else if (CPU0_KRST0.B.RSTSTAT != 0)   /*CPU0 KRST status */
    {
        returnVal = 1;
    }
    else
    {
        returnVal = 0;
    }
    return returnVal;
}
/*Restore the options to command line provided ones*/
#if defined(__GNUC__)
#pragma GCC reset_options
#endif

IFX_SSW_INLINE void Ifx_Ssw_initCSA(unsigned int *csaBegin, unsigned int *csaEnd)
{
	unsigned int k;
	unsigned int nxt_cxi_val = 0;
	unsigned int *prvCsa      = 0U;
	unsigned int *nxtCsa      = csaBegin;

    for (k = 0; k < (((unsigned int)csaEnd - (unsigned int)csaBegin) / 64); k++)
    {
        nxt_cxi_val = ((unsigned int)nxtCsa & (0XFU << 28)) >> 12 | ((unsigned int)nxtCsa & (0XFFFFU << 6)) >> 6;

        if (k == 0)
        {
        	Ifx_Ssw_MTCR(CPU_FCX, nxt_cxi_val);   /* store the new pcxi value to LCX */
        }
        else
        {
            *prvCsa = nxt_cxi_val;  /* Store null pointer in last CSA (= very first time!) */
        }

        prvCsa  = (unsigned int *)nxtCsa;
        nxtCsa += 16;           /* next CSA */
    }

    *prvCsa = 0;
    Ifx_Ssw_MTCR(CPU_LCX, nxt_cxi_val);   /* Last context save area is pointed in LCX to know if there is CSA depletion */
}

#endif /* IFXCPU_SSW_INFRA_H_ */
