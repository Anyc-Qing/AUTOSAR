HelloWorld
==========
This is a complete but simple ECU. It contains to SWCs and a complex device driver. It receives and 
tranmits CAN signal and also controls some leds.

Supported boards:
mpc5604b_trk

HelloWorld-artext
=================
This directory contains the application and models SWCs in artext. This is exported into the HelloWord 
directory using the Autosar browser.

Files:
base_types.arxml - contains base types
ComponentTypes.swcd - contans the SWC components types
CddBlinker.swcd - contains the CddBlinker SWC
SwcReader.swcd - contains the SwcReader SWC
SwcWriter.swcd - contains the SwcWrite SWC
HelloWorld.swcd - contains the root composition
Interfaces.swcd - contains port interfaces

HelloWorld
==========
This directory contains the BSW configuration and the source code for this example.

config - contains the generated configuration inkl. RTE

src - contains the source code for this project
	PlatformTasks.c - contains the OS tasks and initialization of the ECU.
	os_hooks.c - callout hooks for the Os 
	SbcCdd.* - complex device driver for the system base chip
	CddBlinker.c - the implementation of the CddBlinker
	SwcReader.c - the implementation of the SwcReader
	SwcWriter.c - the implementation of the SwcWriter
	
HelloWorld_Extract.arxml - the extract exported from HelloWorld-artext
HelloWorld_Generic.arxml - BSW configuation for generic modules in the HelloWorld example
HelloWorld_mpc5604b_Configuration.arxml - BSW configuration for the mpc5604b_trk board. It
    just contains references to the HelloWorld_Generic and to the examples/boards/mpc5604b_trk.arxml.
	The mpc5604b_trk.arxml contains modules that are unique for the mpc5604_trk.

build_config.mk - the build config
makefile - the makefile