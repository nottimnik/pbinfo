#include<iostream>

using namespace std;

int v[101][101];

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;++i) {
        for(int j = 0;j<n;++j) {
            cin >> v[i][j];
        }
    }
    int nr = n-1;
    for(int i=0;i<n-1;++i, --nr) {
        for(int j=0;j<nr;++j) {
            int a = v[i][j];
            v[i][j] = v[n-j-1][n-i-1];
            v[n-j-1][n-i-1] = a;
        }
    }

    for(int i = 0;i<n;++i) {
        for(int j = 0;j<n;++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
