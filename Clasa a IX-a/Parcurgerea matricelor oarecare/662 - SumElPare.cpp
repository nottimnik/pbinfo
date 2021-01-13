#include<iostream>
using namespace std;

int v[101][101], n, m;

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }

    int sum = 0, indice = 0;
    for(int i = 1;i<=n;++i) {
        int suma = 0;
        for(int j = 1;j<=m;++j) {
            if(v[i][j]%2==0) {
                suma += v[i][j];
            }
        }
        if(suma>sum) {
            sum = suma;
            indice = i;
        }
    }
    cout << indice;
    return 0;
}
