//
// Created by HP on 06/03/2025.
//
#include <iostream>
#include <vector>
#include <sstream>  // Para stringstream
#include <string>

using namespace std;

int main() {
    string linea;
    vector<int> numeros;

    cout << "Ingrese numeros separados por espacios: ";
    getline(cin, linea);  // Lee toda la línea, incluyendo espacios

    stringstream ss(linea);  // Convierte la línea en un stream de texto
    int numero;

    // Extrae cada entero del stream y lo agrega al vector
    while (ss >> numero) {
        numeros.push_back(numero);
    }

    // Imprime el vector para verificar
    cout << "Numeros almacenados: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}