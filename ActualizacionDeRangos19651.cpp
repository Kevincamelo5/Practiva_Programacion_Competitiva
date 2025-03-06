//
// Created by KevinLeandroCS on 05/03/2025.
//
#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int k;
  cin>>k;
  for(int i=0;i<k;i++){
    int in;
    cin>>in;
    int fn;
    cin>>fn;
    for(int j=in;j<=fn;j++) {
      a[j-1]+=1;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}