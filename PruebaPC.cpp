//
// Created by Kevin L. Camelo S. on 06/02/2025.
//

#include "PruebaPC.h"
//manejo de pila para lo que es el lavado de paso de platos donde
// este se guia por el manejo de instrucciones del 1 al 4
// 1 entra
// 2 eliminar plato de la fila
// 3 revision de numero de platos sucios dentro de la pila
// 4 reportar el color del plato pero no se elimina

#include <iostream>
#include <stack>
using namespace std;

int main(){
  int v,m1; //m1= numero de instrucciones, m2=tipo de instrucccion, v = elemento añadido
  stack<int> vi;

  cin>>m1;


  for(int i=0;i<m1;i++) {
    int m2;
    cin>>m2;
    switch (m2) {
      case 1:
        cin>>v;
        vi.push(v);
      break;
      case 2:
        vi.pop();
      break;
      case 3:
        cout<<vi.size()<<endl;
      break;
      case 4:
        cout<<vi.top()<<endl;
      break;
      default:
        break;
    }
  }
  return 0;
}