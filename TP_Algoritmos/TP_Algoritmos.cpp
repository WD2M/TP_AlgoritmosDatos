// CLASES AGREGADAS
#include "CarritoCompras.h"
#include "Favoritos.h"
#include "CatalogoVestimenta.cpp"
#include "HIstorialCompras.h"
#include "Temporada.cpp"
#include "Oferta.cpp"
#include "Marca.cpp"
#include "GestorUsuarios.h"
#include "pila.h"
#include "cola.h"

// ENCABEZADO
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

// COLORES
#define BLANK "\033[38;2;248;243;212m"
#define ORANGE "\033[38;2;229;107;59m"
#define AQUA "\033[38;2;0;184;169m"
#define YELLOW "\033[38;2;255;222;125m"
#define PINK "\033[38;2;246;65;108m"
#define RESET "\033[0m" 
#define TRUE "\033[38;2;20;206;138m"
#define DARK_GREEN "\033[32m"
#define FALSE "\033[38;2;244;56;79m"
#define PURPLE "\033[38;2;128;0;128m"
#define BLACK "\033[30m"
#define BLUE "\033[34m"
#define SKYBLUE "\033[36m"
#define BRIGHT_SKYBLUE "\033[1;36m"
#define PINK "\033[38;2;255;105;180m"

// LISTAS - PILAS AGREAGADAS
Vestimenta* vestimenta = new Vestimenta;
CatalogoVestimenta<int>* lst = new CatalogoVestimenta<int>();
Pila pila;
Cola cola;

// APARTADO GRAFICO
void bienvenido() {
cout << PURPLE << "***********************************************************************************************************************************************" << endl;
cout << PURPLE << "* "<< BLANK <<" _______  ___   _______  __    _  __   __  _______  __    _  ___   ______   _______    _______    _______  __   __  _______  ___   __    _  "<< PURPLE <<"*" << endl;
cout << PURPLE << "* "<< BLANK <<"|  __   ||   | |    ___||   |_| ||  | |  ||    ___||   |_| ||   | |  _    ||   _   |  |  | |  |  |  _____||  | |  ||    ___||   | |   |_| | "<< PURPLE <<"*" << endl;
cout << PURPLE << "* "<< BLANK <<"| |__|  ||   | |   |___ |       ||  | |  ||   |___ |       ||   | | | |   ||  | |  |  |  |_|  |  | |_____ |  |_|  ||   |___ |   | |       | "<< PURPLE <<"*" << endl;
cout << PURPLE << "* "<< BLANK <<"|  __  | |   | |    ___||  _    ||  |_|  ||    ___||  _    ||   | | | |   ||  | |  |  |   _   |  |_____  ||   _   ||    ___||   | |  _    | "<< PURPLE <<"*" << endl;
cout << PURPLE << "* "<< BLANK <<"| |__|  ||   | |   |___ | | |   | |     | |   |___ | | |   ||   | | |_|   ||  |_|  |  |  | |  |   _____| ||  | |  ||   |___ |   | | | |   | "<< PURPLE <<"*" << endl;
cout << PURPLE << "* "<< BLANK <<"|_______||___| |_______||_|  |__|  |___|  |_______||_|  |__||___| |______| |_______|  |__| |__|  |_______||__| |__||_______||___| |_|  |__| "<< PURPLE <<"*" << endl;
cout << PURPLE << "*                                                                                                                                             *" << endl;
cout << PURPLE << "***********************************************************************************************************************************************" << endl;
cout << "                                            *"<< BLANK <<" PRESIONA CUALQUIER TECLA PARA CONTINUAR..."<< PURPLE<<" *                                              " << endl;
cout << "                                            **********************************************                                                     " << endl;
cout << BLANK;
}

void marco(string palabra, string palabra2, string color, int opc) {
    if (opc == 1) {
        cout << color << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
        cout << (char)204 << BLANK << palabra << color << (char)185 << endl;
        cout << color << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
    } 
    if (opc == 2) {
        cout << color << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
        cout << (char)204 << BLANK << palabra << color << (char)185 << endl;
        cout << color << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
        cout << " " << (char)204 << BLANK << palabra2 << color << (char)185 << " " << endl;
        cout << color << " " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
    }
    cout << BLANK;
}

void catalogoMujeres()
{
    cout << PINK << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
    cout << PINK << (char)204 << BLANK << "                                    SECCION MUJERES                                     " << PINK << (char)185 << endl;
    cout << PINK << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
    cout << PINK << "   **************" << "      " << "*****************" << "      " << "***************" << "      " << "******************" << endl;
    cout << BLANK << "   CATALGO VERANO" << "      " << "CATALOGO INVIERNO" << "      " << "CATALOGO OTONIO" << "      " << "CATALOGO PRIMAVERA" << endl;
    cout << PINK << "   **************" << "      " << "*****************" << "      " << "***************" << "      " << "******************" << endl;
    cout << PINK << "[CODIGO]" << BLANK << " 11" << "                    " << "8" << "                     " << "5" << "                      " << "2" << endl;
    cout << PINK << "[PRECIO]" << BLANK << " " << lst->getPrecio(11) << "                   " << lst->getPrecio(8) << "                   " << lst->getPrecio(5) << "                    " << lst->getPrecio(2) << endl;
    cout << PINK << "[PRENDA]" << BLANK << " " << lst->getNombre(11) << "                   " << lst->getNombre(8) << "                " << lst->getNombre(5) << "                 " << lst->getNombre(2) << endl;
    cout << PINK << "[COLOR] " << BLANK << " " << lst->getColor(11) << "                " << lst->getColor(8) << "                " << lst->getColor(5) << "                 " << lst->getColor(2) << endl;
    cout << PINK << "[TALLAS]" << BLANK << " " << lst->getTalla(11) << "              " << lst->getTalla(8) << "              " << lst->getTalla(5) << "               " << lst->getTalla(2) << endl;
    cout << PINK << "[GENERO]" << BLANK << " " << lst->getGenero(11) << "                     " << lst->getGenero(8) << "                     " << lst->getGenero(5) << "                      " << lst->getGenero(2) << endl;
    cout << endl << endl;
    cout << PINK << "[CODIGO]" << BLANK << " 10" << "                    " << "7" << "                     " << "4" << "                      " << "1" << endl;
    cout << PINK << "[PRECIO]" << BLANK << " " << lst->getPrecio(10) << "                   " << lst->getPrecio(7) << "                   " << lst->getPrecio(4) << "                    " << lst->getPrecio(1) << endl;
    cout << PINK << "[PRENDA]" << BLANK << " " << lst->getNombre(10) << "               " << lst->getNombre(7) << "               " << lst->getNombre(4) << "               " << lst->getNombre(1) << endl;
    cout << PINK << "[COLOR] " << BLANK << " " << lst->getColor(10) << "                  " << lst->getColor(7) << "                  " << lst->getColor(4) << "                   " << lst->getColor(1) << endl;
    cout << PINK << "[TALLAS]" << BLANK << " " << lst->getTalla(10) << "              " << lst->getTalla(7) << "              " << lst->getTalla(4) << "               " << lst->getTalla(1) << endl;
    cout << PINK << "[GENERO]" << BLANK << " " << lst->getGenero(10) << "                     " << lst->getGenero(7) << "                     " << lst->getGenero(4) << "                      " << lst->getGenero(1) << endl;
    cout << endl << endl;
    cout << PINK << "[CODIGO]" << BLANK << " 9" << "                    " << "6" << "                     " << "3" << "                       " << "0" << endl;
    cout << PINK << "[PRECIO]" << BLANK << " " << lst->getPrecio(9) << "                  " << lst->getPrecio(6) << "                   " << lst->getPrecio(3) << "                     " << lst->getPrecio(0) << endl;
    cout << PINK << "[PRENDA]" << BLANK << " " << lst->getNombre(9) << "             " << lst->getNombre(6) << "               " << lst->getNombre(3) << "              " << lst->getNombre(0) << endl;
    cout << PINK << "[COLOR] " << BLANK << " " << lst->getColor(9) << "                 " << lst->getColor(6) << "                  " << lst->getColor(3) << "                    " << lst->getColor(0) << endl;
    cout << PINK << "[TALLAS]" << BLANK << " " << lst->getTalla(9) << "             " << lst->getTalla(6) << "              " << lst->getTalla(3) << "                " << lst->getTalla(0) << endl;
    cout << PINK << "[GENERO]" << BLANK << " " << lst->getGenero(9) << "                    " << lst->getGenero(6) << "                     " << lst->getGenero(3) << "                       " << lst->getGenero(0) << endl << endl;
}

void catalogoHombres()
{
    cout << BLUE << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
    cout << BLUE << (char)204 << BLANK << "                                    SECCION HOMBRES                                     " << BLUE << (char)185 << endl;
    cout << BLUE << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
    cout << BLANK;
    cout << BLUE << "   **************" << "      " << "*****************" << "      " << "***************" << "      " << "******************" << endl;
    cout << BLANK <<"   CATALGO VERANO" << "      " << "CATALOGO INVIERNO" << "      " << "CATALOGO OTONIO" << "      " << "CATALOGO PRIMAVERA" << endl;
    cout << BLUE << "   **************" << "      " << "*****************" << "      " << "***************" << "      " << "******************" << endl;
    cout << BLUE << "[CODIGO]" << BLANK << " 23" << "                   " << "20" << "                     " << "17" << "                  " << "14" << endl;
    cout << BLUE << "[PRECIO]" << BLANK << " " << lst->getPrecio(23) << "                  " << lst->getPrecio(20) << "                    " << lst->getPrecio(17) << "                 " << lst->getPrecio(14) << endl;
    cout << BLUE << "[PRENDA]" << BLANK << " " << lst->getNombre(23) << "             " << lst->getNombre(20) << "                 " << lst->getNombre(17) << "            " << lst->getNombre(14) << endl;
    cout << BLUE << "[COLOR] " << BLANK << " " << lst->getColor(23) << "                 " << lst->getColor(20) << "                 " << lst->getColor(17) << "              " << lst->getColor(14) << endl;
    cout << BLUE << "[TALLAS]" << BLANK << " " << lst->getTalla(23) << "             " << lst->getTalla(20) << "               " << lst->getTalla(17) << "            " << lst->getTalla(14) << endl;
    cout << BLUE << "[GENERO]" << BLANK << " " << lst->getGenero(23) << "                    " << lst->getGenero(20) << "                      " << lst->getGenero(17) << "                   " << lst->getGenero(14) << endl;
    cout << endl << endl;
    cout << BLUE << "[CODIGO]" << BLANK << " 22" << "                   " << "19" << "                     " << "16" << "                  " << "13" << endl;
    cout << BLUE << "[PRECIO]" << BLANK << " " << lst->getPrecio(22) << "                  " << lst->getPrecio(19) << "                    " << lst->getPrecio(16) << "                 " << lst->getPrecio(13) << endl;
    cout << BLUE << "[PRENDA]" << BLANK << " " << lst->getNombre(22) << "                 " << lst->getNombre(19) << "                 " << lst->getNombre(16) << "            " << lst->getNombre(13) << endl;
    cout << BLUE << "[COLOR] " << BLANK << " " << lst->getColor(22) << "                 " << lst->getColor(19) << "                   " << lst->getColor(16) << "                " << lst->getColor(13) << endl;
    cout << BLUE << "[TALLAS]" << BLANK << " " << lst->getTalla(22) << "             " << lst->getTalla(19) << "               " << lst->getTalla(16) << "            " << lst->getTalla(13) << endl;
    cout << BLUE << "[GENERO]" << BLANK << " " << lst->getGenero(22) << "                    " << lst->getGenero(19) << "                      " << lst->getGenero(16) << "                   " << lst->getGenero(13) << endl;
    cout << endl << endl;
    cout << BLUE << "[CODIGO]" << BLANK << " 21" << "                   " << "18" << "                     " << "15" << "                  " << "12" << endl;
    cout << BLUE << "[PRECIO]" << BLANK << " " << lst->getPrecio(21) << "                  " << lst->getPrecio(18) << "                    " << lst->getPrecio(15) << "                 " << lst->getPrecio(12) << endl;
    cout << BLUE << "[PRENDA]" << BLANK << " " << lst->getNombre(21) << "                " << lst->getNombre(18) << "                   " << lst->getNombre(15) << "               " << lst->getNombre(12) << endl;
    cout << BLUE << "[COLOR] " << BLANK << " " << lst->getColor(21) << "                 " << lst->getColor(18) << "                   " << lst->getColor(15) << "                " << lst->getColor(12) << endl;
    cout << BLUE << "[TALLAS]" << BLANK << " " << lst->getTalla(21) << "             " << lst->getTalla(18) << "               " << lst->getTalla(15) << "            " << lst->getTalla(12) << endl;
    cout << BLUE << "[GENERO]" << BLANK << " " << lst->getGenero(21) << "                    " << lst->getGenero(18) << "                      " << lst->getGenero(15) << "                   " << lst->getGenero(12) << endl << endl;
}

// FUNCIONES EXTRAS
void ordenamientoMenorMayor(int codigo[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = i; j < tamanio; j++)
        {
            if (codigo[i] >= codigo[j])
            {
                int old = codigo[i];
                codigo[i] = codigo[j];
                codigo[j] = old;
            }
        }

    }

}

void mostrarVestimenta(CatalogoVestimenta<int>* lst, int i) {
    cout << TRUE << "*********************************" << BLANK << endl;
    cout << TRUE << "->" << BLANK << lst->getcodVestimenta(i) << TRUE << "<-" << endl;
    cout << TRUE << "* " << BLANK << lst->getPrecio(i) << endl;
    cout << TRUE << "* " << BLANK << lst->getNombre(i) << endl;
    cout << TRUE << "* " << BLANK << lst->getColor(i) << endl;
    cout << TRUE << "* " << BLANK << lst->getTalla(i) << endl;
    cout << TRUE << "* " << BLANK << lst->getGenero(i) << endl;
    cout << TRUE << "*********************************" << BLANK << endl;
    cout << endl;

}

void productos(CatalogoVestimenta<int>* lst) {
    // MASCULINO

    // VERANO

    lst->setVestimenta(23, 120, "Camiseta", "azul", "M, L, XL", 'M');
    lst->setVestimenta(22, 122, "Polo", "gris", "M, L, XL", 'M');
    lst->setVestimenta(21, 190, "Short", "rojo", "M, L, XL", 'M');
    // INVIERNO

    lst->setVestimenta(20, 245, "Abrigo", "rosado", "M, L, XL", 'M');
    lst->setVestimenta(19, 200, "Sueter", "gris", "M, L, XL", 'M');
    lst->setVestimenta(18, 140, "Buzo", "rojo", "M, L, XL", 'M');
    // OTONIO

    lst->setVestimenta(17, 323, "Chaqueta", "rosado", "M, L, XL", 'M');
    lst->setVestimenta(16, 269, "Sudadera", "gris", "M, L, XL", 'M');
    lst->setVestimenta(15, 230, "Jeans", "rojo", "M, L, XL", 'M');
    // PRIMAVERA

    lst->setVestimenta(14, 328, "Camisa", "rosado", "M, L, XL", 'M');
    lst->setVestimenta(13, 280, "Polera", "gris", "M, L, XL", 'M');
    lst->setVestimenta(12, 100, "Bermuda", "rojo", "M, L, XL", 'M');

    // FEMENINO

    // VERANO
    lst->setVestimenta(11, 120, "Top", "rosado", "XS, S, M", 'F');
    lst->setVestimenta(10, 420, "Vestido", "gris", "XS, S, M", 'F');
    lst->setVestimenta(9, 320, "Camiseta", "rojo", "XS, S, M", 'F');
    // INVIERNO

    lst->setVestimenta(8, 223, "Abrigo", "rosado", "XS, S, M", 'F');
    lst->setVestimenta(7, 380, "Jerseys", "gris", "XS, S, M", 'F');
    lst->setVestimenta(6, 101, "Bufanda", "rojo", "XS, S, M", 'F');
    // OTONIO

    lst->setVestimenta(5, 281, "Sueter", "rosado", "XS, S, M", 'F');
    lst->setVestimenta(4, 179, "Chaqueta", "gris", "XS, S, M", 'F');
    lst->setVestimenta(3, 210, "Pantalones", "rojo", "XS, S, M", 'F');
    // PRIMAVERA

    lst->setVestimenta(2, 299, "Vestido", "rosado", "XS, S, M", 'F');
    lst->setVestimenta(1, 100, "Falda", "gris", "XS, S, M", 'F');
    lst->setVestimenta(0, 119, "Short", "azul", "XS, S, M", 'F');
}

int confirmarProducto(Pila pila, Cola cola, int tamanio, CatalogoVestimenta<int>* lst) {
    marco("     RESUMEN DE COMPRA     ", " 1)Productos  2)Precios: ", TRUE, 2);
    int importe = 0;
    cout << TRUE << "1) " << BLANK;
    for (int i = 0; i < tamanio; i++)
    {
        cout << lst->getNombre(pila.top()) << ", ";
        pila.pop();
    }
    cout << endl;
    cout << TRUE << "2) " << BLANK;
    for (int i = 0; i < tamanio; i++)
    {
        cout << lst->getPrecio(cola.front()) << ", ";
        importe += lst->getPrecio(cola.front());
        cola.dequeue();
    }
    cout << endl << TRUE << "Importe total: " << importe << BLANK << endl << endl;
    return importe;
}

// MAIN

int main() {

    // SE CREAN LOS PRODUCTOS
    productos(lst);
    bienvenido();

    int dato;
    int tamanio = 0;
    int codigo[100];
    int saldazo;

    marco("    REGISTRO DE USUARIO    ", " (1) Correo (2) Usuarios ", PURPLE, 2);
    cout << BLACK; cin >> dato; cout << BLANK;

    GestorUsuarios usuario;

    switch (dato) {
    case 1: {
        marco("        ENVIO CORREO       ", " ", BLUE, 1);
        usuario.EnviarCorreo();
        break;
    } 
    case 2: {

        marco("  CUANTOS DESEA REGISTRAR  ", " ", PURPLE, 1);
        int dato; cout << BLACK; cin >> dato; cout << BLANK;

        marco("       CREAR USUARIO       ", "1)Distribuidor  2)Cliente", SKYBLUE, 2);
        int datoUsuario; cout << BLACK; cin >> datoUsuario; cout << BLANK;

        switch (datoUsuario) {
        case 1: {
            usuario.CrearUsuariosDistribuidor(dato, 1);
            break;
        }
        case 2: {
            saldazo = usuario.CrearUsuariosCliente(dato, 1);
            cin.get();
            while (1 > 0)
            {
                marco("      CARRITO DE COMPRAS   ", " escoja una operacion... ", DARK_GREEN, 2);
                marco("   1)Agregar    2)Comprar  ", " 3)Eliminar  4)Historial ", DARK_GREEN, 2);

                int carro; cout << BLACK; cin >> carro; cout << BLANK;

                CarritoCompras carritoCompra;

                switch (carro) {
                case 1: {
                    marco("    CARRITO DE COMPRAS     ", " escoja una operacion... ", AQUA, 2);
                    marco("      MOSTRAR CATALOGO     ", "   1) Hombre   2) Mujer  ", AQUA, 2);
                    int opcion; cout << BLACK; cin >> opcion; cout << BLANK;
                    if (opcion == 1)
                    {
                        catalogoHombres();
                    }
                    else if (opcion == 2)
                    {
                        catalogoMujeres();
                    }
                    cout << "Ingrese el codigo de prenda a agregar al carrito: \n";
                    int codigoPrenda;
                    cin >> codigoPrenda;
                    codigo[tamanio] = codigoPrenda;
                    pila.push(codigoPrenda);
                    cola.enqueue(codigoPrenda);
                    tamanio++;

                    ordenamientoMenorMayor(codigo, tamanio);

                    break;
                }
                case 2: {
                    float importeTotal;
                    importeTotal = confirmarProducto(pila, cola, tamanio, lst);
                    
                    carritoCompra.Comprar(importeTotal, saldazo, usuario.cliente.codigo_del_usuario());
                    return 0;
                    break;
                }
                case 3: {
                    int codigoPrenda;
                    cout << "Ingrese el codigo de la prenda a eliminar: \n"; cin >> codigoPrenda;
                    carritoCompra.Eliminar(tamanio, codigoPrenda, codigo);
                    tamanio--;
                    break;
                }
                case 4: {
                    cout << "Los Datos del Historial son: \n";
                    carritoCompra.Historial();
                    for (int i = 0; i < tamanio; i++)
                    {
                        mostrarVestimenta(lst, codigo[i]);
                    }
                    break;
                }
                default:
                    cerr << "Tipo de datos no valido\n";
                }
            }
            break;
        }
        default:
            cerr << "Tipo de datos no valido\n";
        }
        system("pause>0");
    }
    }
}

