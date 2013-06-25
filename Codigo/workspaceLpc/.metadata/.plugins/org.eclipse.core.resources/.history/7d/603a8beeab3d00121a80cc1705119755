################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src/subdir.mk
-include src/lib_FatFS/src/option/subdir.mk
-include src/lib_FatFS/src/lpc1xxx_spi_sd/subdir.mk
-include src/lib_FatFS/src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: testSdCard.axf

# Tool invocations
testSdCard.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/Debug" -L"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/Debug" -Xlinker -Map="testSdCard.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "test-FatFS_Debug.ld" -o"testSdCard.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) testSdCard.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "testSdCard.axf"; # arm-none-eabi-objcopy -O binary "testSdCard.axf" "testSdCard.bin" ; checksum -p LPC1769 -d "testSdCard.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
