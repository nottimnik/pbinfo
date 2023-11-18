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
    
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=n;j++) {
            if(v[i][j] || v[j][i]) {
                for(int k = 1;k<=n;k++) {
                    if((v[j][k]||v[k][j]) && (v[i][k] || v[k][i]))
                        cout << i << ' ' << j << ' ' << k << '\n';
                }
            }
        }
    }
    


    
    return 0;
}
