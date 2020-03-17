/*
 * PedestrianAnimation.c
 *
 *  Created on: Jan 12, 2020
 *      Author: Pati
 */

#include <ssd1306.h>
#include <Ped_Animation_Bitmaps.h>
#include <std_types.h>

#include <PedestrianAnimation.h>

void PA_SetPedWalking(void) {
	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_1, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_2, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_3, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_4, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_5, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_6, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_7, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_8, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_9, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_10, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_11, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_12, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_13, 128, 64, 1);
	SSD1306_UpdateScreen();

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_cross_14, 128, 64, 1);
	SSD1306_UpdateScreen();

}

void PA_SetPedStand(void) {
	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, Ped_stop, 128, 64, 1);
	SSD1306_UpdateScreen();
}

void PA_Init(){

}

void PA_main(uint8_t sig_pedestrian_animation){
	if (sig_pedestrian_animation == STD_HIGH) {
		PA_SetPedWalking();
	}
	else {
		PA_SetPedStand();
	}
}
