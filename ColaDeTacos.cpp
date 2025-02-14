//
// Created by KevinLeandroCS on 14/02/2025.
//
#include <iostream>
#include <queue>
using namespace std;

int nord, ventas=0;
queue<int> cli;
int main() {

  cin >> nord;

  while (nord--) {
    int ins;
    cin >> ins;
    switch (ins) {
      case 1: //tacos a ordenar
        int ntacos; cin>> ntacos;
        cli.push(ntacos);
        break;
      case 2: //se atiende al primer cliente y se anotan sus tacos
        if (!cli.empty()) {
          ventas += cli.front();
          cli.pop();
        }
        break;
      case 3: //clientes por atender
        cout << cli.size() << endl;
        break;
       case 4: // tacos vendidos;
         cout << ventas << endl;
         break;
       default:
         break;
    }
  }

  return 0;
}