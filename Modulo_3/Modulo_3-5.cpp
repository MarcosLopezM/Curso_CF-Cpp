#include <iostream>
using namespace std;

// Suma de dos números
int suma(int a, int b) {
    return a + b;
}

// Promedio de 3 números
float promedio(float a, float b, float c) {
    return (a + b + c) / 3;
}

// Paridad
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    // Llamada a la función suma
    int resultadoSuma = suma(104, 85);
    cout << "La suma es: " << resultadoSuma << endl;

    // Llamada a la función promedio
    float x = 50.2, y = 2.8, z = 58.0;
    cout << "Promedio: " << promedio(x, y, z) << endl;

    // Llamada a la función paridad
    int n = 4;
    if (esPar(n)) {
        cout << n << " es par." << endl;
    } else {
        cout << n << " es impar." << endl;
    }

    return 0;
}