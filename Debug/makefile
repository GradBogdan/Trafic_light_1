################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include system/stm32_gcc/subdir.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Signal/subdir.mk
-include Scheduler/subdir.mk
-include PelicanCrossing/subdir.mk
-include PedestrianSpeaker/subdir.mk
-include PedestrianRequestLight/subdir.mk
-include PedestrianAnimationBitMap/subdir.mk
-include OLED_SSD1306_Driver/subdir.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include CarLight/stm32_gcc/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Traffic_Light_1.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Traffic_Light_1.list \

OBJCOPY_BIN += \
Traffic_Light_1.bin \


# All Target
all: Traffic_Light_1.elf secondary-outputs

# Tool invocations
Traffic_Light_1.elf: $(OBJS) $(USER_OBJS) D:\prj\CubeIDE_ws\Traffic_Light_1\STM32L476RGTX_FLASH.ld
	arm-none-eabi-gcc -o "Traffic_Light_1.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\prj\CubeIDE_ws\Traffic_Light_1\STM32L476RGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Traffic_Light_1.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Traffic_Light_1.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Traffic_Light_1.list"
	@echo 'Finished building: $@'
	@echo ' '

Traffic_Light_1.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Traffic_Light_1.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
