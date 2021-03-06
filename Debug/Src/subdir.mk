################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/stm32l4xx_hal_msp.c \
../Src/stm32l4xx_it.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32l4xx.c 

OBJS += \
./Src/main.o \
./Src/stm32l4xx_hal_msp.o \
./Src/stm32l4xx_it.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32l4xx.o 

C_DEPS += \
./Src/main.d \
./Src/stm32l4xx_hal_msp.d \
./Src/stm32l4xx_it.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32l4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/main.o: ../Src/main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/OLED_SSD1306_Driver" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PelicanCrossing" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianAnimationBitMap" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianSpeaker" -I../Inc -I../Drivers/CMSIS/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianRequestLight" -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Scheduler" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/stm32l4xx_hal_msp.o: ../Src/stm32l4xx_hal_msp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/OLED_SSD1306_Driver" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PelicanCrossing" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianAnimationBitMap" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianSpeaker" -I../Inc -I../Drivers/CMSIS/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianRequestLight" -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Scheduler" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/stm32l4xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/stm32l4xx_it.o: ../Src/stm32l4xx_it.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/OLED_SSD1306_Driver" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PelicanCrossing" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianAnimationBitMap" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianSpeaker" -I../Inc -I../Drivers/CMSIS/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianRequestLight" -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Scheduler" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/stm32l4xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/OLED_SSD1306_Driver" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PelicanCrossing" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianAnimationBitMap" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianSpeaker" -I../Inc -I../Drivers/CMSIS/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianRequestLight" -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Scheduler" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/sysmem.o: ../Src/sysmem.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/OLED_SSD1306_Driver" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PelicanCrossing" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianAnimationBitMap" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianSpeaker" -I../Inc -I../Drivers/CMSIS/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianRequestLight" -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Scheduler" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/sysmem.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/system_stm32l4xx.o: ../Src/system_stm32l4xx.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSCH_ISR_SYSTICK -DSTM32L476xx -DDEBUG -c -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Signal" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/OLED_SSD1306_Driver" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Standard/stm32_gcc" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PelicanCrossing" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianAnimationBitMap" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/CarLight" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianSpeaker" -I../Inc -I../Drivers/CMSIS/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/PedestrianRequestLight" -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I"D:/prj/CubeIDE_ws/Traffic_Light_1/system" -I"D:/prj/CubeIDE_ws/Traffic_Light_1/Scheduler" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/system_stm32l4xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

