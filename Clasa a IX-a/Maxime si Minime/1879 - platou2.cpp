#include <fstream>
using namespace std;
ifstream fin("platou2.in");
ofstream fout("platou2.out");
int main()
{
    int a[10001], i=1 , lmax = 0 , l = 0 , st = 0 , dr = 0;
    while(fin >> a[i])
        i++;
    for(int j = 1 ; j <= i ; ++j)
    {
        if(a[j] < a[j+1])
        {
            l++;
            if(l > lmax)  {lmax = l ; dr = j ; st = dr - l +1;}
        }
        else l = 0;
    }
    fout<< lmax+1;
    return 0;
}
