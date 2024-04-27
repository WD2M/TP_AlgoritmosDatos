#include "Vestimenta.h"
#include <string>
using namespace std;

template<typename T, T NADA>
Vestimenta<T, NADA>::~Vestimenta()
{
	Vestimenta* aux = ini;
	while (aux != nullptr) {
		ini = ini->sig;
		delete aux;
		aux = ini;
	}
}

template<typename T, T NADA>
uint Vestimenta<T, NADA>::longitud()
{
	return lon;
}

template<typename T, T NADA>
bool Vestimenta<T, NADA>::esVacia()
{
	return lon == 0;
}

template<typename T, T NADA>
void Vestimenta<T, NADA>::setVestimenta(T codVestimenta, T precio, string nombre, string color, string talla, char genero, string descripcion, bool menor, string material)
{
	Nodo* nuevo = new Nodo(codVestimenta, precio, nombre, color, talla, genero, descripcion, menor, material, ini);
	if (nuevo != nullptr) {
		ini = nuevo;
		lon++;
	}
}

template<typename T, T NADA>
T Vestimenta<T, NADA>::getcodVestimenta(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->codVestimenta;
	}
	return NADA;
}

template<typename T, T NADA>
T Vestimenta<T, NADA>::getPrecio(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->precio;
	}
	return NADA;
}

template<typename T, T NADA>
string Vestimenta<T, NADA>::getNombre(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->nombre;
	}
	return "";
}

template<typename T, T NADA>
string Vestimenta<T, NADA>::getColor(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->color;
	}
	return "";
}

template<typename T, T NADA>
string Vestimenta<T, NADA>::getTalla(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->nombre;
	}
	return "";
}

template<typename T, T NADA>
char Vestimenta<T, NADA>::getGenero(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->genero;
	}
	return "";
}

template<typename T, T NADA>
string Vestimenta<T, NADA>::getDescripcion(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->descripcion;
	}
	return "";
}

template<typename T, T NADA>
bool Vestimenta<T, NADA>::getMenor(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->menor;
	}
	return false;
}

template<typename T, T NADA>
string Vestimenta<T, NADA>::getMaterial(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->material;
	}
	return "";
}
