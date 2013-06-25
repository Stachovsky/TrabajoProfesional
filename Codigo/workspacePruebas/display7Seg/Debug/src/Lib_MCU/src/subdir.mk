################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Lib_MCU/src/lpc17xx_adc.c \
../src/Lib_MCU/src/lpc17xx_can.c \
../src/Lib_MCU/src/lpc17xx_clkpwr.c \
../src/Lib_MCU/src/lpc17xx_dac.c \
../src/Lib_MCU/src/lpc17xx_emac.c \
../src/Lib_MCU/src/lpc17xx_exti.c \
../src/Lib_MCU/src/lpc17xx_gpdma.c \
../src/Lib_MCU/src/lpc17xx_gpio.c \
../src/Lib_MCU/src/lpc17xx_i2c.c \
../src/Lib_MCU/src/lpc17xx_i2s.c \
../src/Lib_MCU/src/lpc17xx_libcfg_default.c \
../src/Lib_MCU/src/lpc17xx_mcpwm.c \
../src/Lib_MCU/src/lpc17xx_nvic.c \
../src/Lib_MCU/src/lpc17xx_pinsel.c \
../src/Lib_MCU/src/lpc17xx_pwm.c \
../src/Lib_MCU/src/lpc17xx_qei.c \
../src/Lib_MCU/src/lpc17xx_rit.c \
../src/Lib_MCU/src/lpc17xx_rtc.c \
../src/Lib_MCU/src/lpc17xx_spi.c \
../src/Lib_MCU/src/lpc17xx_ssp.c \
../src/Lib_MCU/src/lpc17xx_systick.c \
../src/Lib_MCU/src/lpc17xx_timer.c \
../src/Lib_MCU/src/lpc17xx_uart.c \
../src/Lib_MCU/src/lpc17xx_wdt.c 

OBJS += \
./src/Lib_MCU/src/lpc17xx_adc.o \
./src/Lib_MCU/src/lpc17xx_can.o \
./src/Lib_MCU/src/lpc17xx_clkpwr.o \
./src/Lib_MCU/src/lpc17xx_dac.o \
./src/Lib_MCU/src/lpc17xx_emac.o \
./src/Lib_MCU/src/lpc17xx_exti.o \
./src/Lib_MCU/src/lpc17xx_gpdma.o \
./src/Lib_MCU/src/lpc17xx_gpio.o \
./src/Lib_MCU/src/lpc17xx_i2c.o \
./src/Lib_MCU/src/lpc17xx_i2s.o \
./src/Lib_MCU/src/lpc17xx_libcfg_default.o \
./src/Lib_MCU/src/lpc17xx_mcpwm.o \
./src/Lib_MCU/src/lpc17xx_nvic.o \
./src/Lib_MCU/src/lpc17xx_pinsel.o \
./src/Lib_MCU/src/lpc17xx_pwm.o \
./src/Lib_MCU/src/lpc17xx_qei.o \
./src/Lib_MCU/src/lpc17xx_rit.o \
./src/Lib_MCU/src/lpc17xx_rtc.o \
./src/Lib_MCU/src/lpc17xx_spi.o \
./src/Lib_MCU/src/lpc17xx_ssp.o \
./src/Lib_MCU/src/lpc17xx_systick.o \
./src/Lib_MCU/src/lpc17xx_timer.o \
./src/Lib_MCU/src/lpc17xx_uart.o \
./src/Lib_MCU/src/lpc17xx_wdt.o 

C_DEPS += \
./src/Lib_MCU/src/lpc17xx_adc.d \
./src/Lib_MCU/src/lpc17xx_can.d \
./src/Lib_MCU/src/lpc17xx_clkpwr.d \
./src/Lib_MCU/src/lpc17xx_dac.d \
./src/Lib_MCU/src/lpc17xx_emac.d \
./src/Lib_MCU/src/lpc17xx_exti.d \
./src/Lib_MCU/src/lpc17xx_gpdma.d \
./src/Lib_MCU/src/lpc17xx_gpio.d \
./src/Lib_MCU/src/lpc17xx_i2c.d \
./src/Lib_MCU/src/lpc17xx_i2s.d \
./src/Lib_MCU/src/lpc17xx_libcfg_default.d \
./src/Lib_MCU/src/lpc17xx_mcpwm.d \
./src/Lib_MCU/src/lpc17xx_nvic.d \
./src/Lib_MCU/src/lpc17xx_pinsel.d \
./src/Lib_MCU/src/lpc17xx_pwm.d \
./src/Lib_MCU/src/lpc17xx_qei.d \
./src/Lib_MCU/src/lpc17xx_rit.d \
./src/Lib_MCU/src/lpc17xx_rtc.d \
./src/Lib_MCU/src/lpc17xx_spi.d \
./src/Lib_MCU/src/lpc17xx_ssp.d \
./src/Lib_MCU/src/lpc17xx_systick.d \
./src/Lib_MCU/src/lpc17xx_timer.d \
./src/Lib_MCU/src/lpc17xx_uart.d \
./src/Lib_MCU/src/lpc17xx_wdt.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lib_MCU/src/%.o: ../src/Lib_MCU/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/workspacePruebas/display7Seg/src/Lib_EaBaseBoard/inc" -I"/home/fanaur/workspacePruebas/display7Seg/src/Lib_MCU/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


