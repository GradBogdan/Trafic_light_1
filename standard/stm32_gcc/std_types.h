/*
 * std_types.h
 *
 *  Created on: Nov 20, 2018
 *      Author: uia94411
 */
#include <stdint.h>

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#define STD_LOW 0x00u
#define STD_HIGH 0x01u

/*
 * type for TrafficLight States
 */
typedef enum{
	CL_CAR_RED, CL_CAR_YELLOW, CL_CAR_GREEN, CL_CAR_STREET_PREPARATION, CL_CAR_GREEN_WAIT_PED_REQ
}trafficLightState_t;

#endif /* STD_TYPES_H_ */
