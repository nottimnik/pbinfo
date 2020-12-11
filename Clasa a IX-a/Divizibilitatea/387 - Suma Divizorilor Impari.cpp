#include<iostream>
using namespace std;
int main() {
    long long int n, sum = 0;
    cin >> n;
    if (n!=1) {
        for(int d = 1; d * d <=n;++d) {
            if (n % d == 0) {
                if (d%2==1) {
                    sum += d;
                }
                if (d * d != n && (n / d) % 2 ==1) {
                    sum += n / d;
                }
            }
        }
        cout << sum;
    }
    else {
        cout << 1;
    }
}
