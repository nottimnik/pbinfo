#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, divizor, multiplu;
    cin >> a >> b;
    if(a == b && a == 0) {
       cout << -1 << " " << -1;
    }
    else {
    long long int ca = a, cb = b;
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    divizor = a;
    a = ca;
    b = cb;
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    multiplu = ca / a * cb;
    cout << divizor << " " << multiplu;
    }
    return 0;
}
