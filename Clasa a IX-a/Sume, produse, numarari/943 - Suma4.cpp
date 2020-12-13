#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,s=0,x;
    cin >> n;
    n%=100;
    for (int i = 1; i<= n;++i)
    {
        x=i%10;
        s=(s+x*x*x*x)%10;
        
    }
    cout << s;
    return 0;
}
