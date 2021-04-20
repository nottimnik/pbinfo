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
    int sum = 0;
    for(int j = 1, i = 0;i<n;++j, ++i) {
        sum += v[i][j];
    }

    for(int i = 1, j = 0;i<n;++i,++j) {
        sum += v[i][j];
    }

    cout << sum;
}
