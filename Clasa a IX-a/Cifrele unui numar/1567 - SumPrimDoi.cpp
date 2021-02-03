#include <bits/stdc++.h>
using namespace std;

int primele_cifre(int n) {
    if(9 < n) {

        int a = 0;
        int b = 0;
        while(n) {
            b = a;
            a = n % 10;
            n /= 10;
        }
        int n = a * 10 + b;
        return n; 
    }
    else {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    int sum = primele_cifre(n);
    while(n!=0) {
        cin >> n;
        sum += primele_cifre(n);
    }
    cout << sum;
    return 0;
}
