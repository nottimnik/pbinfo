#include<iostream>
using namespace std;

int v[1001][1001], n, m;

int main() {
    cin >> n >> m;
    for(int i = 0;i<n;++i) {
        for(int j = 0;j<m;++j) {
            cin >> v[i][j];
        }
    }

    for(int i = 0;i<m;++i) {
        for(int j = i + 1;j<m;++j) {
            if(v[0][i] > v[0][j]) {
                for(int q = 0;q<n;++q) {
                    swap(v[q][i],v[q][j]);
                }
            }
        }
    }

    for(int i = 0;i<n;++i) {
        for(int j = 0;j<m;++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
