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
	Comprar(string TipoMoneda, string MetodoPago, float Total, string FechaCompra) {
		this->TipoMoneda = TipoMoneda;
		this->MetodoPago = MetodoPago;
		this->Total = Total;
		this->FechaCompra = FechaCompra;
	}
    ~Comprar(){}
	void RealizarCompra(TipoMoneda,MetodoPago,FechaCompra){}
	void CalcularPago(Total){}
	void Aumentarprenda(){}
	void EliminarPrenda(){}
};

