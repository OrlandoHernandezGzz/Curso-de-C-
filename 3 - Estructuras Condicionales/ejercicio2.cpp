/* 
	Ejercicio 2. Escriba un programa que lea tres números y determine cuál de ellos
	es el mayor.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	int num1, num2, num3;
	
	// Lectura de datos.
	cout<<"Digite el valor de tres numeros: ";
	cin>>num1>>num2>>num3;
	
	// Condicional.
	if((num1>=num2) && (num1>=num3)){
		cout<<"\nEl mayor es: "<<num1<<endl;
	} else if((num2>=num1) && (num2>=num3)){
		cout<<"\nEl mayor es: "<<num2<<endl;
	} else {
		cout<<"\nEl mayor es: "<<num3<<endl;	
	}
	
	
	return 0;
}
