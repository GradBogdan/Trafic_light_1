################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../scheduler/sch.c \
../scheduler/sch_cfg.c 

OBJS += \
./scheduler/sch.o \
./scheduler/sch_cfg.o 

C_DEPS += \
./scheduler/sch.d \
./scheduler/sch_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
scheduler/sch.o: ../scheduler/sch.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/standard/stm32_gcc" -I../Inc -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/scheduler" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"scheduler/sch.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
scheduler/sch_cfg.o: ../scheduler/sch_cfg.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/standard/stm32_gcc" -I../Inc -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/scheduler" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"scheduler/sch_cfg.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

