#include "Oferta.h"

template <typename T, T NADA>
Oferta<T, NADA>::~Oferta()
{
	Nodo* aux = ini; //copia la informaci?n del Contribuyente ini,
	while (aux != nullptr) {
		ini = ini->sig;
		delete aux;
		aux = ini;
	}
}

template<typename T, T NADA>
uint Oferta<T, NADA>::longitud()
{
	return lon;
}

template<typename T, T NADA>
void Oferta<T, NADA>::esVacio()
{
	return lon == 0;
}

template<typename T, T NADA>
void Oferta<T, NADA>::setOferta(T descuento, string estado)
{
	Nodo* nuevo = new Nodo(descuento, estado, ini);
	if (nuevo != nullptr) {
		ini = nuevo;
		lon++;
	}
}

template<typename T, T NADA>
T Oferta<T, NADA>::getDescuento(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->descuento;
	}
	return NADA;
}

template<typename T, T NADA>
string Oferta<T, NADA>::getEstado(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->estado;
	}
	return "";
}
