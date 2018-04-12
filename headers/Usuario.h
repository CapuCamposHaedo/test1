/*
 * Ususario.h
 *
 *  Created on: 6 abr. 2018
 *      Author: Santi
 */

#ifndef USUSARIO_H_
#define USUSARIO_H_

#include "Manager.h"

class Usuario
{
public:
	Usuario();
	virtual ~Usuario();
	void menu();

private:
	void crearCirculo();
	void crearRectangulo();
	void crearTriangulo();

	bool salir;

	void menuPrincipal();
	void menuOpcionesFiguras();

	Manager figManager;

};


#endif /* USUSARIO_H_ */
