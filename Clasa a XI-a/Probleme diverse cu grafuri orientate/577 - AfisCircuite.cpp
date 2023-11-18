#include <iostream>

using namespace std;

int v[101][101];

int main() {
    int n, m; cin >> n >> m;
    int a, b;
    for(int i = 1;i<=m;i++) {
        cin >> a >> b;
        v[a][b] = 1;
    }
    
    int nr = 0;
    
    for(int i = 1;i<=n;i++) 
        for(int j = 1;j<=n;j++) {
            
            if(v[i][j] == 1) {
                
                for(int k = 1;k<=n;k++) {
                    if(v[j][k] == 1) {
                        if(v[k][i] == 1) {
                            cout << i << ' ' << j << ' ' << k << '\n';
                        }
                    }
                }
                
            }
            
        }
    


    
    return 0;
}
