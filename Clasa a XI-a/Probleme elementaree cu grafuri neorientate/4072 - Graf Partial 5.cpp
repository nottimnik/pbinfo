#include <bits/stdc++.h>

using namespace std;
ifstream fin("graf_partial_5.in");
ofstream fout("graf_partial_5.out");

int n, m, k, a[101][101];

int main()
{
    int x, y, i, j;
    fin>>n>>k;
    while(fin>>x>>y)
    {
        if(!a[x][y] && !a[y][x])
        {
            a[x][y]=a[y][x]=1;
            a[x][0]++;
            a[y][0]++;
        }
    }
    for(i=1; i<=n; ++i)
        for(j=1; j<=n; ++j)
            if(a[i][j])
                if(a[i][0]>=k && a[j][0]>=k)
                    a[i][j]=0;
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=n; ++j)
            fout<<a[i][j]<<" ";
        fout<<'\n';
    }
    return 0;
}
