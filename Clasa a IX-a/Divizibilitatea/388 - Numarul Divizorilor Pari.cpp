#include<iostream>
using namespace std;
int main() {
    long long int n, cnt = 0;
    cin >> n;
    if (n!=1) {
        for(int d = 1;d*d<=n;++d) {
            if (n % d == 0) {
                if (d % 2 ==0) {
                    cnt += 1;
                }
                if (d*d!=n && (n / d)%2==0) {
                    cnt += 1;
                }
            }
        }
        cout << cnt;
    }
    else {
        cout << 1;
    }
    return 0;
}
