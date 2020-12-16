#include<iostream>
using namespace std;
int main() {
    int n, k, min = 9, mink = 0;
    cin >> n;
    for(int i = 1;i<=n;++i) {
        cin >> k; 
        int ck = k;
        while(k>9) {
            k /= 10;
        }
        if (k < min) {
            min = k;
            mink = ck;
        }
        if (k == min) {
            if (ck > mink) {
                mink = ck;
            }
        }
    }
    cout << mink;
    return 0;
}
