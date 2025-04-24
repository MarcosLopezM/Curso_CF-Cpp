#include <iostream>
#include <string>
using namespace std;

int main() {
    // Tipos de datos numéricos enteros
    int edad = 25; // Entero con signo
    unsigned int puntos = 1500; // Entero sin signo (valores positivos)
    short dias = 7; // Entero corto
    long poblacion = 30000000; // Entero largo

    // Tipos de datos numéricos de punto flotante
    float temperatura = 36.5f; // Flotante con menor precisión
    double altura = 1.80; // Flotante con mayor precisión
    long double pi = 3.141592653589792; // Flotante de alta precisión

    // Cáracteres y cadenas de texto
    char inicial = 'M'; // Carácter único
    string nombre = "Marcos"; // Cadena de texto <- <string>

    // Booleanos
    bool esEstudiante = true; // Verdadero o falso

    // Mostrar valores
    cout << "Nombre: " << nombre << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Temperatura: " << temperatura << " °C" << endl;
    cout << "Puntos acumulados: " << puntos << endl;
    cout << "¿Es estudiante? " << (esEstudiante ? "Sí" : "No") << endl;
    cout << "Población: " << poblacion << endl;
    cout << "Días de la semana: " << dias << endl;
    cout << "Valor de pi: " << pi << endl;
}
