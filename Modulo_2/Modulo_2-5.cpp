#include <iostream>
#include <string>
using namespace std;

int main() {
    // Este es un comentario de una sola línea
    /*
        Este es un comentario
        de
        múltiples líneas
    */

    string nombre;

    cout << "¿Cuál es tu nombre? ";
    cin >> nombre;

    cout << "Hola, " << nombre << "! Bienvenido al programa." << endl;
}