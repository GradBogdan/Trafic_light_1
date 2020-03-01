/*
 * systimer.h
 *
 *  Created on: Nov 19, 2018
 *      Author: uia94411
 */

#ifndef SYS_TIMER_H_
#define SYS_TIMER_H_

#include <std_types.h>

/* initializes a timer
 */
void Sys_TimerInit(void);


/*this function handle the interrupts(when a interrupt occurs it increments)
 *
 */
void Sys_TimerHandler(void);



/*this function returns the system time in Milliseconds
 * Parameter:
 * 	OUT : system tick at set time.
 */
uint32_t Sys_GetTimer(void);

#endif /* SYS_TIMER_H_ */
