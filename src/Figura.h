/*
 * Figura.h
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#ifndef FIGURA_H_
#define FIGURA_H_

#include <iostream>

class Figura {
public:
	Figura();
	virtual ~Figura();
	virtual void mostrarEnPantalla() = 0;
	virtual void trasladarX(int d) = 0;
	virtual void trasladarY(int d) = 0;

	//void setOrden(int o);
	//void setId(int i);
	//int getOrden();
	//int getId();

private:
	//int orden;
	//int id;
};

#endif /* FIGURA_H_ */
