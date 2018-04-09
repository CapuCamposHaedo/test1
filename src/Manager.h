/*
 * Manager.h
 *
 *  Created on: 26 mar. 2018
 *      Author: Santiago
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "Figura.h"
#include "stddef.h"

#define N	5

class Manager {
public:
	Manager();
	virtual ~Manager();

	bool agregar(Figura * f);
	void borrar(int id);
	void cambiarOrden(int a, int b);
	void trasladarX(int id, int d);
	void trasladarY(int id,int d);

	void mostrar();

private:
	Figura *figuras[N];

};

#endif /* MANAGER_H_ */
