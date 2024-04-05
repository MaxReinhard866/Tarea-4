#include <iostream>
using namespace std;

int main() {
    
    const int FILAS = 3;
    const int COLUMNAS = 3;

    
    int matriz[FILAS][COLUMNAS];

    cout << "Ingrese los elementos de la matriz " << FILAS << "x" << COLUMNAS << ":" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

   
    cout << "\nLa matriz ingresada es:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
