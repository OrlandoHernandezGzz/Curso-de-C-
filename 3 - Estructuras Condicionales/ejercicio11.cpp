/*
	Ejercicio 11. Hacer un programa que simule un cajero automático con un saldo
	inicial de 1000 dólares.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float saldo_inicial = 1000, ingreso, egreso, saldo = 0;
	int accion;
	
	// Lectura de datos.
	cout<<"Digite la accion que desea realizar:\n1 - Consultar Saldo. \n2 - Agregar Saldo. \n3 - Retirar Saldo. \n4 - Salir. \nAqui: ";
	cin>>accion;
	
	switch(accion){
		case 1:
			cout<<"\nSu saldo es de: "<<saldo_inicial<<" Dolares"<<endl;
			break;
			
		case 2: 
			cout<<"\nDigite la cantidad a ingresar: ";
			cin>>ingreso;
			
			saldo = saldo_inicial + ingreso;
			
			cout<<"\nAhora tiene una cantidad de "<<saldo<<" Dolares"<<endl;
			
			break;
		
		case 3: 
		cout<<"\nDigite la cantidad a retirar: ";
			cin>>egreso;
			
			if(egreso > saldo_inicial){
				cout<<"\nNo tiene esa cantidad de dinero"<<endl;
			} else {
				saldo = saldo_inicial - egreso;
		
				cout<<"\nAhora tiene una cantidad de "<<saldo<<" Dolares"<<endl;
			}
			
			break;
		
		case 4: break;
		
		default: 
			cout<<"\nDebe seleccionar su opcion entre [1-3].";
			break;
	}
	
	return 0;
}
