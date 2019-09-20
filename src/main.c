/*
 * main.c
 *
 *  Created on: 16 sep. 2019
 *      Author: valeria
 */

#include "sapi.h"
#include "blinky2.h"

int main(void) {
	boardConfig();
	Blinky2 blinkyR;
	Blinky2 blinkyV;

	estadoInicial(&blinkyV);
	estadoInicial(&blinkyR);

	while (1) {
		blinkyUpDate(&blinkyR, 500);
		blinkyUpDate(&blinkyV, 500);

		blinkyRender(&blinkyR,&blinkyV);

		delay(1);
	}
}
