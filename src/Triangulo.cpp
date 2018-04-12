/*
 * Triangulo.cpp
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#include <Triangulo.h>

Triangulo::Triangulo(Punto* v1, Punto* v2, Punto* v3)
{
	this->vertices[1] = v1;
	this->vertices[2] = v2;
	this->vertices[3] = v3;

}

Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}

void Triangulo::mostrarEnPantalla()
{
	std::cout << "Triángulo" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "(" << this->vertices[i]->x << "," << this->vertices[i]->y << ")" << std::endl;
	}
}

void Triangulo::trasladarX(int d)
{
	for (int i = 0; i < 3; i++)
	{
		this->vertices[i]->trasladarX(d);
	}
}

void Triangulo::trasladarY(int d)
{
	for (int i = 0; i < 3; i++)
	{
		this->vertices[i]->trasladarY(d);
	}
}
