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
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/* ----------------------------[includes]------------------------------------*/
#include "os_i.h"
#include "isr.h"
#include "irq_types.h"
#include "hw_tms570.h"
/* ----------------------------[private define]------------------------------*/

#define GPIO_BASE 0xFFF7BC00U
#define GPIO_REG (*(GPIO_regs *)GPIO_BASE)
#define REG_0 (0U)
#define REG_1 (1U)
#define REG_2 (2U)
#define REG_3 (3U)
#define BIT_MASK_BYTE  (0xffU)
#define BYTE_MOVE      (8U)
#define FIQ_PRIORITY   (31U)
#define SS_INT_REQ_KEY (0x75U)
#define PIN_1 (0x001U)
#define PIN_2 (0x002U)

/*lint -esym(950, __asm) MISRA:FALSE_POSITIVE:keyword asm for assembly instruction execution:
 *[MISRA 2012 Directive 2.1, required], [MISRA 2012 Rule 1.1, required], [MISRA 2012 Rule 1.2, advisory] */
/*lint -save -e923 -e9027 -e9032 -e701 -e754 -e9053 -e9031 MISRA:FALSE_POSITIVE:Allow Pointer cast operation and bitwise operation:
 *[MISRA 2012 Rule 11.1, required], [MISRA 2012 Rule 11.4, advisory], [MISRA 2012 Rule 11.6, required], [MISRA 2012 Rule 10.1, required], [MISRA 2012 Rule 10.7, required],
 *[MISRA 2012 Rule 12.2, required], [MISRA 2012 Rule 10.6, required], [MISRA 2012 Directive 4.7, required], [MISRA 2012 Rule 17.7, required]*/
/*lint -save -e451 -e9019 -e9044 -e715 -e534 -e729 MISRA:FALSE_POSITIVE:Declaration and variable use:
 *[MISRA 2012 Directive 4.10, required], [MISRA 2012 Rule 20.1, advisory], [MISRA 2012 Rule 17.8, advisory], [MISRA 2012 Rule 2.7, advisory] */
/*lint -save -e904 MISRA:FALSE_POSITIVE:Intermediate return to avoid multiple conditions: [MISRA 2012 Rule 15.5, advisory] */

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
typedef volatile struct  {
    uint32 GIOGCR0;    /* 00h GIO Global Control Register Section 25.5.1 */
    uint32 : 32;  /* res */
    uint32 GIOINTDET;  /* 08h GIO Interrupt Detect Register Section 25.5.2 */
    uint32 GIOPOL;     /* 0Ch GIO Interrupt Polarity Register Section 25.5.3 */
    uint32 GIOENASET;  /* 10h GIO Interrupt Enable Set Register Section 25.5.4.1 */
    uint32 GIOENACLR;  /* 14h GIO Interrupt Enable Clear Register Section 25.5.4.2 */
    uint32 GIOLVLSET;  /* 18h GIO Interrupt Priority Set Register Section 25.5.5.1 */
    uint32 GIOLVLCLR;  /* 1Ch GIO Interrupt Priority Clear Register Section 25.5.5.2 */
    uint32 GIOFLG;     /* 20h GIO Interrupt Flag Register Section 25.5.6 */
    uint32 GIOOFF1;    /* 24h GIO Offset 1 Register Section 25.5.7 */
    uint32 GIOOFF2;    /* 28h GIO Offset 2 Register Section 25.5.8 */
    uint32 GIOEMU1;    /* 2Ch GIO Emulation 1 Register Section 25.5.9 */
    uint32 GIOEMU2;    /* 30h GIO Emulation 2 Register Section 25.5.10 */
    uint32 GIODIRA;    /* 34h GIO Data Direction Register Section 25.5.11 */
    uint32 GIODINA;    /* 38h GIO Data Input Register Section 25.5.12 */
    uint32 GIODOUTA;   /* 3Ch GIO Data Output Register Section 25.5.13 */
    uint32 GIODSETA;   /* 40h GIO Data Set Register Section 25.5.14 */
    uint32 GIODCLRA;   /* 44h GIO Data Clear Register Section 25.5.15 */
    uint32 GIOPDRA;    /* 48h GIO Open Drain Register Section 25.5.16 */
    uint32 GIOPULDISA; /* 4Ch GIO Pull Disable Register Section 25.5.17 */
    uint32 GIOPSLA;    /* 50h GIO Pull Select Register Section 25.5.18 */
    uint32 GIODIRB;    /* 54h GIO Data Direction Register Section 25.5.11 */
    uint32 GIODINB;    /* 58h GIO Data Input Register Section 25.5.12 */
    uint32 GIODOUTB;   /* 5Ch GIO Data Output Register Section 25.5.13 */
    uint32 GIODSETB;   /* 60h GIO Data Set Register Section 25.5.14 */
    uint32 GIODCLRB;   /* 64h GIO Data Clear Register Section 25.5.15 */
    uint32 GIOPDRB;    /* 68h GIO Open Drain Register Section 25.5.16 */
    uint32 GIOPULDISB; /* 6Ch GIO Pull Disable Register Section 25.5.17 */
    uint32 GIOPSLB;    /* 70h GIO Pull Select Register Section 25.5.18 */
} GPIO_regs;
/* ----------------------------[private function prototypes]-----------------*/
void setupPinsForIrq( void );
/* ----------------------------[private variables]---------------------------*/
#define Irq_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <MemMap.h>
uint8 pinSetup = 0;
#define Irq_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <MemMap.h>

uint32 prioMask[32][4];   /* 4 ISR registers, 4*32=128 channels */
uint16 Irq_StackPrio[16] ;
uint16 Irq_Index =  0;
IrqFuncType Irq_VectorTable[NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS];

/* ----------------------------[private functions]---------------------------*/

static inline void Irq_Setup( void ) {
    vimREG->FIRQPR0 = 0x0;
    vimREG->FIRQPR1 = 0x0;
    vimREG->FIRQPR2 = 0x0;
    vimREG->FIRQPR3 = 0x0;
}

/**
 * Enable pin interrupt
 *
 * @param pin
 * @param type
 */
static void enablePinInt( uint32 pin, uint8 type ) {
    GPIO_REG.GIOINTDET &= ~(1U<<pin);	/* 0-either falling or rising edge, 1 -both */
    GPIO_REG.GIOPOL |= (1<<pin);		/* 0- falling, 1- Rising Edge */
    if( type == 1) {
        GPIO_REG.GIOLVLSET |= (1U<<pin);
    } else {
        GPIO_REG.GIOLVLSET &= ~(1U<<pin);
    }
    GPIO_REG.GIOFLG |= (1U<<pin); 		/* Clear interrupt request */
    GPIO_REG.GIOENASET |= (1U<<pin);		/* 1 - enabled */
}

static void enablePinOutA( uint32 pin ) {
    GPIO_REG.GIODIRA |= (1U<<pin);		/* 1-out */
    GPIO_REG.GIOPDRA &= ~(1U<<pin);		/* 0-no open drain, 1-open drain */
}

/**
 * Setup pins to generate IRQ on write to pin.
 *
 * Here we use GIOA[0] and GIOA[1] to generate real interrupts to the CPU.
 * GIOA[0] connected to GIO interrupt A (vector 9)
 * GIOA[1] connected to GIO interrupt B (vector 23)
 */

void setupPinsForIrq( void ) {
    /* PENA and clocks already running from MCU */

    /* Normal state */
    GPIO_REG.GIOGCR0 = 1;

    /* Out pins */
    enablePinOutA(0);
    enablePinOutA(1);
    enablePinInt(0, 1);			/* Connect to Level A (vector 9 )*/
    enablePinInt(1, 0 );		/* Connect to Level B (vector 23 )*/
}

/**
 *
 * @param pin
 * @param level
 */
static void SetOutputA( uint8 pin, uint8 level ) {
    if( level == 0) {
        GPIO_REG.GIODCLRA |= (1<<pin);
    } else {
        GPIO_REG.GIODOUTA |= (1<<pin);
    }
    __asm volatile(" isb");
}

/* ----------------------------[public functions]----------------------------*/

/* @req ARC_SWS_OSAL_00019 */
void Irq_Init( void ) {
    Irq_Setup();
}

/**
 *
 * Interrupt channels can be found in the datasheet (not RM) under "Interrupt Request Assignments"
 *
 * @param stack_p Ptr to the current stack.
 */
void *Irq_Entry( void *stack_p ) {

    uint16 channel = vimREG->IRQINDEX;

    if( channel == 0 ) {
        /* No Pending Interrupt */
        return stack_p;
    }

    /* Adjust to real channel, IRQINDEX value = VIM Channel+1 */
    channel -= 1;

    /* Check for software interrupt */
    if( channel == SSI ) {
        /* First get what software register caused the interrupt */
        uint32 reg = systemREG1->SSIVEC;		/* also clears SSI_FLAG */
        if( (reg & BIT_MASK_BYTE) == 0 ) {
            /* Nothing pending....*/
            return stack_p;
        }
        /* bit 15-8 of SSIVEC (software interrupt vector register) contains
         * data key value of the interrupt source.
         */
        channel = (reg >> BYTE_MOVE) & BIT_MASK_BYTE;
    }

    Os_Isr(stack_p, channel );

    return stack_p;
}


/**
 * @req ARC_SWS_OSAL_00031
 * @param priority The priority of the ISR we are about to start
 */
void Irq_SOI3( uint8 priority ) {
    /* Disable lower prio interrupts */
	++Irq_Index;
    Irq_StackPrio[Irq_Index] = priority; 	/* save prio */

    /* It seems that we need to clear the enable of the interrupt here
     * because not doing it and enabling interrupts will cause a Data Exception
     * In the same time we must also set the priority mask according to the
     * priority of this ISR.
     * */

    vimREG->REQENACLR0 = (vimREG->REQENACLR0 ^ prioMask[priority][REG_0]);
    vimREG->REQENACLR1 = (vimREG->REQENACLR1 ^ prioMask[priority][REG_1]);
    vimREG->REQENACLR2 = (vimREG->REQENACLR2 ^ prioMask[priority][REG_2]);
    vimREG->REQENACLR3 = (vimREG->REQENACLR3 ^ prioMask[priority][REG_3]);
}

/* @req ARC_SWS_OSAL_00027 */
void Irq_EOI( sint16 vector ) {
    (void)vector; /* This architecture does not use vector argument. */
    /* Enable higher prio interrupts (more interrupts )  */
    --Irq_Index;
    vimREG->REQENASET0 = prioMask[Irq_StackPrio[Irq_Index]][REG_0];
    vimREG->REQENASET1 = prioMask[Irq_StackPrio[Irq_Index]][REG_1];
    vimREG->REQENASET2 = prioMask[Irq_StackPrio[Irq_Index]][REG_2];
    vimREG->REQENASET3 = prioMask[Irq_StackPrio[Irq_Index]][REG_3];

}

/**
 *
 * @param func
 * @param vector
 * @param type
 * @param priority
 * @param core
 *
 * Default VIM Channel interrupt
 * Priority: Low Channel = High Priority
 *
 * @req ARC_SWS_OSAL_00025
 */
/* @req ARC_SWS_OSAL_00025 */
void Irq_EnableVector2( IrqFuncType func,  sint16 vector, uint16 type,  uint8 priority, sint32 core ) {

    if (vector < NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS) {

        if( type == ISR_TYPE_1 ) {
            /* don't mask FIQs */
            priority = FIQ_PRIORITY;
        }

        /* Priority is from 0 to 31, 0 = lowest, 31-highest - priority
         * The mask should be set to on all lower prio ISRs.
         * E.g. ISR_A (vector = 1, prio = 1), ISR_B (vector = 2, prio = 2)
         * ISA_A= prioMask[0][0]=0b0010
         * ISA_B= prioMask[0][0]=0b0110, prioMask[1][0]=0b0100
         * These bits are used to clear interrupts individually,
         * i.e ISA_B is running, ISA_A interrupt bit is cleared, because ISA_A is lower priority.
         * Irq_SOI3 and Irq_EOI does this enabling and clearing low priority interrupt bits.
         * */
        for(uint8 i=0; i < priority ; i++  ) {
            prioMask[i][vector/32] |= (1 << (vector%32));
        }

        /* Assume this is done in non-interrupt context, set to lowest prio */
        vimREG->REQENASET0 = prioMask[0][REG_0];
        vimREG->REQENASET1 = prioMask[0][REG_1];
        vimREG->REQENASET2 = prioMask[0][REG_2];
        vimREG->REQENASET3 = prioMask[0][REG_3];

        /* ISR_TYPE_1 is FIQ interrupt so set that.*/
        if( type == ISR_TYPE_1 ) {
            volatile uint32 *p = (&vimREG->FIRQPR0);
            /*lint -e{661,662} MISRA:FALSE_POSITIVE:Accessing VIM channel list: [MISRA 2012 Rule 18.1, required] */
            p[vector/32] |= (1 << (vector%32));
            Irq_VectorTable[vector] = func;
        }

    } else {
        /* Invalid vector! */
        ASSERT(0);
    }
}


/**
 * Generates a soft interrupt
 * @req ARC_SWS_OSAL_00020
 *
 * Note! This implementation uses real HW interrupts
 * for vector 9 and 23
 *
 * @param vector
 */
void Irq_GenerateSoftInt( IrqType vector ) {
    imask_t flags;

    if( pinSetup == 0 ) {
#if (OS_SC1 == STD_ON) || (OS_SC2 == STD_ON)
    	setupPinsForIrq();
#endif

        pinSetup = 1;
    }

    Irq_Save(flags);
    if( vector == DIO_LEVEL_0) {
        SetOutputA(0,1);
        SetOutputA(0,0);
    } else if (vector == DIO_LEVEL_1 ) {
        SetOutputA(1,1);
        SetOutputA(1,0);
    } else if (vector == RESERVED ) { /* fake vector */
        SetOutputA(2,1);
        SetOutputA(2,0);
    } else {
        /* Use software interrupt for the rest */
        systemREG1->SSIR1 = (SS_INT_REQ_KEY << BYTE_MOVE) | vector;
    }
    Irq_Restore(flags);
}

/* @req ARC_SWS_OSAL_00021 */
void Irq_AckSoftInt( IrqType vector ) {
    if( vector == DIO_LEVEL_0) {
        GPIO_REG.GIOFLG = PIN_1;	/* GPIOA[0] */
    } else if (vector == DIO_LEVEL_1 ) {
        GPIO_REG.GIOFLG = PIN_2;	/* GPIOA[1] */
    } else if (vector == RESERVED ) { /* fake vector */
    } else {
        systemREG1->SSIVEC;			/* SSI */
    }
}

