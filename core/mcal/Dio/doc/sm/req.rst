Requirements and recommendations for usage of DIO
====================================================


Introduction
--------------

The purpose of this document is to explain the requirements that we should care about them when we are designing and using Dio module, which includes ARCCOREs Safety Platform (SP) and MCU (MPC5744P) specific driver modules.

The MCAL Module Dio  is an abstraction layer between the HW and the SafeIoHwAb or application.
E.g. any component connected to the RTE can write and read value on pins on a board without having to care about the specific hardware on every board.
Each public API provided by the Dio module checks the incoming argument to confirm that it is valid before performing any functionality. 
If at least one argument is invalid the called function will return a fault code, report a DET error and immediately stop performing any functionality. 
A typical invalid argument can be e.g. trying to read a signal which has not been configured, like trying to read signal 3 when only 2 signals have been configured or trying to set an invalid value.


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
  * - ARC_INT_MCAL_DIO_00001
    - The user shall set the DioDevErrorDetect to True.
      
      | The integrator is responsible for the configuration of the MCAL module DIO. 
        Since the Dio MCAL module only reports back a value for the Dio  it cannot by itself determine what kind of 
        physical interpretation the value has. This also means that it cannot detect if there is a short circuit present,
        it is the integrator's responsibility to interpret the acquired value and determine if the value correspond to a short circuit value.
        
  * - ARC_INT_MCAL_DIO_00002
    - The user shall not change manually the generated Dio configuration code and module files.
      
      | After configuration of the MCAL module Dio, the configuration code will be generated using a code generator. 
        The code generate will do some validations and will throw an error, if some errors are detected.       
        That's why the user shall not modify the generated code any more. 
  * - ARC_INT_MCAL_DIO_00003
    - The user shall set the DioVersionInfoApi to True, if the version number of the 
      module is required during runtime operation.
      
      | The version of the MCAL module Dio can only be read during runtime, if the API is enabled. 
        
  * - ARC_INT_MCAL_DIO_00004
    - The user shall ensure the right ranges of the parameters.
      
      | Certain parameter may have limitations depending on their usage for a dedicated HW. 
        That is why the integrator must check the correct parameter range, because it can not be checked by the code generator validation tool.       
        
  * - ARC_INT_SP_00013
    - The user shall use the same compiler as was used in ARCCORE testing.
      
      | The integrator needs to fulfill all 14-06-813-16002 Integration Requirements of the Safety Platform. 
        

Important implication of the integration requirement is, that the source code delivered from ARCCORE shall not be modified by the integrator.


Autosar Requirements For DIO
-----------------------------------

You can find all DIO requirement in *Document ID 020: AUTOSAR_SWS_DIODriver*.


|
|

Chip Errata and Safety manual considerations
------------------------------------------------------
You can find considerations in 'Safety Manual for MPC5744P, Rev. 3, 06/2014 ' reference and see 'MPC5744P_1N65H Rev. JAN2017' for more information about errata.





Integration Testing
==========================================

Testing was performed on MPC5744p_mmb evaluation board. A simple test for this module will be configuring a LED and toggling the pin using Dio_WritePort and Dio_ReadPort API. The toggling of values can be seen on the LED. ARCCORE has performed the unit testing on the evaluation board.
The integrator can check the functioning of this module by configuring a pin ,  toggling the pin using API's and verifying the output of the pin either using an oscilloscope or an analyzer.
For an integrator of the MCAL Module Dio it is at least highly recommended to consider the following topics for testing.

 * Dio module is dependent on Port and IoHwAb modules.
 * Port module should be initialized before the Dio module API's are used.
Integrator need to perform integration testing of Dio functionality with the complete hardware and software application.
 
  