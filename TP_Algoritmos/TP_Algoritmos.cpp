// CLASES AGREGADAS
#include "Usuario.cpp"
#include "CarritoCompras.h"
#include "Vestimenta.h"

// ENCABEZADO
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Hola mundo  \n";
	CarritoCompras carritoCompra;
	carritoCompra.agregar(1);
	carritoCompra.Comprar();
	carritoCompra.Eliminar();
	system("pause>0");
}
