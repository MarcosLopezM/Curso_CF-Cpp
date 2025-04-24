#include <iostream>
using namespace std;

/*
    Escribe una función que reciba un arreglo de enteros y su tamaño.
    Ordena el arreglo de menor a mayor -> Bubble sort
    Imprime el arreglo antes y después de ordenarlo.
*/

// Bubble sort function
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray (int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int numbers[] = {5, 6, 3, 12, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Arreglo original: " << endl;
    printArray(numbers, size);

    bubbleSort(numbers, size);
    cout << "Arreglo ordenado: " << endl;
    printArray(numbers, size);

    return 0;
}