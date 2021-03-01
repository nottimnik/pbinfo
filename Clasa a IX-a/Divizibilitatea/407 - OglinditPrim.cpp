#include<iostream>

using namespace std;

bool prim(int n) {
  int sum = 0;
  for(int d = 1;d*d<=n;++d) {
    if(n%d==0) {
      sum += 2;
    }
    if(d*d==n) {
      --sum;
    }
  }
  if(sum==2) {
    return true;
  }
  return false;
}

int oglindit(int n) {
  int ogl = 0;
  while(n) {
    ogl = ogl * 10 + n % 10;
    n /= 10;
  }
  return ogl;
}

int main () {
    long long int n, sum = 0;
    cin >> n;
    for(int i = 0;i<n;++i) {
      int k;
      cin >> k;
      if(prim(oglindit(k))) {
        sum += k;
      }
    }
    cout << sum;
    return 0;
}
