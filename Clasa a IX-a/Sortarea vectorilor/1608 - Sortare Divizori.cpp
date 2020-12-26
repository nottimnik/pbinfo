#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int cnt(int n)
{
    int cnt=1;
    int d=2;
    int p=0;
    while(n>1)
    {
        p=0;
        while(n%d==0)
            n/=d , p++;
        if(p>0)
        cnt*=(p+1);
        d++;
        if(d*d>n)
            d=n;
    }
    return cnt;
}

struct paulchen
{
    long long int val, cnt;
}a[1001];

bool comp (paulchen A, paulchen B)
{
    if (A.cnt < B.cnt)return true;
    else if (A.cnt == B.cnt && A.val > B.val)return true;
    else return false;
}

int main()
{
    int n;
    fin >> n;
    for(int i = 0 ; i < n ; ++i)
    {
        fin >> a[i].val;
        a[i].cnt = cnt(a[i].val);
    }
    
    sort(a, a + n, comp);
    
    for(int i = n-1 ; i >= 0 ; --i)
    fout << a[i].val << ' ';
    
    fin.close();
    fout.close();
    
    return 0;    
}
