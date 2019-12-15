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
	CL_RED, CL_YELLOW, CL_GREEN, CL_FLASH_RED, CL_DEFAULT_GREEN
}trafficLightState_t;

#endif /* STD_TYPES_H_ */
