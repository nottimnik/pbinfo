#include<iostream>
using namespace std;
int main() {
    int n, k, p = 0, im = 0;
    cin >> n;
    for(int i = 1; i<=n; ++i) {
        cin >> k;
        if (k==0) {
            p += 1;
        }
        while(k>0) {
            if ((k%10)%2==0) {
                ++p;
            }
            else {
                ++im;
            }
            k /= 10;
            }
        }
    cout << p << " " << im;
    return 0;
}
