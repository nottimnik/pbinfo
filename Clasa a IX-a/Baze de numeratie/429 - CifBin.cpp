#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 0;
    while(n) {
        if(n%2==0) {
            ++a;
        }
        else {
            ++b;
        }
        n /= 2;
    }
    cout << a << " " << b;
    return 0;
}
