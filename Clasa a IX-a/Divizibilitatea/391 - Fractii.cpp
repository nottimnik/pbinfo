#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,s,x,y,x1,y1,r,r1,p,q,auxx,auxy,n;
    cin>>n>>a>>b;
    for(int i=1;i<n;i++)
 {
     cin>>c>>d;
    x=a*d+b*c;
    y=b*d;
    auxx=x;
    auxy=y;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    a=auxx/x;
    b=auxy/x;
    }
   cout<<a<<" "<<b;
    return 0;
}
