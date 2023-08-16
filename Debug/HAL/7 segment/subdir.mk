################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/7\ segment/7_segment_init.c 

OBJS += \
./HAL/7\ segment/7_segment_init.o 

C_DEPS += \
./HAL/7\ segment/7_segment_init.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/7\ segment/7_segment_init.o: ../HAL/7\ segment/7_segment_init.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"HAL/7 segment/7_segment_init.d" -MT"HAL/7\ segment/7_segment_init.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


