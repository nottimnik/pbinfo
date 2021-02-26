#include <fstream>
using namespace std ;
ifstream fin("maxsim.in");
ofstream fout("maxsim.out");
int main()
{
    int n , a[1001] , i1 = 0 , i2 = 0 , maxi = -1 ;
    fin >> n;
    for(int i = 1 ; i <= n ; ++i)fin >> a[i];
    for(int i = 1 ; i <= n / 2; ++i)
    {
        if(a[i] + a[n - i + 1] > maxi)
        {
            maxi = a[i] + a[n - i + 1];
            i1 = i;
            i2 = n - i + 1;
        }
    }
    fout << maxi << " " << i1 << " " << i2;
    return 0;
}
