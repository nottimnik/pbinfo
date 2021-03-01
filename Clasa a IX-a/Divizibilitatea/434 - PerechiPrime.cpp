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

int main () {
    int n;
    cin >> n;
    int cnt=1;
    for (int i = 3; cnt <= n; ++i)
    {
        if(prim(i) && prim(i+2))
        {
            cout << i << ' ' << i+2 << endl;
            cnt++;
        }
    }
    return 0;
}
