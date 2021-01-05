#include<iostream>
using namespace std;
int cifra(int cif) {
    int pc;
    while(cif) {
        pc = cif % 10;
        cif /= 10;
    }
    return pc;
}

int main() {
    int n, k, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> k;
        v[i] = cifra(k);
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i + 1;j<=n;++j) {
            if(v[i]>v[j]) {
                swap(v[i],v[j]);
            }
        }
    }
    for(int i = 1;i<=n;++i) {
        cout << v[i];
    }
    return 0;
}
