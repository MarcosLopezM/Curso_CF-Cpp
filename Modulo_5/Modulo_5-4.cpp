#include <iostream>
using namespace std;

// Función para llenar un arreglo dinámico
void llenarArreglo(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Ingresa un número:";
        cin >> arr[i];
    }
}

// Función para calcular el promedio de los elementos de un arreglo
float calcularPromedio(int* arr, int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }

    return static_cast<float>(suma) / size;
}

// Función para encontrar el valor más grande de un arreglo
int encontrarMayor(int* arr, int size) {
    int mayor = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > mayor) mayor = arr[i];
    }
    return mayor;
}

// Función para encontrar el valor más pequeño de un arreglo
int encontrarMenor(int* arr, int size) {
    int menor = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < menor) menor = arr[i];
    }
    return menor;
}

int main()
{
    int size;
    cout << "¿Cuántos números deseas ingresar? ";
    cin >> size;

    // Validamos que la cantidad ingresada sea válida
    if (size <= 0) {
        cout << "Cantidad inválida." << endl;
        return 1;
    } 

    // Reservamos memoria dinámica para el arreglo
    int* arr = new int[size];

    llenarArreglo(arr, size);

    // Mostramos las estadísticas calculadas
    cout << "El promedio es: "
         << calcularPromedio(arr, size)
         << endl
         << "El mayor es: "
         << encontrarMayor(arr, size)
         << endl
         << "El menor es: "
         << encontrarMenor(arr, size)
         << endl;

    // Liberamos la memoria reservada
    delete[] arr;
    arr = nullptr;

    return 0;
}