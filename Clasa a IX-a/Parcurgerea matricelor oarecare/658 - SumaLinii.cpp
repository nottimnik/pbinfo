#include<iostream>
using namespace std;

int v[101][101];
int sum[101];

int main() {
    int n, m, nr = 0;
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        int suma = 0;
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
            suma += v[i][j];
        }
        sum[++nr] = suma;
    }
    
    for(int i = 1;i<=nr;++i) {
        cout << sum[i] << " ";
    }
    return 0;
}
