#include <iostream>
using namespace std;

int main() {
    // Ciclo for
    cout << "Ciclo for: Contar del 1 al 5 \n";
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    cout << endl;

    // Ciclo for con continue
    cout << "Ciclo for: Contar del 1 al 5, pero omitiendo el 3 \n";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue;
        cout << i << endl;
    }

    cout << endl;

    // Ciclo for con break
    cout << "Ciclo for: Contar del 1 al 5, deteniéndose en el 4 \n";
    for (int i =1; i <= 5; i++) {
        if (i == 4) break;
        cout << i << endl;
    }

    cout << endl;

    // Ciclo while
    cout << "Ciclo while: Contar del 1 al 5 \n";    
    int j = 1;
    while (j <= 5) {
        cout << j << endl;
        j++;
    }

    cout << endl;

    // Ciclo while con break
    cout << "Ciclo while: Contar del 1 al 5, deteniéndose en el 3 \n";
    int k = 1;
    while (k <= 5) {
        if (k == 3) break;
        cout << k << endl;
        k++;
    }

    cout << endl;

    // Do-while
    cout << "Ciclo do-while: Contar del 1 al 5 \n";
    int x = 1;
    do {
        cout << x << endl;
        x++;
    } while (x <= 5);

    cout << endl;

    // Do-while con continue
    cout << "Ciclo do-while: Contar del 1 al 5, pero omitiendo el 2 \n";
    int y = 1;
    do
    {
        if (y == 2) {
            y++;
            continue;
        }
        cout << y << endl;
        y++;
    } while (y <= 5);
    
    cout << endl;
}