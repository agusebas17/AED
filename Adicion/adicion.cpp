/*
 * add.cpp
 *	Agustin Sebastian
 *
 *  Created on: Mar 31, 2017
 *      Author: agustin
 */

#include <iostream>

int main () {

	int na,nb,nc;			/* Declaracion de variables enteras */

	std::cout << "Ingrese primer numero \n";
		std::cin >> na;
	std::cout << "Ingrese segundo numero \n";
		std::cin >> nb;		/* Ingreso de variables */

		nc=na+nb;			/* Suma de las variables, y almacenamiento del resultado */

	std::cout << "La suma de "<< na << " y "<< nb << " es: \n" << nc;

return 0;

}
