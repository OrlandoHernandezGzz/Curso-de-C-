/*
	Ejercicio 4. Comprobar si un número digitado por el usuario es positivo
	o negativo.
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
	} else if(numero >= 1){
		cout<<"\nEl numero es positivo"<<endl;
	} else {
		cout<<"\nEl numero es negativo"<<endl;
	}
	
	return 0;
}

