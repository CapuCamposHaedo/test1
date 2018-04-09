/*
 * Rectangulo.h
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Figura.h"
#include "Punto.h"

class Rectangulo: public Figura
{
public:
	Rectangulo(Punto* v1, Punto* v2, Punto* v3, Punto* v4);
	virtual ~Rectangulo();

	virtual void mostrarEnPantalla();
	virtual void trasladarX(int d);
	virtual void trasladarY(int d);

private:
	Punto * vertices[4];
};

#endif /* RECTANGULO_H_ */
