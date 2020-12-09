#include<iostream>
using namespace std;
int main() {
    long long int n, c1, c2;
    cin >> n;
    long long int cn = n;
    while (n > 9) {
        n /= 10;
        c2 = n % 10;
    }
    while (cn > 9) {
        c1 = cn % 10;
        cn /= 10;
    }
    cout << c1 * c2;
    return 0;
}
