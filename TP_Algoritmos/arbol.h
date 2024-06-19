#pragma once

template<class T>
class NodoArbol {
public:
    T elemento;
    NodoArbol* izq;
    NodoArbol* der;
};


template<class T>
class arbol
{
    NodoArbol<T>* raiz; //puntero de tipo Nodo
    void(*procesar)(T); //Puntero a función
private:
    bool _insertar(NodoArbol<T>*& nodo, T e) {
        if (nodo == nullptr) { //si el nodo está vacio
            nodo = new NodoArbol<T>();
            nodo->elemento = e;
        }
        else if (e < nodo->elemento) { //si hay nodos, pregunta por donde va, si el
            return _insertar(nodo->izq, e); //elemento e es menor elemento del nodo
        }                               //va a recorrer en el nodo de la izquierda
        else if (e > nodo->elemento) {
            return _insertar(nodo->der, e);
        }
    }

    void  _enOrden(NodoArbol<T>* nodo) { //izquierda, raiz, derecha
        if (nodo == nullptr) return;
        _enOrden(nodo->izq);//recorre todos los nodos de la izquierda
        procesar(nodo->elemento);   //envir parámetro para imprimir elemento
        _enOrden(nodo->der); //recorre todos los nodos de la derecha
    }
    void _preOrden(NodoArbol<T>* nodo) {//raiz, izquierda, derecha
        if (nodo == nullptr) return;
        procesar(nodo->elemento);
        _preOrden(nodo->izq);
        _preOrden(nodo->der);
    }
    void _postOrden(NodoArbol<T>* nodo) {//izquierda, derecha, raiz
        if (nodo == nullptr) return;
        _postOrden(nodo->izq);
        _postOrden(nodo->der);
        procesar(nodo->elemento);
    }

    bool _vacio() {
        return raiz == nullptr;
    }

    int _cantidad(NodoArbol<T>* nodo) {
        //0 si es vacio
        //1 + la cantidad de nodos por la izquierda + la canidad de nodos derecha
        if (nodo == nullptr) return 0;
        else
        {
            int ci, cd;
            ci = _cantidad(nodo->izq);
            cd = _cantidad(nodo->der);
            return 1 + ci + cd;
        }
    }

    int _altura(NodoArbol<T>* nodo) {
        if (nodo == nullptr) return 0;
        else {
            int ai, ad;
            ai = 1 + _altura(nodo->izq);
            ad = 1 + _altura(nodo->der);
            return ai > ad ? ai : ad;
        }
    }

public:
    arbol(void(*otroPunteroAFuncion)(T)) { //parámetro del constructor es un puntero a función
        this->procesar = otroPunteroAFuncion; //procesar se le asigna dirección de memoria del puntero otroPunteroAFuncion
        raiz = nullptr;
    }
    bool insertar(T e) {
        return _insertar(raiz, e);
    }
    void enOrden() {
        _enOrden(raiz);
    }
    void preOrden() {
        _preOrden(raiz);
    }
    void postOrden() {
        _postOrden(raiz);
    }
    int cantidad() {
        return _cantidad(raiz);
    }
    int altura() {
        return _altura(raiz);
    }

};
