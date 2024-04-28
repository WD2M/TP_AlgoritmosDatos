#pragma once
#include<iostream>
#include <string>
#include "Usuario.h"
using namespace std;
class Envio
{
private:
	string Ubicacion;
	char EstadoEnvio;
	int Codigo;
	string FechaEnvio;

public:
	void Enviar(string Ubicacion, char EstadoEnvio, int Codigo, string FechaEnvio);
	void IndicarEnviar(string Ubicacion, int Codigo, string FechaEnvio);
	void EstadodelEnvio(char EstadoEnvio);
	void redirigirEnvio(string Ubicacion, int Codigo);
};

