#include "Nodo.h"
Nodo::Nodo(std::string nombre): _nombre(nombre), _primerHijo(nullptr), _ultimoHijo(nullptr), _siguiente(nullptr)
{
}


void Nodo::AgregarHijo(Nodo* nodo)
{
    if(_primerHijo == nullptr) //la lista está vacía
    {
        _primerHijo = nodo;
        _ultimoHijo = nodo;
    }
    else //Si la lista NO está vacía
    {
        _ultimoHijo->_siguiente = nodo;
        _ultimoHijo = nodo;
    }
}
