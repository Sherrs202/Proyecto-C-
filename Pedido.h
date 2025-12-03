#ifndef PEDIDO_H
#define PEDIDO_H

#include "Bebida.h"

class Pedido {
private:
    Bebida bebida; 
    int cantidad;

public:
    Pedido();
    Pedido(const Bebida& bebida, int cantidad);

    int getCantidad() const;
    Bebida getBebida() const;

    void setBebida(const Bebida& b);
    void setCantidad(int c);

    double calcularSubtotal() const;
    void mostrarPedido() const;
};

#endif
