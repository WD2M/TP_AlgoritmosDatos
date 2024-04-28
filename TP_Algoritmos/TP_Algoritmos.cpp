// CLASES AGREGADAS


#include "CarritoCompras.h"
#include "Favoritos.h"
#include "CatalogoVestimenta.cpp"

#include "HIstorialCompras.h"
#include "Temporada.cpp"
#include "Oferta.cpp"
#include "Marca.cpp"
#include "GestorUsuarios.h"

// ENCABEZADO
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>


using namespace std;

CarritoCompras carritoCompra;
Vestimenta* vestimenta = new Vestimenta;
CatalogoVestimenta<int>* lst = new CatalogoVestimenta<int>();

int main() {


    cout << "Ingrese Los Datos a agregar: \n";
    lst->setVestimenta(12, 32, "aa", "a", "b", 's', "ad", false);
    lst->getcodVestimenta(0);
    /*
    int dato;
    //cout << lst->getEstacionAnio(0);
    cout << "--------------------------------------------------" << endl;
    cout << "       Elija el tipo de accion a realizar\n1: Usuario, 2: Favoritos, 3: Carrito de Compras:" << endl;
    cout << "--------------------------------------------------" << endl;
    cin >> dato;

    switch (dato) {
    case 1: {
        int dato;
        cout << "------------------------------------------" << endl;
        cout << "   Elija el tipo de accion a realizar\n1: Enviar Correo, 2: Registrar Usuarios:" << endl;
        cout << "------------------------------------------" << endl;
        cin >> dato;
        GestorUsuarios usuario;
        switch (dato) {
        case 1: {
            cout << "---------------------------" << endl;
            cout << "   ***Envio de Correos***\n";
            cout << "---------------------------" << endl;
            usuario.EnviarCorreo();
            break;
        }
        case 2: {
            cout << "---------------------------" << endl;
            cout << "   ***Crear Usuarios***\n";
            cout << "---------------------------" << endl;
            int dato;
            cout << "¿Cuantos Usuarios desea Registrar?): ";
            cin >> dato;
            int datoUsuario;
            cout << "¿Que usuario desea Registrar?\n(1: Distribuidor, 2: Vendedor, 3: Cliente): ";
            cin >> datoUsuario;
            switch (datoUsuario) {
            case 1: {
                usuario.CrearUsuariosDistribuidor(dato, 1);
                break;
            }
            case 2: {
                usuario.CrearUsuariosVendedor(dato,1);
                break;
            }
            case 3: {
                usuario.CrearUsuariosCliente(dato,1);
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
        break;
    }
    case 2: {
        cout << "---------------------------" << endl;
        cout << "   ***Favoritos***\n";
        cout << "---------------------------" << endl;
        int favorito;
        cout << "--------------------------------------------------------------" << endl;
        cout << "           Elija el tipo de accion a realizar\n1: Agregar Favorito, 2: Remover Favorito, 3: Ver Favoritos:" << endl;
        cout << "--------------------------------------------------------------" << endl;
        cin >> favorito;
        Favoritos favoritos;
        switch (favorito) {
        case 1: {
            int cod;
            cout << "Ingrese el codigo del producto a agregar: \n";
            cin >> cod;
            favoritos.AgregarFavorito(cod);
            break;
        }
        case 2: {
            int cod;
            cout << "Ingrese el codigo a Remover: \n";
            cin >> cod;
            favoritos.RemoverFavorito(cod);
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
        cout << "---------------------------" << endl;
        cout << "***Carrito de Compras***\n";
        cout << "---------------------------" << endl;
        int carro;
        cout << "------------------------------------------" << endl;
        cout << "   Elija el tipo de accion a realizar\n1: Agregar, 2: Comprar, 3: Eliminar: 4: Historial" << endl;
        cout << "------------------------------------------" << endl;
        cin >> carro;
        CarritoCompras carritoCompra;
        Vestimenta* vestimenta = new Vestimenta;
        CatalogoVestimenta<int>* lst = new CatalogoVestimenta<int>();

        int a;
        switch (carro) {
        case 1: {

            cout << "Ingrese Los Datos a agregar: \n";
            vestimenta->setNombre();
            lst->setVestimenta(12, 32, vestimenta->getNombre(), "a", "b", 's', "ad", false);
            lst->getNombre(0);
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
        case 4: {
            cout << "Los Datos del Historial son: \n";
            carritoCompra.Historial();
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
    */
    system("pause>0");
}
