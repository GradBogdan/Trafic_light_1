/*
 * sig_cfg.h
 *
 *  Created on: Mar 24, 2019
 *      Author: Pati
 */
#include <std_types.h>

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

//Stm32l4xx application
extern uint8_t sig_light;
extern uint8_t sig_pedestrian_request;
#endif /* SIGNAL_SIG_CFG_H_ */
