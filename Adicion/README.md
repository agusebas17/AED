# Adicion
**Enunciado**: Relizar pasos a seguir para realizar una suma de  dos numero enteros.


**Analisis**: Lo primero que se debe realizar es la declaracion de los numeros enteros,de esta manera el usuario ingresa ambos numeros. Para luego poder sumarlo, y luego, imprimir la suma.


**Algoritmo**: 


#include <iostream>
       int main () {
       
       
	     int na,nb,nc;			/* Declaracion de variables enteras */
	     
	     
	     std::cout << "Ingrese primer numero \n";
	     
	     
		   std::cin >> na;
		   
		   
       std::cout << "Ingrese segundo numero \n";
       
       
	   	 std::cin >> nb;		/* Ingreso de variables */
		 
		 
       nc=na+nb;			/* Suma de las variables, y almacenamiento del resultado */
       
       
       std::cout << "La suma de "<< na << " y "<< nb << " es: \n" << nc
       
       
       return 0;
       
       
    
}


