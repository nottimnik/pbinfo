#include <iostream>

using namespace std;

int main() {
    int v[1001], n, b[1001];
    cin >> n;
  
    int nr = 1;
    
    for(int i = 1;i<=n;i++) cin >> v[i];

    for(int i = n;i>=1;i--) {
      if(v[i] % 2 != 0) {
        b[nr++] = v[i];
      }
    }
    
    for(int i = 1;i<=nr-1;i++) {
      cout << b[i] << ' ';
    }
      
    return 0;
}
