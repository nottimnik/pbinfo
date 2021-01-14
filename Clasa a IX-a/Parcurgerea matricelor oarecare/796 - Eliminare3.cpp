#include<iostream>
using namespace std;

int v[51][51], n, m;

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }
    for(int i = 1;i<=n;++i) {
        if(i==n-1) {
            continue;
        }
        else {
        for(int j = 1;j<=m;++j) {
            if(j==m-1) {
                continue;
            }
            else {
                cout << v[i][j] << " ";
            }
        }
        cout << endl;
        }
    }
    return 0;
}
