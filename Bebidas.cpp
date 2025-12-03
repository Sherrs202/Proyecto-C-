#include "Bebida.h"
#include <iostream>
using std::cout;
using std::endl;

Bebida::Bebida() : Producto(), tipo("") {}

Bebida::Bebida(const string& nombre, double precio, const string& tipo)
    : Producto(nombre, precio), tipo(tipo) {}

string Bebida::getTipo() const { return tipo; }
void Bebida::setTipo(const string& t) { tipo = t; }

void Bebida::mostrar() const {
    cout << "Bebida: " << nombre
         << " | Tipo: " << tipo
         << " | Precio: $" << precio << endl;
}
