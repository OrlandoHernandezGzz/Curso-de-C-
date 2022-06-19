/*
	Ejercicio 12. Hacer un menú que considere las siguientes opciones:
	caso 1: Cubo de un número.
	caso 2: Número par o impar.
	caso 3: Salir.
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	// Variables.
	int opcion, numero, resultado;
	
	cout<<"Digite la opción que desea realizar:";
	cout<<"\n1 - Cubo de un numero";
	cout<<"\n2 - Numero par o impar";
	cout<<"\n3 - Salir";
	cout<<"\nOpcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1: 
			cout<<"\nDigite un numero: ";
			cin>>numero;
			
			resultado = pow(numero, 3);
			cout<<"\nEl cubo del numero es: "<<resultado;
			
			break;
		
		case 2:
			cout<<"\nDigite un numero: ";
			cin>>numero;
			
			if(numero % 2 == 0){
				cout<<"\nEl numero es Par.";
			} else {
				cout<<"\nEl numero es Impar.";
			}
			break;
			
		case 3: 
			
			break;
		
		default: 
			cout<<"\nSeleccione las opciones con el rango establecido [1-3]";
	}
	
	return 0;
}
