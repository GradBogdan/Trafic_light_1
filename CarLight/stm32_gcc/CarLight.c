/*
 * CarLight.c
 *
 *  Created on: Dec 4, 2019
 *      Author: Pati
 */
#include <sig_cfg.h>

#include <CarLight.h>

/*this function initialize car light state
 */
trafficLightState_t CL_Init(trafficLightState_t CL_state){
	CL_state = CL_CAR_GREEN_WAIT_PED_REQ;
	return CL_state;
}

/* this function set the color of the car traffic light
 *param: CL_state: the state in which the car light is in  (RED, YELLOW, GREEN)
 *
 *
 */
void CL_SetLightColor(trafficLightState_t CL_state){
	switch(CL_state){
		case CL_CAR_RED :
			SIG_SET_CAR_RED;
			SIG_RESET_CAR_YELLOW;
			SIG_RESET_CAR_GREEN;
			SIG_SET_PEDESTRIAN_GREEN;
			SIG_RESET_PEDESTRIAN_RED;
			break;
		case CL_CAR_STREET_PREPARATION :
			SIG_TOGGLE_CAR_RED;
			SIG_TOGGLE_PEDESTRIAN_GREEN;
			break;
		case CL_CAR_YELLOW :
			SIG_SET_CAR_YELLOW;
			SIG_RESET_CAR_RED;
			SIG_RESET_CAR_GREEN;
			SIG_SET_PEDESTRIAN_RED;
			SIG_RESET_PEDESTRIAN_GREEN;
			break;
		case CL_CAR_GREEN :
			SIG_SET_CAR_GREEN;
			SIG_RESET_CAR_YELLOW;
			SIG_RESET_CAR_RED;
			SIG_SET_PEDESTRIAN_RED;
			SIG_RESET_PEDESTRIAN_GREEN;
			break;
		case CL_CAR_GREEN_WAIT_PED_REQ :
			SIG_SET_CAR_GREEN;
			SIG_RESET_CAR_YELLOW;
			SIG_RESET_CAR_RED;
			SIG_SET_PEDESTRIAN_RED;
			SIG_RESET_PEDESTRIAN_GREEN;
			break;
		default :
			SIG_TOGGLE_CAR_YELLOW;
			SIG_TOGGLE_PEDESTRIAN_REQUEST;
			break;
	};
}
