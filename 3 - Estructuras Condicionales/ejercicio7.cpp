/*
	Ejercicio 7. Escriba un programa que solicite una edad (un entero) e indique
	en la salida estándar si la edad introducida está en el rango de [18 - 25]
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	int edad;
	
	// Lectura de datos.
	cout<<"Digite su edad: ";
	cin>>edad;
	
	// Condicional.
	if(edad >= 18 && edad <= 25){
		cout<<"\nSu edad esta en el rango [18-25]"<<endl;
	} else {
		cout<<"\nSu edad no esta en el rango [18-25]"<<endl;
	}
	
	return 0;
}
