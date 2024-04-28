#include "Vestimenta.h"
#include <iostream>
#include <string>
using namespace std;

Vestimenta::Vestimenta()
{

	int codVestimenta = 0;
	float precio = 0;
	string nombre = " ";
	string color = " ";
	string talla = " ";
	char genero = ' ';
	string descripcion = " ";
	bool menor = false;
	string material = " ";
}

Vestimenta::~Vestimenta()
{
}

void Vestimenta::setVestimenta(int codVestimenta, float precio, string nombre, string color, string talla, char genero, string descripcion, bool menor, string material)
{
}

void Vestimenta::setNombre()
{
	cout << "\nIngrese su nombre: ";

	if (cin.peek() == '\n') {
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	getline(cin, this->nombre);
}

string Vestimenta::getNombre()
{
	return nombre;
}
