/* 
	2. Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida
	estándar el precio del producto al aplicarle el IVA.
*/

#include<iostream>

using namespace std;

int main(){
	// Variables.
	float precioProducto, IVA = .16, total = 0;
	
	// Lectura de datos.
	cout<<"Digite el precio del producto: ";
	cin>>precioProducto;
	
	total = (precioProducto * IVA) + precioProducto;
	
	cout<<"\nEl precio total es: "<<total;
	
	
	return 0;
}
