/* 
	1. Escribe un programa que lea de la entrda estándar dos números y muestre en la salida estándar
	su suma, resta, multiplicación y división.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	int num1, num2;
	int suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	// Lectura de datos.
	cout<<"Digita el valor del 1er numero: ";
	cin>>num1;
	
	cout<<"Digita el valor del 2do numero: ";
	cin>>num2;
	
	// Operaciones aritmeticas.	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division;
	
	return 0;
}
