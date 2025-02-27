//
// Created by Leandro cs. on 28/02/2025.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, cu,ca;
  cin >> n;
  vector<pair<int,int>> ids(n);

  for (int i = 0; i < n; i++) {
    cin >> ids[i].first >> ids[i].second;
  }

  sort(ids.begin(), ids.end());

  for (const auto &id : ids) {
    cout << id.first << " " << id.second << endl;
  }

  return 0;
}