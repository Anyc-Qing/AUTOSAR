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

#ifndef MCAL_PWM_SRC_PWM_HW_TAUD_H_
#define MCAL_PWM_SRC_PWM_HW_TAUD_H_


#if defined(CFG_RH850F1L)
#define TAUD_BASE    0xFFE20000UL /* TAUD0 */
#else
#error CPU not defined
#endif

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/

/*lint --e{754} */
struct TAUD_reg {
    struct {
        uint16 R;
        uint16 pad;
    } CDRm[16];

    uint16 TOL;                                            /* TOL              */
    uint8  dummy99[2];                                     /* Reserved         */
    uint16 RDT;                                            /* RDT              */
    uint8  dummy100[2];                                    /* Reserved         */
    const uint16 RSF;                                      /* RSF              */
    uint8  dummy101[2];                                    /* Reserved         */
    uint16 TRO;                                            /* TRO              */
    uint8  dummy102[2];                                    /* Reserved         */
    uint16 TME;                                            /* TME              */
    uint8  dummy103[2];                                    /* Reserved         */
    uint16 TDL;                                            /* TDL              */
    uint8  dummy104[2];                                    /* Reserved         */
    uint16 TO;                                             /* TO               */
    uint8  dummy105[2];                                    /* Reserved         */
    uint16 TOE;                                            /* TOE              */
    uint8  dummy106[34];                                   /* Reserved         */

    struct {
        uint16 R;
        uint16 pad;
    } CNTm[16];

    struct {
        uint16 R;
        uint16 pad;
    } CMURm[16];

    uint8  dummy11[64];

    struct {
        uint16 R;
        uint16 pad;
    } CSRm[16];

    struct {
        uint16 R;
        uint16 pad;
    } CSCm[16];

    const uint16 TE;                                       /* TE               */
    uint8  dummy171[2];                                    /* Reserved         */
    uint16 TS;                                             /* TS               */
    uint8  dummy172[2];                                    /* Reserved         */
    uint16 TT;                                             /* TT               */
    uint8  dummy173[54];                                   /* Reserved         */

    struct {
        uint16 R;
        uint16 pad;
    } CMORm[16];

    uint16 TPS;                                            /* TPS              */
    uint8  dummy190[2];                                    /* Reserved         */
    uint8  BRS;                                            /* BRS              */
    uint8  dummy191[3];                                    /* Reserved         */
    uint16 TOM;                                            /* TOM              */
    uint8  dummy192[2];                                    /* Reserved         */
    uint16 TOC;                                            /* TOC              */
    uint8  dummy193[2];                                    /* Reserved         */
    uint16 TDE;                                            /* TDE              */
    uint8  dummy194[2];                                    /* Reserved         */
    uint16 TDM;                                            /* TDM              */
    uint8  dummy195[2];                                    /* Reserved         */
    uint16 TRE;                                            /* TRE              */
    uint8  dummy196[2];                                    /* Reserved         */
    uint16 TRC;                                            /* TRC              */
    uint8  dummy197[2];                                    /* Reserved         */
    uint16 RDE;                                            /* RDE              */
    uint8  dummy198[2];                                    /* Reserved         */
    uint16 RDM;                                            /* RDM              */
    uint8  dummy199[2];                                    /* Reserved         */
    uint16 RDS;                                            /* RDS              */
    uint8  dummy200[2];                                    /* Reserved         */
    uint16 RDC;                                            /* RDC              */
    uint8  dummy201[34];                                   /* Reserved         */
    uint8  EMU;                                            /* EMU              */
};


/*lint -e{923} */
struct TAUD_reg * Pwm_HwReg = ((struct TAUD_reg *) (TAUD_BASE));


#endif /* MCAL_PWM_SRC_PWM_HW_TAUD_H_ */
