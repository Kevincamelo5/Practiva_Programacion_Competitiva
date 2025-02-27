//
// Created by Leandro CS. on 28/02/2025.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int buscarlista(vector<int> lista, int valor){
  if(binary_search(lista.begin(), lista.end(), valor)){
    auto it = lower_bound(lista.begin(), lista.end(), valor);
    return distance(lista.begin(), it);
  }
  return -1;
}

int main() {
  vector<int> nums;
  string line;
  int a, n;
  getline(cin, line);

  cin >> n;

  int p = buscarlista(nums, n);

  cout << p << endl;

  return 0;
}