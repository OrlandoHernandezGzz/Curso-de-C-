/* 
	Ejercicio 1. Escriba un programa que lea dos números y determine cuál de
	ellos es el mayor.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float num1, num2;
	
	// Lectura de datos.
	//cout<<"Digite el valor del numero 1: ";
	//cin>>num1;
	//cout<<"Digite el valor del numero 2: ";
	//cin>>num2;
	
	// Una manera de lectura de datos mas optima.
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	// Condicional.
	if(num1 == num2){
		cout<<"\nAmbos numeros son iguales";
	} else if(num1 > num2){
		cout<<"\nEl numero 1 es mayor que el numero 2";
	} else {
		cout<<"\nEl numero 2 es mayor que el numero 1";
	}
	
	return 0;
}
