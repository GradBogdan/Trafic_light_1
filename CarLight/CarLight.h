/*
 * CarLight.h
 *
 *  Created on: Dec 4, 2019
 *      Author: Pati
 */

#ifndef CARLIGHT_H_
#define CARLIGHT_H_

typedef enum{
	CL_RED, CL_YELLOW, CL_GREEN, CL_FLASH_RED, CL_DEFAULT_GREEN
}trafficLightState_t;

static trafficLightState_t CL_state = CL_DEFAULT_GREEN;

trafficLightState_t CL_Init(trafficLightState_t CL_state);
void CL_SetLightColor(trafficLightState_t CL_state);


#endif /* CARLIGHT_H_ */
