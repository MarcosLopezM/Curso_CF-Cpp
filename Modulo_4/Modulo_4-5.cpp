#include <iostream>
using namespace std;

/*
    Recibe un puntero a un arreglo de enteros y su tamaño
    Devuelve los arreglos duplicados (2 * elem)
*/
void duplicarElementos(int* arr, int tam) {
    for (int i = 0; i < tam; i++) {
        arr[i] *= 2;
    }
}

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    duplicarElementos(numeros, 5);
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}

// También podemos manipular cadenas con punteros
void mostrarLetras(const char* str) {
    while (*str != '\0') {
        cout << *str << " ";
        str++;
    }
}