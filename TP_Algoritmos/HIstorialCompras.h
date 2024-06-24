#pragma once
#include "Usuario.h"
#include "Comprar.h"
#include <string>
#include <iostream>
using namespace std;


struct Nodo : Compras {
	int dato;
	Nodo* siguiente;
};

class HIstorialCompras : Compras
{
public:
	Compras compra;
	Nodo* frente;
	Nodo* fin;
	int n;

	void HistorialCompras();
	bool colaVacia(Nodo* frente);
	void insertarCola(Nodo*& frente, Nodo*& fin, int& n);
	void eliminarCola(Nodo*& frente, Nodo*& fin, int n);
};

