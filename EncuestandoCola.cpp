//
// Created by KevinLeandroCS on 14/02/2025.
//
#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> c, aux;
  int per;

  cin >> per;

  while(per--) {
    char ev;
    cin >> ev;
    switch (ev) {
      case 'E':
        string client; cin >> client;
        c.push(client);
        break;
      case 'P':
        if (!c.empty()) {
          string enc; cin >> enc;
        }
         break;
      case 'S':
        if (!c.empty()) {
          c.pop();
        }
        break;
    }
  }

  return 0;
}