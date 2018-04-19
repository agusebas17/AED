



#include<iostream>
#include<string.h>

using namespace std;

/*operaciones con enteros,reales y booleanos*/
int main(){
	
	unsigned a, b, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	double ri,rj,suma_reales =0, resta_reales =0, multiplicacion_reales=0, division_reales=0;
	bool valor;
	bool prueba;
	bool add, conjuncion ;
	char char_a;
	char char_b;
  	char cad1 [30] ;
    	char cad2 [30] ;
	int largo =strlen(cad1);
	int int_a, int_b, int_suma = 0, int_resta = 0, int_multiplicacion = 0, int_division = 0;
	valor = false ;
	prueba = true ;
	cout << "*******EJEMPLOS CON NATURALES******* \n \n";
	cout<<"Digite un numero natural: ";
	cin>>a;
	cout<<"Digite otro numero natural: ";
	cin>>b;

	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;

	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;

	if(a==b){
		cout<<"Ambos numeros son iguales" << "\n";
	}
	else if(a>b){
		cout<<"El mayor es: "<<a << " \n \n";
	}
	else{
		cout<<"El mayor es: "<<b << "\n \n";;
	}

	cout << "*******EJEMPLOS CON ENTEROS******* \n \n";
	cout<<"Digite un numero entero: ";
	cin>>int_a;
	cout<<"Digite otro numero entero: ";
	cin>>int_b;

	int_suma = int_a+int_b;
	int_resta = int_a-int_b;
	int_multiplicacion = int_a*int_b;
	int_division = int_a/int_b;

	cout<<"\nLa suma es: "<<int_suma<<endl;
	cout<<"La resta es: "<<int_resta<<endl;
	cout<<"La multiplicacion es: "<<int_multiplicacion<<endl;
	cout<<"La division es: "<<int_division<<endl;

	if(int_a==int_b){
		cout<<"Ambos numeros son iguales" << "\n";
	}
	else if(int_a>int_b){
		cout<<"El mayor es: "<< int_a << " \n \n";
	}
	else{
		cout<<"El mayor es: "<< int_b << "\n \n";;
	}
  	std::cout << "*******EJEMPLOS CON REALES******* \n \n";

 	std :: cout << "Ingrese un numeros de dos digitos " ;

 	std :: cin >> ri;

 	std :: cout << "\nIngrese otro numero de dos digitos " ;

 	std :: cin >> rj;

 	suma_reales=ri+rj;
 	resta_reales=ri-rj;
 	multiplicacion_reales=ri*rj;
 	division_reales=ri/rj;

 	std :: cout << "\nEl resultado de la suma es " << suma_reales << endl;
 	std :: cout << "\nEl resultado de la resta es " << resta_reales << endl;
 	std :: cout << "\nEl resultado de la division es " << division_reales << endl;
 	std :: cout << "\nEl resultado de la multiplicacion es " << multiplicacion_reales << endl;


	 while (ri != rj){
		if (ri>rj) {
		std::cout <<"El número " << ri << " es mayor a " << rj << ". \n" ;
		}
		else {
		std::cout <<"El número " << rj << " es mayor a " << ri << ". \n" ;
					}
		valor = true;
		cout <<"Al ser numeros distintos el valor de la variable booleana es: "  << valor << "\n \n";
	break;
}
while (valor == false){
	std::cout << "Los numeros son iguales \n";
	cout << "Al ser numeros iguales el valor de la variable booleana es: " << valor << "\n \n";
	break;
}


	 cout << "*******EJEMPO BOOL******* \n";
	 add = prueba and valor;
	 conjuncion = prueba or valor;
	 cout << "Ejemplo de operacion and:" << add <<  "\n" ; /* Para que de 1, los numeros reales deben ser distintios */
	 cout << "Ejemplo de operacion or: "  << conjuncion  <<  "\n"; /*Siempra va a dar 1*/
	 cout << "Ejemplo de operacion not primer variable: " << not valor  <<  "\n"; /* Da 1 si los numeros reales son iguales" */
	 cout << "Ejemplo de operacion not segunda varible: " << not prueba  <<  "\n" ; /* Siempra va a dar 0 */



/*strings*/
{
    cout << "******* EJMPLO CON STRING*******" << endl<<endl;
    cout << "Ejemplo 1: determinar si dos cadenas son iguales (o no ) " << endl<<endl;
  
    cout << "Ingrese la primer cadena " << endl;
    cin>> cad1;

    cout << "Ingrese la segunda cadena :" << endl;
    cin>>cad2;


    if (strcmp(cad1,cad2)==0)
    {
        cout<<"Las dos cadenas son iguales"<<endl<<endl;
    }
    else
    {
        cout<<"Las dos cadenas no son iguales"<<endl<<endl;
    }
    cout << "Ejemplo 2: determinar cual cadena es mayor (alfabeticamente) " << endl;

    cout << "Ingrese la primer cadena " << endl;
    cin>> cad1;

    cout << "Ingrese la segunda cadena :" << endl;
    cin>> cad2;


    if (strcmp(cad1,cad2)==0)
    {
        cout<<"Las dos cadenas son iguales"<<endl<<endl;
    }
    else
    {
        if (strcmp(cad1,cad2)<0)
        {
            cout<<"La cadena :" <<"\t"<<cad2<<"\t"<<"es mayor " <<endl<<endl;
        }
        else
        {

            cout<<"La cadena :" <<"\t"<<cad1<<"\t"<<"es mayor" <<endl<<endl;
        }
    }

    cout << "Ejemplo 3: unir dos cadenas consecutivamente  " << endl;

    cout << "Ingrese la primer cadena :" << endl;
    cin>> cad1;

    cout << "Ingrese la segunda cadena :" << endl;
    cin>> cad2;

    strcat(cad1,cad2);

    cout<<"La cadena resultante es:  "<<"\t"<<cad1<<endl<<endl;

    cout << "Ejemplo 4: determinar el largo de una cadena " << endl;

    cout << "Ingrese la cadena a calcular:" << endl;
    cin>> cad1;
    
    cout <<"El largo de la cadena es de"<<"("<<largo<<")"<<"caracteres"<<endl<<endl;

	
	std:cout << "*******EJMPLO CON CHAR******* \n" ; 
	std::cout << "INGRESE CHAR A: ";
	std::cin >> char_a;
	std::cout << "INGRESE CHAR B: ";
	std::cin >> char_b;

	if (char_a > char_b)
	{
		std::cout << "LA RESTA A-B ES " << char_a - char_b << "\n";
	}
	else if (char_a < char_b)
	{
		std::cout << "LA SUMA A+B ES " << char_a + char_b << "\n";
	}
	else
	{
		std::cout << "LA DIVISION A/B ES " << char_a / char_b << "\n";
	};
		std::cout << "LA MULTIPLICACION A*B ES " << char_a * char_b << "\n";
	;




} 
}

