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
  int cnt = 0, i = 1;
  while(cnt<n) {
    if(prim(i)) {
      cout << i << " ";
      ++cnt;
    }
    ++i;

  }
  return 0;
}
