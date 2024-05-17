#pragma once
#include "Usuario.h"
class Vendedor : Usuario
{
public:
	float ventas;
	string empresa;
public:
	void AgregarVenta(float nuevaVenta);
	float ConsultarVenta();
	void CambiarEmpresa(string nuevaEmpresa);
};