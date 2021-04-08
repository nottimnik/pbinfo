#include <iostream>
using namespace std;
int main()
{
    int n , a[501][501] , sc1 = 0 , sc2 = 0 , f[250001] = {0};
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cin >> a[i][j];
            f[a[i][j]]++;
            if(a[i][j] > n * n) {cout << "false";return 0;}
            if(f[a[i][j]] > 1) {cout << "false";return 0;}
            if(i == j) sc1 += a[i][j];
            if(i + j == n + 1) sc2 += a[i][j];
        }
    }
    for(int i = 1 ; i <= n * n ; i++)
        if(f[i] == 0) {cout << "false";return 0;}
    if(sc1 != sc2) cout << "false";
    else
    {
        for(int i = 1 ; i <= n ; i++)
        {
            int s = 0;
            for(int j = 1 ; j <= n ; j++)
                s += a[i][j];
            if(s != sc1)
            {
                cout << "false";
                return 0;
            }
        }
        for(int i = 1 ; i <= n ; i++)
        {
            int s = 0;
            for(int j = 1 ; j <= n ; j++)
                s += a[j][i];
            if(s != sc1)
            {
                cout << "false";
                return 0;
            }
        }
        cout << "true";
    }
    return 0;
}
