//#include "Marca.h"
//
//Marca::~Marca()
//{
//}
//
//Marca::Marca(genero* g)
//
//{
//	N = 1 + rand() % (6);
//	if (g->getgenero() == "VestimentaHombre")
//	{
//		if (N == 1)
//		{
//			nombreMarca = "Shein";
//		}
//		if (N == 2)
//		{
//			nombreMarca = "Romwe";
//		}
//		if (N == 3)
//		{
//			nombreMarca = "Zaful";
//		}
//		if (N == 4)
//		{
//			nombreMarca = "Fashion Nova";
//		}
//		if (N == 5)
//		{
//			nombreMarca = "H&M";
//		}
//		if (N == 6)
//		{
//			nombreMarca = "Forever 21";
//		}
//	}
//	if (g->getgenero() == "VestimentaMujer")
//	{
//		if (N == 1)
//		{
//			nombreMarca = "Shein";
//		}
//		if (N == 2)
//		{
//			nombreMarca = "Romwe";
//		}
//		if (N == 3)
//		{
//			nombreMarca = "Zaful";
//		}
//		if (N == 4)
//		{
//			nombreMarca = "Fashion Nova";
//		}
//		if (N == 5)
//		{
//			nombreMarca = "H&M";
//		}
//		if (N == 6)
//		{
//			nombreMarca = "Forever 21";
//		}
//	}
//}*/
//
//string Marca::getmarca()
//	{
//		return "";//Marca;
//	}
#include "Marca.h"

template<typename T, T NADA>
inline Marca<T, NADA>::~Marca()
{
	Nodo* aux = ini; //copia la informaci?n del Contribuyente ini,
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
	return lon == 0;
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