#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nr1=0,nr2=0;
    int p1=1,p2=1;
    while (n)
    {
        if ((n%10)%2==0)
        {
        nr1=p1*(n%10)+nr1;
        p1*=10;
        }
        else
        {
        nr2=p2*(n%10)+nr2;
        p2*=10;
        }
        n/=10;
    }
    cout << abs(nr1-nr2);
    
    return 0;
}
