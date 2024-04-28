#include "Cliente.h"
#include <iostream>

void Cliente::RecargarSaldo(float nuevoSaldo)
{
	saldo += nuevoSaldo;
	cout << "El nuevo saldo es: " + to_string(saldo);
}

float Cliente::ConsultarSaldo()
{
	return saldo;
}

void Cliente::CambiarTarjeta(string nuevaTarjeta)
{
	tarjeta = nuevaTarjeta;
	cout << "La nueva tarjeta es: " + tarjeta;
}
