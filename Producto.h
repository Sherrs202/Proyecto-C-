#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using std::string;

class Producto {
protected:
    string nombre;
    double precio;

public:
    Producto();
    Producto(const string& nombre, double precio);

    string getNombre() const;
    double getPrecio() const;

    void setNombre(const string& n);
    void setPrecio(double p);
};

#endif
