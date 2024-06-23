#pragma once
#include "Usuario.h"

class Distribuidor : public Usuario
{
public:
	string ubicacion;
	string contacto;
public:
	void ModificarUbicacion(string nuevaUbicacion);
	string ConsultarContacto();
	void ModificarContacto(string nuevoContacto);
};