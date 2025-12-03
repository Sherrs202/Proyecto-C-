#ifndef BEBIDA_H
#define BEBIDA_H

#include "Producto.h"
#include <string>
using std::string;

class Bebida : public Producto {
private:
    string tipo; 

public:
    Bebida();
    Bebida(const string& nombre, double precio, const string& tipo);

    string getTipo() const;
    void setTipo(const string& t);

    void mostrar() const;
};

#endif
