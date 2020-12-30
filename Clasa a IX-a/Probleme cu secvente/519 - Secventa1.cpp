#include <iostream>
using namespace std;
int main()
{
    int a[1000] , b[1000] , n , m , indice=0 ,ok=0;
    
    //declararea vectorilor
    cin >> n;
    for(int i = 0 ; i < n ; ++i)
    cin >> a[i];
    cin >> m;
    for(int i = 0 ; i < m ; ++i)
    cin >> b[i];
    
    //gasirea secventei
    for(int i = 0 ; i <= n-m ; ++i)
    {
        int cnt=0;
        for(int j = i ; j < i + m ; ++j)
        {
            if(a[j]==b[j-i])
            cnt++;
        }
        if(cnt==m && ok==0)
        {
        indice = i+1;
        ok++;
        }
    }
    
    //afisarea rezulatului:
    if(ok==0)
    cout << "NU";
    else
    cout << indice;
}
