#include <iostream>
using namespace std;

/*
    Buenas prácticas para gestionar la memoria dinámica:
    - Inicializa tus punteros. Si no los vas a usar aún, inicialízalos a nullptr.
    - Siempre libera la memoria que reservas con delete o delete[].
    - Después de liberar, asigna el puntero a nullptr para evitar accesos accidentales.
    - Nunca uses memoria después de haberla liberado.
    - Si una función recibe un puntero, válida que no sea nullptr antes de usarlo.
    - Y si estás usando C++ moderno, considera los punteros inteligentes (smart pointers) como std::unique_ptr y std::shared:ptr, que liberan la memoria automáticamente.
*/

// Función para liberar memoria dinámica y evitar accesos accidentales
void liberarMemoria(int* ptr) {
    delete[] ptr; // Libera la memoria
    ptr = nullptr; // Asigna nullptr para evitar accesos posteriores
}

int main() 
{
    // Reservar memoria dinámica para 10 enteros 
    int* datos = new int[10];   
    
    // Inicializar los datos con valores de ejemplo
    for (int i = 0; i < 10; i++) {
        datos[i] = i + 1;
    }

    // Mostrar el primer elemento
    cout << "Primer elemento: " << datos[0] << endl;

    // Validar que el puntero no sea nullptr antes de usarlo
    if (datos != nullptr) {
        cout << "Segundo elemento: " << datos[1] << endl;
    }

    // Liberar la memoria usando la función
    liberarMemoria(datos);

    // Verificar que el puntero hay sido puesto en nullptr
    if (datos != nullptr) {
        cout << "Memoria liberada correctamente." << endl;
    }
}