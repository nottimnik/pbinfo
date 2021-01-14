#include<iostream>
using namespace std;

int v[101][101], n, m;

int main() {
    cin >> n >> m;
    int cnt = 0;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }
    for(int i = 2;i<=n;++i) {
        bool adv = true;
        for(int j = 1;j<=m;++j) {
            if(v[i][j]!=v[i-1][j]) {
                adv = false;
            }
        }
        if(adv) {++cnt;}
    }
    cout << cnt;
    return 0;
}
