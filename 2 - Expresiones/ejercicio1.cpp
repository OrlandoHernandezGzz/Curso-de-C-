// 1. Escribe la siguiente expresión como expresión en c++.

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float a, b, resultado = 0;
	
	// Lectura de datos.
	cout<<"Digite el valor de a: ";
	cin>>a;
	
	cout<<"Digite el valor de b: ";
	cin>>b;
	
	resultado = (a/b) + 1;
	
	// Establece la precision de los decimales.
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}
