################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/API_Uart.c \
../src/cr_startup_lpc176x.c \
../src/main.c 

OBJS += \
./src/API_Uart.o \
./src/cr_startup_lpc176x.o \
./src/main.o 

C_DEPS += \
./src/API_Uart.d \
./src/cr_startup_lpc176x.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_MCU" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_EaBaseBoard" -O0 -g3 -Wall -c -fmessage-length=0 -mcpu=arm7tdmi -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


