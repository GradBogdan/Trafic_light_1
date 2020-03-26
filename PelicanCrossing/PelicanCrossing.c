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
	CL_cycle_count++;
		if(SIG_GET_PEDESTRIAN_REQUEST == STD_HIGH && CL_cycle_count >=40){
			CL_state = CL_YELLOW;
			CL_state_count= 0;
			CL_cycle_count = 0;
			SIG_SET_PEDESTRIAN_REQUEST(STD_LOW);
		};
		switch(CL_state){
			case CL_RED :
				if (CL_state_count <=5) {
					CL_SetLightColor(CL_state);
					CL_state_count = CL_state_count+1;
					SIG_SET_PEDESTRIAN_ANIMATION(STD_HIGH);
				}
				else {
					CL_state = CL_FLASH_RED;
					CL_state_count =0;
				}
				break;
			case CL_FLASH_RED :
				if(CL_state_count <=3) {
					CL_SetLightColor(CL_state);
					CL_state_count = CL_state_count+1;
				}
				else {
					CL_state = CL_GREEN;
					CL_state_count =0;
				}
				break;
			case CL_YELLOW :
				if (CL_state_count <=2) {
					CL_SetLightColor(CL_state);
					CL_state_count = CL_state_count+1;
				}
				else {
					CL_state = CL_RED;
					CL_state_count =0;
				}
				break;
			case CL_GREEN :
				if (CL_state_count <=5) {
					CL_SetLightColor(CL_state);
					CL_state_count = CL_state_count+1;
					SIG_SET_PEDESTRIAN_ANIMATION(STD_LOW);
				}
				else {
					CL_state = CL_DEFAULT_GREEN;
					CL_state_count =0;
				}
				break;
			case CL_DEFAULT_GREEN :
					CL_SetLightColor(CL_state);
					SIG_SET_PEDESTRIAN_ANIMATION(STD_LOW);

				break;

			default :
				CL_state = CL_DEFAULT_GREEN;
				break;
		};

}

