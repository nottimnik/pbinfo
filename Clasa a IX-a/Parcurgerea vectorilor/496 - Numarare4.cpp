#include<iostream>
using namespace std;
int main() {
    int n, v[1001], cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<n;++i) {
        int a = v[i];
        int b = v[n];
        while(b) {
            int r = a % b;
            a = b;
            b = r;
        }
        if (a==1) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
