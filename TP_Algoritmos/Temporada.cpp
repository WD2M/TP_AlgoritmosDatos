#include "Temporada.h"

template<typename T, T NADA>
Temporada<T, NADA>::~Temporada()
{
	Nodo* aux = ini; //copia la informaci?n del Contribuyente ini,
	while (aux != nullptr) {
		ini = ini->sig;
		delete aux;
		aux = ini;
	}
}

template<typename T, T NADA>
uint Temporada<T, NADA>::longitud()
{
	return lon;
}

template<typename T, T NADA>
bool Temporada<T, NADA>::esVacia()
{
	return lon == 0;
}

template<typename T, T NADA>
void Temporada<T, NADA>::setTemporada(string estacionAnio, string fechaInicio, string fechaFin)
{
	Nodo* nuevo = new Nodo(estacionAnio, fechaInicio, fechaFin);
	if (nuevo != nullptr) {
		ini = nuevo;
		lon++;
	}
}
template<typename T, T NADA>
string Temporada<T, NADA>::getEstacionAnio(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->estacionAnio;
	}
	return "";
}

template<typename T, T NADA>
string Temporada<T, NADA>::getFechaInicio(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->fechaInicio;
	}
	return "";
}

template<typename T, T NADA>
string Temporada<T, NADA>::getFechaFin(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->fechaFin;
	}
	return "";
}