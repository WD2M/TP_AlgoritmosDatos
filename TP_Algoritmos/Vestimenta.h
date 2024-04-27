#pragma once
#include <string>
using namespace std;

class Vestimenta
{
protected:
	int codVestimenta;
	float precio;
	string nombre;
	string color;
	string talla;
	char genero;
	string descripcion;
	bool menor;
	string material;

public:
	// CONSTRUCTOR
	Vestimenta();

	// DESTRUCTOR
	~Vestimenta();

	void setVestimenta(int codVestimenta, float precio, string nombre, string color, string talla, char genero, string descripcion, bool menor, string material);
};


