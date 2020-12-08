#include<iostream>
using namespace std;
int main() {
    int n, trei = 1, doi = 1, c;
    cin >> n;
    while (n > 0) {
        c = n % 10;
        if (c == 3) {
            trei += 1;
        }
        else {
            doi += 1;
        }
        n /= 10;
    } 
    if (trei > doi) {
        cout << 3;
    }
    else if (doi > trei) {
        cout << 2;
    }
    else {
        cout << 2 << " " << 3;
    }
    return 0;
}
