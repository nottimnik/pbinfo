#include<iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int d = 2;
    while(n > 1){
      while(n % d == 0) {
        n /= d;
        cout << d << " ";
      }
      ++d;
      if(d*d>n) {
        d = n;
      }
    }
    return 0;
}
