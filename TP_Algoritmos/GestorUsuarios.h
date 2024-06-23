#pragma once
#include "Cliente.h"
#include "Distribuidor.h"
#include "Grafo.hpp" //grafo


class GestorUsuarios
{
public:
	CGrafo<int>* G = new CGrafo<int>();
	Cliente cliente;
	Distribuidor distribuidor;

	Usuario CrearUsuarios(int posUsuario);
	int CrearUsuariosDistribuidor(int cantidad, int inicial);
	void CrearUsuariosVendedor(int cantidad, int inicial);
	int CrearUsuariosCliente(int cantidad, int inicial);
	void usuarioDistribuidor(Usuario usua, string ubicacion, int contacto);
	void usuarioVendedor(Usuario usua, float ventas, string empresa);
	void usuarioCliente(Usuario usua, float saldo, string tarjeta);
	string RegistroContenido(string nombre);
	int EnviarCorreo();
	string Correo(string nombre);
	int getContacto(int contacto2);
};