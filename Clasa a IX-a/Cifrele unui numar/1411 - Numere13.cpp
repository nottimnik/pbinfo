#include<iostream>
using namespace std;

int prima_cifra(int n) {
    while(n > 9) {
        n /= 10;
    }
    return n;
}


int main() {
    int a, b;
    cin >> a >> b;

    if(a == 0 && b == 0) {
        cout << 0;
        return 0;
    }

    int sum = 0;
    while(a != 0 && b != 0) {
        if(prima_cifra(a)==prima_cifra(b)) {
            ++sum;
        }
        cin >> a >> b;
    }
    cout << sum;

    return 0;
}
