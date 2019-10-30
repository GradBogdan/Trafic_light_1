/*
 * sig.h
 *
 *  Created on: Mar 24, 2019
 *      Author: Pati
 */

#include "sig_cfg.h"

#ifndef SIGNAL_SIG_H_
#define SIGNAL_SIG_H_

#define SIG_SET(name, value) SIG_SET_##name(value)
#define SIG_GET(name) SIG_GET_##name

/**** Code usage
 #include "sig.h"
 ................
 
 SIG_GET(XXX) - getting the global variable of the signal
 SIG_GET(YYY) - getting the pin status
 SIG_SET(XXX, 3) - setting the global variable of the signal
 SIG_SET(YYY, STD_LOW) - setting the pin status
 if (SIG_GET(RED_BUTTON) == STD_HIGH)
	 
Getting the global variable (the generic signal to read it in other modules)
SIG_GET(RED_LIGHT) =>	 SIG_GET_RED_BUTTON =>
=> SIG_GET_RED_LIGHT => sig_red_light

Setting the global variable (the generic signal to read it in other modules)
-this setting is based on how you configure the signal in sig_cfg.h
	ex: #define SIG_SET_RED_LIGHT(value) {sig_red_light = value;}	
SIG_SET(RED_LIGHT, STD_HIGH) => SIG_SET_RED_LIGHT(STD_HIGH) => 
=>sig_red_light(global variable) = STD_HIGH

Writing the siganl pin (HIGH or LOW)
-this setting is based on how you configure the signal in sig_cfg.h
	ex: #define SIG_SET_RED_LIGHT(value) Dio_WriteChannel(value)
		-RED_BUTTON is define in the dio module 	
SIG_SET(RED_BUTTON, STD_HIGH) => SIG_SET_RED_LIGHT (STD_HIGH)=>
=>SIG_SET_RED_LIGHT (STD_HIGH) => Dio_WriteChannel(STD_HIGH)

Readding the siganl pin (HIGH or LOW)
-this setting is based on how you configure the signal in sig_cfg.h
	ex: #define SIG_GET_RED_BUTTON Dio_ReadChannel(DIO_B)
		-RED_BUTTON is define in the dio module
SIG_GET(RED_BUTTON) => SIG_GET_RED_BUTTON =>
=>	Dio_ReadChannel(DIO_B)	

 */
#endif /* SIGNAL_SIG_H_ */
