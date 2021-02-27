#include<iostream>

using namespace std;

int v[1001][1001];

int main() {
  int n, m;
  cin >> n >> m;
  for(int i = 0;i<n;++i) {
    for(int j = 0;j<m;++j) {
      cin >> v[i][j];
    }
  }

  int indice1, indice2;
  int min1 = 9999999, min2 = 9999999;

  for(int i = 0;i<n;++i) {
    if(v[i][0]<min1) {
      min1 = v[i][0];
      indice1 = i;
    }
  }

  for(int i = 0;i<n;++i) {
    if(v[i][m-1] < min2) {
      min2 = v[i][m-1];
      indice2 = i;
    } 
  }

  swap(v[indice1][0],v[indice2][m-1]);

  for(int i = 0;i<n;++i) {
    for(int j = 0;j<m;++j) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  return 0;

}
