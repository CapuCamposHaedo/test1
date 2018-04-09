/*
 * Punto.h
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#ifndef PUNTO_H_
#define PUNTO_H_

#include "Figura.h"

class Punto: public Figura {
public:
	Punto(int x, int y);
	virtual ~Punto();

	virtual void mostrarEnPantalla();
	virtual void trasladarX(int d);
	virtual void trasladarY(int d);

	int x,y;

private:

};

#endif /* PUNTO_H_ */
