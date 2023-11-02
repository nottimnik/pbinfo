#include<iostream>
using namespace std;

int n;
float v[1001][1001], medie[1001];

int main() {
    
    cin >> n;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            cin >> v[i][j];
            
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=n;j++)
            medie[i] += v[j][i];
        medie[i] /= n;
    }
    
    
            
    for(int i = n;i>n/2;i--) 
        for(int j = 1;j<=n;j++)
            v[i+1][j] = v[i][j];
            
    for(int i = 1;i<=n;i++) {
        v[n/2+1][i] = medie[i];
    }
            
    for(int i = 1;i<=n+1;i++) {
        for(int j = 1;j<=n;j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
            
   
    
    return 0;
}
