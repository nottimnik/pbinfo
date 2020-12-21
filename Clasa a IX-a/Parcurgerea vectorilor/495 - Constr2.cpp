#include<iostream>
using namespace std;
int main() {
    int n, v[1001], y[1001], nr = 1;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = n;1<=i;--i) {
        int a = v[i];
        int max = 0;
        for(int d = 1;d*d<=a;++d) {
            if (a % d == 0) {
                if (d > max) {
                    max = d;
                }
            } 
        }
        if (max==1) {
            y[nr] = v[i];
            ++nr;
        }
    }
    for(int i = 1;i<nr;++i) {
        cout << y[i] << " ";
    }
    return 0;
}
