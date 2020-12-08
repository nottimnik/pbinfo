#include<iostream>
using namespace std;
int main() {
    int n, intors = 0;
    cin >> n;
    while (n > 0) {
        intors = intors * 10 + (n%10);
        n /= 10;
    }
    cout << intors;
    return 0;
}
