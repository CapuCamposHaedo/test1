/*
 * Rectangulo.cpp
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#include "Rectangulo.h"

Rectangulo::Rectangulo(Punto * v1, Punto* v2, Punto* v3, Punto* v4)
{
	this->vertices[1] = v1;
	this->vertices[2] = v2;
	this->vertices[3] = v3;
	this->vertices[4] = v4;
}

Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
}

void Rectangulo::mostrarEnPantalla()
{
	std::cout << "Rectángulo" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "(" << this->vertices[i]->x << "," << this->vertices[i]->y << ")" << std::endl;
	}
}

void Rectangulo::trasladarX(int d)
{
	for (int i = 0; i < 4; i++)
	{
		this->vertices[i]->trasladarX(d);
	}
}

void Rectangulo::trasladarY(int d)
{
	for (int i = 0; i < 4; i++)
	{
		this->vertices[i]->trasladarY(d);
	}
}
