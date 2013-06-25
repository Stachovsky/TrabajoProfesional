################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/clocking.c \
../src/uart.c 

OBJS += \
./src/clocking.o \
./src/uart.o 

C_DEPS += \
./src/clocking.d \
./src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DNDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"C:\Users\Rob\Documents\LPCXpresso_4.0.5_123\boardcomputer\lib_mcu\inc" -I"C:\Users\Rob\Documents\LPCXpresso_4.0.5_123\boardcomputer\CMSISv2p00_LPC17xx\inc" -I"C:\Users\Rob\Documents\LPCXpresso_4.0.5_123\boardcomputer\FreeRTOS-test\FreeRTOS_include" -I"C:\Users\Rob\Documents\LPCXpresso_4.0.5_123\boardcomputer\FreeRTOS-test\FreeRTOS_portable" -I"C:\Users\Rob\Documents\LPCXpresso_4.0.5_123\boardcomputer\FreeRTOS-test\src" -O2 -Os -g -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


