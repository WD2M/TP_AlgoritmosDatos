#pragma once
#include "Usuario.h"
class Cliente : Usuario
{
private:

	float saldo;
	
public:
	string tarjeta;
	void RecargarSaldo(float nuevoSaldo);
	float ConsultarSaldo();
	void CambiarTarjeta(string nuevaTarjeta);
	int  codigo_del_usuario();
	string ubiciacion_del_usuario();
	void ClienteI(float saldo, string tarjeta, int codUsuario, string nombre, string apellido, string datosPersonales, string correo);
};

