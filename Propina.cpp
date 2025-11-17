class Propina {
public:
    // ===== CONSTRUCTOR (opcional) =====
    Propina() {}   // <-- Constructor vacío

    double calcular(double porcentaje, int subtotal) {
        return (porcentaje / 100.0) * subtotal;
    }
};