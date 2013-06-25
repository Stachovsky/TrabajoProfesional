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
all: API_SdCard.axf

# Tool invocations
API_SdCard.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/Debug" -Xlinker -Map="API_SdCard.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "API_SdCard_Debug.ld" -o"API_SdCard.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) API_SdCard.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "API_SdCard.axf"; # arm-none-eabi-objcopy -O binary "API_SdCard.axf" "API_SdCard.bin" ; checksum -p LPC1769 -d "API_SdCard.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
