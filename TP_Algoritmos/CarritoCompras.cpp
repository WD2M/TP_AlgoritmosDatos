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

int CarritoCompras::getCodigo(int a)
{
	return a;
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
