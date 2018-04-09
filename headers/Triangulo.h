/*
 * Triangulo.h
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "Figura.h"
#include "Punto.h"

class Triangulo: public Figura {
public:
	Triangulo(Punto* v1, Punto* v2, Punto* v3);
	virtual ~Triangulo();

	virtual void mostrarEnPantalla();
	virtual void trasladarX(int d);
	virtual void trasladarY(int d);

private:
	Punto * vertices[3];
};

#endif /* TRIANGULO_H_ */
