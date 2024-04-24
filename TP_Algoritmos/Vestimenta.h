#pragma once
class Vestimenta
{
private:
	int codVestimenta;
	float precio;
	string color;
	string talla;
	char genero;
	string descripcion;
	string material;
public:
	Vestimenta();
	~Vestimenta();
	void setVestimenta(int codVestimenta, float precio, string color, string talla, char genero, string descripcion, string material);
	string getVestimenta();
};

