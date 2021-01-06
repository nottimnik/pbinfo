#include<iostream>
using namespace std;
int main() {
    int n, a, b, c;
    cin >> n;
    a = 1;
    b = 1;
    if(n==1) {
        cout << 1;
    }
    else {
        cout << a << " " << b << " ";
        n-=2;
        while(n) {
            c = a + b;
            a = b;
            b = c;
            --n;
            cout << c << " ";
        }
    }
    return 0;
}
