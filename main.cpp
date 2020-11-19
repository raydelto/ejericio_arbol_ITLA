#include "Arbol.h"

int main()
{
    Nodo* presidente = new Nodo("Presidente");
    Nodo* vp1 = new Nodo("VP 1");
    Nodo* vp2 = new Nodo("VP 2");
    Nodo* director1 = new Nodo("Director 1");
    Nodo* director2 = new Nodo("Director 2");
    Nodo* gerente1 = new Nodo("Gerente 1");
    Nodo* gerente2 = new Nodo("Gerente 2");
    Nodo* supervisor1 = new Nodo("Supervisor 1");
    Nodo* supervisor2 = new Nodo("Supervisor 2");
    Nodo* operador1  = new Nodo("Operador 1");
    Nodo* operador2 = new Nodo("Operador 2");
    presidente->AgregarHijo(vp1);
    presidente->AgregarHijo(vp2);
    vp1->AgregarHijo(director1);
    vp2->AgregarHijo(director2);
    director1->AgregarHijo(gerente1);
    director2->AgregarHijo(gerente2);
    gerente1->AgregarHijo(supervisor1);
    gerente2->AgregarHijo(supervisor2);
    supervisor1->AgregarHijo(operador1);
    supervisor2->AgregarHijo(operador2);
    Arbol* arbol = new Arbol(presidente);
    arbol->Recorrer();
    return 0;
}
