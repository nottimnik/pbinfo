#include <iostream>
#include <math.h>
using namespace std;
 int main()
 {
    int n,a[1001],primul=-1,ultimul=-1,ip=-2,iu=-2,s=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(cnt==0 && a[i]%2==0) {primul=i;cnt++;}
        if(a[i]%2==0) ultimul=i;
    }
    for(int i=primul;i<=ultimul;i++) s=s+a[i];
    if(primul==-1) cout<<"NU EXISTA";
    else cout<<s;
    return 0;
 }
