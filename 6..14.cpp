#include <iostream>
#include <cmath>

using namespace std;

// Función para redondear un número al entero más cercano
int redondearAEntero(double numero) {
  return floor(numero + 0.5);
}

// Función para redondear un número a la décima más cercana
double redondearADecimas(double numero) {
  return floor(numero * 10 + 0.5) / 10;
}

// Función para redondear un número a la centésima más cercana
double redondearACentesimas(double numero) {
  return floor(numero * 100 + 0.5) / 100;
}

// Función para redondear un número a la milésima más cercana
double redondearAMilesimas(double numero) {
  return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
  // Declaramos la variable numero
  double numero;

  // Solicitamos al usuario un número
  cout << "Ingrese un número: ";
  cin >> numero;

  // Imprimimos el valor original
  cout << "El valor original es: " << numero << endl;

  // Imprimimos el número redondeado al entero más cercano
  cout << "El número redondeado al entero más cercano es: " << redondearAEntero(numero) << endl;

  // Imprimimos el número redondeado a la décima más cercana
  cout << "El número redondeado a la décima más cercana es: " << redondearADecimas(numero) << endl;

  // Imprimimos el número redondeado a la centésima más cercana
  cout << "El número redondeado a la centésima más cercana es: " << redondearACentesimas(numero) << endl;

  // Imprimimos el número redondeado a la milésima más cercana
  cout << "El número redondeado a la milésima más cercana es: " << redondearAMilesimas(numero) << endl;

  return 0;
}

