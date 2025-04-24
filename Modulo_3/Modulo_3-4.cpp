#include <iostream>
using namespace std;

// Función declarada antes de main
void saludar() {
    cout << "¡Hola desde la función!" << endl;
}

// Declaración de función antes de main
void imprimirMensaje();

int main() {
    saludar();
    saludar();

    imprimirMensaje();

    return 0;
}

// Definición de función después de main
void imprimirMensaje() {
    cout << "¡Mensaje desde una función declarada!" << endl;
}