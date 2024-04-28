#pragma once
#include "Vestimenta.h"
#include <string>
using namespace std;
typedef unsigned int uint;

template <typename T, T NADA = 0>
class Temporada : Vestimenta
{
private:
	struct Nodo;
	typedef function<int(T, T)> Comp;

	Nodo* ini;
	uint lon;
	Comp comparar;

public:
	Temporada();
	~Temporada();
};

template <typename T, T NADA>
struct Temporada<T, NADA>::Nodo {
	string estacionAnio;
	string fechaInicio;
	string fechaFin;

	Nodo* sig;
	Nodo(string estacionAnio = NADA, string fechaInicio = NADA, string fechaFin = NADA, Nodo* sig nullptr) : estacionAnio(estacionAnio), fechaInicio(fechaInicio), fechaFin(fechaFin), sig(sig) {}
};
