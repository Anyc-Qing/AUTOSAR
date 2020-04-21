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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570*/

/** @file Wdg_Hw_tms570.c
 *  This file contains the TMS570 hardware specific implementation of the API's.
 */
/** \addtogroup Mcal
 * @brief This is the major Mcal folder
 *
 *  This group is for the TMS570 Mcal
 *  @{
 */

/** \addtogroup Wdg
 *  This is the TMS570 Mcal Wdg Group
 *  @{
 */

#include "Wdg.h"
#include "Wdg_Internal.h"
#include "Wdg_Hw_tms570.h"
#include "Wdg_MemMap.h"
#include "SchM_Wdg.h"
#include "isr.h"
#include "irq_tms570.h"
#include "timer_rti.h"
#include "Mcu.h"

/** @req SWS_Wdg_00111 Optional interfaces: Dem_SetEventStatus, Det_ReportError*/
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM) || defined (WDG_USE_DEM)
#include "Dem.h"
#endif

#define TWO_TO_POWER13        8192

#define WDG_WRITE32(_a1, _a2, _a3)      /*lint -save -e9005 -e929 MISRA:STANDARDIZED_INTERFACE: WritePeripheralXX does not have volatile in API  */ \
                    WritePeripheral32(_a1, (uint32 *)_a2, _a3)     /*lint -restore */

/* ----------------------------[Static Variable]---------------*/
/**
 * @brief   Wdg_TriggerCounter - trigger counter, it specifies in the next N ms the watchdog should be triggered.
 *             It is used in Wdg_Hw_SetTriggerCondition, Wdg_Hw_KickWdg.
 */

#define WDG_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Wdg_MemMap.h"
static volatile uint32 Wdg_TriggerCounter = 0;
#define WDG_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Wdg_MemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

/**
 * @brief   WdgConfigPtr - Pointer to configuration set.
 */
#define WDG_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Wdg_MemMap.h"
static const Wdg_ConfigType* WdgConfigPtr;
#define WDG_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Wdg_MemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/


/* ----------------------------[Function Prototype]----------*/
ISR( Wdg_Isr);

/* SWS_Wdg_00055 -na The Wdg module for an external watchdog driver shall have source code that is independent of the microcontroller platform. */

/* SWS_Wdg_00079 -na The code file structure shall not be defined within this specification completely. */

/* SWS_Wdg_00169 -na If more than one watchdog driver instance exists on an ECU (namely an external and an internal one) the implementer shall provide unique code
 * file names by expanding the names according to SRS_BSW_00347. */

/* SWS_Wdg_00170 -na If more than one watchdog driver instance exists on an ECU (namely an external and an internal one) the implementer shall provide
 * unique header file names by expanding the names according to SRS_BSW_00347. */

/* SWS_Wdg_00034 -na The start address of the watchdog trigger routine shall be statically configurable to a fixed memory location by the user.
 *
 * SWS_Wdg_00040 -na If interrupts have to be disabled in order to ensure data consistency, this shall be done by using BSW scheduler functionality if possible.
 * The internal watchdog driver (because it belongs to MCAL) may also directly disable interrupts – see SRS_BSW_00429. */
/* SWS_Wdg_00168 -na  Depending on a static configuration (see ECUC_Wdg_00147), the code of the Wdg module is executed either from ROM or from RAM. */

/* SWS_Wdg_00076 -na To access the external watchdog hardware, the corresponding Wdg module instance shall use the functionality and
 * API of the corresponding handler or driver, e.g. the SPI handler or DIO driver.
 *
 * SWS_Wdg_00162 -na The routine servicing an external watchdog shall be implemented by usage of an own internal hardware timer to be independent from
 * other peripherals or by using a GPT driver callback
 *
 * SWS_Wdg_00077 -na A Wdg module for an external watchdog shall satisfy the same functional requirements and offer the same functional scope as a
 * Wdg module for an internal watchdog. Hence their respective APIs are semantically identical. */

/* SWS_Wdg_00172 -na If more than one watchdog driver instance exits on an ECU (namely an external and an internal one) the API names and instance specific
 * type names specified in this chapter shall be made unique by expansion according to SRS_BSW_00347.
 *
 * SWS_Wdg_00175 -na These requirements are not applicable to this specification. */
/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors if WDG_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[in] _rvPtr - Returns the validity of the expression provided
 */
static inline void validate(boolean exp, uint8 apiid, uint8 errid, Std_ReturnType* _rvPtr) {
    if ((E_OK == *_rvPtr) && (exp == FALSE)) {
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError(WDG_MODULE_ID, 0, apiid, errid);
#endif
        *_rvPtr = E_NOT_OK;
    }
}

/* -------------------------[Function Implementation]----------*/
/**
 * @brief   This function calculates: for certain N us, how many ticks(rti clock frequency)
 * are there. This is used to write the microcontroller RTICOMPx register.
 * For example: the TMS570 watchdog is serviced each 1ms. This function will calculate how many ticks are there
 * in 1ms.
 * @param[in]    _us - microseconds
 * @param[in]    _timer_freq - RTI timer clock frequency
 * @retval    Value to be written to RTICOMPx register.
 */
static inline uint32 Wdg_Arc_Us2Ticks(uint32 _us, uint32 _timer_freq) {
    return ((_us) * (_timer_freq / 1000)) / 1000uL;
}

/* @brief TMS570 hardware specific implementation of Wdg_SetMode
 *  @param[in] Mode - mode that watchdog should be switched into
 */
Std_ReturnType Wdg_Hw_SetMode(WdgIf_ModeType Mode) {
    Std_ReturnType validate_rv = E_OK;

    /** @req SWS_Wdg_00018
     * When development error detection is enabled for the Wdg module: The function Wdg_SetMode shall set the Wdg module’s state to WDG_BUSY
     * during its execution (indicating, that the module is busy) and shall reset the Wdg module’s state to WDG_IDLE as last operation before it
     * returns to the caller.
     */

    /* The watchdog has only one mode which is fast. It also has an OFF mode
     * but once set to FAST it cannot go back
     */
    validate((boolean) ((Mode != WDGIF_SLOW_MODE) && (Mode != WDGIF_OFF_MODE)), WDG_SET_MODE_SERVICE_ID, WDG_E_PARAM_MODE, &validate_rv);

    uint32 dwdprld;            // holds DWDPRLD register value

    /** @req SWS_Wdg_00160 The function Wdg_SetMode shall switch the watchdog driver from the current watchdog mode into the mode given by the argument Mode.*/
    dwdprld = calcWatchdogTimeout(WdgConfigPtr->Wdg_ModeConfig->WdgSettingsFast->period);
    /** @req SWS_Wdg_00145
     * The Wdg_SetMode function shall reset the watchdog timeout counter based on the new watchdog mode i.e.
     * the timeout frame remaining shall be recalculated based on a changed trigger period.
     */
    rtiREG1->DWDPRLD = dwdprld;/*lint !e923 MISRA:HARDWARE_ACCESS:cast fron unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
    /* Set the window size. Acts as timeout watchdog if window size == 100%. */
    rtiREG1->WWDSIZECTRL = WDG_WINDOW_100_SETTING; /*lint !e923 MISRA:HARDWARE_ACCESS:cast fron unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */

    return validate_rv;
}

/* @brief Calculate the timeout for the watchdog hardware, the value will be written to DWDPRLD register
 *  @param[in] period - The timeout in Hz
 *  @retval    Value to be written to DWDPRLD.
 */
uint32 calcWatchdogTimeout(uint16 period) {
    /*
     * According to TMS570LS1227 manual, section 13.2.5.1 and
     * TMS570LC4357 manual, section 17.2.5.1,
     * the watchdog counter expiration time T is:
     *
     *                         13
     * T = (DWDPRLD + 1) * 2   / RTICLK
     *
     * DWDPRLD is the value in range 0..4095 that is stored in a control register
     *
     * From that we calculate:
     *
     * DWDPRLD = (T * RTICLK / 2^13) - 1
     */
    float64 seconds = (1.0 / period);
    uint32 rticlk = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_RTICLK);
    float64 dwdprld = (seconds * rticlk / TWO_TO_POWER13) - 1;
    return (uint32) dwdprld;
}

/* @brief Writes the WDKEY register and decreases trigger counter value.
 *     It is called in interrupt handler. After writting key  WDG_KEY_ONE followed by WDG_KEY_TWO, watchdog counter will be refreshed.
 */
void Wdg_Hw_KickWdg(void) {
    /*lint --e{923} MISRA:HARDWARE_ACCESS:cast fron unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
    (void)WDG_WRITE32(0u,&rtiREG1->INTFLAG,(1uL << WDG_RTICLK_CMP_INDEX));    // clear interrupt
    /** @req:TMS570 4.1.2|4.3.0/SWS_Wdg_00134 If the trigger counter is greater than zero, the watchdog servicing routine shall decrement the trigger counter and trigger the hardware watchdog.*/
    /** @req:TMS570 4.1.2|4.3.0/SWS_Wdg_00135 If the trigger counter has reached zero, the watchdog servicing routine shall do nothing. */
    if (Wdg_TriggerCounter > 0) {
        --Wdg_TriggerCounter;
        /* The watchdog is serviced by two separate write operations
         * with constant magic byte sequences. */
        /** @req SWS_Wdg_00093
         * If the watchdog hardware requires an activation code which can be configured or changed, the Wdg Driver shall handle the activation code internally. */
        /* SWS_Wdg_00094 -na
         * If the watchdog hardware requires an activation code which can be configured or changed, the trigger cycle of the Wdg Driver shall be
         * defined with a value so that updating the activation code by the watchdog hardware can be guaranteed
         *
         * SWS_Wdg_00095 -na
         * If the watchdog hardware requires an activation code which can be configured or changed and the initial activation code can be configured,
         * the activation code shall be provided in the Wdg Driver’s configuration set.
         */
        (void)WDG_WRITE32(0u, &rtiREG1->WDKEY, WDG_KEY_ONE);
        (void)WDG_WRITE32(0u, &rtiREG1->WDKEY, WDG_KEY_TWO);
    }
}

/* This function initialize watchdog hardware.
 * 1. initialize RTI clock
 * 2. set up compare channel and install interrupt handler, Wdg uses channel 3.
 * 3. mask interrupt
 * 4. calculate watchdog service period, write COMPx and UDCPx registers.
 * 5. set default mode
 * 6. enable interrupt
 */

/* @brief TMS570 hardware specific implementation of Wdg_Init
 *  @param[in] ConfigPtr - Pointer to configuration set
 */
void Wdg_Hw_Init(const Wdg_ConfigType* ConfigPtr) {
    /*lint --e{923} MISRA:HARDWARE_ACCESS:cast fron unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
    uint32 Wdg_KickTimerTicksPerPeriod;    // the watchdog service period, in this design it is 1ms
    uint32 rti1Clock;                    // RTI clock frequency
    uint32 wdgTimeout;                    // configuration parameter, watchdog timeout value
    Std_ReturnType validate_rv = E_OK;

    wdgTimeout = calcWatchdogTimeout(ConfigPtr->Wdg_ModeConfig->WdgSettingsFast->period);        // get watchdog timeout value from the configuration
    /** @req SWS_Wdg_00090 When development error detection is enabled for the Wdg module: The Wdg_Init function shall check that the (hardware specific)
     * contents of the given configuration set is within the allowed boundaries. */
    validate((boolean) (wdgTimeout <= WDG_TMS570_TIMEOUT), WDG_INIT_SERVICE_ID, WDG_E_PARAM_CONFIG, &validate_rv);
    validate((boolean) (ConfigPtr->Wdg_ModeConfig->WdgSettingsFast->period <= MAX_FAST_PERIOD_HERZ), WDG_INIT_SERVICE_ID, WDG_E_PARAM_CONFIG, &validate_rv);

    if (E_OK == validate_rv) {
        /** @req SWS_Wdg_00100 The Wdg_Init function shall initialize all global variables of the Wdg module and set the default watchdog mode and initial timeout period */
        WdgConfigPtr = ConfigPtr;
        Timer_Rt1Init();                    // initialize RTI_1 timer

        rti1Clock = Timer_Rt1GetClock();
        /** @req SWS_WDG_00001 The Wdg_Init function shall initialize the Wdg module and the watchdog hardware. */
        /** @req SWS_Wdg_00161 To access the internal watchdog hardware, the corresponding Wdg module instance shall access the hardware for watchdog servicing directly.
         */
        rtiREG1->COMPCTRL |= (1uL << (WDG_COMP_CTRL_COMPSEL_JUMP * WDG_RTICLK_CMP_INDEX));    // set up compare channel, Gpt will use channel 1 and 2, Wdg uses channel 3

        ISR_INSTALL_ISR2("WdgIsr", Wdg_Isr, RTI_COMPARE_3, WDG_INTERRUPT_PRIORITY, WDG_ARC_ISR_APP);    // install interrupt handler

        rtiREG1->INTFLAG = (1uL << WDG_RTICLK_CMP_INDEX);                                    // clear interrupt flag

        Wdg_KickTimerTicksPerPeriod = Wdg_Arc_Us2Ticks(1000, rti1Clock);                    // setup Wdg service period

        /* - Setup update compare 1 value. This value is added to the compare 1 value on each compare match. */
        rtiREG1->CMP[WDG_RTICLK_CMP_INDEX].UDCPx = Wdg_KickTimerTicksPerPeriod;

        /*set the register according to the configured default mode*/
        /** @req SWS_Wdg_00145
         * The Wdg_SetMode function shall reset the watchdog timeout counter based on the new watchdog mode i.e.
         * the timeout frame remaining shall be recalculated based on a changed trigger period.
         */
        rtiREG1->DWDPRLD = calcWatchdogTimeout(WdgConfigPtr->Wdg_ModeConfig->WdgSettingsFast->period);
        /* Set the window size. Acts as timeout watchdog if window size == 100%. */
        rtiREG1->WWDSIZECTRL = WDG_WINDOW_100_SETTING;

        /* - Setup compare 1 value. This value is compared with selected free running counter.
         * Add the offset(current value of free running counter) because: when other module shares this free running counter with WDG, add this offset will avoid being affected
         * by the other module. E.g., when other module is initialized first, this counter starts running. When initialize WDG, the counter already contains value.*/
        /** @req SWS_Wdg_00101 The Wdg_Init function shall initialize those controller registers that are needed for controlling the watchdog hardware. */
        rtiREG1->CMP[WDG_RTICLK_CMP_INDEX].COMPx = Wdg_KickTimerTicksPerPeriod + rtiREG1->CNT[1].FRCx;

        rtiREG1->SETINT = (1uL << WDG_RTICLK_CMP_INDEX);            // enable interrupt
    }
}

/* @brief TMS570 hardware specific implementation of Wdg_SetTriggerCondition.
 *  @param[in] timeout - Timeout value (milliseconds) for setting the trigger counter
 */
void Wdg_Hw_SetTriggerCondition(uint16 timeout) {
    /*lint --e{923} MISRA:HARDWARE_ACCESS:cast fron unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */

    (void)WDG_WRITE32(0u, &rtiREG1->CLEARINT, (1uL << WDG_RTICLK_CMP_INDEX));   // disable interrupt
    (void)WDG_WRITE32(0u, &rtiREG1->INTFLAG, (1uL << WDG_RTICLK_CMP_INDEX));    // clear interrupt flag
    Wdg_TriggerCounter = timeout;                                               // set trigger counter
    (void)WDG_WRITE32(0u, &rtiREG1->SETINT, (1uL << WDG_RTICLK_CMP_INDEX));     // enable interrupt
    (void)WDG_WRITE32(0u, &rtiREG1->DWDCTRL, WDG_ENABLE_MAGIC);                 // start Watchdog
}

/*
 * Wdg_Arc_GetTriggerCounter is used in mcal test.
 * Wdg_TriggerCounter decreases when watchdog is triggered.
 * Return the Wdg_TriggerCounter value to check if the watchdog is correctly serviced.
 */
#ifdef HOST_TEST
uint32 Wdg_Arc_GetTriggerCounter(void) {
    uint32 counter_temp = Wdg_TriggerCounter;
    return counter_temp;
}
#endif /* HOST_TEST */

/** @}*/
/** @}*/

