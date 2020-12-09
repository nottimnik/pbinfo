#include<iostream>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    if (n==0) {
        cout << 1;
    }
    else {
        long long int s = 0, s1 = 0;
        while(n > 0) {
            s += n % 10;
            n /= 10;
        }
        while (s > 0) {
            s1 += 1;
            s /= 10;
        }
        cout << s1;
    }
    return 0;
}
