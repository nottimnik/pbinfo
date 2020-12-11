#include<iostream>
using namespace std;
int main() {
    long long int n, cnp = 0;
    cin >> n;
    if (n!=1) {
        for(int d = 1;d*d <= n; ++d) {
            if (n % d ==0) {
                cnp += 2;
            }
            if (d * d == n) {
                cnp -= 1;
            }
        }
        if (cnp%2!=0) {
            cout << "da";
        }
        else {
            cout << "nu";
        }
    }
    else {
        cout << "da";
    }
    return 0;
}
