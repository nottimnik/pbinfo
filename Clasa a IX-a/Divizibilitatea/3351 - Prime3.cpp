#include<iostream>

using namespace std;

bool prim(int a) {
  int sum = 0;
  for(int d = 1;d*d<=a;++d) {
    if(a % d == 0) {
      sum += 2;
    }
    if(d * d == a) {
      --sum;
    }
  }

  if(sum==2) {
    return true;
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  long long int cnt = 0;
  for(int i = 1;i<=n;++i) {
    int k;
    cin >> k;
    if(prim(k)) {
      cnt += k;
    }
  }
  cout << cnt;
  return 0;
}
