#ifndef RTE_BUFFERS_H_
#define RTE_BUFFERS_H_

#include <Rte_Internal.h>

void Rte_Internal_Init_Buffers(void);

/** === BswM Data =============================================================== */

extern ComMModeEnum Rte_Buffer_bswM_modeRequestPort_SwcStartCommunication_requestedMode;

/** === ComM Data =============================================================== */

extern ComM_ModeMachinesType ComM_ModeMachines;

/** === DoorSensor Data =============================================================== */

/** === EcuM Data =============================================================== */

extern EcuM_ModeMachinesType EcuM_ModeMachines;

/** === InteriorLightManager Data =============================================================== */

extern DoorStatusImpl Rte_Buffer_lightManager_LeftDoorStatus_status;
extern DoorStatusImpl Rte_Buffer_lightManager_RightDoorStatus_status;

/** === IoHwAb Data =============================================================== */

/** === LightActuator Data =============================================================== */

extern LightStatusImpl Rte_Buffer_frontLightActuator_InteriorLightStatus_status;

/** === ModeManager Data =============================================================== */

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

/** --- EXTERNALS --------------------------------------------------------------------------- */
extern Std_ReturnType Rte_comM_GetCurrentComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_GetMaxComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_GetRequestedComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);
extern Std_ReturnType Rte_comM_RequestComMode(/*IN*/ComM_UserHandleType portDefArg1, /*IN*/ComM_ModeType ComMode);
extern Std_ReturnType Rte_ecuM_GetBootTarget(/*OUT*/EcuM_BootTargetType * target);
extern Std_ReturnType Rte_ecuM_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
extern Std_ReturnType Rte_ecuM_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
extern Std_ReturnType Rte_ecuM_ReleasePOSTRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_ReleaseRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_RequestPOSTRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_RequestRUN(/*IN*/EcuM_UserType portDefArg1);
extern Std_ReturnType Rte_ecuM_SelectBootTarget(/*IN*/EcuM_BootTargetType target);
extern Std_ReturnType Rte_ecuM_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode);
extern Std_ReturnType Rte_ioHwAb_DigitalRead(/*IN*/IoHwAb_SignalType_ portDefArg1, /*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality);
extern Std_ReturnType Rte_ioHwAb_DigitalWrite(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DigitalLevel Level);

#endif /* RTE_BUFFERS_H_ */

