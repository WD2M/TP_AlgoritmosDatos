#include "Vestimenta.h"
#include <string>
using namespace std;

Vestimenta::Vestimenta()
{

}

Vestimenta::~Vestimenta()
{
}

void Vestimenta::setVestimenta(int _codVestimenta, float _precio, string _color, string _talla, char _genero, string _descripcion, bool _menor, string _material)
{
	this->codVestimenta = _codVestimenta;
	this->precio = _precio;
	this->color = _color;
	this->talla = _talla;
	this->genero = _genero;
	this->descripcion = _descripcion;
	this->menor = _menor;
	this->material = _material;
}

string Vestimenta::getVestimenta()
{
	return string();
}
