/*
	Ejercicio 8. Escriba un programa que lea de la entrada estándar los dos catetos
	de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.
*/

#include<iostream>
// Librería para usar sqrt y pow.
#include<math.h>

using namespace std;

int main(){
	// Variables.
	float catetoA, catetoB, hipotenusa;
	
	// Lectura de datos.
	cout<<"Digite el valor del cateto a: ";
	cin>>catetoA;
	cout<<"Digite el valor del cateto b: ";
	cin>>catetoB;
	
	// Expresion.
	hipotenusa = sqrt((pow(catetoA, 2) + pow(catetoB, 2)));
	
	// Impresión de datos.
	cout.precision(2);
	cout<<"\nLa hipotenusa es: "<<hipotenusa;
	
	
	return 0;
}
