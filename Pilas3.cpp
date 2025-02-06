//
// Created by Kevin L. Camelo S. on 07/02/2025.
//
#include <stack>
#include <iostream>
using namespace std;

stack<string> aceptados;
string entra;
int la;

bool Esta(stack<string> rev, const string nombre){
  while(!rev.empty()){
    if(nombre == rev.top()){
      return true;
    }
    rev.pop();
  }
  return false;
}

int main(){
  stack<string> vetados;

  // se entregan los nombres vetados
  vetados.push("Santiago");
  vetados.push("Pedro");
  vetados.push("Ariadna");
  vetados.push("Marco");
  vetados.push("Juan");
  vetados.push("Angel");

  for (int i = 0; i < 10; i++) {
    cin>>entra;
    aceptados.push(entra);
    if(Esta(vetados, entra)){
      aceptados.pop();
    }
  }

  cout<<aceptados.size()<<endl;
  la = aceptados.size();

  for(int i = 0; i < la; i++){
    cout<<aceptados.top()<<endl;
    aceptados.pop();
  }
}