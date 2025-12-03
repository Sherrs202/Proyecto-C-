#include "Producto.h"

Producto::Producto() : nombre(""), precio(0.0) {}

Producto::Producto(const string& nombre, double precio)
    : nombre(nombre), precio(precio) {}

string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }

void Producto::setNombre(const string& n) { nombre = n; }
void Producto::setPrecio(double p) { precio = p; }
