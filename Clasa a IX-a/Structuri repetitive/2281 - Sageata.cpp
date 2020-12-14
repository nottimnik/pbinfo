#include <iostream>
using namespace std;

int main ()
{
    int n, s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++) cout<<' ';
        for(int k=1;k<=n;k++) cout<<'*';
        s++;
        cout<<endl;
    }
    s-=2;
    for(int i=1;i<=n-1;i++){
        for(int a=1;a<=s;a++) cout<<' ';
        for(int b=1;b<=n;b++) cout<<'*';
        s--;
        cout<<endl;
    }
    return 0;    
}
