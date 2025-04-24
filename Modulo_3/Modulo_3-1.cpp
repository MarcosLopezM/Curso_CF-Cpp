#include <iostream>
using namespace std;

int main() {
    int edad = 20;

    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    } else {
        cout << "Eres menor de edad" << endl;
    }

    int nota = 85;

    if (nota >= 90) {
        cout << "Excelente" << endl;
    } else if (nota >= 70) {
        cout << "Aprobado" << endl;    
    } else {
        cout << "Reprobado" << endl;
    }

    bool tieneIdentificacion = false;

    if (edad >= 18 && tieneIdentificacion) {
        cout << "Puedes entrar al evento." << endl;
    } else {
        cout << "No puedes entrar, xiavo." << endl;
    }

    int hora = 14;

    if (hora >= 6 && hora < 12) {
        cout << "Buenos días" << endl;
    } else if (hora >= 12 && hora < 18) {
        cout << "Buenas tardes" << endl;
    } else {
        cout << "Buenas noches" << endl;
    }

    return 0;
}

