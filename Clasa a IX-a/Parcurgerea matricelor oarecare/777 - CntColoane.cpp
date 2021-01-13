#include <iostream>
using namespace std;
int n , a[101][101];
int sort(int col)
{
    for(int i = 0 ; i < n ; ++i)
        for(int j= i+1; j < n; ++j)
        {
            if(a[i][col] > a[j][col])
            {
                int aux = a[i][col];
                a[i][col] = a[j][col];
                a[j][col] = aux;
            }
        }
}
int main()
{
    int m , cnt = 0 , cate=0;
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
        for(int j= 0; j < m; ++j)  cin >> a[i][j];
    for(int j = 0 ; j < m ; ++j)
    {
        sort(j);
        int ok = 1;
        for(int i = 0; i < n; ++i)
        {
            if (a[i][j] == a[i-1][j]) ok = 0;
        }
        if(ok) cate++;
    }
    cout << cate;
    return 0;
}
