#pragma once
#include<iostream>
#include <string>
#include "CarritoCompras.h"
using namespace std;
class Compras
{
protected:
	string TipoMoneda;
	string MetodoPago;
	float Total;

public:
	void Comprar(string TipoMoneda, string MetodoPago, float Total);
	string RealizarCompra(string TipoMoneda, string MetodoPago);
	string CalcularPago(float Total);
    void MostrarCompra(float precio);
	void Aumentarprenda();
	
	void EliminarPrenda();
	
};

