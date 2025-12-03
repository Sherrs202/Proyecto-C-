#include <iostream>
#include <vector>
#include <limits>
#include "Bebida.h"
#include "Pedido.h"
#include "Propina.h"

using namespace std;

int main() {
    vector<Pedido> listaPedidos;
    int opcion;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Registrar bebida \n";
        cout << "2. Ver pedidos y pagar\n";
        cout << "3. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

            string nombre, tipo;
            double precio;
            int cantidad;

            cout << "\nNombre de la bebida: ";
            getline(cin, nombre);

            cout << "Tipo (ej: Tequila, Cerveza, Refresco): ";
            getline(cin, tipo);

            cout << "Precio: $";
            cin >> precio;

            cout << "Cantidad: ";
            cin >> cantidad;

            
            Bebida b(nombre, precio, tipo);
            Pedido p(b, cantidad);

            listaPedidos.push_back(p);

            cout << "\nBebida registrada con exito!\n";
        }
        else if (opcion == 2) {
            if (listaPedidos.empty()) {
                cout << "\nNo hay pedidos registrados.\n";
                continue;
            }

            cout << "\n=== Pedidos Registrados ===\n";
            double subtotalTotal = 0.0;

            for (size_t i = 0; i < listaPedidos.size(); ++i) {
                cout << "\nPedido #" << i + 1 << endl;
                listaPedidos[i].mostrarPedido();
                subtotalTotal += listaPedidos[i].calcularSubtotal();
            }

            cout << "\nSubtotal total: $" << subtotalTotal << endl;

            double porcentaje;
            cout << "¿Cuánto % de propina quieres dejar?: ";
            cin >> porcentaje;

            double propina = Propina::calcular(porcentaje, subtotalTotal);

            cout << "\nPropina: $" << propina << endl;
            cout << "Total a pagar: $" << (subtotalTotal + propina) << endl;
        }
        else if (opcion == 3) {
            cout << "Saliendo...\n";
        }
        else {
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 3);

    return 0;
}
