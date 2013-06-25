################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/cr_startup_lpc176x.c \
../src/debug.c \
../src/dir.c \
../src/disc.c \
../src/efs.c \
../src/extract.c \
../src/fat.c \
../src/file.c \
../src/fs.c \
../src/ioman.c \
../src/ls.c \
../src/main.c \
../src/mkfs.c \
../src/partition.c \
../src/plibc.c \
../src/rdb1768_spi.c \
../src/sd.c \
../src/time.c \
../src/ui.c 

OBJS += \
./src/cr_startup_lpc176x.o \
./src/debug.o \
./src/dir.o \
./src/disc.o \
./src/efs.o \
./src/extract.o \
./src/fat.o \
./src/file.o \
./src/fs.o \
./src/ioman.o \
./src/ls.o \
./src/main.o \
./src/mkfs.o \
./src/partition.o \
./src/plibc.o \
./src/rdb1768_spi.o \
./src/sd.o \
./src/time.o \
./src/ui.o 

C_DEPS += \
./src/cr_startup_lpc176x.d \
./src/debug.d \
./src/dir.d \
./src/disc.d \
./src/efs.d \
./src/extract.d \
./src/fat.d \
./src/file.d \
./src/fs.d \
./src/ioman.d \
./src/ls.d \
./src/main.d \
./src/mkfs.d \
./src/partition.d \
./src/plibc.d \
./src/rdb1768_spi.d \
./src/sd.d \
./src/time.d \
./src/ui.d 


# Each subdirectory must supply rules for building sources it contributes
src/cr_startup_lpc176x.o: ../src/cr_startup_lpc176x.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/API_SdCard/inc" -O0 -Os -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/cr_startup_lpc176x.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/API_SdCard/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


