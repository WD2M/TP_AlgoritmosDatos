#pragma once
#include<iostream>
#include <string>
#include "CarritoCompras.h"
#include "Envio.h"
#include "Cliente.h"
#include "GestorUsuarios.h"
using namespace std;
class Compras
{
protected:
	Envio Realizar_Envio_Compra;
	GestorUsuarios Gestor_del_usuario;
	Cliente codigousuario;
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

