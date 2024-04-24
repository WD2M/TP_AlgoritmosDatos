#pragma once
#include "Pedido.h"
#include "Usuario.h"
class HIstorialCompras
{
private:
	Pedido* arraypedido[5];
	Usuario usuario;
	Pedido* pedido;
public:
	void HistorialCompras();
};

