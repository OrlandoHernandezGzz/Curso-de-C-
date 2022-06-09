// Ejercicio 2.

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float a,b,c,d, resultado = 0;
	
	// Lectura de datos.
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	cout<<"Digite el valor de c: ";
	cin>>c;
	cout<<"Digite el valor de d: ";
	cin>>d;
	
	// Expresion.
	resultado = ((a+b) / (c+d));
	
	// Impresion de datos.
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}
