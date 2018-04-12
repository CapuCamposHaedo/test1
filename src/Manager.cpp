/*
 * Manager.cpp
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#include <Manager.h>

Manager::Manager()
{
	for (int i = 0;i < N; i++)
	{
		figuras[i] = NULL;
	}
}

Manager::~Manager()
{
	// TODO Auto-generated destructor stub
}

bool Manager::agregar(Figura* f)
{
	int i;
	for (i = 0; i < N; i++)
	{
		if (this->figuras[i] == NULL) {
			this->figuras[i] = f;
			return true;
		}
	}
	return false;
}

void Manager::borrar(int id)
{
	delete figuras[id];
	figuras[id] = NULL;
}


void Manager::cambiarOrden(int a, int b)
{
	Figura * aux = figuras[a];
	figuras[a] = figuras[b];
	figuras[b] = aux;
}

void Manager::trasladarX(int id, int d)
{
	figuras[id]->trasladarX(d);
}

void Manager::trasladarY(int id, int d)
{
	figuras[id]->trasladarY(d);
}

void Manager::mostrar()
{
	for (int i = 0; i < N; i++)
	{
		if(figuras[i] != NULL)
		{
			figuras[i]->mostrarEnPantalla();
		}
	}
}
