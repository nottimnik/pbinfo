#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int cb = b, cd = d;
    while(b){
        int r = d % b;
        d = b;
        b = r;
    }
    int cmmdc1 = d;
    b = cb, d = cd;
    int cmmmc1 = b / cmmdc1 * d;
    int ca = a, cc = c;
    a = a * (cmmmc1/b);
    c = c * (cmmmc1/d);
    int x1 = a + c;
    int x2 = cmmmc1;
    int cx1 = x1;
    int cx2 = x2;
    while(x2){
        int r = x1 % x2;
        x1 = x2;
        x2 = r;
    }
    cout << cx1 / x1 << ' ' << cx2 / x1 << endl;
    a = ca;
    c = cc;
    x1 = a * c;
    x2 = b * d;
    cx1 = x1;
    cx2 = x2;
    while(x2){
        int r = x1 % x2;
        x1 = x2;
        x2 = r;
    }
    cout << cx1 / x1 << ' ' << cx2 / x1 << endl;
    return 0;
}
