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
  for(int i = n + 1;i>0;++i) {
    if(prim(i)) {
      cout << i;
      break;
    }
  }
  return 0;
}
