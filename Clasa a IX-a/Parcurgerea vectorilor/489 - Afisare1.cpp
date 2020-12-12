#include <iostream>
using namespace std;
int main()
{
    int n,a[1001];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int i=1,j=n;
    while(i<=j)
    {
        cout<<a[i]<<" ";
        if(i!=j) cout<<a[j]<<" ";
        i++;
        j--;
    }
    return 0;

}
