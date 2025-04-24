#include <iostream>
#include <string>
using namespace std;

int main() {
    char saludo[] = "Hola";
    cout << saludo << endl;

    // \0 indica el final de la cadena
    char saludo2[5] = {'H', 'o', 'l', 'a', '\0'};

    // Concatenar cadenas
    string nombre = "Juan";
    nombre += " Rivera";
    cout << nombre << endl;
    cout << nombre.length() << endl;
    cout << nombre[1] << endl;

    if (nombre == "Juan Rivera") {
        cout << "Nombre completo" << endl;
    }

    return 0;
}