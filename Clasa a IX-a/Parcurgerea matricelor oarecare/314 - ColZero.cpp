#include<fstream>
using namespace std;

ifstream cin("colzero.in");
ofstream cout("colzero.out");

int v[101][101], n, m;

int zero(int coloana) {
    int cnt = 0;
    for(int i = 1;i<=n;++i) {
        if(v[n][coloana]==0) {
            ++cnt;
        }
    }
    if(cnt==n) {
        return 1;
    }
    return 0;
}

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
    }
    int cnt =0;
    for(int i = 1;i<=m;++i) {
        cnt += zero(i);
    }
    cout << cnt;
    return 0;
}
