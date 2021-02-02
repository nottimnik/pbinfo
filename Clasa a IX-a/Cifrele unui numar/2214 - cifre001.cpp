#include<iostream>
using namespace std;



int cifre(int n) {
    int cnt = 0;
    while(n) {
        ++cnt;
        n /= 10;
    }
    return cnt;
}

int main() {
    int a, b; cin >> a >> b;
    if(cifre(a)!=cifre(b)) {
        cout << "NU";
        return 0;
    }

    int cnt = 0;
    while(b) {
        if(a%10==b%10) {
            ++cnt;
        }
        b /= 10;
        a /= 10;
    }
    cout << "DA" << endl << cnt;
    return 0;
}
