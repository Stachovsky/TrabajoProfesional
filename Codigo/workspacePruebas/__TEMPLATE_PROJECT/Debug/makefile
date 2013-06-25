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
-include src/APIs/src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: __TEMPLATE_PROJECT.axf

# Tool invocations
__TEMPLATE_PROJECT.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/Debug" -Xlinker -Map="__TEMPLATE_PROJECT.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "SensoresPruebas_Debug.ld" -o"__TEMPLATE_PROJECT.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) __TEMPLATE_PROJECT.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "__TEMPLATE_PROJECT.axf"; # arm-none-eabi-objcopy -O binary "__TEMPLATE_PROJECT.axf" "__TEMPLATE_PROJECT.bin" ; checksum -p LPC1769 -d "__TEMPLATE_PROJECT.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
