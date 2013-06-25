################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/lpc17xx_spi_sd/lpc17xx_spi.c \
../src/lpc17xx_spi_sd/sd.c 

OBJS += \
./src/lpc17xx_spi_sd/lpc17xx_spi.o \
./src/lpc17xx_spi_sd/sd.o 

C_DEPS += \
./src/lpc17xx_spi_sd/lpc17xx_spi.d \
./src/lpc17xx_spi_sd/sd.d 


# Each subdirectory must supply rules for building sources it contributes
src/lpc17xx_spi_sd/%.o: ../src/lpc17xx_spi_sd/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\CMSISv2p00_LPC17xx\inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


