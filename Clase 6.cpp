#include <iostream>
using namespace std;

int main() {
  
    const int TAMANO = 5;
    int numeros[TAMANO];

    
    cout << "Ingrese " << TAMANO << " n�meros enteros:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    
    cout << "\nLos n�meros ingresados son:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

