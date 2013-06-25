################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Fonts/font_12x24.c \
../src/Fonts/font_7x13B.c \
../src/Fonts/font_9x15.c 

OBJS += \
./src/Fonts/font_12x24.o \
./src/Fonts/font_7x13B.o \
./src/Fonts/font_9x15.o 

C_DEPS += \
./src/Fonts/font_12x24.d \
./src/Fonts/font_7x13B.d \
./src/Fonts/font_9x15.d 


# Each subdirectory must supply rules for building sources it contributes
src/Fonts/%.o: ../src/Fonts/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_EaBaseBoard" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_MCU" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


