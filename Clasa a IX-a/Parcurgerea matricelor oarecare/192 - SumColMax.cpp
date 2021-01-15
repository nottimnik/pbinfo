#include<fstream>
using namespace std;

ifstream cin("sumcolmax.in");
ofstream cout("sumcolmax.out");

int v[27][27], n, m, smax = -100001, ind = 0;

int main() {
    cin >> n >> m;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {cin >> v[i][j];}}
    for(int i = 1;i<=m;++i) {
        int s = 0;
        for(int j = 1;j<=n;++j) {
            s += v[j][i];
        }
        if(s>smax) {
            smax = s;
            ind = i;
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i][ind] << " ";
    }
    return 0;
}
