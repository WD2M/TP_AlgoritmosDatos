#pragma once
#include "Usuario.h"
class Cliente : Usuario
{
private:
	float saldo;
	string tarjeta;
public:
	void RecargarSaldo(float nuevoSaldo);
	float ConsultarSaldo();
	void CambiarTarjeta(string nuevaTarjeta);
};

