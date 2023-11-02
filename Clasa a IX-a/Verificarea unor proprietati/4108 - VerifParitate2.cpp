#include <iostream>

using namespace std;

int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;i++)
        cin >> v[i];
        
    int i = 1, j = n;
    
    int ok = 1;
    
    while(i < j) {
        if(v[i]%2 == v[j] % 2) ok = 0;
        i++;
        j--;
    }
    
    if(ok) cout << "DA";
    else cout << "NU";
    
    return 0;
}
