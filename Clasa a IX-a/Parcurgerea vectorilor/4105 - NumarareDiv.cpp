#include <iostream>
using namespace std;

int main()
{
    int A[1001],n,X[1001],c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        int nd=0;
        for(int d=1;d*d<=A[i];d++)
            if(A[i]%d==0)
            {
                nd++;
                if(d*d!=A[i]) nd++;
            }
        X[i]=nd;
    }
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            if(X[i]==X[j]) c++;
    cout<<c;
    return 0;
}
