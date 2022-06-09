/*
	Ejercicio 9. Realice un programa que calcule el valor que toma la siguiente
	función para valores dados de x e y.
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	// Variables.
	float x, y, resultado = 0;
	
	// Lectura de datos.
	cout<<"Digite valor de x: ";
	cin>>x;
	cout<<"Digite valor de y: ";
	cin>>y;
	
	// Expresion.
	resultado = sqrt(x) / (pow(y,2) - 1);
	
	// Impresión de datos.
	cout.precision(2);
	cout<<"El resultado de la funcion es: "<<resultado;
	
	return 0;
}
