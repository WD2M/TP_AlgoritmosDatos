#pragma once
#include<iostream>
#include "Comprar.h"

using namespace std;
class Pedido : Compras
{

public:
	void DetallesEnvio();
	void CancelarPedido();
	void RealizarNuevoPedido();
};

