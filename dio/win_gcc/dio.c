/*
 * dio.c
 *
 *  Created on: Nov 20, 2018
 *      Author: uia94411
 */

#include <windows.h>
#include <dio.h>


void Dio_Init(void) {

};

uint8_t Dio_ReadChannel(uint8_t id){
    if( GetAsyncKeyState(id) < 0 ) {
        return STD_HIGH;
    } else {
        return STD_LOW;
    }

}

