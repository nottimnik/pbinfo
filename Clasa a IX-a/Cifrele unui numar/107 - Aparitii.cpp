#include<iostream>
using namespace std;
int main() {
    int n, u, ap = 0, c;
    cin >> n;
    if (n==0) {
        ap += 1;
    }
    while (n>0) {
        c = n % 10;
        if (ap == 0) {
            u = n % 10;
            ap += 1;
        }
        else if(c == u) {
            ap += 1;
        }
        n /= 10;
    }
    cout << ap;
    return 0;
}
