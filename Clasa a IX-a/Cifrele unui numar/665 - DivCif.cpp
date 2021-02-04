#include<iostream>

using namespace std;

int div(int n) {
    int cifre = 0, diviz = 0;
    int cn = n;
    while(n) {
        if(n%10 != 0 && cn%(n%10) == 0) {
            ++diviz;
        }
        if(n%10 == 0) {
            ++diviz;
        }
        ++cifre;
        n /= 10;
    }
    if(cifre==diviz) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = n;i<=m;++i) {
        if(div(i)) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
