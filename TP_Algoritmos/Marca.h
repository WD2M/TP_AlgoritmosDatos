#pragma once
#include "Vestimenta.h"
#include <string>
using namespace std;

class Marca : Vestimenta
{
private:
	string nombreMarca;
	string estilo;
	bool disponibilidad;
public:
	Marca();
	~Marca();
};

