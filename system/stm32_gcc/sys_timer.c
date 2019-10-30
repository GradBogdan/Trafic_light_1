/*
 * systimer.c
 *
 *  Created on: Nov 19, 2018
 *      Author: uia94411
 */

#include <stm32l4xx_hal.h>
#include <sys_timer.h>
#include <stm32l476xx.h>


uint32_t Sys_GetTimer(void) {
    return HAL_GetTick();
}


