
# prefered version
CC_VERSION=4.8.2
SELECT_CLIB?=CLIB_DNK
ifeq ($(SELECT_CLIB),CLIB_NEWLIB)
CFG_CLIB_NEWLIB=y
else
CFG_CLIB_DNK=y
endif
#SELECT_CLIB=CLIB_DNK


cflags-y += -DSELECT_CLIB=$(SELECT_CLIB)

inc-y += $(dir $(CROSS_COMPILE))../tricore/include/machine
inc-y += $(dir $(CROSS_COMPILE))../lib/gcc/tricore/4.6.4/include

ifeq ($(BOARDDIR),tc297_trb)
inc-y += $(dir $(CROSS_COMPILE))../bsp/tricore/TriBoard-TC29xB/h
else ifeq ($(BOARDDIR),tc399_trb)
inc-y += $(dir $(CROSS_COMPILE))../bsp/tricore/TriBoard-TC29xx/h
endif

#cc_inc_path
cflags-y += -mtc161
cflags-y += -fdata-sections
cflags-$(CFG_SHORT_DOUBLE) += -fshort-double
cflags-$(CFG_ALWAYS_INLINE) += -finline-is-always-inline
ifeq ($(BOARDDIR),tc399_trb)
cflags-y += -DGNU -fno-inline -fno-short-enums -fdata-sections -fsingle-precision-constant -fstrict-volatile-bitfields -std=c99
endif

asflags-y += -mtc161 
asflags-y += --gdwarf-2

ldflags-$(CFG_TC2XX) = --mcpu=tc161
ldflags-$(CFG_TC3XX) = --mcpu=aurix

ldflags-$(CFG_MULTIPLE_DEFINITIONS) += --allow-multiple-definition 
LDFLAGS += --cref 
LDFLAGS += --oformat=elf32-tricore 
LDFLAGS += --mem-holes 
LDFLAGS += --extmap="a"

lib-$(CFG_CLIB_NEWLIB) 	+= -lgcc
lib-$(CFG_CLIB_NEWLIB) 	+= -lc
lib-$(CFG_CLIB_NEWLIB) 	+= -lm
lib-$(CFG_CXX)          += -lstdc++


def-$(CFG_CLIB_DNK) += _ALLOW_KEYWORD_MACROS

lib-$(CFG_CLIB_DNK) += -ldnk_c

ifeq ($(CFG_SHORT_DOUBLE),y)
libpath-y += -L$(dir $(CROSS_COMPILE))../tricore/lib/tc161/short-double   #should be used if flag -fshort-double is set
else
libpath-y += -L$(dir $(CROSS_COMPILE))../tricore/lib/tc161
endif

lib-y   	+= -lgcc

#ASFLAGS += $(asflags-y)

