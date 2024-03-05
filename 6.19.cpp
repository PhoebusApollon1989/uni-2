#include <iostream>
#include <cmath>

// Función para calcular la hipotenusa
double hipotenusa(double lado1, double lado2) {
    return sqrt(lado1 * lado1 + lado2 * lado2);
}

int main() {
    // Triángulos dados
    double triangulo1[] = {3.0, 4.0};
    double triangulo2[] = {5.0, 12.03};
    double triangulo3[] = {8.0, 15.0};

    // Calcular e imprimir la hipotenusa para cada triángulo
    std::cout << "Triángulo con lados " << triangulo1[0] << " y " << triangulo1[1] << ": Hipotenusa = " << hipotenusa(triangulo1[0], triangulo1[1]) << std::endl;
    std::cout << "Triángulo con lados " << triangulo2[0] << " y " << triangulo2[1] << ": Hipotenusa = " << hipotenusa(triangulo2[0], triangulo2[1]) << std::endl;
    std::cout << "Triángulo con lados " << triangulo3[0] << " y " << triangulo3[1] << ": Hipotenusa = " << hipotenusa(triangulo3[0], triangulo3[1]) << std::endl;

    return 0;
}

