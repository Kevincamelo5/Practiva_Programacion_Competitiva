//
// Created KevinLenadroCS on 14/02/2025.
//
#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

string tm = "TAMAL";
int inv, tamal;

bool revAtenditdos (int q, queue<int> s) {
  while (!s.empty()) {
    if (s.front() == q) return true;
    s.pop();
  }
  return false;
}

int main() {
  queue<int> q,atendido;
  string orden;

  cin >> inv;

  while(inv--) {
    cin >> orden;
    if(orden == "FORMA"){
      cin >> tamal;
      q.push(tamal);
    }else if(orden == "ATIENDE"){
      if(!q.empty()){
        if(revAtenditdos(q.front(), atendido)){
          cout << "NO " << tm << " " << q.front() << endl;
        }else {
          cout << "SI " << tm << " " << q.front() << endl;
          atendido.push(q.front());
        }
        q.pop();
      }
    }
  }
  return 0;
}