#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m , a[103][103] , cnt = 0;
    cin >> n >> m;
    for(int i = 0 ; i <= n+1 ; ++i)
        for(int j = 0 ; j <= m+1 ; ++j)
        {
            if(i==0 || j==0 || i==n+1 || j == m+1)
            a[i][j]=2;
            else cin >> a[i][j];
        }
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
        {
            int  ok = 1;
            if(a[i+1][j] % 2 != 0 || a[i][j+1] % 2 != 0 || a[i][j-1] % 2 != 0 || a[i-1][j] % 2 != 0) ok = 0;
            if(ok) cnt++;
        }
    cout << cnt;
    return 0;
}
