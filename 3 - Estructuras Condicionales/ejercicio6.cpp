/*
	Ejercicio 6. Escriba un programa que lea de la entrada estándar un carácter e 
	indique en la salida estándar sí el carácter es una vocal mínuscula, es una 
	vocal mayúscula o no es una vocal.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	char vocal;
	
	// Lectura de datos.
	cout<<"Digite una letra: ";
	cin>>vocal;
	
	// condicional.
	switch(vocal){
		case 'a':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'e':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'i':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'o':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'u':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'A':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'E':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'I':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'O':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		case 'U':
			cout<<"\nLa letra es una vocal"<<endl;
			break;
		default:
			cout<<"\nLa letra no es una vocal"<<endl;
	}
	
	return 0;
}
