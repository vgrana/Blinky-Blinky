/*
 * blinky2.h
 *
 *  Created on: 16 sep. 2019
 *      Author: valeria
 */

#ifndef PROGRAMS_BLINKY_BLINKY_BLINKY2_H_
#define PROGRAMS_BLINKY_BLINKY_BLINKY2_H_
enum EstadoBlinky {
	Apagado, Encendido
};

typedef struct Blinky {
	int tiempoUltimoCambio;
	int EstadoBlinky;
} Blinky2;

void estadoInicial(Blinky2 * blinky);

void blinkyUpDate(Blinky2 * blinky, int tiempoEncendido);

void blinkyRender(Blinky2 * blinky1, Blinky2 * blinky2);
#endif /* PROGRAMS_BLINKY_BLINKY_BLINKY2_H_ */
