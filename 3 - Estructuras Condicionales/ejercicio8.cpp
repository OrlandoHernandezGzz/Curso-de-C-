/*
	Ejercicio 8. Escribe un programa que lea de la entrada estándar tres numeros.
	Después debe leer un cuarto número e indicar si el número coincide con alguno de
	los introducidos con anterioridad.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float num1, num2, num3, num4;
	
	// Lectura de datos.
	cout<<"Digite el valor de tres numeros: ";
	cin>>num1>>num2>>num3; 
	
	cout<<"Digite el valor del cuarto numero: ";
	cin>>num4;
	
	// Condicional.
	if(num1 == num4 || num2 == num4 || num3 == num4){
		cout<<"\nEl cuarto valor coincide con otro numero"<<endl;
	} else {
		cout<<"\nEl cuarto valor no coincide con otro numero"<<endl;
	}
	
	return 0;
}
