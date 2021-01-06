#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1001];
    int cnt=0;
    for(int i = 1 ; i <= n ; ++i)
    cin >> a[i];
    for(int i = 1 ; i <= n ; ++i)
    {
        a[0]=a[1];
        if(a[i]==a[i-1])
            cnt++;
    }
    if(cnt==n)
       cout << "sir constant";
    else
    {
        cnt=0;
        a[0]=-1;
    for(int i = 1 ; i <= n ; ++i)
    {
        if(a[i]>a[i-1])
        cnt++;
    }
    if(cnt==n)
    cout << "sir strict crescator";
    else
    {
        cnt=0;
        for(int i = 1 ; i <= n ; ++i)
        if(a[i]>=a[i-1])
        cnt++;
        if(cnt==n)
        cout << "sir crescator";
        else
        {
            cnt=0;
            for(int i = 1 ; i <= n ; ++i)
            {
                a[0]=1000000001;
                if(a[i]<a[i-1])
                cnt++;
            }
            if(cnt==n)
            cout << "sir strict descrescator";
            else
            {
                cnt=0;
                for(int i = 1 ; i <= n ; ++i) 
                if(a[i]<=a[i-1])
                cnt++;
                if(cnt==n)
                cout << "sir descrescator";
                else
                cout << "sir neordonat";
            }
        }
    }
    }
}
