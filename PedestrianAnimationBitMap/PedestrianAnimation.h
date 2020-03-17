/*
 * PedestrianAnimation.h
 *
 *  Created on: Jan 12, 2020
 *      Author: Pati
 */

#ifndef PEDESTRIANANIMATION_H_
#define PEDESTRIANANIMATION_H_


/*this function sets pedestrian walking animation
 * param:none
 */
void PA_SetPedWalking(void);

/*this function sets pedestrian walking animation
 * param:none
 */
void PA_SetPedStand(void);

void PA_Init();
void PA_main(uint8_t sig_pedestrian_animation);


#endif /* PEDESTRIANANIMATION_H_ */
