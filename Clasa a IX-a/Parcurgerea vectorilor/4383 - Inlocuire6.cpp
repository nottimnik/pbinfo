#include <iostream>

using namespace std;

bool prim(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n, v[1001];
  
    cin >> n;
  
    bool gasit = false;
    
    for(int i = 1;i<=n;i++) cin >> v[i];
    
    for(int i = n;i>=1;i--) {
      if(prim(v[i]) && gasit == false) v[i] = 0, gasit = true;
    }
    
    for(int i = 1;i<=n;i++) cout << v[i] << ' ';

    return 0;
}
