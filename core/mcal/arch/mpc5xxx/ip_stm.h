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

#ifndef IP_STM_H_
#define IP_STM_H_


/* ============================================================================
   =============================== Module: STM ================================
   ============================================================================ */

struct STM_tag {
  union {                              /* STM Control Register */
    vuint32_t R;
    struct {
      vuint32_t  :16;
      vuint32_t CPS:8;                 /* Counter Prescaler. */
      vuint32_t  :6;
      vuint32_t FRZ:1;                 /* Freeze. */
      vuint32_t TEN:1;                 /* Timer counter Enabled. */
    } B;
  } CR;

  union {                              /* STM Count Register */
    vuint32_t R;
    struct {
      vuint32_t CNT:32;                /* Timer count value used as the time base for all channels. */
    } B;
  } CNT;

  uint8_t STM_reserved0[8];
  struct {
    union {                            /* STM Channel Control Register */
      vuint32_t R;
      struct {
        vuint32_t  :31;
        vuint32_t CEN:1;               /* Channel Enable */
      } B;
    } CCR;
    union {                            /* STM Channel Interrupt Register */
      vuint32_t R;
      struct {
        vuint32_t  :31;
        vuint32_t CIF:1;               /* Channel Interrupt Flag */
      } B;
    } CIR;
    union {                            /* STM Channel Compare Register */
      vuint32_t R;
      struct {
        vuint32_t CMP:32;              /* Compare value for channel n. */
      } B;
    } CMP;
    uint8_t CHANNEL_reserved0[4];
  } CHANNEL[4];
};

#endif /* IP_STM_H_ */
