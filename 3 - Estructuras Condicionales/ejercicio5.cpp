/*
	Ejercicio 5. Escriba un programa que lea de la entrada est�ndar un car�cter e
	indique en la salida est�ndar si el car�cter es una vocal min�scula o no.
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
		default:
			cout<<"\nLa letra no es una vocal"<<endl;
	}
	
	return 0;
}
