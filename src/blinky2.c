/*
 * blinky2.c
 *
 *  Created on: 16 sep. 2019
 *      Author: valeria
 */
#include  "blinky2.h"
#include "sapi.h"
void estadoInicial(Blinky2 * blinky) {
	blinky->tiempoUltimoCambio = tickRead();
	blinky->EstadoBlinky = Encendido;

}
void blinkyUpDate(Blinky2 * blinky, int tiempoEncendido) {

	int TickActual = tickRead();
	int TiempoPasado = TickActual - blinky->tiempoUltimoCambio;

	switch (blinky->EstadoBlinky) {
	case Encendido: {
		if (TiempoPasado >= tiempoEncendido) {
			blinky->EstadoBlinky = Apagado;
			blinky->tiempoUltimoCambio = TickActual;
		}
		break;
	}
	case Apagado: {
		if (TiempoPasado >= tiempoEncendido) {
			blinky->EstadoBlinky = Encendido;
			blinky->tiempoUltimoCambio = TickActual;
		}
		break;
	}

	}
}
void blinkyRender(Blinky2 * blinkyR, Blinky2 * blinkyV) {

	switch (blinkyV->EstadoBlinky) {
//	encendido amarillo, apagado
//	azul
	case Encendido: {
		gpioWrite(LED3, ON);
		gpioWrite(LEDG, OFF);
		break;
	}
	case Apagado: {
		gpioWrite(LED3, OFF);
		gpioWrite(LEDG, ON);
		break;
	}

	}
	switch (blinkyR->EstadoBlinky) {
	//	encendido amarillo, apagado
	//	azul
	case Encendido: {
		gpioWrite(LED1, ON);
		gpioWrite(LEDB, OFF);
		break;
	}
	case Apagado: {
		gpioWrite(LED1, OFF);
		gpioWrite(LEDB, ON);
		break;
	}
	}
}
