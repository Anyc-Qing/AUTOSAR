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

/*lint -e845 LINT:OTHER: The | operator used used with 0 for readability */
/*lint -e522 MISRA:FALSE_POSITIVE:Asm functions that lacks side affects, but the have side affect [MISRA 2012 Rule 2.2, required] */
/*lint -esym(715,mpu_MAS0) MISRA:FALSE_POSITIVE:Asm functions that lacks side affects, but the have side affect [MISRA 2012 Rule 2.7, advisory] */

/* ----------------------------[includes]------------------------------------*/


#include "os_i.h"
#include "asm_ppc.h"
#include "mpc55xx.h"
#include "os_mm.h"
#include "os_mm_regs.h"
#include "Cpu.h"

#if (OS_SC3 == STD_ON ) || (OS_SC4 == STD_ON )

/* ----------------------------[private define]------------------------------*/

/* Instrcution regions */
#define REGION_I_0                  0U
#define REGION_I_1                  1U

/* Data Regions */
#define REGION_D_0                  0U
#define REGION_D_1                  1U
#define REGION_D_2                  2U
#define REGION_D_3                  3U
#define REGION_D_4                  4U
#define REGION_D_5                  5U

#define REGION_D_BSS                6U
#define REGION_D_DATA               7U

#define PREGION_1                   10U
#define PREGION_2                   11U
#define PREGION_3                   12U


#define CACHE_INHIBIT               1U
#define CACHE_ENABLED               0U


/* Register numbers */
#define MPU_CSR0_ID_LOCAL           1014
#define DMEMCTRL1_REG_ID_LOCAL      498

/* Local Mem (DMEM) is configured as 4 equally sized blocks.
 * Configuring DMEMCTL1 register with 10 for every segment for
 * both user and supervisor mode will enable  Memory protection
 * logic configured in MPU (via MAS) for the local memory.
 * Otherwise DMEM ctrl (Local memory) will bypass MPU
 */
#define DMEMCTRL1_REG_CONFIG        0xaaaaaaaaU

/* ----------------------------[private macro]-------------------------------*/


#define SHIFT_32(_val,_shift) ((uint32)(_val) << (uint32)(_shift))


#define MAS0_INST(_region)     \
              (SHIFT_32(1U, 31U) |          /* VALID = MPU entry is valid */    \
               SHIFT_32(2U, 28U) |          /* MPU select */                    \
               SHIFT_32(1U, 24U) |          /* INST = Inst Access */            \
               SHIFT_32(_region, 16U) |     /* ESEL = Entry select id is 0 */   \
               SHIFT_32(1U, 11U) |          /* UW = Enable user write */        \
               SHIFT_32(1U, 10U) |          /* SW = Enable supervisor write */  \
               SHIFT_32(1U, 9U) |           /* UX/UR = Enable user execute */   \
               SHIFT_32(1U, 8U) )           /* SX/SR = Enable supervisor execute */

#define MAS0_DATA(_region,_ci, _uw )    \
               (SHIFT_32( 1U, 31U) |         /* VALID = MPU entry is valid */    \
               SHIFT_32(2U, 28U) |          /* MPU select */                    \
               SHIFT_32((_region), 16U) |   /* ESEL = Entry select id is 0 */   \
               SHIFT_32((_uw), 11U) |       /* UW = Enable user write */        \
               SHIFT_32(1U, 10U) |          /* SW = Enable supervisor write */  \
               SHIFT_32(1U, 9U) |           /* UX/UR = Enable user execute */   \
               SHIFT_32(1U, 8U) |           /* SX/SR = Enable supervisor execute */ \
               SHIFT_32((_ci), 3U) )        /* 1 = Cache Inhibit */



/* ----------------------------[private typedef]-----------------------------*/


typedef struct {
    uint32 start;
    uint32 end;
    uint32 mas0;
} RegionType;


typedef struct {
    const RegionType *rPtr;
    uint32      rSize;
} RegionInfoType;


/* ----------------------------[private function prototypes]-----------------*/

extern uint8 __OS_START_SEC_shared_bss_shared[];
extern uint8 __OS_STOP_SEC_shared_bss_shared[];

extern uint8 __OS_START_SEC_shared_data_shared[];
extern uint8 __OS_STOP_SEC_shared_data_shared[];

static inline void setupRegion(const RegionType *pCfg, uint32 size );

/* ----------------------------[private variables]---------------------------*/

/*
 * @req SWS_Os_00083
 * The Operating System module shall allow non-trusted OS-Applications to write to their
 * assigned peripherals only (incl. reads that have the side effect of writing to a memory location
 */

const RegionType mpuInitRegion[] = {
    /* Internal Flash */
    {
        .start  = 0x00400000U,
        .end    = 0x01ffffffU,
        .mas0   = MAS0_INST( REGION_I_0 ),
    },

    /* System RAM */
    {
        .start  = 0x40000000U,
        .end    = 0x4005FFFFU,
        .mas0   = MAS0_DATA(REGION_D_0, CACHE_INHIBIT, 0U ),
    },
    /* Internal Flash, Data?!?!?*/
    {
        .start  = 0x00400000U,
        .end    = 0x01ffffffU,
        .mas0   = MAS0_DATA(REGION_D_1, CACHE_INHIBIT, 1U ),
    },
    /* PBRIDGE I/O */
    {
        .start  = 0xf8000000U,
        .end    = 0xffffffffU,
        .mas0   = MAS0_DATA(REGION_D_2, CACHE_INHIBIT, 1U ),
    },
    /*  Configure Local ram */
    {
        .start  = 0x50800000U,
        .end    = 0x5080FFFFU,
        .mas0   = MAS0_DATA(REGION_D_3, CACHE_INHIBIT, 0U ),
    },
    /*  .bss.shared */
    {
        .start  = (uint32)__OS_START_SEC_shared_bss_shared,
        .end    = (uint32)__OS_STOP_SEC_shared_bss_shared - 1U,
        .mas0   = MAS0_DATA(REGION_D_4, CACHE_INHIBIT, 1U ),
    },
    /*  .data.shared */
    {
        .start  = (uint32)__OS_START_SEC_shared_data_shared,
        .end    = (uint32)__OS_STOP_SEC_shared_data_shared - 1U,
        .mas0   = MAS0_DATA(REGION_D_5, CACHE_INHIBIT, 1U ),
    },
};

#if defined(CFG_SAFETY_PLATFORM)
const RegionType PRegionCfg_QM[] = {
    {
        .start  = (uint32)&CAN_0,
        .end    = (uint32)&CAN_1 - 1U,
        .mas0   = MAS0_DATA(PREGION_1, CACHE_INHIBIT, 1U ),
    },
    {
        .start  = (uint32)&MC_ME,
        .end    = (uint32)&MC_PCU  - 1U,
        .mas0   = MAS0_DATA(PREGION_2, CACHE_INHIBIT, 1U ),
    },
};


const RegionType PRegionCfg_A0[] = {
    {
        .start  = (uint32)&CAN_0,
        .end    = (uint32)&CAN_1  - 1U,
        .mas0   = MAS0_DATA(PREGION_1, CACHE_INHIBIT, 1U ),
    },
    {
        .start  = (uint32)&MC_ME,
        .end    = (uint32)&MC_PCU  - 1U,
        .mas0   = MAS0_DATA(PREGION_2, CACHE_INHIBIT, 1U ),
    },
};

RegionInfoType PRegionInfo[] =
{
        [APPLICATION_ID_OsApplication_A0].rPtr = PRegionCfg_A0,
        [APPLICATION_ID_OsApplication_A0].rSize = sizeof(PRegionCfg_A0)/sizeof(PRegionCfg_A0[0]),

        [APPLICATION_ID_OsApplication_QM].rPtr = PRegionCfg_QM,
        [APPLICATION_ID_OsApplication_QM].rSize = sizeof(PRegionCfg_QM)/sizeof(PRegionCfg_QM[0]),

};
#else
#include "os_mpu_peripheral.h"
#endif

/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/


void updateMPU(uint32 mpu_MAS0, uint32 mpu_MAS1, uint32 mpu_MAS2, uint32 mpu_MAS3) {
    set_spr(SPR_MAS0, mpu_MAS0);
    set_spr(SPR_MAS1, mpu_MAS1);
    set_spr(SPR_MAS2, mpu_MAS2);
    set_spr(SPR_MAS3, mpu_MAS3);

    asm volatile(" .long 0x7e0007a4"); //asm volatile(" mpuwe");
    asm volatile(" .long 0x7e00046c"); //asm volatile(" mpusync");
}

#if 0 // Enable when MPU read required
void readMPU (void) {
    asm volatile(" .long 0x7e00046c"); //asm volatile(" mpusync");
    asm volatile(" .long 0x7E000764"); //asm volatile ("mpure");
    asm volatile(" .long 0x7e00046c"); //asm volatile(" mpusync");
}
#endif


static inline void setupRegion(const RegionType *pCfg, uint32 size )
{
    uint32 mpuMAS0 = 0u;
    uint32 mpuMAS1 = 0u;
    uint32 mpuMAS2 = 0u;
    uint32 mpuMAS3 = 0u;
    for( uint8 i = 0; i < size; i++ ) {
        mpuMAS0 = pCfg[i].mas0;
        mpuMAS1 = 0x0;         // TID=0, global
        mpuMAS2 = pCfg[i].end;
        mpuMAS3 = pCfg[i].start;

        updateMPU(mpuMAS0, mpuMAS1, mpuMAS2, mpuMAS3);  // Writing to MAS, MPU registers
    }
}


/* @req ARC_SWS_OSAL_00015 */
void Os_MMInit( void ) {

    /* Enable protection logic for local RAM */
    set_dcr (DMEMCTRL1_REG_ID_LOCAL, DMEMCTRL1_REG_CONFIG);

    setupRegion( mpuInitRegion,sizeof(mpuInitRegion)/sizeof(mpuInitRegion[0]));

    // enable MPU
    set_spr(MPU_CSR0_ID_LOCAL, 0x1U);
    isync();
}

#if defined(CFG_SAFETY_PLATFORM)
void OS_MMSetPerRegions( void ) {
    switch(GetApplicationID()) {
          case APPLICATION_ID_OsApplication_QM:
              setupRegion(PRegionCfg_QM,sizeof(PRegionCfg_QM)/sizeof(PRegionCfg_QM[0]));
              break;
          case APPLICATION_ID_OsApplication_A0:
              setupRegion(PRegionCfg_A0,sizeof(PRegionCfg_A0)/sizeof(PRegionCfg_A0[0]));
              break;
          default:
              break;
      }
}
#endif

/* @req ARC_SWS_OSAL_00016 */
void Os_MMSetApplUserMode(  const OsAppVarType *aP ) {

    uint32 mpuMAS0;
    uint32 mpuMAS1;
    uint32 mpuMAS2;
    uint32 mpuMAS3;


    /* @req SWS_Os_00086 */
    /* @req SWS_Os_00198 */
    /* @req SWS_Os_00207 */
    /* @req SWS_Os_00356 */
    /* User Mode, .data */
    mpuMAS0 = MAS0_DATA(REGION_D_DATA, CACHE_ENABLED, 1U );
    mpuMAS1 = 0x0U;         // TID=0, global
    mpuMAS3 = aP->regs[MPU0_REG_TASK_DATA_START]; // Lower bound
    mpuMAS2 = aP->regs[MPU0_REG_TASK_DATA_END];   // Upper bound
    updateMPU(mpuMAS0, mpuMAS1, mpuMAS2, mpuMAS3);  // Writing to MAS, MPU registers

    /* @req SWS_Os_00355 */
    /* User Mode, .bss */
    mpuMAS0 = MAS0_DATA(REGION_D_BSS, CACHE_ENABLED, 1U );
    mpuMAS1 = 0x0U;         // TID=0, global
    mpuMAS3 = aP->regs[MPU0_REG_TASK_BSS_START]; // Lower bound
    mpuMAS2 = aP->regs[MPU0_REG_TASK_BSS_END];   // Upper bound
    updateMPU(mpuMAS0, mpuMAS1, mpuMAS2, mpuMAS3);  // Writing to MAS, MPU registers

    OS_MMSetPerRegions();

}

/**
 * @breif Set user mode for and ISR
 *
 * @param isrPtr    Pointer to a task
 */
/* @req ARC_SWS_OSAL_00017 */
void Os_MMSetUserModeIsr( const OsIsrVarType *isrPtr  ) {
    const OsAppVarType *aP = Os_ApplGet(isrPtr->constPtr->appOwner);
    if( aP->trusted == 0) {
    	Os_MMSetApplUserMode(aP);
    }
}


/* @req ARC_SWS_OSAL_00018 */
void Os_MMSetUserMode( const OsTaskVarType *pcbPtr ) {
    const OsAppVarType *aP = Os_ApplGet(pcbPtr->constPtr->applOwnerId);

    if( aP->trusted == 0) {
        Os_MMSetApplUserMode(aP);
    }
}




boolean Os_MMValidPerAddressRange( AreaIdType area, uint32 addr, uint32 size ) {
    boolean rv = FALSE;
    ApplicationType id = GetApplicationID();
    const RegionType *rPtr;

    rPtr =  PRegionInfo[id].rPtr;

    /* Peripheral regions, check addr */
    for( uint8 i = 0; i < PRegionInfo[id].rSize; i++ ) {

        if( (addr >= rPtr->start) && ((addr+size) < rPtr->end) ) {
            rv = TRUE;
            break;
        }
    }

    return rv;
}



#endif /* (OS_SC3 == STD_ON ) || (OS_SC4 == STD_ON ) */
