#pragma once
#include "Vestimenta.h"
#include <string>
#include <iostream>
using namespace std;

class Marca : Vestimenta
{
private:
	string nombreMarca;
	int N;
	bool disponibilidad;
public:
	/*Marca(genero* g);*/
	string getmarca();

};