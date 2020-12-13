#include <iostream>
using namespace std;
int main()
{
    int MOD = 10234573;
    int n;
    cin >> n;
    long long a, b, c;
    a = n;
    b = n + 1;
    c = 1LL * 2 * n;
    c += 1;
    if(a % 2 == 0)
        a/=2;
    else
        b/=2;
    if(a % 3 == 0)
        a /= 3;
    else if(b % 3 == 0)
        b /= 3;
    else
        c /= 3;
    cout << a % MOD * b % MOD * c % MOD;
    return 0;
}
