#pragma once
#include <string>
#include <functional>

using namespace std;
typedef unsigned int uint;

template <typename T, T NADA = 0>
class CatalogoVestimenta
{
	struct Nodo;
	typedef function<int(T, T)> Comp;

	Nodo* ini;
	uint lon;
	Comp comparar;

	string filtro;

public:

	uint longitud();
	bool esVacia();
	void setVestimenta(T codVestimenta, T precio, string nombre, string color, string talla, char genero, string descripcion, bool menor);

	// *-----------* C O N S T R U C T O R E S *-----------*
	CatalogoVestimenta() : ini(nullptr), lon(0), comparar([](T a, T b) {return a - b;}) {}
	CatalogoVestimenta(Comp comparar) : ini(nullptr), lon(0), comparar(comparar) {}
	// *---------------------------------------------------*

	// *-----------* D E S T R U C T O R *-----------*
	~CatalogoVestimenta();
	// *---------------------------------------------*

	T getcodVestimenta(uint pos);
	T getPrecio(uint pos);
	string getNombre(uint pos);
	string getColor(uint pos);
	string getTalla(uint pos);
	char getGenero(uint pos);
	string getDescripcion(uint pos);
	bool getMenor(uint pos);
	string getMaterial(uint pos);
};

template <typename T, T NADA>
struct CatalogoVestimenta<T, NADA>::Nodo {

	T codVestimenta;
    T precio;
	string nombre;
	string color;
	string talla;
	char genero;
	string descripcion;
	bool menor;
	
	Nodo* sig;

	Nodo(T codVestimenta = NADA, T precio = NADA, string nombre = NADA, string color = NADA, string talla = NADA, char genero = NADA, string descripcion = NADA, bool menor = NADA, Nodo* sig = nullptr) : codVestimenta(codVestimenta), precio(precio), nombre(nombre), color(color), talla(talla), genero(genero), descripcion(descripcion), menor(menor), sig(sig) {}
};

