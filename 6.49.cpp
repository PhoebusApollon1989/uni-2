#include <iostream>

// Función que triplica por valor
int triplicarPorValor(int cuenta) {
    return cuenta * 3;
}

// Función que triplica por referencia
void triplicarPorReferencia(int &cuenta) {
    cuenta *= 3;
}

int main() {
    int cuenta = 5;

    // Uso de triplicarPorValor
    int resultadoPorValor = triplicarPorValor(cuenta);
    std::cout << "Usando triplicarPorValor: " << resultadoPorValor << std::endl;
    // La variable original no cambia
    std::cout << "Valor original después de triplicarPorValor: " << cuenta << std::endl;

    // Uso de triplicarPorReferencia
    triplicarPorReferencia(cuenta);
    std::cout << "Usando triplicarPorReferencia: " << cuenta << std::endl;
    // La variable original se modifica directamente por la referencia
    std::cout << "Valor original después de triplicarPorReferencia: " << cuenta << std::endl;

    return 0;
}

