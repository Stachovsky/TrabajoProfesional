################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src/subdir.mk
-include src/Lib_MCU/src/subdir.mk
-include src/Lib_EaBaseBoard/src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: driverGraphicLCD.axf

# Tool invocations
driverGraphicLCD.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspacePruebas/CMSISv2p00_LPC17xx/Debug" -Xlinker -Map="driverGraphicLCD.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "driverGraphicLCD_Debug.ld" -o"driverGraphicLCD.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) driverGraphicLCD.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "driverGraphicLCD.axf"; # arm-none-eabi-objcopy -O binary "driverGraphicLCD.axf" "driverGraphicLCD.bin" ; checksum -p LPC1769 -d "driverGraphicLCD.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
