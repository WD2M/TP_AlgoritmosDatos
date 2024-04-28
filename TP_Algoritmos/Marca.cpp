#include "Marca.h"

template<typename T, T NADA>
inline Marca<T, NADA>::~Marca()
{
	Nodo* aux = ini; //copia la información del Contribuyente ini,
	while (aux != nullptr) {
		ini = ini->sig;
		delete aux;
		aux = ini;
	}
}

template<typename T, T NADA>
uint Marca<T, NADA>::longitud()
{
	return lon;
}

template<typename T, T NADA>
bool Marca<T, NADA>::esVacia()
{
	return lon==0;
}

template<typename T, T NADA>
void Marca<T, NADA>::setMarca(string nombreMarca, T N, bool disponibilidad)
{
	Nodo* nuevo = new Nodo(nombreMarca, N, disponibilidad, ini);
	if (nuevo != nullptr) {
		ini = nuevo;
		lon++;
	}
}

template<typename T, T NADA>
string Marca<T, NADA>::getNombreMarca(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->nombreMarca;
	}
	return "";
}

template<typename T, T NADA>
T Marca<T, NADA>::getN(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->N;
	}
	return NADA;
}

template<typename T, T NADA>
bool Marca<T, NADA>::getDisponibilidad(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->disponibilidad;
	}
	return false;
}