#include<iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int n = 0, p = 1;
    while(a) {
        n = n + ((a%10 + b%10) / 2 ) * p;
        a /= 10;
        b /= 10;
        p *= 10;
    }
    
    cout << n;
    return 0;
}
