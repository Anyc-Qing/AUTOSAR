OsSimple
========
This is a very simple example just to demonstrate some basic OS functionally

   1. An alarm sets Event1 in eTask1
   2. eTask1 sets Event2 in eTask2 and waits for a new Event1
   3. eTask2 activates bTask3 and waits for a new Event2
   4. Back to 1

Supported boards:
mpc5516it
mpc5604b_trk
mpc5567qrtech


Files:
src/os_simple.c - implemenation of tasks
src/system_hoooks.c - implementation of tasks

OsSimple_Generic.arxml - generic BSW modules 
OsSimple_mpc5516it_Configuration.arxml - the mpc5516it configuration referencing generic modules and board specfic modules.
OsSimple_mpc5604b_Configuration.arxml - the mpc5604b_trk configuration referencing generic modules and board specfic modules.
OsSimple_mpc5567qrtech_Configuration.arxml - the mpc5567qrtech configuration referencing generic modules and board specfic modules.

Note: Before generating the configuration, make sure that EcuM config, EcuMSleepModeMcuModeRef points to the right MCU
  
build_config.mk - the build config
makefile - the makefile

  
  