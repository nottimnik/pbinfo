#include <fstream>
using namespace std;
ifstream istr ("numere18.in");
ofstream ostr ("numere18.out");
int main ()
{
    int n,m,c;
    istr >> c;
    int x=1;
    if (c == 1)
    {
        istr >> n;
        int s=0, a = n * (n - 1)/2 , b = n * (n + 1)/2;
        for (int i = a + 1; i <= b ; ++i)
            s=s+i;
        ostr << s;
        
    }
        
    if (c == 2)
    {
        istr >> m;
        int k=1;
        while (k * (k + 1)/2 < m) k++;
        k--;
        ostr << k+1<< ' ' << m - k* (k+1)/2;
    }
    istr.close ();
    ostr.close ();
    return 0;
}
