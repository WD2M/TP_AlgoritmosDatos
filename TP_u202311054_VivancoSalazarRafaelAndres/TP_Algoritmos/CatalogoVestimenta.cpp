#include "CatalogoVestimenta.h"

template<typename T, T NADA>
CatalogoVestimenta<T, NADA>::~CatalogoVestimenta()
{
	Nodo* aux = ini; //copia la información del Contribuyente ini,
	while (aux != nullptr) {
		ini = ini->sig;
		delete aux;
		aux = ini;
	}
}

template<typename T, T NADA>
uint CatalogoVestimenta<T, NADA>::longitud()
{
	return lon;
}

template<typename T, T NADA>
bool CatalogoVestimenta<T, NADA>::esVacia()
{
	return lon == 0;
}

template<typename T, T NADA>
void CatalogoVestimenta<T, NADA>::setVestimenta(T codVestimenta, T precio, string nombre, string color, string talla, char genero)
{
	Nodo* nuevo = new Nodo(codVestimenta, precio, nombre, color, talla, genero, ini);
	if (nuevo != nullptr) {
		ini = nuevo;
		lon++;
	}
}

template<typename T, T NADA>
T CatalogoVestimenta<T, NADA>::getcodVestimenta(uint pos)
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
T CatalogoVestimenta<T, NADA>::getPrecio(uint pos)
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
string CatalogoVestimenta<T, NADA>::getNombre(uint pos)
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
string CatalogoVestimenta<T, NADA>::getColor(uint pos)
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
string CatalogoVestimenta<T, NADA>::getTalla(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->talla;
	}
	return "";
}

template<typename T, T NADA>
char CatalogoVestimenta<T, NADA>::getGenero(uint pos)
{
	if (pos >= 0 && pos < lon) {
		Nodo* aux = ini;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->sig;
		}
		return aux->genero;
	}
	return ' ';
}



