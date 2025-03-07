//
// Created by KevinLeandroCS on 06/03/2025.
//
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int num; // Número original
    stack<int> v;

    cin>>num;

    for(int i=0;i<9;i++){
      int dg = num%10;
      v.push(dg);
      num = num/10;
    }

    for(int i=0;i<9;i++){
        if(!v.empty()) {
            cout<<v.top();
            v.pop();
        }
    }
    return 0;
}
