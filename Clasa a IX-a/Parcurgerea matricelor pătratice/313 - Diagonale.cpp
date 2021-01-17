#include <iostream>
using namespace std;

int v[101][101], n, m, a = 0, b, s1 = 0, s2 = 0;

int main() {
    cin >> n;
    m = n;
    b = m+1;
    for(int i = 1;i<=n;++i) {
        for(int j = 1;j<=m;++j) {
            cin >> v[i][j];
        }
        s1 += v[i][++a];
        s2 += v[i][--b];
    }
    if(s1<s2) {
        swap(s1,s2);
        cout << s1 - s2;
        return 0;
    }
    cout << s1 - s2;
    return 0;
}
