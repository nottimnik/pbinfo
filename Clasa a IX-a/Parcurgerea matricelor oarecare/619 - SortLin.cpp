#include<iostream>
using namespace std;

int v[101][101], n, m;

void sort(int col) {
    for(int i = 1;i<=m;++i) {
        for(int j = i + 1;j<=m;++j) {
            if(v[col][i]>v[col][j]) {
                swap(v[col][i],v[col][j]);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }
    for(int i = 1;i<=n;++i) {
        sort(i);
    }
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
