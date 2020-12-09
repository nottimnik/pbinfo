#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n==0) {
        cout << 0;
    }
    else {
        int max= 0, min= 10, c;
        while(n > 0) {
            c = n % 10;
            if (c < min) {
                min = c;
            }
            if (c > max) {
                max = c;
            }
            n /= 10;
        }
        cout << max + min;
    }
    return 0;
}
