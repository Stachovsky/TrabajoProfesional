################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/API_Uart.c \
../src/cr_startup_lpc176x.c \
../src/ethmac.c \
../src/ew_systick.c \
../src/main.c \
../src/tcpip.c 

OBJS += \
./src/API_Uart.o \
./src/cr_startup_lpc176x.o \
./src/ethmac.o \
./src/ew_systick.o \
./src/main.o \
./src/tcpip.o 

C_DEPS += \
./src/API_Uart.d \
./src/cr_startup_lpc176x.d \
./src/ethmac.d \
./src/ew_systick.d \
./src/main.d \
./src/tcpip.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -DCR_INTEGER_PRINTF -D__USE_CMSIS=CMSISv2p00_LPC17xx -D__CODE_RED -D__REDLIB__ -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_MCU" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_EaBaseBoard" -O0 -g3 -c -fmessage-length=0 -fno-builtin -ffunction-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/cr_startup_lpc176x.o: ../src/cr_startup_lpc176x.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -DCR_INTEGER_PRINTF -D__USE_CMSIS=CMSISv2p00_LPC17xx -D__CODE_RED -D__REDLIB__ -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_MCU" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_EaBaseBoard" -O0 -Os -g3 -c -fmessage-length=0 -fno-builtin -ffunction-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/cr_startup_lpc176x.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


