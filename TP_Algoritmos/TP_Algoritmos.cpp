// CLASES AGREGADAS

#include "Usuario.h"
#include "CarritoCompras.h"
#include "Favoritos.h"
#include "CatalogoVestimenta.cpp"
#include "Temporada.cpp"
#include "Oferta.cpp"
#include "Marca.cpp"

// ENCABEZADO
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
Temporada<int>* lst = new Temporada<int>();


int main() {
    int dato;
    lst->setTemporada("ads", "ca", "das");
    cout << lst->getEstacionAnio(0);
    cout << "Elija el tipo de accion a realizar (1: Usuario, 2: Favoritos, 3: Carrito de Compras): ";
    cin >> dato;

    switch (dato) {
    case 1: {
        int dato;
        cout << "Elija el tipo de accion a realizar (1: Enviar Correo, 2: Registrar Usuarios): ";
        cin >> dato;
        Usuario usuario;
        switch (dato) {
        case 1: {
            cout << "***Envio de Correos***\n";
            usuario.EnviarCorreo();
            break;
        }
        case 2: {
            cout << "***Crear Usuarios***\n";
            int dato;
            cout << "¿Cuantos Usuarios desea Registrar?): ";
            cin >> dato;
            usuario.CrearUsuarios(dato);
            break;
        }
        default:
            cerr << "Tipo de datos no válido\n";
        }
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
