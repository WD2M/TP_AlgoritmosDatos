#pragma once
#include "Usuario.h"
class Distribuidor : Usuario
{
public:
	string ubicacion;
	string contacto;
public:
	void ModificarUbicacion(string nuevaUbicacion);
	string ConsultarContacto();
	void ModificarContacto(string nuevoContacto);
};