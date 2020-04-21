
# Project name, used for output files et.c.
PROJECTNAME = DoIPSimple

# Default settings
include $(ROOTDIR)/scripts/project_defaults.mk

ifeq ($(CFG_BOOTLOADER_APPL), y)
vpath %.ldf ../memory
ldcmdfile-y = linkscript_$(COMPILER)_doipsimple.lcf
endif

VPATH += ../includes
inc-y += ../includes

VPATH += ../config/$(board_name)
inc-y += ../config/$(board_name)


# Project files (adds all .c files in src directory)
VPATH += ../src
VPATH += ../src/bootloaderApplication

inc-y += ../src

PROJECT_C_FILES+=$(notdir $(wildcard ../src/*.c))

obj-y += $(PROJECT_C_FILES:%.c=%.o)

inc-y += ..

obj-$(CFG_BOOTLOADER_APPL) += bootloaderApplication.o

#---------------------- Creating VBF ----------------------
# This is only used when compiling the DoIP simple example as an asr-bootloader test application

ifeq ($(CFG_BOOTLOADER_APPL),y)
ifeq ($(CFG_CREATE_VBF),y)
VBFCONVERT_PATH ?= /c/devtools/VBFConvert_5.2.0
VBF_CONVERT = $(VBFCONVERT_PATH)/VBFConvert.exe

all-mod-post += $(PROJECTNAME).vbf

# Target to create the .vbb file
$(PROJECTNAME).vbb: $(build-srec-y)
	echo -en '[VBF1]\r\n' > $(PROJECTNAME).vbb ;\
	echo -en 'SourceFile=$(PROJECTNAME).s3\r\n' >> $(PROJECTNAME).vbb
	echo -en 'TargetFile=$(PROJECTNAME).vbf\r\n' >> $(PROJECTNAME).vbb
	echo -en 'VBFVersion=2.5\r\n' >> $(PROJECTNAME).vbb
	echo -en 'SwType=EXE\r\n' >> $(PROJECTNAME).vbb
	echo -en 'SwPartNum=0506070809\r\n' >> $(PROJECTNAME).vbb
	echo -en 'ECUaddr=1201\r\n' >> $(PROJECTNAME).vbb
	echo -en 'SwVersion=A\r\n' >> $(PROJECTNAME).vbb
	echo -en 'EraseStart=01080000\r\nEraseLength=4C0000\r\n'>> $(PROJECTNAME).vbb
	
$(PROJECTNAME).vbf: $(PROJECTNAME).vbb
	$(VBF_CONVERT) ./$(PROJECTNAME).vbb
endif
endif

#################### Arctic Core make system ######################
# Following is an explanation of the most usable features 
# of the Arctic Core make system.
#
# obj-y : list of object files to build.
# VPATH : list of directories in which to
#         look for source files.
# inc-y : list of directories in which to
#         look for header files.
# libitem-y : list of libraries to include. 
# build-exe-y : the name of build the output file.
# ldcmdfile-y: path to linkscript, used when building "build-exe-y"
#
# For more information see:
# http://arccore.com/wiki/Makesystem
###################################################################
