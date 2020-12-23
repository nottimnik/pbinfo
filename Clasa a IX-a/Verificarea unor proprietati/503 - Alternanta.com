#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for(int i = 1 ; i <= n ; ++i)
    cin >> a[i];
    bool corect=true;
    a[0]=-1;
    for(int i = 1 ; i <= n ; ++i)
    {
        if(a[i]==1 && a[i-1]==1)   
        corect= false;
    }
    if(corect)
    cout << "DA";
    else
    cout << "NU";
    return 0;
}
