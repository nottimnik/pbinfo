#include<iostream>
using namespace std;

int v[1001][1001], n, m, k, p[1001];

int main() {
    cin >> n >> m;
    for(int i = 0;i<n;++i) {
        for(int j = 0;j<m;++j) {
            cin >> v[i][j];
        }
    }

    cin >> k;
    for(int _ = 0;_<k;++_) {
        cin >> p[_];
    }

    for(int _ = 0;_<k;++_) {
        int cnt = 0;
        for(int i = 0;i<n;++i) {
            bool adv = false;
            for(int j = 0;j<m;++j) {
                if(p[_]==v[i][j]) {
                    ++cnt;
                    adv = true;
                }
                if(adv == true) {
                    break;
                }
            }
        }
        if(cnt == n) {
            cout << "DA" << endl;
        }
        else {
            cout << "NU" << endl;
        }
    }
    return 0;
}
