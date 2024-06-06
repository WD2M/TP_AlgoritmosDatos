#pragma once
#include <iostream>
#include "HashEntidad.h"
class HashTabla
{
private:
	HashEntidad** tabla;
	int numElementos;
	int TABLE_SIZE;

public:
	HashTabla(int TABLE_SIZE = 128) {
		this->TABLE_SIZE = TABLE_SIZE;
		tabla = new HashEntidad * [TABLE_SIZE];
		for (int i = 0; i < TABLE_SIZE; ++i) {
			tabla[i] = nullptr;
		}
		numElementos = 0;
	}

	~HashTabla()
	{
		for (int i = 0; i < TABLE_SIZE; ++i) {
			if (tabla[i] != nullptr) {
				delete tabla[i];
			}
		}
		delete[] tabla;
	}

	//Direccionamiento seg�n Prueba Lineal
	void insertar(int key, int value) {
		//Hash prima
		int base, step, hash;
		//validar si la tabla est� llena
		if (numElementos == TABLE_SIZE)return;
		//Funci�n Hash1
		base = key % TABLE_SIZE;
		hash = base;
		//constante para Hash2
		step = 0;
		while (tabla[hash] != nullptr)
		{
			//Funci�n Hash2
			hash = (base + step) % TABLE_SIZE;
			step++;
		}
		//almacenarlo en la tabla
		tabla[hash] = new HashEntidad(key, value);
		numElementos++;
	}

	int size() {
		return TABLE_SIZE;
	}

	int sizeactual() {
		return numElementos;
	}

	int buscar(int key) {
		int step = 0;
		int i, base;
		i = base = key % TABLE_SIZE; //hash1 es = a hash2 cuando step=0;
		while (true)
		{
			if (tabla[i] == nullptr)return -1;
			else if (tabla[i]->getKey() == key) {
				//return i;
				return tabla[i]->getValue(); //imprimir valores
			}
			else step++;

			i = (base + step) % TABLE_SIZE;
		}
	}
};

