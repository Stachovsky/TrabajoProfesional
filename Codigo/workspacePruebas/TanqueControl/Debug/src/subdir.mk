################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/RGBLed.c \
../src/baseboard.c \
../src/cr_startup_lpc176x.c \
../src/eeprom.c \
../src/flash.c \
../src/font5x7.c \
../src/joystick.c \
../src/led7seg.c \
../src/light.c \
../src/main.c \
../src/oled.c \
../src/pca9532.c \
../src/potentiometer.c \
../src/rotary.c \
../src/screenLog.c \
../src/temp.c \
../src/uart.c \
../src/uart2.c \
../src/xbee.c 

OBJS += \
./src/RGBLed.o \
./src/baseboard.o \
./src/cr_startup_lpc176x.o \
./src/eeprom.o \
./src/flash.o \
./src/font5x7.o \
./src/joystick.o \
./src/led7seg.o \
./src/light.o \
./src/main.o \
./src/oled.o \
./src/pca9532.o \
./src/potentiometer.o \
./src/rotary.o \
./src/screenLog.o \
./src/temp.o \
./src/uart.o \
./src/uart2.o \
./src/xbee.o 

C_DEPS += \
./src/RGBLed.d \
./src/baseboard.d \
./src/cr_startup_lpc176x.d \
./src/eeprom.d \
./src/flash.d \
./src/font5x7.d \
./src/joystick.d \
./src/led7seg.d \
./src/light.d \
./src/main.d \
./src/oled.d \
./src/pca9532.d \
./src/potentiometer.d \
./src/rotary.d \
./src/screenLog.d \
./src/temp.d \
./src/uart.d \
./src/uart2.d \
./src/xbee.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -D__REDLIB__ -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/workspacePruebas/TanqueControl/src/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/cr_startup_lpc176x.o: ../src/cr_startup_lpc176x.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -D__REDLIB__ -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/workspacePruebas/TanqueControl/src/inc" -Os -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/cr_startup_lpc176x.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


