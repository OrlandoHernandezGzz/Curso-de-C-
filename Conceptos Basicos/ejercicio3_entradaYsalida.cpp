/*
	3. Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
		Edad: dato de tipo entero.
		Sexo: dato de tipo caracter.
		Altura en metros: dato de tipo real.
		
	Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	int edad;
	// Asignamos que esta variable podra almacenar 10 caracteres.
	char sexo[10];
	float altura;
	
	// lectura de datos.
	cout<<"Digite su edad: ";
	cin>>edad;
	
	cout<<"Digite su sexo: ";
	cin>>sexo;
	
	cout<<"Digite su altura: ";
	cin>>altura;
	
	// Impresión de datos.
	cout<<"\nLa edad es: "<<edad<<endl;
	cout<<"El sexo es: "<<sexo<<endl;
	cout<<"La altura es: "<<altura;
	
	return 0;
}

