/*
 * sys_button.c
 *
 *  Created on: Sep 9, 2019
 *      Author: Pati
 */
#include <stm32l4xx_hal.h>
#include <stm32l476xx.h>
#include <main.h>

#include <sys_button.h>

void Sys_ISRButtonInit(void) {
	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0,0);
	/* unmasking the interrupt on pin 13
	 *
	 */
	EXTI->IMR1 |= EXTI_IMR1_IM13;

	/* setting how to get the signal ( on the falling edge )
	 *
	 */
	EXTI->RTSR1 |= EXTI_FTSR1_FT13;

	SYSCFG->EXTICR[3] = SYSCFG_EXTICR4_EXTI13_PC;

}

void Sys_ISRButtonHandler(void) {

	if(EXTI->PR1 & EXTI_PR1_PIF13) {


		EXTI->PR1 |= EXTI_PR1_PIF13;
	}
}


