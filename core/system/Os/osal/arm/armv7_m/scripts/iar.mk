# ========================================================================= #
# 						IAR compiler - Arm 7v Cortex M settings				#
# ========================================================================= #

# ---------------------------------------------------------------------------
# Setting CC <compiler>
# Setting AS <Assembler>
# Setting LD <compiler>
# ---------------------------------------------------------------------------
CC = $(IAR_BIN)/iccarm
AS = $(IAR_BIN)/iasmarm.exe
LD = $(IAR_BIN)/ilinkarm.exe

# ---------------------------------------------------------------------------
# Setting architecture specific cflags <compiler flags>
# ---------------------------------------------------------------------------
cflags-$(CFG_ARM_CM3) += --cpu=Cortex-M3
cflags-$(CFG_ARM_CM4) += --cpu=Cortex-M4

#cflags-y += --cpu_mode=thumb
cflags-y += --endian=little

# ---------------------------------------------------------------------------
# Setting architecture specific asflags <assembler flags>
# ---------------------------------------------------------------------------
asflags-$(CFG_ARM_CM3) += --cpu Cortex-M3
asflags-$(CFG_ARM_CM4) += --cpu Cortex-M4

#asflags-y += --cpu_mode thumb
asflags-y += -g

# ---------------------------------------------------------------------------
# Setting architecture specific ldflags <linker flags>
# ---------------------------------------------------------------------------
ldflags-$(CFG_ARM_CM3) += --cpu=Cortex-M3
ldflags-$(CFG_ARM_CM4) += --cpu=Cortex-M4
