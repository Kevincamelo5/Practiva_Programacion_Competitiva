//
// Created by KevinLeandroCS on 22/02/2025.
//
#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

int no;
list<string> v, a;
string nv, ev, fil;

int main() {

  cin >> no;
  for (int i = 0; i < no; i++) {
    cin >> ev;
    if (ev == "LLEGA") {
      cin >> nv;
      v.push_back(ev);
    } else if (nv == "METE") {
      if (!v.empty()){}

    }
      else {
      a.push_back(v.front());
      v.pop_front();
    }
  }
  return 0;
}