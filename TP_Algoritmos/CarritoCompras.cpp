#include "CarritoCompras.h"
#include "HistorialCompras.h"
#include "Comprar.h"
#include <iostream>
#include <string>
using namespace std;

void CarritoCompras::agregar(int a)
{
	cout << "Evento Agregar Compras \n";
}

void CarritoCompras::Eliminar()
{
	cout << "Evento Eliminar Compras \n";
}

void CarritoCompras::Comprar()
{
	Compras compras;
	compras.MostrarCompra();
}

void CarritoCompras::Historial()
{
	HIstorialCompras historial;
	historial.HistorialCompras();
}
