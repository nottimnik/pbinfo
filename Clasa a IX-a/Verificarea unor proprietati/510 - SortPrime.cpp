#include<iostream>
using namespace std;
int main() {
    int n, v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }

    for(int i = 1;i<=n;++i) {
        for(int j = i + 1;j<=n;++j) {
            if(v[i]>v[j]) {
                swap(v[i],v[j]);
            }
        }
    }

    for(int i = 1;i<=n;++i) {
        int cnt = 1, d = 2;
        int ca = v[i];
        while(ca > 1) {
            int p = 0;
            while(ca % d == 0) {
                ca /= d;
                ++p;
            }
            cnt *= (p + 1);
            ++d;
            if(d * d > ca) {
                d = ca;
            }
        }
        if(cnt == 2) {
            cout << v[i] << " ";
        }
    }
    return 0;
}
