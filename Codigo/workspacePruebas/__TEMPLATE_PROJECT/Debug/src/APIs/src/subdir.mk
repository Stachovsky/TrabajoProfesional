################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/APIs/src/ApiKeepAlive.c 

OBJS += \
./src/APIs/src/ApiKeepAlive.o 

C_DEPS += \
./src/APIs/src/ApiKeepAlive.d 


# Each subdirectory must supply rules for building sources it contributes
src/APIs/src/%.o: ../src/APIs/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/workspacePruebas/__TEMPLATE_PROJECT/src/APIs/inc" -I"/home/fanaur/workspacePruebas/__TEMPLATE_PROJECT/src/Lib_EaBaseBoard/inc" -I"/home/fanaur/workspacePruebas/__TEMPLATE_PROJECT/src/Lib_MCU/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


