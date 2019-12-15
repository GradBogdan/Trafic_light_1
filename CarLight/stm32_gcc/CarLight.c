/*
 * CarLight.c
 *
 *  Created on: Dec 4, 2019
 *      Author: Pati
 */
#include <main.h>

#include <CarLight.h>

/*this function initialize car light state
 */
trafficLightState_t CL_Init(trafficLightState_t CL_state){
	CL_state = CL_DEFAULT_GREEN;
	return CL_state;
}

/* this function set the color of the car traffic light
 *param: CL_state: the state in which the car light is in  (RED, YELLOW, GREEN)
 *
 *
 */
void CL_SetLightColor(trafficLightState_t CL_state){
	switch(CL_state){
		case CL_RED :
			HAL_GPIO_WritePin(GPIOC, RED_LIGHT_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOC, YELLOW_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC, GREEN_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, PED_GREEN_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, PED_RED_LED_Pin, GPIO_PIN_RESET);
			break;
		case CL_FLASH_RED :
			HAL_GPIO_TogglePin(GPIOC, RED_LIGHT_LED_Pin);
			HAL_GPIO_TogglePin(GPIOA, PED_GREEN_LED_Pin);
			break;
		case CL_YELLOW :
			HAL_GPIO_WritePin(GPIOC, YELLOW_LIGHT_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOC, RED_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC, GREEN_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, PED_RED_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, PED_GREEN_LED_Pin, GPIO_PIN_RESET);
			break;
		case CL_GREEN :
			HAL_GPIO_WritePin(GPIOC, GREEN_LIGHT_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOC, YELLOW_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC, RED_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, PED_RED_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, PED_GREEN_LED_Pin, GPIO_PIN_RESET);
			break;
		case CL_DEFAULT_GREEN :
			HAL_GPIO_WritePin(GPIOC, GREEN_LIGHT_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOC, YELLOW_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC, RED_LIGHT_LED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC, PED_RED_LED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, PED_GREEN_LED_Pin, GPIO_PIN_RESET);
			break;
		default :
			HAL_GPIO_TogglePin(GPIOC, YELLOW_LIGHT_LED_Pin);
			HAL_GPIO_TogglePin(GPIOB, PED_REQUEST_LED_Pin);
			break;
	};
}
