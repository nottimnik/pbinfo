#include <bits/stdc++.h>
using namespace std;

ifstream fin("memory001.in");
ofstream fout("memory001.out");

#define MAX 2000000000001

int main()
{
    long long n , m , v[1001] = {0} , x , ind = 0 , mini = MAX;
    fin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            fin >> x;
            v[j]+=x;
        }
    }
    for(int i = 0 ; i < m ; ++i)
    {
        if(v[i]<mini)
            {mini=v[i];ind = i;}
    }
    fout << ind + 1;
    return 0;
}
