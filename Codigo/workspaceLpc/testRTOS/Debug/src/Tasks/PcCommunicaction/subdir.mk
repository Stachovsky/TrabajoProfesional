################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Tasks/PcCommunicaction/API_Uart.c \
../src/Tasks/PcCommunicaction/taskPcCommunication.c 

OBJS += \
./src/Tasks/PcCommunicaction/API_Uart.o \
./src/Tasks/PcCommunicaction/taskPcCommunication.o 

C_DEPS += \
./src/Tasks/PcCommunicaction/API_Uart.d \
./src/Tasks/PcCommunicaction/taskPcCommunication.d 


# Each subdirectory must supply rules for building sources it contributes
src/Tasks/PcCommunicaction/%.o: ../src/Tasks/PcCommunicaction/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__NEWLIB__ -DDEBUG -D__CODE_RED -DPACK_STRUCT_END=__attribute\(\(packed\)\) -DGCC_ARMCM3 -I/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/testRTOS/src -I/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/testRTOS/FreeRTOS_include -I/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/testRTOS/FreeRTOS_portable -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

