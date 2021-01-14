#include<iostream>
using namespace std;

int v[101][101], m, n;

int main() {
    int minim = 999999999;
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
            if(v[i][j]<minim) {minim=v[i][j];}
        }
    }
    for(int j = 1;j<=m;++j) {
        int adv = false;
        for(int i = 1;i<=n;++i) {
            if(v[i][j]==minim) {
                adv = true;
                break;
            }
        }
        if(adv == true) {
            for(int i = 1;i<=n;++i) {
                v[i][j] = minim;
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
