class Propina {
public:
    Propina() {}   

    double calcular(double porcentaje, int subtotal) {
        return (porcentaje / 100.0) * subtotal;
    }

};
