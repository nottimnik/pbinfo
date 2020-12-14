#include<iostream>
using namespace std;
int main() {
    int n, p, v[1501];
    cin >> n >> p;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }

    for(int i = p+1;i<=n;++i) {
        v[i-1] = v[i];
    }

    --n;

    for(int i = 1; i<=n; ++i ) {
        cout << v[i] << " ";
    }
    return 0;
}
