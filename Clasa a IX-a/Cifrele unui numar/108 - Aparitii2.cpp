#include<iostream>
using namespace std;
int main() {
    int c, n, cn, s = 0;
    cin >> n;
    cn = n;
    int prima_cifra;
    if (n == 0) {
        s = 1;
    }
    else {
    while(n>9) {
        n /= 10;
    }
    prima_cifra = n;
    while (cn > 0) {
        c = cn % 10;
        if (c==prima_cifra) {
            s += 1;
        }
        cn /= 10;
    }
    }
    cout << s;
    return 0;
}
