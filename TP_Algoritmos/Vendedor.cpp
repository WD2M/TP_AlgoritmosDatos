#include "Vendedor.h"
#include <iostream>

void Vendedor::AgregarVenta(float nuevaVenta)
{
	ventas += nuevaVenta;
	cout << "El nuevo saldo es: " + to_string(ventas);
}

float Vendedor::ConsultarVenta()
{
	return ventas;
}

void Vendedor::CambiarEmpresa(string nuevaEmpresa)
{
	empresa = nuevaEmpresa;
	cout << "La nueva empresa es: " + empresa;
}
