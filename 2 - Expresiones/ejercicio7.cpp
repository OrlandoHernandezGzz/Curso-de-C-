/*
	Ejercicio 7. La calificación final de un estudiante es el promedio de
	tres notas:
	
	- La nota de prácticas que cuenta un 30% del total.
	- La nota teórica que cuenta un 60%.
	- La nota de participación que cuenta el 10% restante.
	
	Escriba un programa que lea las tres notas del alumno y escriba su
	nota final.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float porcentajePracticas = .30, porcentajeTeoria = .60, 
	porcentajeParticipacion = .10, notaPractica, notaTeoria, notaParticipacion, promedio = 0;
	
	// Lectura de datos.
	cout<<"Digite su calificacion de practicas: ";
	cin>>notaPractica;
	cout<<"Digite su calificacion de teoria: ";
	cin>>notaTeoria;
	cout<<"Digite su calificacion de participacion: ";
	cin>>notaParticipacion;
	
	// Expresion.
	promedio = ((notaPractica * porcentajePracticas) + (notaTeoria * porcentajeTeoria) + (notaParticipacion * porcentajeParticipacion));
	
	// Impresion de datos.
	cout<<"\nEl promedio final es: "<<promedio;
	
	return 0;
}
