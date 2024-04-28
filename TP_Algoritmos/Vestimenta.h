#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vestimenta
{
public:
	int codVestimenta;
	float precio;
	string nombre;
	string color;
	string talla;
	char genero;
	string descripcion;
	bool menor;
	string material;

	Vestimenta();
	~Vestimenta();
	void setVestimenta(int codVestimenta, float precio, string nombre, string color, string talla, char genero, string descripcion, bool menor, string material);
	void setNombre();
	string getNombre();

};

