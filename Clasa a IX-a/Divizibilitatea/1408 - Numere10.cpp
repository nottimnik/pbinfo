#include<iostream>

using namespace std;

bool prim(int a) {
  int cnt = 0;
  for(int d = 1;d*d<=a;++d) {
    if(a%d==0) {
      cnt += 2;
    }
    if(d*d==a) {
      --cnt;
    }
  }
  if(cnt==2) {
    return true;
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int min = 9999999, max = 0;
  for(int i = 0;i<n;++i) {
    int k; cin >> k;
    if(prim(k)) {
      ++sum;
      if(k<min) {
        min = k;
      }
      if(k>max) {
        max = k;
      }
    }
  }
  cout << sum << " " << min << " " << max;
  return 0;
}
