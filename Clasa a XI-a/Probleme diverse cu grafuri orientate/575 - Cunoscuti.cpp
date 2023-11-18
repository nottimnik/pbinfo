#include <iostream>

using namespace std;

int inter[100], extra[100];

int main() {
    int n, m; cin >> n >> m;
    int a, b;
    for(int i = 1;i<=m;i++) {
        cin >> a >> b;
        extra[a]++;
        inter[b]++;
    }
    
    int cunosc = 0;
    
    for(int i = 1;i<=n;i++) 
        if(inter[i] > cunosc) cunosc = inter[i];
    
    for(int i = 1;i<=n;i++) 
        if(inter[i] == cunosc) cout << i << ' ';

    
    return 0;
}
