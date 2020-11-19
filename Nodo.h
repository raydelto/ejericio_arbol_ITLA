#include <string>

class Nodo
{
    public:
        Nodo(std::string nombre);
        void AgregarHijo(Nodo* nodo);
        Nodo* GetPrimerHijo() { return _primerHijo; }
        Nodo* GetSiguiente() { return _primerHijo; }
        std::string GetNombre() { return _nombre; }
    private:
        std::string _nombre;
        Nodo* _primerHijo;
        Nodo* _ultimoHijo;
        Nodo* _siguiente;
};
