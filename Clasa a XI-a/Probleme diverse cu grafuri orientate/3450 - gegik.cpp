#include <iostream>

using namespace std;

int inter[100], extra[100];

int main() {
    int n, m, k; cin >> n >> m >> k;
    int a, b;
    for(int i = 1;i<=m;i++) {
        cin >> a >> b;
        extra[a]++;
        inter[b]++;
    }
    
    int ok = 0;
    
    for(int i = 1;i<=n;i++) 
        if(inter[i] + extra[i] == k) cout << i << ' ', ok = 1;
    
    if(!ok) cout << "Nu exista";

    return 0;
}
