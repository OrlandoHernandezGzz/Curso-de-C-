/*
	La sentencia if
	
	if(condicional){
		instruciones 1;
	} else {
		instrucciones 2;
	}
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	int numero, dato = 5;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero == dato){
		cout<<"\nEl numero es 5";
	} else {
		cout<<"\nEl numero es diferente de 5";
	}
	
	return 0;
}
