/*
	Ejercicio 3. Realice un programa que lea un valor entero y determine
	si se trata de un numero par o impar.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	int numero;
	
	// Lectura de datos.
	cout<<"Digite el valor del numero: ";
	cin>>numero;
	
	// Condicional.
	if(numero == 0){
		cout<<"\nEl valor del numero es cero"<<endl;	
	}else if(numero % 2 == 0){
		cout<<"\nEl valor del numero es par"<<endl;
	} else {
		cout<<"\nEl valor del numero es impar"<<endl;
	}
	
	return 0;
}
