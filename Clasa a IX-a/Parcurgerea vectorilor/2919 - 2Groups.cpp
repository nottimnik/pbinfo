#include <iostream>

using namespace std;

int n, a[100001], b[100001], sa = 0, sb = 0;

int main() {
    
    int z = 1, y = 1;
    cin >> n;
    
    for(int i = n;i>=1;i--) {
      
      if(sa - sb < sb - sa) {
        a[z++] = i;
        sa += i;
      }
      else {
        b[y++] = i;
        sb += i;
      }
      
    }
    
    for(int i = 1;i<=z-1;i++) {
      cout << a[i] << ' ';
    }
    
    cout << '\n';
    
    for(int i = 1;i<=y-1;i++) {
      cout << b[i] << ' ';
    }
    
    return 0;
}
