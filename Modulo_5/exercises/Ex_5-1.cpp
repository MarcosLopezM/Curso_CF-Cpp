#include <iostream>
using namespace std;

/*
    Escribe un programa que cree un arreglo dinámico del
    tamaño que el usuario desee y lo llene con números
    ingresados por el usuario. Calcula el promedio, encuentra
    el mayor y menor y, finalmente, libera la memoria.
*/

int main()
{
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if ( n <= 0) {
        cout << "El tamaño del arreglo debe ser mayor que cero." << endl;
        return 1; 
    }

    // Asignamos memoria para el arreglo
    int *arr = new int[n];
    float suma = 0;

    // Inicializamos el mínimo y máximo con el primer elemento
    cout << "Ingrese el elemento: ";
    cin >> arr[0];
    int min = arr[0];
    int max = arr[0];
    suma += arr[0];

    for (int i = 1; i < n; i++) {
        cout << "Ingrese el elemento: ";
        cin >> arr[i];

        // Encontramos el mínimo y máximo
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];

        // Sumamos los elementos
        suma += arr[i];
    }

    // Calculamos el promedio
    float promedio = suma / n;
    
    // Imprimimos el arreglo original
    cout << "El arreglo original es: ";
    for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
    }
    cout << endl;
    cout << "El valor mínimo es: " << min << endl;
    cout << "El valor máximo es: " << max << endl;
    cout << "El promedio es: " << promedio << endl;

    // Liberamos la memoria
    delete[] arr;
    return 0;
}