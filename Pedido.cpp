#include <string>
using namespace std;

class Pedido {
private:
    int cantidad;
    int precioUnitario;

public:
    // ===== CONSTRUCTOR =====
    Pedido(int cant, int precio) {
        cantidad = cant;
        precioUnitario = precio;
    }

    int calcularSubtotal() const {
        return cantidad * precioUnitario;
    }
};