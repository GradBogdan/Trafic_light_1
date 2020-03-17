/*
 * PedestrianRequestLight.h
 *
 *  Created on: Mar 13, 2020
 *      Author: Pati
 */

#ifndef PEDESTRIANREQUESTLIGHT_H_
#define PEDESTRIANREQUESTLIGHT_H_
/*this function initialize the PedestrianRequestLight module
 *
 */
void PRL_Init();

/*this function toggles or untoggles the PedestrianLightRequest
 * param: uint8_t sig_pedestrian_request HIGH / LOW
 *
 */
void PRL_main(uint8_t sig_pedestrian_request);


#endif /* PEDESTRIANREQUESTLIGHT_H_ */
