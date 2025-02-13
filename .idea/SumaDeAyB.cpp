//
// Created by KevinLeandroCS on 13/02/2025.
//
#include <bits/stdc++.h>;
#include <chrono>
using namespace std;

int main() {

  auto st = std::chrono::high_resolution_clock::now();
  int a, b, result;

  cin >> a >> b;

  result = a + b;

  cout << result << endl;

  auto ed = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double,std::milli> ms = ed - st;
  cout << ms.count() << endl;
  return 0;
}