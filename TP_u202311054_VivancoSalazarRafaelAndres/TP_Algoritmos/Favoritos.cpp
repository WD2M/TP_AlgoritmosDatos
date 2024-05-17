#include "Favoritos.h"
#include <iostream>

void Favoritos::AgregarFavorito(int codigo)
{	
	cout << "Producto Agregado a Favorito con dodigo " + to_string(codigo);
}

void Favoritos::RemoverFavorito(int codigo)
{
	cout << "Producto removido de Favorito con dodigo " + to_string(codigo);
}

void Favoritos::VerFavoritos()
{
	cout << "---------------------" << endl;
	cout << "los Favoritos son\n";
	for (int i = 0; i < tamaño; i++)
	{
		cout << productos[i]<<endl;
	}
	cout << "---------------------" << endl;
}
