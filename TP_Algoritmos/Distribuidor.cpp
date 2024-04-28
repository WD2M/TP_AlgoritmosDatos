#include "Distribuidor.h"
#include <iostream>

void Distribuidor::ModificarUbicacion(string nuevaUbicacion)
{
	ubicacion = nuevaUbicacion;
	cout << "La neuva ubicacion es: " + ubicacion;
}

string Distribuidor::ConsultarContacto()
{
	return contacto;
}

void Distribuidor::ModificarContacto(string nuevoContacto)
{
	contacto = nuevoContacto;
	cout << "El nueva contacto es: " + contacto;
}
