#include<iostream>
#include<cmath>

//yes

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cn = n, cm = m;
    int a = 0, b = 0;
    while(n) {
        if(n%2==1) {
            ++a;
        }
        n /= 2;
    }
    while(m) {
        if(m%2==1) {
            ++b;
        }
        m /= 2;
    }
    
    if(a > b) {
        cout << cn;
        return 0;
    }

    cout << cm;

    return 0;
}
