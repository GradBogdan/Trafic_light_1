################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/stm32_gcc/sys_button.c \
../system/stm32_gcc/sys_timer.c 

OBJS += \
./system/stm32_gcc/sys_button.o \
./system/stm32_gcc/sys_timer.o 

C_DEPS += \
./system/stm32_gcc/sys_button.d \
./system/stm32_gcc/sys_timer.d 


# Each subdirectory must supply rules for building sources it contributes
system/stm32_gcc/sys_button.o: ../system/stm32_gcc/sys_button.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I../Inc -I"D:/prj/CubeIDE_ws/Traffic_Light_1/scheduler" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/signal" -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"system/stm32_gcc/sys_button.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
system/stm32_gcc/sys_timer.o: ../system/stm32_gcc/sys_timer.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I../Inc -I"D:/prj/CubeIDE_ws/Traffic_Light_1/scheduler" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/signal" -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"system/stm32_gcc/sys_timer.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

