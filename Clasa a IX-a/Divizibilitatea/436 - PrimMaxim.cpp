#include<iostream>
#include<iomanip>

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

int main()
{
    int n;
    cin >> n;
    int nr = 0, apariti = 0;
    for(int i = 0;i<n;++i) {
      int k;
      cin >> k;
      if(prim(k)) {
        if(k > nr) {
          nr = k;
          apariti = 1;
        }
        else if(k == nr) {
          ++apariti;
        }
      }
    }
    cout << nr << " " << apariti;
    return 0;
}
