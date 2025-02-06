#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Función para verificar si una cadena está balanceada
bool estaBalanceado(const string& expresion) {
  stack<char> pila; // Pila para almacenar los símbolos de apertura

  for (char caracter : expresion) {
    // Si es un símbolo de apertura, lo agregamos a la pila
    if (caracter == '(' || caracter == '[' || caracter == '{') {
      pila.push(caracter);
    }
    // Si es un símbolo de cierre, verificamos si coincide con el tope de la pila
    else if (caracter == ')' || caracter == ']' || caracter == '}') {
      // Si la pila está vacía, no hay símbolo de apertura correspondiente
      if (pila.empty()) {
        return false;
      }

      // Verificamos si el símbolo de cierre coincide con el tope de la pila
      char tope = pila.top();
      if ((caracter == ')' && tope == '(') ||
          (caracter == ']' && tope == '[') ||
          (caracter == '}' && tope == '{')) {
        pila.pop(); // Eliminamos el símbolo de apertura correspondiente
          } else {
            return false; // Los símbolos no coinciden
          }
    }
  }

  // Al final, la pila debe estar vacía si todos los símbolos están balanceados
  return pila.empty();
}

int main() {
  int t; // Número de casos
  cin >> t;

  while (t--) {
    string caso;
    cin >> caso;

    // Verificamos si el caso está balanceado
    if (estaBalanceado(caso)) {
      cout << "SI" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}