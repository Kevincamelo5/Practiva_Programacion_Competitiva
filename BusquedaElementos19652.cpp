//
// Created by KevinLeandroCS on 05/03/2025.
//
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int list, pg;
vector<int> v;

int main() {

  cin >> list;
  for (int i = 0; i < list; i++) {
    int n;
    cin >> n;
    v.push_back(n);
  }

  sort(v.begin(), v.end());

  cin >> pg;
  for (int i = 0; i < pg; i++) {
    int n;
    cin >> n;

    if (binary_search(v.begin(), v.end(), n)) {
      cout << "S" << endl;
    }else{
      cout << "N" << endl;
    }
  }

  return 0;
}