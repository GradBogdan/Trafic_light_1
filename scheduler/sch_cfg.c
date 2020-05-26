/*
 * sch_cfc.c
 *
 *  Created on: Nov 19, 2018
 *      Author: uia94411
 */

#include <sch.h>
#include <sch_cfg.h>


static Sch_Task_Type tasks[] = {
    {
        1000,        //interval in milliseconds
        17,           // offset: set equal to interval so the task is called on the first recurrence milliseconds
        Counter_Task_1000ms  //Task container; implement in your application
    },
    {
        200,          //interval in milliseconds
        0,           // offset: set equal to interval so the task is called on the first recurrence milliseconds
        PedWalkingAnimation_200ms  //Task container; implement in your application
    },
	{
		500,		//interval in milliseconds
		13,			 // offset: set equal to interval so the task is called on the first recurrence milliseconds
		PedestrianLight_Task_500ms		//Task container; implement in your application
	},
	{
		500, 		//interval in milliseconds
		0,			 // offset: set equal to interval so the task is called on the first recurrence milliseconds
		CarTrafficLight_Task_500ms		//Task container; implement in your application
	}
};
/* End of Configuration - edit to add new tasks */

/* Scheduler configuration; call Sch_Init(&Sch_Cfg) at startup */
Sch_Cfg_Type Sch_Cfg = {
    sizeof(tasks)/sizeof(tasks[0]),
    tasks
};
