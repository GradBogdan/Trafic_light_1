/*
 * sig_cfg.h
 *
 *  Created on: Mar 24, 2019
 *      Author: Pati
 */
#include <std_types.h>
#include <main.h>


#ifndef SIGNAL_SIG_CFG_H_
#define SIGNAL_SIG_CFG_H_

//Generic
#define SIG_GET_XXX sig_xxx

#define SIG_GET_XXX sig_xxx
#define SIG_SET_XXX(value) {sig_xxx = value;}

// Windows application  signal ( keyboard )
#define SIG_GET_RED_LIGHT sig_red_light
#define SIG_SET_RED_LIGHT(value) {sig_red_light = value;}

#define SIG_GET_LIGHT sig_light
#define SIG_SET_LIGHT(value) {sig_light = value;}

//Start of Stm32l4xx application signals
//PelicanCrossing Status signal
#define SIG_GET_PELICAN_CROSS_TIMER pelicanCross_timer
#define SIG_SET_PELICAN_CORSS_TIMER(value) {pelicanCross_timer = value;}

//Car signals
#define SIG_GET_CAR_RED HAL_GPIO_ReadPin(GPIOC, RED_LIGHT_LED_Pin)
#define SIG_SET_CAR_RED HAL_GPIO_WritePin(GPIOC, RED_LIGHT_LED_Pin, GPIO_PIN_SET)
#define SIG_RESET_CAR_RED HAL_GPIO_WritePin(GPIOC, RED_LIGHT_LED_Pin, GPIO_PIN_RESET)
#define SIG_TOGGLE_CAR_RED HAL_GPIO_TogglePin(GPIOC, RED_LIGHT_LED_Pin)

#define SIG_GET_CAR_YELLOW HAL_GPIO_ReadPin(GPIOC, YELLOW_LIGHT_LED_Pin)
#define SIG_SET_CAR_YELLOW HAL_GPIO_WritePin(GPIOC, YELLOW_LIGHT_LED_Pin, GPIO_PIN_SET)
#define SIG_RESET_CAR_YELLOW HAL_GPIO_WritePin(GPIOC, YELLOW_LIGHT_LED_Pin, GPIO_PIN_RESET)
#define SIG_TOGGLE_CAR_YELLOW HAL_GPIO_TogglePin(GPIOC, YELLOW_LIGHT_LED_Pin)

#define SIG_GET_CAR_GREEN HAL_GPIO_ReadPin(GPIOC, GREEN_LIGHT_LED_Pin)
#define SIG_SET_CAR_GREEN HAL_GPIO_WritePin(GPIOC, GREEN_LIGHT_LED_Pin, GPIO_PIN_SET)
#define SIG_RESET_CAR_GREEN HAL_GPIO_WritePin(GPIOC, GREEN_LIGHT_LED_Pin, GPIO_PIN_RESET)
#define SIG_TOGGLE_CAR_GREEN HAL_GPIO_TogglePin(GPIOC, GREEN_LIGHT_LED_Pin)

//Pedestrian signals
#define SIG_GET_PEDESTRIAN_GREEN HAL_GPIO_ReadPin(GPIOA,PED_GREEN_LED_Pin)
#define SIG_SET_PEDESTRIAN_GREEN HAL_GPIO_WritePin(GPIOA, PED_GREEN_LED_Pin, GPIO_PIN_SET)
#define SIG_RESET_PEDESTRIAN_GREEN HAL_GPIO_WritePin(GPIOA, PED_GREEN_LED_Pin, GPIO_PIN_RESET)
#define SIG_TOGGLE_PEDESTRIAN_GREEN HAL_GPIO_TogglePin(GPIOA, PED_GREEN_LED_Pin)

#define SIG_GET_PEDESTRIAN_RED HAL_GPIO_ReadPin(GPIOA,PED_RED_LED_Pin)
#define SIG_SET_PEDESTRIAN_RED HAL_GPIO_WritePin(GPIOA, PED_RED_LED_Pin, GPIO_PIN_SET)
#define SIG_RESET_PEDESTRIAN_RED HAL_GPIO_WritePin(GPIOA, PED_RED_LED_Pin, GPIO_PIN_RESET)
#define SIG_TOGGLE_PEDESTRIAN_RED HAL_GPIO_TogglePin(GPIOA, PED_RED_LED_Pin)

#define SIG_GET_PEDESTRIAN_REQUEST sig_pedestrian_request
#define SIG_SET_PEDESTRIAN_REQUEST(value) {sig_pedestrian_request = value;}
#define SIG_RESET_PEDESTRIAN_REQUEST HAL_GPIO_WritePin(GPIOB, PED_REQUEST_LED_Pin, GPIO_PIN_RESET)
#define SIG_TOGGLE_PEDESTRIAN_REQUEST HAL_GPIO_TogglePin(GPIOB, PED_REQUEST_LED_Pin)

#define SIG_GET_PEDESTRIAN_ANIMATION sig_pedestrian_animation
#define SIG_SET_PEDESTRIAN_ANIMATION(value) {sig_pedestrian_animation = value;}

#define SIG_GET_PEDESTRIAN_SPEAKER sig_pedestrian_speaker
#define SIG_SET_PEDESTRIAN_SPEAKER(value) { sig_pedestrian_speaker = value;}

//end of Stm32l4xx application signals

#define SIG_GET_PED_GREEN sig_ped_green
#define SIG_SET_PED_GREEN(value) {sig_ped_green = value;}


//DIO
#define SIG_GET_YYY Dio_ReadChannel(YYY)
#define SIG_SET_YYY(value) Dio_WriteChannel(value)


// Windows application  signal ( keyboard )
#define SIG_GET_RED_BUTTON Dio_ReadChannel(DIO_B)
#define SIG_SET_RED_BUTTON(value) Dio_WriteChannel(value)

#define SIG_GET_YELLOW_BUTTON Dio_ReadChannel(DIO_C)
#define SIG_SET_YELLOW_BUTTON(value) Dio_WriteChannel(value)

#define SIG_GET_GREEN_BUTTON Dio_ReadChannel(DIO_D)
#define SIG_SET_GREEN_BUTTON(value) Dio_WriteChannel(value)


//Generic
extern uint16_t sig_xxx;

// // Windows application  signal ( keyboard )
extern uint8_t sig_red_light;

//PelicanCrossing Timer
extern uint8_t pelicanCross_timer;

//Stm32l4xx application
extern uint8_t sig_car_red;
extern uint8_t sig_car_yellow;
extern uint8_t sig_car_green;
extern uint8_t sig_pedestrian_green;
extern uint8_t sig_pedestrian_red;
extern uint8_t sig_pedestrian_animation;
extern uint8_t sig_pedestrian_speaker;

extern uint8_t CL_state_count;//time in seconds spent in each state
extern uint8_t CL_cycle_count;//time in sescond for one traffic light cycle (red->yellow->green)


extern uint8_t sig_pedestrian_request;
extern uint8_t sig_ped_green;
#endif /* SIGNAL_SIG_CFG_H_ */
