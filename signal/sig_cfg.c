/*
 * sig_cfg.c
 *
 *  Created on: Mar 24, 2019
 *      Author: Pati
 */

#include <sig_cfg.h>

//Generic form
uint16_t sig_xxx;

// Windows application  signal ( keyboard )

uint8_t sig_red_light;


//Stm32l4xx application
uint8_t sig_car_red;
uint8_t sig_car_yellow;
uint8_t sig_car_green;
uint8_t sig_pedestrian_green;
uint8_t sig_pedestrian_red;
uint8_t sig_pedestrian_animation;
uint8_t sig_pedestrian_speaker;

uint8_t pelicanCross_counter;
uint8_t pelicanCross_timer;

uint8_t CL_state_count;
uint8_t CL_cycle_count;

uint8_t sig_pedestrian_request;
uint8_t sig_ped_green;





