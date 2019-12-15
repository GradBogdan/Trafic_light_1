/*
 * CarLight.h
 *
 *  Created on: Dec 4, 2019
 *      Author: Pati
 */

#ifndef CARLIGHT_H_
#define CARLIGHT_H_

#include <std_types.h>

static trafficLightState_t CL_state = CL_DEFAULT_GREEN;

trafficLightState_t CL_Init(trafficLightState_t CL_state);
void CL_SetLightColor(trafficLightState_t CL_state);


#endif /* CARLIGHT_H_ */
