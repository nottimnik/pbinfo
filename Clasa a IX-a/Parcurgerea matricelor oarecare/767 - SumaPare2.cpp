#include<iostream>
using namespace std;

int v[101][1001];

int main() {
    int n, m, sum = 0;
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
            if(v[i][j]%2==0)
                sum+= v[i][j];
        }
    }
    cout << sum;
    return 0;
}
