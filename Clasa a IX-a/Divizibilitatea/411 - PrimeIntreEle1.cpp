#include<iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        for(int j = i;j<=n;++j) {
            int a = i;
            int b = j;
            while (b) {
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
