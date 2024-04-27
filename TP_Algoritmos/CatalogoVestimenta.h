#pragma once
#include "Vestimenta.h"
#include <string>
using namespace std;



class CatalogoVestimenta
{
private:
	Vestimenta<int>* lst = new Vestimenta<int>();
	string filtro;
public:
	CatalogoVestimenta();
	~CatalogoVestimenta();
};

