#include<iostream>

using namespace std;

int prima_cifra(int n) {
    int numar;
    while(n) {
        numar = n % 10;
        n /= 10;
    }
    return numar;
}

int main() {
    int n; cin >> n;
    int cifra = 0, numar;
    for(int i = 0;i<n;++i) {
        int k; cin >> k;
        if(cifra<prima_cifra(k)) {
            cifra = prima_cifra(k);
            numar = k;
        }
        else if(cifra==prima_cifra(k) && numar < k) {
            numar = k;
        }
    }
    cout << numar;
    return 0;
}
