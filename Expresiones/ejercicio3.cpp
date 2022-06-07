// Ejercicio 3.

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float a,b,c,d,e,f, resultado;
	
	// Lectura de datos.
	cout<<"Digita el valor de a: ";
	cin>>a;
	cout<<"Digita el valor de b: ";
	cin>>b;
	cout<<"Digita el valor de c: ";
	cin>>c;
	cout<<"Digita el valor de d: ";
	cin>>d;
	cout<<"Digita el valor de e: ";
	cin>>e;
	cout<<"Digita el valor de f: ";
	cin>>f;
	
	// Expresion.
	resultado = ((a+(b/c)) / (d+(e/f)));
	
	// Impresión de datos.
	cout.precision(2);
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}
