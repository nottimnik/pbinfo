#include<iostream>
using namespace std;

int v[101][101];
int suma[101];

int main() {
    int n, m, nr = 0;
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        int max = 0, sum = 0;
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
            sum += v[i][j];
            if(v[i][j]>max) {
                max = v[i][j];
            }
        }
        sum -= max;
        suma[++nr] = sum;
    }
    
    for(int i = 1;i<=nr;++i) {
        cout << suma[i] << " ";
    }
    return 0;
}
