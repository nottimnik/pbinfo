#include <bits/stdc++.h>
using namespace std;
ifstream fin("chenar.in");
ofstream fout("chenar.out");
int main()
{
    int n , m , a[50][50];
    fin >> n;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++) fin >> a[i][j];
    for(int j = 1 ; j <= n ; j++)
    {
        fout << a[1][j] << " ";
    }
    for(int i = 2 ; i <= n ; ++i)
    {
        fout << a[i][n] << " ";
    }
    for(int j = n-1 ; j >= 1 ;--j)
    {
        fout << a[n][j] << " ";
    }
    for(int i = n-1 ; i >= 2 ; --i)
    {
        fout << a[i][1] << " ";
    }
}
