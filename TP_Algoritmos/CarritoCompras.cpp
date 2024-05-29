#include "CarritoCompras.h"
#include "HistorialCompras.h"
#include "Comprar.h"
#include <iostream>
#include <string>
using namespace std;
#define FALSE "\033[38;2;244;56;79m"

void CarritoCompras::agregar(int a)
{
	Compras compra;
	compra.Aumentarprenda();
}

int CarritoCompras::getCodigo(int a)
{
	return a;
}

void CarritoCompras::Eliminar(int tamanio, int codigoPrenda, int codigo[])
{
    for (int i = 0; i < tamanio; i++)
    {

        if (codigoPrenda == codigo[i])
        {

            if (codigo[i + 1] != 0)
            {
                codigo[i] = codigo[i + 1];
                for (int j = i; j < tamanio; j++)
                {
                    codigo[j] = codigo[j + 1];
                }

                tamanio--;
                cout << "PRENDA ELIMINADA:.." << endl;
                break;
            }
        }
    }

}

void CarritoCompras::Comprar(float gasto, float saldazo, int codigo)
{
	if (gasto > saldazo) {
		cout << endl << FALSE << "Saldo Insuficiente" << endl << endl;
	}
	else {
		Compras compras;
		compras.MostrarCompra(gasto, codigo);
	}
}

void CarritoCompras::Historial()
{
	HIstorialCompras historial;
	historial.HistorialCompras();
}
