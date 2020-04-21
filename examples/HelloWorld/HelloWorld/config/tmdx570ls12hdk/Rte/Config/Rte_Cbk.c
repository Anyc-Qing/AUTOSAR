
#include <Rte_Cbk.h>

/*lint -e9008 The comma operator is acceptable even with loss of readability */
/*lint -e160 warning only viable if in c++ */

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_AdcValue(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_SwcMemRx_BlockId(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_SwcMemRx_Data(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_SwcMemRx_Request(void) {

    SYS_CALL_SetEvent(TASK_ID_OsRteTask, EVENT_MASK_SwcMemCmdReceived); /*lint !e534 RTE Requirement */

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_SwcMemTx_BlockId(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_SwcMemTx_Data(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_SwcMemTx_Result(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_rxCmdSignal(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_rxsignal01(void) {

}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_COMCbk_txsignal01(void) {

}

