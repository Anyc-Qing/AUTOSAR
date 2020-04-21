
Introduction
==============

This specification describes the functionality, API and the configuration of the AUTOSAR Basic Software module ADC Driver.
The ADC module initializes and controls the internal Analog Digital Converter Unit(s) of the microcontroller. It provides services to start and stop a conversion respectively to enable and disable the trigger source for a conversion. Furthermore it provides services to enable and disable a notification mechanism and routines to query the status and result of a conversion.
The ADC module works on so called ADC Channel Groups, which are build from so called ADC Channels. An ADC Channel Group combines 3 parts into an entity, and each entity of this kind can be individually controlled and accessed via the ADC module. 
The 3 parts are: an analogue input pin (ADC Channel), the needed ADC circuitry itself, conversion result register.

 

Static design aspects of the software units
==================================================



Software structure including its hierarchical levels
------------------------------------------------------------
Here you can see the structure of software and relation between Unit, Modules and functions.

 
.. image:: pictures/Adc_moduleoverview1.png
|
|
Data types and their characteristics
----------------------------------------
The ADC has its own type definitions and also uses imported types.
The imported types and its own type are described in chapter 8.2 "Specification of ADC Driver" of AUTOSAR requirements, Specifications of ADC Driver, ID: 010.

|
|
External interfaces of the software units
------------------------------------------------
Detailed information of APIs is described in chapter 8 "Specification of ADC Driver" of AUTOSAR requirements, Specifications of ADC Driver, ID: 010.

|
|
Constraints including the scope of the architecture and external dependencies
-----------------------------------------------------------------------------------
 * Adc_Hw_MPC5xxx.h will contain the registers that the ADC module uses
 * Adc.c is a generic file as this file doesn't include any hardware specific files
 * Adc.h will have the standard API declarations
 * Adc_Hw_MPC5xxx.c will have the hardware specific implementation of the API's.
 * Adc.c depends on Adc_Hw_MPC5xxx.c file as Adc_Hw_MPC5xxx.c will have the implementations of all API's.
 * Adc_Internal.h file will have the hardware specific API function declarations. Both Adc.c and Adc_Hw_MPC5xxx.c file will include Adc_Internal.h
 * Adc_Hw_Common.c contain shared resources(function, variable, type...) among different MCAL architectures
 * Most of the parts are generic since the header file defines the registers.
 * Each API will have the Det error check mentioned in ADC driver SWS document and will call the the hardware specific implementation function if the check passes.

|
|
Dependencies to other modules
--------------------------------

The legacy drivers in Arccore used to be one .c file for each driver. 
Improvements/bugs then affected one driver for each MCAL.
That was not very maintainable and there is always a risk that something is missed.
So it was decided to divide driver two different parts, one generic and one MCAL specific.
 |
 |
 
File strucure for <mcu>
--------------------------------

The file structure is defined by Autosar. see autosar_bsw


.. list-table:: List of MCAL files
  :widths: 50  50
  :header-rows: 1
  :align: left

  * - Generic files
    - MCAL specific files
  * - Adc.c
    - Adc_Hw_mpc5xxx.c
  * - 
    - 















