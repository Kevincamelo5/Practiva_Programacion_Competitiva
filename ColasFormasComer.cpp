//
// Created by KevinLeandroCS on 14/02/2025.
//
#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

int inv;
string ev, nombre;

int main() {
  queue<string> tc, rf;
  cin >>inv;

  while(inv--){
    cin>>ev;

    if(ev=="LLEGA"){
      cin>>nombre;
      tc.push(nombre);
    }else if(ev=="ATIENDE"){
      string quiere;
      cin>>quiere;

      if(quiere=="TACO"){
        if(!tc.empty()){
          rf.push(tc.front());
          tc.pop();
        }
      }else if(quiere=="REFRESCO"){
        if(!rf.empty()){
          rf.pop();
        }
      }

    }

  } // fin de la lectura de la cola refresco y tacos

  while(!tc.empty()){
    cout<<tc.front() << " ";
    tc.pop();
  }// se leen las personas dentro de la fila tc
   cout<<"\n";
  while(!rf.empty()){
    cout<<rf.front() << " ";
    rf.pop();
  } //se leen las personas dentro de la fila rf
  cout<<"\n";

  return 0;
}