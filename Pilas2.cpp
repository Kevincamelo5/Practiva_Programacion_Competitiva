#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int c, D; // Capacidad máxima de la pila y número de órdenes
  cin >> c >> D;

  stack<string> s; // Pila para almacenar los metales
  string orden, metal;

  for (int i = 0; i < D; i++) {
    cin >> orden; // Leemos la orden

    if (orden == "PONTE") {
      // Si la orden es "PONTE", leemos el metal
      cin >> metal;

      if (s.size() < c) {
        // Si la pila no está llena, agregamos el metal y lo mostramos
        s.push(metal);
        cout << s.top() << endl;
      } else {
        // Si la pila está llena, imprimimos "IMPOSIBLE"
        cout << "IMPOSIBLE" << endl;
      }
    } else if (orden == "QUITA") {
      if (!s.empty()) {
        // Si la pila no está vacía, mostramos el metal superior y lo quitamos
        cout << s.top() << endl;
        s.pop();
      } else {
        // Si la pila está vacía, imprimimos "IMPOSIBLE"
        cout << "IMPOSIBLE" << endl;
      }
    }
  }

  return 0;
}