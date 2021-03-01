#include<iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int d = 2;
    while(n > 1){
      int cnt = 0;
      while(n % d == 0) {
        n /= d;
        ++cnt;
      }
      if(cnt != 0) {
        cout << d << ' ' << cnt << endl;
      }
      ++d;
      if(d*d>n) {
        d = n;
      }
    }
    return 0;
}
