################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/7\ segment/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Clock_counter.lss \

FLASH_IMAGE += \
Clock_counter.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Clock_counter.elf secondary-outputs

# Tool invocations
Clock_counter.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Clock_counter.map -mmcu=atmega16 -o "Clock_counter.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Clock_counter.lss: Clock_counter.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Clock_counter.elf  >"Clock_counter.lss"
	@echo 'Finished building: $@'
	@echo ' '

Clock_counter.hex: Clock_counter.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Clock_counter.elf  "Clock_counter.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Clock_counter.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 Clock_counter.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Clock_counter.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
