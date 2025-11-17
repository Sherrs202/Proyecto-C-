#include <string>
using namespace std;

class Bebida {
private:
    string nombre;
    string tipo;
    int precio;

public:
    // ===== CONSTRUCTOR =====
    Bebida(string n, string t, int p) {
        nombre = n;
        tipo = t;
        precio = p;
    }

    string getNombre() const { return nombre; }
    string getTipo() const { return tipo; }
    int getPrecio() const { return precio; }
};