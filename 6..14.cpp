#include <iostream>
#include <cmath>

using namespace std;

// Funci�n para redondear un n�mero al entero m�s cercano
int redondearAEntero(double numero) {
  return floor(numero + 0.5);
}

// Funci�n para redondear un n�mero a la d�cima m�s cercana
double redondearADecimas(double numero) {
  return floor(numero * 10 + 0.5) / 10;
}

// Funci�n para redondear un n�mero a la cent�sima m�s cercana
double redondearACentesimas(double numero) {
  return floor(numero * 100 + 0.5) / 100;
}

// Funci�n para redondear un n�mero a la mil�sima m�s cercana
double redondearAMilesimas(double numero) {
  return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
  // Declaramos la variable numero
  double numero;

  // Solicitamos al usuario un n�mero
  cout << "Ingrese un n�mero: ";
  cin >> numero;

  // Imprimimos el valor original
  cout << "El valor original es: " << numero << endl;

  // Imprimimos el n�mero redondeado al entero m�s cercano
  cout << "El n�mero redondeado al entero m�s cercano es: " << redondearAEntero(numero) << endl;

  // Imprimimos el n�mero redondeado a la d�cima m�s cercana
  cout << "El n�mero redondeado a la d�cima m�s cercana es: " << redondearADecimas(numero) << endl;

  // Imprimimos el n�mero redondeado a la cent�sima m�s cercana
  cout << "El n�mero redondeado a la cent�sima m�s cercana es: " << redondearACentesimas(numero) << endl;

  // Imprimimos el n�mero redondeado a la mil�sima m�s cercana
  cout << "El n�mero redondeado a la mil�sima m�s cercana es: " << redondearAMilesimas(numero) << endl;

  return 0;
}

