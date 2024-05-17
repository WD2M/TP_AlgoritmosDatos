#pragma once
#include <string>
#include <functional>
using namespace std;
typedef unsigned int uint;

template <typename T, T NADA = 0>
class Marca
{
	struct Nodo;
	typedef function<int(T, T)> Comp;
	Nodo* ini;
	uint lon;
	Comp comparar;

public:
	uint longitud();
	bool esVacia();
	void setMarca(string nombreMarca, T N, bool disponibilidad);

	// *-----------* C O N S T R U C T O R E S *-----------*
	Marca() : ini(nullptr), lon(0), comparar([](T a, T b) {return a - b;}) {}
	Marca(Comp comparar) : ini(nullptr), lon(0), comparar(comparar) {}
	// *---------------------------------------------------*

	// *-----------* D E S T R U C T O R *-----------*
	~Marca();
	// *---------------------------------------------*

	string getNombreMarca(uint pos);
	T getN(uint pos);
	bool getDisponibilidad(uint pos);
};

template <typename T, T NADA>
struct Marca<T, NADA>::Nodo {

	string nombreMarca;
	T N;
	bool disponibilidad;

	Nodo* sig;
	Nodo(string nombreMarca = NADA, T N = NADA, bool disponibilidad = NADA, Nodo* sig = nullptr) : nombreMarca(nombreMarca), N(N), disponibilidad(disponibilidad), sig(sig) {}
};