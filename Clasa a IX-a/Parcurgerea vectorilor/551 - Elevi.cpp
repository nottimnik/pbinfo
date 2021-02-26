#include<iostream>

using namespace std;

int main() {
  int v[1001][1001];
  int n, m;
  cin >> n >> m;
  int cnt = 0, max = 0;
  for(int i = 0;i<n;++i) {
    bool clasa = false;
    for(int j = 0;j<m;++j) {
      cin >> v[i][j];
      if(v[i][j]>max) {
        max = v[i][j];
        clasa = true;
        cnt = 0;
      }
      if(v[i][j]==max) {
        clasa = true;
      }
    }
    if(clasa) {
      ++cnt;
    }
  }

  cout << max << " " << cnt;

  return 0;
}
