#pragma once
#include "Vestimenta.h"
#include <string>

class Favoritos
{
private:
	string disponibilidad;
	float rebajas;
	int tamaño = 5;
	int productos[5] = {11, 125, 74, 46, 96};
public:
	void AgregarFavorito(int codigo);
	void RemoverFavorito(int codigo);
	void VerFavoritos();
};

