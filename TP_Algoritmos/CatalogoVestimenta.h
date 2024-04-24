#pragma once
#include "Vestimenta.h"
#include <string>
using namespace std;

class CatalogoVestimenta
{
private:
	Vestimenta* vestimenta;
	string filtro;
public:
	CatalogoVestimenta();
	~CatalogoVestimenta();
	Vestimenta Filtrar(string filtro);
};

