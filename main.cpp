#include <iostream>
using namespace std;

// Incluyendo los .cpp directamente
#include "Bebidas.cpp"
#include "Pedido.cpp"
#include "Propina.cpp"

int main() {
    Bebida b1("Centenario Plata", "Tequila", 90);

    Pedido p1(2, b1.getPrecio());

    int subtotal = p1.calcularSubtotal();
    cout << "Subtotal: " << subtotal << endl;

    Propina prop;
    double propinaTotal = prop.calcular(10, subtotal);
    cout << "Propina: " << propinaTotal << endl;

    return 0;
}
