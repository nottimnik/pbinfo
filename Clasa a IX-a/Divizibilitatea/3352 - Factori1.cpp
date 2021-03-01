#include<iostream>
#include<algorithm>

using namespace std;

int sum(int a) {
  int sum = 0;
  int d = 2;
  while(a>1) {
    int p = 0;
    while(a % d == 0) {
      a /= d;
      p++;
    }

    if(p) {
      sum += d;
    }

    d++;
    if(d*d>a) {
      d = a;
    }
  }
  return sum;
}

int main () {
  int a, b;
  cin >> a >> b;
  if(sum(a)>sum(b)){
    cout << a;
  }
  else if(sum(b)>sum(a)){
    cout << b;
  }
  else {
    cout << min(a, b);
  }
  return 0;
}
