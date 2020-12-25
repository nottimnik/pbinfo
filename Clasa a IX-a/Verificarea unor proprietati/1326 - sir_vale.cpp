#include <iostream>
using namespace std;
int main()
{
  int v,n,i,ok=1;
  cin>>n;
  int a[n+1];
  a[n+1]=-1;
  cin>>a[1];
  for(i=2;i<=n;i++)
    cin>>a[i];
  for(i=2;i<=n;i++)
  if(a[i-1]>a[i] && a[i+1]>a[i])
        v=i;
  for(i=1;i<v;i++)
    if(a[i+1]>=a[i])
    {
    cout<<"NU"; ok=0;
    break;
    }
  if(ok)
    for(i=v;i<n;i++)
      if(a[i]>=a[i+1])
      {
      cout<<"NU"; ok=0;
      break;
      }
  if(ok)
        cout<<"DA";
        return 0;
}
