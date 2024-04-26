// CLASES AGREGADAS
#include "Usuario.cpp"
#include "CarritoCompras.h"
#include "Favoritos.h"
#include "Vestimenta.h"

// ENCABEZADO
#include <iostream>
#include <string>
#include<sstream>
#include <cmath>
using namespace std;

int main() {
    int dato;
    cout << "Elija el tipo de accion a realizar (1: Usuario, 2: Favoritos, 3: Carrito de Compras): ";
    cin >> dato;

    switch (dato) {
    case 1: {
        cout << "Ingrese dos numeros enteros: ";
        break;
    }
    case 2: {
        cout << "***Favoritos***\n";
        int favorito;
        cout << "Elija el tipo de accion a realizar (1: Agregar Favorito, 2: Remover Favorito, 3: Ver Favoritos): ";
        cin >> favorito;
        Favoritos favoritos;
        switch (favorito) {
        case 1: {
            cout << "Ingrese Los Datos a agregar: \n";
            favoritos.AgregarFavorito(1);
            break;
        }
        case 2: {
            cout << "Ingrese Los Datos a Remover: \n";
            favoritos.RemoverFavorito(1);
            break;
        }
        case 3: {
            cout << "Listar los Favoritos: \n";
            favoritos.VerFavoritos();
            break;
        }
        default:
            cerr << "Tipo de datos no válido\n";
        }
        break;
    }
    case 3: {
        cout << "***Carrito de Compras***\n";
        int carro;
        cout << "Elija el tipo de accion a realizar (1: Agregar, 2: Comprar, 3: Eliminar): ";
        cin >> carro;
        CarritoCompras carritoCompra;
        switch (carro) {
        case 1: {
            cout << "Ingrese Los Datos a agregar: \n";
            carritoCompra.agregar(1);
            break;
        }
        case 2: {
            cout << "Ingrese Los Datos a comprar: \n";
            carritoCompra.Comprar();
            break;
        }
        case 3: {
            cout << "Ingrese Los Datos a Eliminar: \n";
            carritoCompra.Eliminar();
            break;
        }
        default:
            cerr << "Tipo de datos no válido\n";
        }
        break;
    }
    default:
        cerr << "Tipo de datos no válido\n";
    }
	
	system("pause>0");
}
