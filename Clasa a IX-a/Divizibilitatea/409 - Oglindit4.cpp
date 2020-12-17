#include<iostream>
using namespace std;
int main() {
    long long int n, cnt = 0;
    long long int v[1001];
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
        long long int ci = v[i];
        long long int ogl = 0;
        while(v[i]) {
            ogl = ogl * 10 + v[i] % 10;
            v[i] /= 10;
        }
        v[i] = ci;
        long long int a = v[i];
        long long int b = ogl;
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
