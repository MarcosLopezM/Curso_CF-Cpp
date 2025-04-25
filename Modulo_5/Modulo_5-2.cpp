#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int; // Asignar memoria para un entero
    *ptr = 42;
    cout << *ptr << endl;
    delete ptr;

    int* arreglo = new int[5]; // Asignar memoria para un arreglo de 5 enteros
    for (int i = 0; i < 5; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
    delete[] arreglo; // Liberar la memoria del arreglo

    // Crear un arreglo dinámico según lo que indique el usuario
    int n;
    cout << "¿Cuántos elementos quieres en el arreglo? ";
    cin >> n;
    int* arrDinamico = new int[n]; // Asignar memoria para un arreglo de n enteros
    for (int i = 0; i < n; i++){
        arrDinamico[i] = 2 * i;
    }

    delete[] arrDinamico; 
}