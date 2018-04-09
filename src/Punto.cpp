/*
 * Punto.cpp
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#include "Punto.h"

Punto::Punto(int x, int y) {
	this->x = x;
	this->y = y;
}

Punto::~Punto() {
	// TODO Auto-generated destructor stub
}

void Punto::mostrarEnPantalla() {

}

void Punto::trasladarX(int d) {
	this->x += d;
}

void Punto::trasladarY(int d) {
	this->y += d;
}
