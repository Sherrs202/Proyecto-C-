#include "Pedido.h"
#include <iostream>
using std::cout;
using std::endl;

Pedido::Pedido() : bebida(), cantidad(0) {}

Pedido::Pedido(const Bebida& bebida, int cantidad)
    : bebida(bebida), cantidad(cantidad) {}

int Pedido::getCantidad() const { return cantidad; }
Bebida Pedido::getBebida() const { return bebida; }

void Pedido::setBebida(const Bebida& b) { bebida = b; }
void Pedido::setCantidad(int c) { cantidad = c; }

double Pedido::calcularSubtotal() const {
    return bebida.getPrecio() * cantidad;
}

void Pedido::mostrarPedido() const {
    bebida.mostrar();
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: $" << calcularSubtotal() << endl;
}
