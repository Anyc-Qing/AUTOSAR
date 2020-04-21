
# Project name, used for output files et.c.
PROJECTNAME = HelloWorld
BUILD_AS_LIB = y
DISTRONAME = $(PROJECTNAME)_LIB_$(board_name)
COPY_APP_INCLUDES=my_target_1


# Default settings
include $(ROOTDIR)/scripts/project_defaults.mk

VPATH += ../includes
inc-y += ../includes

VPATH += ../config/$(board_name)
inc-y += ../config/$(board_name)


# Project files (adds all .c files in src directory)
VPATH += ../src
inc-y += ../src
PROJECT_C_FILES=$(notdir $(wildcard ../src/*.c))
obj-y += $(PROJECT_C_FILES:%.c=%.o)

inc-y += ..

my_target_1: FORCE
	mkdir -p $(BDIR)/$(DISTRONAME)/app_include
	cp $(BDIR)/config/$(board_name)/*.h $(BDIR)/$(DISTRONAME)/app_include
	cp $(BDIR)/config/$(board_name)/Rte/Config/*.h $(BDIR)/$(DISTRONAME)/app_include
	cp $(BDIR)/config/$(board_name)/Rte/Contract/*.h $(BDIR)/$(DISTRONAME)/app_include
	cp $(BDIR)/config/$(board_name)/Rte/MemMap/*.h $(BDIR)/$(DISTRONAME)/app_include

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
