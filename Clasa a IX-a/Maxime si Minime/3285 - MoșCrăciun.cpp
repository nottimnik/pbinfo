#include<iostream>

using namespace std;

int v[10001];

int main() {
  int n, sum = 0;
  cin >> n;
  for(int i = 1;i<=n;++i) {
    cin >> v[i];
    
    if(i>n/2) {
      int nr = 0;
      for(int j = 1;j<=n/2;++j) {
        if(v[i]>v[j]) {
          ++nr;
        }
      }

      if(nr == n / 2) {
        ++sum;
      }
    }
  }

  cout << sum;

  return 0;
}
