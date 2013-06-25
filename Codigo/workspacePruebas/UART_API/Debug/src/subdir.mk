################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/cr_startup_lpc176x.c \
../src/led7seg.c \
../src/lpc17xx_gpio.c \
../src/lpc17xx_libcfg_default.c \
../src/lpc17xx_pinsel.c \
../src/main.c 

OBJS += \
./src/cr_startup_lpc176x.o \
./src/led7seg.o \
./src/lpc17xx_gpio.o \
./src/lpc17xx_libcfg_default.o \
./src/lpc17xx_pinsel.o \
./src/main.o 

C_DEPS += \
./src/cr_startup_lpc176x.d \
./src/led7seg.d \
./src/lpc17xx_gpio.d \
./src/lpc17xx_libcfg_default.d \
./src/lpc17xx_pinsel.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/cr_startup_lpc176x.o: ../src/cr_startup_lpc176x.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -Os -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/cr_startup_lpc176x.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


