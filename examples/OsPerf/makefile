
# Project name, used for output files et.c.
PROJECTNAME = OsPerf

# Default settings
include $(ROOTDIR)/scripts/project_defaults.mk

# Project files (adds all .c files in project root)
VPATH += ../src
inc-y+=../src

obj-y+=system_hooks.o
obj-y+=tasks.o
def-y+=USE_LDEBUG_PRINTF

PROJECT_C_FILES=$(notdir $(wildcard ../*.c))
obj-y += $(PROJECT_C_FILES:%.c=%.o)


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
