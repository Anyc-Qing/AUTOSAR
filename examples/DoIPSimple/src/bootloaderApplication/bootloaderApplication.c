/*
 * bootloaderApplication.c
 *
 *  Created on: 27 sep. 2018
 *      Author: ospe
 */

#include "Std_Types.h"

/**
 * Application addresses type, used for VCC complete and compatible solution
 */
typedef volatile struct {
    /**
     * Start signature of the application. Used to verify the application during startup and for diagnostic
     * service RoutineControl (0x31). Specifically for Complete and Compatible (0x0205).
     */
    uint32 ApplicationStartSignature[2];
    /**
     * Start address of the application. Used to verify the application during startup and for diagnostic
     * service RoutineControl (0x31). Specifically for Complete and Compatible (0x0205).
     */
    uint32 ApplicationStartAddress;
    /**
     * Address to a complete and compatible function that resides in application. Typically used when the
     * application needs to give information to the bootloader about its compatibility status. The bootloader
     * calls this function during its complete and compatible checks
     */
    uint32 CompleteCompatibleFunctionAddress;
    /**
     * End address of the application. Used to verify the application during startup and for diagnostic
     * service RoutineControl (0x31). Specifically for Complete and Compatible (0x0205).
     */
    uint32 ApplicationEndAddress;
} ApplicationAddressType;

uint32 checkApplicationCompatability ( void ){
    return 0x0uL;
}

__attribute__ ((section (".endSignature"))) __attribute__ ((used)) const uint32 endSignature[2] = {
        0x456E6453uL,
        0x69676E61uL
};

__attribute__ ((section (".CCBlock"))) __attribute__ ((used)) volatile const ApplicationAddressType cc = {
        .ApplicationStartSignature[0] = 0x53746172uL,
        .ApplicationStartSignature[1] = 0x74536967uL,
        .ApplicationStartAddress = 0x01088120,
        .CompleteCompatibleFunctionAddress = (uint32) &checkApplicationCompatability,
        .ApplicationEndAddress = (uint32)&endSignature[0],
};
