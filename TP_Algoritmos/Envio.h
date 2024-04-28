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
	Envio(string Ubicacion, char EstadoEnvio, int Codigo, string FechaEnvio)
	{
		this->Ubicacion = Ubicacion;
		this->EstadoEnvio= EstadoEnvio;
		this->Codigo=Codigo;
		this->FechaEnvio= FechaEnvio;
	}
	~Envio(){}
	//void Enviar(Ubicacion,Codigo,FechaEnvio){}
	//void EstadodelEnvio(EstadoEnvio){}
	//void redirigirEnvio(Ubicacion,Codigo){}
};

