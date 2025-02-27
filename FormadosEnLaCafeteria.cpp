//
// Created KevinLenadroCS HP on 03/03/2025.
//
#include <stdio.h>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

list<string> lista;
void insertar(list<string> lista){
  string s;
  cin>>s;
}

int main(){
  int n;
  string orden;

  cin>>n;

  for(int i=0;i<n;i++){
    string nombre;
    cin>>orden;
    if(orden=="LLEGA"){
      cin>>nombre;
      lista.push_back(nombre);
    }else if(orden=="METE"){
      if(!lista.empty()){
        insertar(lista);
      }
    }else if(orden=="ATIENDE"){}
  }

  return 0;
}