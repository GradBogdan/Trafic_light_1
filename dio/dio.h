/*
 * dio.h
 *
 *  Created on: Nov 20, 2018
 *      Author: uia94411
 */

#ifndef DIO_H_
#define DIO_H_
#include <std_types.h>

/* Initialize/ Configured  the Inputs and Outputs of the system
 * and it is executed once at the beginning of the program
 */
void Dio_Init(void);

/* Reads the outputs or inputs (depending of the configurations) of the system
 * Parameter:
 *        id: an unsigned 8 bits integer witch represents the status of the input or output
 */
uint8_t Dio_ReadChannel(uint8_t id);

/*Sets the pin status to HIGH or LOW
 *
 *
 */

void Dio_WriteChannel(void);


#endif /* DIO_H_ */
