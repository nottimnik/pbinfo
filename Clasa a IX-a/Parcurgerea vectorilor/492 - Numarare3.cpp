#include<iostream>
using namespace std;
int main() {
    int n, v[1001], cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<n-i+1;++i) {
        int a = v[i];
        int b = v[n-i+1];
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
