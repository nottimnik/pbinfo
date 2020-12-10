#include<iostream>
using namespace std;
int main() {
    long long int n, c, max = 0, cnp = 0;
    cin >> n;
    if (n==0) {
        cout << 0;
    }
    else {
    while(n > 0) {
        c = n % 10;
        if (c%2==0) {
            if (c>max) {
                max = c;
                cnp += 1;
            }
        }
        n /= 10;
    }
    if (cnp == 0) {
        cout << 10;
    }
    else {
        cout << max;
    }
    }
    return 0;
}
