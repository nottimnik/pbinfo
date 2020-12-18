#include<iostream>
using namespace std;
int main() {
    int n, v[1001], cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> v[i];
    }
    for(int i = 1;i<=n;++i) {
        for(int j = i;j<=n;++j) {
            int a = v[i];
            int b = v[j];
            while(b) {
                int r = a % b;
                a = b;
                b = r;
            }
            if (a==1) {
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}
