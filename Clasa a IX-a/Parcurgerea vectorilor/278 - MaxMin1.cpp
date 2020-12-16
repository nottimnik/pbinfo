#include<iostream>
using namespace std;
int main() {
    int n, v[1001], k[1001], x, cnt = 0, nr = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    cin >> x;
    for(int j =1;j<=x;++j) {
        cin >> k[j];
    }
    for(int i = 1;i<=n;++i) {
        cnt = 0;
        for(int j = 1;j<=x;++j) {
            if(v[i]>k[j]) {
                ++cnt;
            }
        }
        if (cnt == x) {
            ++nr;
        }
    }
    cout << nr;
    return 0;
}
