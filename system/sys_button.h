/*
 * sys_button.h
 *
 *  Created on: Sep 9, 2019
 *      Author: Pati
 */

#ifndef SYS_BUTTON_H_
#define SYS_BUTTON_H_

/* initialize a external interrupt for the button
 */
void Sys_ISRButtonInit(void);


/*this function handle the external interrupts(when a button is pressed it toggles an LED)
 */
void Sys_ISRButtonHandler(void);


#endif /* SYS_BUTTON_H_ */
