################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: test-FatFS.axf

# Tool invocations
test-FatFS.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\CMSISv2p00_LPC17xx\Debug" -L"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_mcu\Debug" -L"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_small_printf\Debug" -L"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_FatFS\Debug" -Xlinker -Map="test-FatFS.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "test-FatFS_Debug.ld" -o"test-FatFS.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) test-FatFS.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "test-FatFS.axf"; # arm-none-eabi-objcopy -O binary "test-FatFS.axf" "test-FatFS.bin" ; checksum -p LPC1769 -d "test-FatFS.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
