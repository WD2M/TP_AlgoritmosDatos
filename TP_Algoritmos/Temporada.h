#pragma once
#include <string>
#include <functional>

using namespace std;
typedef unsigned int uint;

template <typename T, T NADA = 0>
class Temporada
{
private:
	struct Nodo;
	typedef function<int(T, T)> Comp;

	Nodo* ini;
	uint lon;
	Comp comparar;

public:
	uint longitud();
	bool esVacia();
	void setTemporada(string estacionAnio, string fechaInicio, string fechaFin);

	// *-----------* C O N S T R U C T O R E S *-----------*
	Temporada() : ini(nullptr), lon(0), comparar([](T a, T b) {return a - b;}) {}
	Temporada(Comp comparar) : ini(nullptr), lon(0), comparar(comparar) {}
	// *---------------------------------------------------*

	// *-----------* D E S T R U C T O R *-----------*
	~Temporada();
	// *---------------------------------------------*

	string getEstacionAnio(uint pos);
	string getFechaInicio(uint pos);
	string getFechaFin(uint pos);

};

template <typename T, T NADA>
struct Temporada<T, NADA>::Nodo {
		string estacionAnio;
		string fechaInicio;
		string fechaFin;
		Nodo* sig;
		Nodo(string estacionAnio = NADA, string fechaInicio = NADA, string fechaFin = NADA, Nodo* sig = nullptr) : estacionAnio(estacionAnio), fechaInicio(fechaInicio), fechaFin(fechaFin), sig(sig) {}
};