################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/drivers/src/lpc17xx_adc.c \
../src/drivers/src/lpc17xx_can.c \
../src/drivers/src/lpc17xx_clkpwr.c \
../src/drivers/src/lpc17xx_dac.c \
../src/drivers/src/lpc17xx_emac.c \
../src/drivers/src/lpc17xx_exti.c \
../src/drivers/src/lpc17xx_gpdma.c \
../src/drivers/src/lpc17xx_gpio.c \
../src/drivers/src/lpc17xx_i2c.c \
../src/drivers/src/lpc17xx_i2s.c \
../src/drivers/src/lpc17xx_libcfg_default.c \
../src/drivers/src/lpc17xx_mcpwm.c \
../src/drivers/src/lpc17xx_nvic.c \
../src/drivers/src/lpc17xx_pinsel.c \
../src/drivers/src/lpc17xx_pwm.c \
../src/drivers/src/lpc17xx_qei.c \
../src/drivers/src/lpc17xx_rit.c \
../src/drivers/src/lpc17xx_rtc.c \
../src/drivers/src/lpc17xx_spi.c \
../src/drivers/src/lpc17xx_ssp.c \
../src/drivers/src/lpc17xx_systick.c \
../src/drivers/src/lpc17xx_timer.c \
../src/drivers/src/lpc17xx_uart.c \
../src/drivers/src/lpc17xx_wdt.c 

OBJS += \
./src/drivers/src/lpc17xx_adc.o \
./src/drivers/src/lpc17xx_can.o \
./src/drivers/src/lpc17xx_clkpwr.o \
./src/drivers/src/lpc17xx_dac.o \
./src/drivers/src/lpc17xx_emac.o \
./src/drivers/src/lpc17xx_exti.o \
./src/drivers/src/lpc17xx_gpdma.o \
./src/drivers/src/lpc17xx_gpio.o \
./src/drivers/src/lpc17xx_i2c.o \
./src/drivers/src/lpc17xx_i2s.o \
./src/drivers/src/lpc17xx_libcfg_default.o \
./src/drivers/src/lpc17xx_mcpwm.o \
./src/drivers/src/lpc17xx_nvic.o \
./src/drivers/src/lpc17xx_pinsel.o \
./src/drivers/src/lpc17xx_pwm.o \
./src/drivers/src/lpc17xx_qei.o \
./src/drivers/src/lpc17xx_rit.o \
./src/drivers/src/lpc17xx_rtc.o \
./src/drivers/src/lpc17xx_spi.o \
./src/drivers/src/lpc17xx_ssp.o \
./src/drivers/src/lpc17xx_systick.o \
./src/drivers/src/lpc17xx_timer.o \
./src/drivers/src/lpc17xx_uart.o \
./src/drivers/src/lpc17xx_wdt.o 

C_DEPS += \
./src/drivers/src/lpc17xx_adc.d \
./src/drivers/src/lpc17xx_can.d \
./src/drivers/src/lpc17xx_clkpwr.d \
./src/drivers/src/lpc17xx_dac.d \
./src/drivers/src/lpc17xx_emac.d \
./src/drivers/src/lpc17xx_exti.d \
./src/drivers/src/lpc17xx_gpdma.d \
./src/drivers/src/lpc17xx_gpio.d \
./src/drivers/src/lpc17xx_i2c.d \
./src/drivers/src/lpc17xx_i2s.d \
./src/drivers/src/lpc17xx_libcfg_default.d \
./src/drivers/src/lpc17xx_mcpwm.d \
./src/drivers/src/lpc17xx_nvic.d \
./src/drivers/src/lpc17xx_pinsel.d \
./src/drivers/src/lpc17xx_pwm.d \
./src/drivers/src/lpc17xx_qei.d \
./src/drivers/src/lpc17xx_rit.d \
./src/drivers/src/lpc17xx_rtc.d \
./src/drivers/src/lpc17xx_spi.d \
./src/drivers/src/lpc17xx_ssp.d \
./src/drivers/src/lpc17xx_systick.d \
./src/drivers/src/lpc17xx_timer.d \
./src/drivers/src/lpc17xx_uart.d \
./src/drivers/src/lpc17xx_wdt.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/src/%.o: ../src/drivers/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/workspacePruebas/UART_API/src/drivers/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


