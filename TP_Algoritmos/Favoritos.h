#pragma once
#include "Vestimenta.h"
#include <string>

class Favoritos
{
private:
	string disponibilidad;
	float rebajas;
public:
	void AgregarFavorito(int codigo);
	void RemoverFavorito(int codigo);
	Vestimenta VerFavoritos();
};

