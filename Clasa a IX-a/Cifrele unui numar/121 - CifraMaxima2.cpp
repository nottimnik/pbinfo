#include<iostream>
using namespace std;
int main() {
    int n, c, max = 0, cnt = 0;
    cin >> n;
    if(n==0) {
        cout << 0 << " " << 1;
    }
    else {
    while(n>0) {
        c = n % 10;
        if (c > max) {
            max = c;
            cnt = 1;
        }
        else if (c == max) {
            cnt += 1;
        }
    n /= 10;
    }
    cout << max << " " << cnt;
    }
    return 0;
}
