#pragma once
#include "Vestimenta.h"
#include <string>
using namespace std;

class Temporada : Vestimenta
{
private:
	string estacionAnio;
	string fechaInicio;
	string fechaFin;
public:
	Temporada();
	~Temporada();
};

