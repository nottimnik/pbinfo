#include<iostream>
#include<bits/stdc++.h>

using namespace std;

ifstream fin("unice1.in");
ofstream fout("unice1.out");

int v[1001];

int main() {
  int n;
  fin >> n;

  for(int i = 0;i<n;++i) {
    fin >> v[i];
  }

  sort(v, v + n); //sorts the array

  int cnt= 0;

  for(int i = 1;i<n;++i) {
    if(v[i]!=v[i+1] && v[i]!=v[i-1]) {
      ++cnt;
    }
  }

  fout << cnt;
  return 0;
}
