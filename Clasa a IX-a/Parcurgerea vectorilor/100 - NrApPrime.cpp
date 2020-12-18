#include <fstream>
using namespace std;
int prim (int n)
{
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for (int i=3;i*i<=n;i += 2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main ()
{
    ifstream fin ("nrapprime.in");
    ofstream fout ("nrapprime.out");
    int n,x,cate=0;
    fin >> n;
    for (int j=1;j<=n;++j)
    {
        fin >> x;
        if(prim(x)) cate++;
    }
    fout << cate;
    fin.close();
    fout.close();
    return 0;
}
