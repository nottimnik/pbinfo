#include <bits/stdc++.h>
using namespace std;
ifstream fin("cifre15.in");
ofstream fout("cifre15.out");
int main()
{
    int n;
    fin >> n;
    int d2 = 0, d5 = 0, p = 1 , m , k;
    for(int i = 1 ; i<=n ; ++i)
    {
        fin >> m;
        while(m % 5 == 0)
            m /= 5, d5++;
        while(m % 2 == 0)
            m /= 2, d2++;
        p = p * (m%10) % 10;
    }
    fout << min(d2,d5)<<" ";
    if(d2 > d5)
    {
        k = d2 - d5;
        for(int i=1;i<=k;++i)
            p = (p*2) % 10;
    }
    else if(d5 >= d2)
    {
        k = d5 - d2;
        for(int i=1;i<=k;++i)
            p = (p*5) % 10;
    }
    fout << p;
    fin.close();
    fout.close();
    
    return 0;
}
