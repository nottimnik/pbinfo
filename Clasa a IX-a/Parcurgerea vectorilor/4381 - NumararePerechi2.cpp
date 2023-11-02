#include <iostream>

using namespace std;


int main() {
    int v[1001], n;
    cin >> n;
    
    int nr = 0;
    
    for(int i = 1;i<=n;i++) cin >> v[i];

    for(int i = 1, j = n; i < j ;i++,j--) 
      if((v[i]/10 % 10) == (v[j] / 10 % 10)) nr++;
    
    cout << nr;
    return 0;
}
