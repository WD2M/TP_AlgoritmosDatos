#include "HIstorialCompras.h"

void HIstorialCompras::HistorialCompras()
{
}

bool HIstorialCompras::colaVacia(Nodo* frente)
{
    if (frente == NULL) {
        return true;
    }
    else {
        return false;
    }
}

void HIstorialCompras::insertarCola(Nodo*& frente, Nodo*& fin, int& n)
{
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;
    if (colaVacia(frente)) {
        frente = nuevo_nodo;
    }
    else {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

void HIstorialCompras::eliminarCola(Nodo*& frente, Nodo*& fin, int n)
{
    n = frente->dato;
    Nodo* aux = frente;
    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}
