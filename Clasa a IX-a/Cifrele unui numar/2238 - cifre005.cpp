#include<iostream>
using namespace std;
int main() {
    int n, r, k, cnt = 0;
    cin >> n >> r;
    for(int i = 1;i<=n;++i) {
        long long k;
        cin >> k;
        if (k % 9 == r) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
