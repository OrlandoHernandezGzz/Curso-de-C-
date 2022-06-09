/* 
	Ejercicio 6. Escriba un programa que lea la nota final de cuatro alumnos
	y calcule la nota final media de los cuatros alumnos.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float alumno1, alumno2, alumno3, alumno4, mediaFinal = 0;
	
	// Lectura de datos.
	cout<<"Digite la nota final del alumno 1: ";
	cin>>alumno1;
	cout<<"Digite la nota final del alumno 2: ";
	cin>>alumno2;
	cout<<"Digite la nota final del alumno 3: ";
	cin>>alumno3;
	cout<<"Digite la nota final del alumno 4: ";
	cin>>alumno4;
	
	// Expresion para calcular la media final.
	mediaFinal = (alumno1 + alumno2 + alumno3 + alumno4) / 4;
	
	// Impresión de datos.
	cout.precision(2);
	cout<<"\nLa media final del grupo es: "<<mediaFinal;
	
	return 0;
}
