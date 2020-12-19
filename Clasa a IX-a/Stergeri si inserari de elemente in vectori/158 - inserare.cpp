#include<iostream>
using namespace std;
int main() {
    int n, v[1001], p, x, pozitie;
    cin >> n >> x >> p;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }

    ++n;

    for(int i = n;p<=i;--i) {
        v[i] = v[i-1];
    }
    v[p] = x;
    for(int i = 1;i<=n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}
