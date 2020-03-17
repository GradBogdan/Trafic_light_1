/*
 * PedestrianRequestLight.c
 *
 *  Created on: Mar 13, 2020
 *      Author: Pati
 */
#include <std_types.h>
#include <sig_cfg.h>

#include <PedestrianRequestLight.h>

void PRL_Init();

void PRL_main(uint8_t sig_pedestrian_request) {
	if(sig_pedestrian_request == STD_HIGH){
		SIG_TOGGLE_PEDESTRIAN_REQUEST;
	}
	else {
		SIG_RESET_PEDESTRIAN_REQUEST;
	}
}


