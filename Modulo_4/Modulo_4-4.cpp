#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x; // Puntero a x
    cout << *p << endl; // -> Imprime 10
    
    *p = 25;
    cout << x << endl; // -> Imprime 25

    // Puntero a char
    char letra = 'A';
    char* ptr = &letra; // Puntero a letra
    cout << *ptr << endl; 

    // Punteros y arreglos
    int nums[] = {5, 10, 15};
    int* ptr2 = nums;
    cout << *(ptr2 + 1) << endl; // -> Imprime 10
}