#pragma once
#include<iostream>
#include <string>
#include "Vestimenta.h"
using namespace std;
class Comprar
{
private:
	string TipoMoneda;
	string MetodoPago;
	float Total;
	string FechaCompra;
public:
	void Comprar(string TipoMoneda, string MetodoPago, float Total, string FechaCompra);
	void ~Comprar();
	void RealizarCompra(string TipoMoneda, string MetodoPago, string FechaCompra);
	void CalcularPago(float Total);
	string MostrarCompra();
	void Aumentarprenda();
	
	void EliminarPrenda();
	
};

