/*
	Ejercicio 5. Escriba un fragmento de programa que intercambie los valores
	de dos variables.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	int valor1, valor2, comodin;
	
	// Lectura de datos
	cout<<"Digite el primer valor: ";
	cin>>valor1;
	cout<<"Digite el segundo valor: ";
	cin>>valor2;
	
	// Intercambio de valores.
	comodin = valor1;
	valor1 = valor2;
	valor2 = comodin;
	
	cout<<"El primer valor es: "<<valor1<<endl;
	cout<<"El segundo valor es: "<<valor2;
	
	return 0;
}
