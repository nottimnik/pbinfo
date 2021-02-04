#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m , a[101][101] , cnt = 0 , cate=0;
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
        for(int j= 0; j < m; ++j)  cin >> a[i][j];
    for(int i = 0 ; i < n ; ++i)
    {
        cnt = 0;
        for(int j= 1; j < m; ++j)
        {
            if(a[i][j]==a[i][0]) cnt++;
        }
        if(cnt == m - 1) cate++;
    }
    cout << cate;
    return 0;
}
