#include<iostream>
using namespace std;

int v[101][101], n, m;

int find(int coloana){
    int suma = 0;
    for(int i = coloana + 1;i<=n;++i) {
        int cnt = 0;
        for(int j = 1;j<=m;++j) {
            if(v[i][j]==v[coloana][j]) {
                ++cnt;
            }
        }
        if(cnt==m) {
            ++suma;
        }
    }
    return suma;
}
int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }

    int cnt = 0;
    for(int i = 1;i<=n;++i) {
        cnt += find(i);
    }
    cout << cnt;
    return 0;
}
