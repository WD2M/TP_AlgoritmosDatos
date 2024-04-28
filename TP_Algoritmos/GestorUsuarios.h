#pragma once
#include "Cliente.h"
#include "Vendedor.h"
#include "Distribuidor.h"

class GestorUsuarios
{
private:
	Cliente cliente;
	Vendedor vendedor;
	Distribuidor distribuidor;
public:
	Usuario CrearUsuarios(int posUsuario);
	void CrearUsuariosDistribuidor(int cantidad, int inicial);
	void CrearUsuariosVendedor(int cantidad);
	void CrearUsuariosCliente(int cantidad);
	void usuarioDistribuidor(Usuario usua, string ubicacion, string contacto);
	void usuarioVendedor(Usuario usua, float ventas, string empresa);
	void usuarioCliente(Usuario usua, float saldo, string tarjeta);
	string RegistroContenido(string nombre);
	void EnviarCorreo();
	string Correo(string nombre);
};