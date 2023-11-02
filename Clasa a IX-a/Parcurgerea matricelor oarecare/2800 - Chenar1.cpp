#include<iostream>
using namespace std;

int main() {
    int n, v[1001][1001], m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=m;j++)
            cin >> v[i][j];
            
    for(int i = 1;i<=n;i++) {
        v[i][1] = v[n][m];
        v[i][m] = v[n][m];
    }
        
    for(int i = 1;i<=m;i++) {
        v[1][i] = v[n][m];
        v[n][i] = v[n][m];
    }
        
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=m;j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';   
    }
    
    
    return 0;
}
