#include <fstream>
using namespace std;

ifstream fin("sumsec.in");
ofstream fout("sumsec.out");

int prim(int n) {
    int cnt=1;
    int d=2;
    while(n>1)
    {
        int p = 0;
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        if(p>0)
            cnt*=(p+1);
        d++;
        if(d*d>n)
            d=n;
    }
    if(cnt==2)
    return 1;
    else
    return 0;
}

int main() {
    int n;
    fin >> n;
    long long int a[1000];
    int cnt=0;
    long long int p = 0 , u = 0 , s = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        fin >> a[i];
        if(prim(a[i]) && cnt==0)
        {
        p=i;
        cnt++;
        }
        if(prim(a[i]))
        u=i;
    }
    for(int i = p ; i <= u ; ++i)
    {
        s+=a[i];    
    }
    fout << s;
    
    fin.close();
    fout.close();
    
    return 0;
}
