
# Project name, used for output files et.c.
PROJECTNAME = HelloWorld_App

# Default settings
include $(ROOTDIR)/scripts/project_defaults.mk

# Project files (adds all .c files in project root)
VPATH += ../src
inc-y += ../src
PROJECT_C_FILES=$(notdir $(wildcard ../src/*.c))
obj-y += $(PROJECT_C_FILES:%.c=%.o)

inc-y += $(ROOTDIR)/app_include
inc-y += $(ROOTDIR)/boards/generic

libitem-y += $(ROOTDIR)/libs/HelloWorld.a 

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
