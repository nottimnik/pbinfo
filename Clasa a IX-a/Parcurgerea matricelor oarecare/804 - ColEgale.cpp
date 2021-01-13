#include<iostream>
using namespace std;

int v[51][51], n, m;
int rasp[51], nr = 0;

int main() {
    int cnt = 0;
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }

    for(int j = 1;j<=m;++j) {
        bool adv = true;
        int a = 0;
        for(int i = 2;i<=n;++i) {
            a = i;
            if(v[i][j]!=v[i-1][j]) {
                adv = false;
                break;
            }
        }
        if(adv == true) {
            rasp[++nr] = v[a][j];
            ++cnt;
        }
    }
    if(cnt == 0) {
        cout << "nu exista";
        return 0;
    }
    for(int i = 1;i<=nr;++i) {
        cout << rasp[i] << " ";
    }
    return 0;
}
