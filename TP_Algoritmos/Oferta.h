#pragma once
#include <string>
#include <functional>
using namespace std;
typedef unsigned int uint;

template <typename T, T NADA = 0>
class Oferta
{
private:
	struct Nodo;
	typedef function<int(T, T)> Comp;

	Nodo* ini;
	uint lon;
	Comp comparar;

public:
	uint longitud();
	void esVacio();
	void setOferta(T descuento, string estado);
	
	// *-----------* C O N S T R U C T O R E S *-----------*
	Oferta() : ini(nullptr), lon(0), comparar([](T a, T b) {return a - b;}) {};
	Oferta(Comp comparar) : ini(nullptr), lon(0), comparar(comparar) {};
	// *---------------------------------------------------*

	// *-----------* D E S T R U C T O R *-----------*
	~Oferta();
	// *---------------------------------------------*

	T getDescuento(uint pos);
	string getEstado(uint pos);


};

template <typename T, T NADA>
struct Oferta<T, NADA>::Nodo {
	T descuento;
	string estado;
	Nodo* sig;
	Nodo(T descuento = NADA, string estado = NADA, Nodo* sig = nullptr) : descuento(descuento), estado(estado), sig(sig){}
};
