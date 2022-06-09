/*
	Ejercicio 10. Escriba un programa que calcule las soluciones de una ecuación de
	segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que:
	*Formula general*
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	// Variables.
	float x1=0, x2=0,a,b,c;
	
	// Lectura de datos.
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	cout<<"Digite el valor de c: ";
	cin>>c;
	
	// Expresion.
	x1 = (-b + (sqrt(pow(b,2) - 4*a*c))) / (2*a);
	x2 = (-b - (sqrt(pow(b,2) - 4*a*c))) / (2*a);
	
	// Impresion de datos.
	cout<<"\nEl resultado de la ecuacion es: "<<x1<<endl;
	cout<<"\nEl resultado de la ecuacion es: "<<x2;
	
	return 0;
}
