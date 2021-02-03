#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pozitie = 1;
    cin >> n;
    int nr = 0;
    while(n) {
        nr = nr * 10 + n % 10;
        n /= 10;
    }
    n = nr;
    int sum = 0;
    while(n) {
        if(pozitie%2==1) {
            sum += n % 10;
        }
        n /= 10;
        ++pozitie;
    }
    cout << sum;
    return 0;
}
