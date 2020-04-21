#I2c

obj-$(USE_I2C_MPC) += I2c.o

inc-$(USE_I2C_MPC) += $(ROOTDIR)/mcal/arch/mpc5xxx/src/contrib/i2c
vpath-$(USE_I2C_MPC) += $(ROOTDIR)/mcal/arch/mpc5xxx/src/contrib/i2c