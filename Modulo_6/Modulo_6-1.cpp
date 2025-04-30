#include <iostream> // Entrada y salida estándar
#include <vector> // Contendedor vector
#include <string> // Para cadenas de texto
#include <map> // Contenedor map
#include <algorithm> // Funciones como sort
#include <functional> // Funciones como greater

using namespace std;

int main()
{
    /*
        Vector: Crear y mostrar
    */
    vector<int> numeros = {3, 5, 6, 7};
    numeros.push_back(15); // Agregar un elemento al final

    cout << "Elementos del vector: ";
    for (auto num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Ejemplo adicional: Llenar un vector con datos del usuario
    int size;
    cout << "¿Cuántos números deseas ingresar? ";
    cin >> size;

    vector<int> datos;
    for (int i = 0; i < size; i++) {
        int num;
        cout << "Ingresa un número: ";
        cin >> num;
        datos.push_back(num);
    }

    cout << "Elementos del vector ingresados: ";
    for (auto num : datos) {
        cout << num << " ";
    }
    cout << endl;

    /*
        String: Concatenación y recorrido
    */

    string mensaje = "Hola ";
    mensaje += "Mundo"; // Concatenar cadenas
    cout << "Mensaje completo: "
         << mensaje
         << endl;
    
    // Recorrer el mensaje caracter por caracter
    for (char c : mensaje) {
        cout << "[" << c << "]" << " ";
    }
    cout << endl;

    /*
        Map: Clave-valor con verificación
    */

    map<string, int> edades;
    edades["Natalia"] = 25;
    edades["Pancho"] = 34;

    cout << "Edad de Natalia: " 
         << edades["Natalia"]
         << endl;

    // Recorrer el map
    cout << "Contenido del map: " << endl;
    for (const auto& par : edades) {
        cout << par.first << ": " << par.second << endl;
    }

    // Verificar si existe una clave antes de acceder
    string target = "Juan";
    if (edades.find(target) != edades.end()) {
        cout << target << " tiene " << edades[target] << " años." << endl;
    } else {
        cout << target << " no se encuentra en el mapa." << endl;
    }

    /*
        Algorithm: Ordenar vectores
    */
   vector<int> v = {5, 2, 8, 1, 4};

    // Orden ascendente
    sort(v.begin(), v.end());
    cout << "Vector ordenado (ascendente): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Orden descendente
    sort(v.begin(), v.end(), greater<int>());
    cout << "Vector ordenado (descendente): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    return 0;
}
