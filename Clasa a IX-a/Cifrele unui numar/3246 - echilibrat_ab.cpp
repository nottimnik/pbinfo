#include<iostream>
using namespace std;

bool echilibru(int n) {
    int impare = 0, pare = 0;
    while(n) {
        int a = n % 10;
        if(a%2==0) {
            ++pare;
        }
        else {
            ++impare;
        }
        n /= 10;
    }
    if(impare==pare) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    long long int sum = 0;
    int a, b; cin >> a >> b;
    for(int i = a;i<=b;++i) {
        if(echilibru(i)) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
