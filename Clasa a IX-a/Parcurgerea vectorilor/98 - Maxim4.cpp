#include <fstream>
using namespace std;
ifstream fin("maxim4.in");
ofstream fout("maxim4.out");
int main()
{
    int n,a[101],cnt=0,maxim=-1;
    fin>>n;
    for(int i=0;i<n;i++) fin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxim)
        {
            maxim=a[i];
            cnt=1;
        }
        else if(a[i]==maxim) cnt++;
    }
    fout<<maxim<< " "<<cnt;
    return 0;
}
