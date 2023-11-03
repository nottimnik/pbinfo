#include <iostream>

using namespace std;

int v[1001][1001], n, m;

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=m;j++)
            cin >> v[i][j];
        
    int ok = 1;
            
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=m/2;j++) {
            if(v[i][j] != v[i][m-j+1]) {
                ok = 0;
                
            }
        }
    }
    
    if(!ok) cout << "NU";
    else cout << "DA";

    return 0;
}
