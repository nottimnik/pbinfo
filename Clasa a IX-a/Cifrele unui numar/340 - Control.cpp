#include <bits/stdc++.h>
using namespace std;

int suma(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    while(suma(n)>9) {
        n = suma(n);
    }
    n = suma(n);
    cout << n;
    return 0;
}
