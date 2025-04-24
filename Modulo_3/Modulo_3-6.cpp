#include <iostream>
using namespace std;

int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) {
    if (b != 0) return a / b;
    else {
        cout << "Error: División por cero." << endl;
        return 0;
    }
}

int main() {
    int opcion, num1, num2;

    do {
        cout << "Calculadora" << endl;
        cout << "1. Sumar\n 2. Restar\n 3. Multiplicar\n 4. Dividir\n 5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese dos números: ";
            cin >> num1 >> num2;
        }

        switch (opcion)
        {
        case 1:
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case 4:
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        case 5:
            cout << "Saliendo de la calculadora." << endl;
            break;
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 5);
}