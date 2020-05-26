/*
 * PelicanCrossing.c
 *
 *  Created on: Feb 29, 2020
 *      Author: Pati
 */
#include <sig_cfg.h>
#include <CarLight.h>

#include <PelicanCrossing.h>

void PC_Init(){

}

void PC_Main(){
	if(SIG_GET_PEDESTRIAN_REQUEST == STD_HIGH && CL_cycle_count >=40){
		CL_state = CL_CAR_YELLOW;
		SIG_SET_PEDESTRIAN_REQUEST(STD_LOW);
	};
	switch(CL_state){
		case CL_CAR_RED :
			if (SIG_GET_PELICAN_CROSS_TIMER <=5) {
				CL_SetLightColor(CL_state);
				SIG_SET_PEDESTRIAN_ANIMATION(STD_HIGH);
			}
			else {
				CL_state = CL_CAR_STREET_PREPARATION;
				SIG_SET_PELICAN_CORSS_TIMER(0);
			}
			break;
		case CL_CAR_STREET_PREPARATION :
			if(SIG_GET_PELICAN_CROSS_TIMER <=3) {
				CL_SetLightColor(CL_state);
				CL_state_count = CL_state_count+1;
			}
			else {
				CL_state = CL_CAR_GREEN;
				SIG_SET_PELICAN_CORSS_TIMER(0);
			}
			break;
		case CL_CAR_YELLOW :
			if (SIG_GET_PELICAN_CROSS_TIMER <=2) {
				CL_SetLightColor(CL_state);
				CL_state_count = CL_state_count+1;
			}
			else {
				CL_state = CL_CAR_RED;
				SIG_SET_PELICAN_CORSS_TIMER(0);
			}
			break;
		case CL_CAR_GREEN :
			if (SIG_GET_PELICAN_CROSS_TIMER <=5) {
				CL_SetLightColor(CL_state);
				CL_state_count = CL_state_count+1;
				SIG_SET_PEDESTRIAN_ANIMATION(STD_LOW);
			}
			else {
				CL_state = CL_CAR_GREEN_WAIT_PED_REQ;
				SIG_SET_PELICAN_CORSS_TIMER(0);
			}
			break;
		case CL_CAR_GREEN_WAIT_PED_REQ :
				CL_SetLightColor(CL_state);
				SIG_SET_PEDESTRIAN_ANIMATION(STD_LOW);

			break;

		default :
			CL_state = CL_CAR_GREEN_WAIT_PED_REQ;
			break;
	};

}

