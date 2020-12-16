#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("minimdoua.in");
ofstream fout("minimdoua.out");

int main()
{
    int n, j=0 , cnt=0;
    fin >> n;
    int a[201];
    int v[201];
    for (int i = 0 ; i < n; ++i)
    {
        fin >> a[i];
        if (a[i]%10 == (a[i]/10)%10 && a[i]>9)
        {
            v[j]=a[i];
            j++;
            cnt++;
        }
    }
    sort(v,v+cnt);
    if (cnt>=2)
    fout << v[0] << ' ' << v[1];
    else
    fout << "numere insuficiente";
    
    fin.close();
    fout.close();
    
    return 0;
}
