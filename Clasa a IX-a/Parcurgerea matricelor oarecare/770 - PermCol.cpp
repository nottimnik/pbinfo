#include<iostream>
using namespace std;

int v[101][101];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }
    for(int i = 1;i<=n;++i) {
        for(int j = 2;j<=m;++j) {
            cout << v[i][j] << " ";
        }
        cout << v[i][1] << " ";
        cout << endl;
    }
    return 0;
}
