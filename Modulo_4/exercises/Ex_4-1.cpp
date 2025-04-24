#include <iostream>
using namespace std;

/*
    1.- Declara dos variables enteras y apunta a ellas con punteros.
    2.- Intercambia los valores de las variables usando punteros.
    3.- Imprime sus valores antes y después. 
*/

int main()
{
    int num1 = 5, num2 = 10;
    int* pt1 = &num1; // Puntero a num1
    int* pt2 = &num2; // Puntero a num2

    // Valores antes
    cout << "Antes del intercambio:" << endl;
    cout << num1 << " y " << num2 << endl;

    // Intercambio
    int temp = *pt1; // Guardamos el valor de num1 para no cambiarlo en la asignación
    *pt1 = num2; // pt1 apunta a num2
    *pt2 = temp; // pt2 apunta a num1

    // Valores después
    cout << "Después del intercambio:" << endl;
    cout << num1 << " y " << num2 << endl;

    return 0;
}
