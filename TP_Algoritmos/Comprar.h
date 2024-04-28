#pragma once
#include<iostream>
#include <string>
#include "Vestimenta.h"
#include "CarritoCompras.h"
using namespace std;
class Compras
{
private:
	string TipoMoneda;
	string MetodoPago;
	float Total;

public:
	void Comprar(string TipoMoneda, string MetodoPago, float Total);
	string RealizarCompra(string TipoMoneda, string MetodoPago);
	string CalcularPago(float Total);

	void MostrarCompra();
	void Aumentarprenda();
	
	void EliminarPrenda();
	
};

