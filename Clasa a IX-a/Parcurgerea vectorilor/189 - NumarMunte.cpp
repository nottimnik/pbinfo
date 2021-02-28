#include <bits/stdc++.h>
using namespace std;
int a[15] , n , maxi , nr , i , x , y, j , m , ok , imax;
int main()
{
    cin >> n;
    for(i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        j = 0;
        maxi = 0;
        while(x > 0)
        {
         ++j;
         a[j] = x % 10;
         if(a[j] > maxi) {maxi = a[j]; imax=j;}
         x = x / 10;
        }
        m = 1;
        if(imax == 1 || imax == j)
            cout << "0" << endl;
        else
        {
                while(m < imax)
            {
                if(a[m] < a[m+1]) ok = 1;
                else
                {
                    ok = 0;
                    break;
                }
                ++m;
            }
            if(ok == 0) cout << "0" << endl;
            else
            {
                m = imax;
                while(m >= imax && m < j)
                {
                    if(a[m] > a[m+1])
                    ok = 1;
                else
                {
                    ok = 0;
                    break;
                }
                ++m;
                }
            if(ok == 0) cout << "0" << endl;
            else cout << "1" << endl;
            }
        for(x = 1 ; x <= 15 ; ++x) a[x] = 0;
        }
    }
    return 0;
}
