#include <iostream>
using namespace std;

int main() {
    int opcion = 2;

    switch (opcion) {
        case 1:
            cout << "Seleccionaste 1" << endl;
            break;
        case 2:
            cout << "Seleccionaste 2" << endl;
            break;
        case 3:
            cout << "Seleccionaste 3" << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
    }

    char opcionChar = 'b';

    switch (opcionChar)
    {
    case 'a':
        cout << "Elegiste la opción A" << endl;
        break;
    case 'b':
        cout << "Elegiste la opción B" << endl;
        break;
    default:
        cout << "Opción inválida." << endl;
    }

    int dia = 4;
    switch (dia)
    {
    case 1: case 2: case 3: case 4: case 5:
        cout << "Es un día laboral." << endl;
        break;
    case 6: case 7:
        cout << "Es fin de semana." << endl;
        break;
    default:
        cout << "Día inválido." << endl;
    }
}