Requirements and recommendations for usage of ADC
====================================================


Introduction
--------------

The purpose of this document is to explain the requirements that we should care about them when we are designing and using ADC module, which includes ARCCOREs Safety Platform (SP) and MCU (MPC5744P) specific driver modules.

The ADC module initializes and controls the internal Analog Digital Converter Unit(s) of the microcontroller. It provides services to start and stop a conversion respectively to enable and disable the trigger source for a conversion. Furthermore it provides services to enable and disable a notification mechanism and routines to query the status and result of a conversion.
The ADC module works on so called ADC Channel Groups, which are build from so called ADC Channels. An ADC Channel Group combines 3 parts into an entity, and each entity of this kind can be individually controlled and accessed via the Adc module. The 3 parts are: an analogue input pin (ADC Channel), the needed ADC circuitry itself, conversion result register.
Each public API provided by the ADC module checks the incoming argument to confirm that it is valid before performing any functionality. If at least one argument is invalid the called function will return a fault code, report a DET error and immediately stop performing any functionality. 


|
|


Requirements and Recommendations
--------------------------------------


.. list-table:: Requirements and Recommendations
  :widths: 30 70
  :header-rows: 1
  :align: left

  * - Requirement	
    - Description 
  * - ARC_INT_MCAL_ADC_00001
    - The user shall set the AdcDevErrorDetect to True.
      
      | The integrator is responsible for the configuration of the MCAL module ADC.
        The MCAL module report errors during runtime to the module Det. These reported errors are collected by the Safety Monitor and forwarded e.g. to a safety related application, which takes decision how to react on the detected error. That's why the API has to be enabled in any case.        
  * - ARC_INT_MCAL_ADC_00002
    - The user shall not change manually the generated ADC configuration code.
      
      | After configuration of the MCAL module ADC, the configuration code will be generated using a code generator. The code generator will do some validations and will throw an error, if some errors are detected. That's why the user shall not modify the generated code any more. 
  * - ARC_INT_MCAL_ADC_00003
    - The user shall set the AdcVersionInfoApi to True, if the version number of the module is required during runtime operation.
      
      | The version of the MCAL module ADC can only be read during runtime, if the API is enabled. 
        
  * - ARC_INT_MCAL_ADC_00004
    - The user shall ensure the right ranges of the parameters.
      
      | Certain parameter may have limitations depending on their usage for a dedicated HW. That's why it is on the integrator to check the correct parameter range, because it can not be checked by the code generator validation tool.
        In case of ADC all parameter are concerned.        
        

Important implication of the integration requirement is, that the source code delivered from ARCCORE shall not be modified by the integrator.


Autosar Requirements For ADC
-----------------------------------

You can find all ADC requirement in *Document ID 010: AUTOSAR_SWS_ADCDriver*.


|
|

Chip Errata and Safety manual considerations
------------------------------------------------------
You can find considerations in 'Safety Manual for MPC5744P, Rev. 3, 06/2014 ' reference and see 'MPC5744P_1N65H Rev. JAN2017' for more information about errata.





Integration Testing
==========================================

The test of the ADC can be described in two parts, hardware connection part and software configuration part.
In hardware connection part, the integrator should apply input voltages to the pins on the board. The reference voltage value for the ADC hardware unit has to be considered.
In order to test the ADC module functionality, a proper configuration of the ADC module and IOHWAbstraction is needed. The integrator should follow the safety constraints listed above to configure the ADC module. 
  